void main(void)
{
	unsigned char *latb = (unsigned char *) 0x0F8A;
	unsigned char *trisb = (unsigned char *) 0x0F93;

	*trisb = 0x00;

	*latb = 0x55;
}
