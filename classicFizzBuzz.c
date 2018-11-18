//Write a program that prints the numbers
//from 1 to n . But for multiples of three
//prints 'fizz' and for multiples of five
//prints 'buzz'  . For numbers which are multiples of both
// 3 and 5 it prints 'fizzbuzz'

#include <stdio.h>
void fizzbizz(int n);
int main()
{
    int n ;
    printf("Enter the number N = ");
    scanf("%d",&n);
    fizzbizz(n);
    return 0;
}

void fizzbizz(int n)
{
    for(int i=1 ; i<n ; i++)
    {
        if(i%3==0)
            printf("fizz\n");
        else if (i%5==0)
            printf("buzz\n");
        else if (i%3==0 && i%5==0)
            printf("fizzbuzz\n");
        else
            printf("%d\n",i);

    }
}