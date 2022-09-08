/*
 * NAME       :
 * DATE       :
 * DESCRIPTION:
 * INPUT      :
 * OUTPUT     :
 * */



OBJ:= $(patsubst %.c, %.o, $(wildcard *.c))
Slist.exe: $(OBJ)
	gcc -o $@ $^  
clean:
	rm *.o *.exe










