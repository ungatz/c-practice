#include <stdio.h>
int main()
{
    int n;
    int rem=0;
    int rev=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Reversed number is %d\n",rev);
    return 0;
}
