#include<stdio.h>
int main()
{
	static int i;
	signed char ch1[i];
	signed int a1;
	signed short b1;
	unsigned char ch2[i];
	unsigned int a2;
	unsigned short b2;

	printf("%d",sizeof(a1));

}