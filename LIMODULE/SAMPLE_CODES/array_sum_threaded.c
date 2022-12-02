/* FILE: array_sum_threaded.c 
 * Description: 
 */

#include <stdio.h>
#include <stdint.h>
#include <pthread.h>

#define SIZE (1000 * 1000 * 800)
/* Struct to be passed to thread function*/
typedef struct
{
    int *arr_start; //Chunk's base address
    int size; //Chunk size
    int64_t part_sum; //Partial sum
} array_data_t;


void init_array(int *arr, int size)
{
    int i;

    for (i = 0; i < size; i++)
	arr[i] = i + 1;
}

/* Thread function to find the sum of array chunk */
void * find_part_sum(void *param)
{
    array_data_t *info = param;
    int i;

    info->part_sum = 0;

    //Find the sum
    for (i = 0; i < info->size; i++)
    {
	info->part_sum += info->arr_start[i];
    }

    return NULL;
}

int main()
{
    //int arr[SIZE];
    int * arr = malloc(SIZE * sizeof(int));
    if (arr == NULL)
    {
	puts("malloc failed");
	exit(1);
    }
    int i, chunk_size, max_threads = 1;
    int *ptr;
    pthread_t tid[max_threads];
    array_data_t data[max_threads]; //Thread data (Chunk info)
    int64_t total = 0;

    //Initialize array with 1 to SIZE
    init_array(arr, SIZE);

    chunk_size = SIZE / max_threads;

    //Create threads and pass array data
    for (i = 0; i < max_threads; i++)
    {
	// Fill struct data
	data[i].arr_start = arr + (i * chunk_size);
	data[i].size = chunk_size;

	//Assign left over elements to last thread
	if (i == (max_threads - 1))
	    data[i].size += (SIZE % max_threads);

	// Create thread
	pthread_create(&tid[i], NULL, find_part_sum, &data[i]);
    }

    //Wait for threads to complete
    for (i = 0; i < max_threads; i++)
    {
	pthread_join(tid[i], NULL);
	//Add all partial sums
	total += data[i].part_sum;
    }

    printf("Sum of array = %lld\n", total);
    
    return 0;
}
