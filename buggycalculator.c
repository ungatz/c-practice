#include<stdio.h>
int gon(int x, int y)
//gon= greatest of nos.
//if we had use x and y in declaration then dont use different variables.
{
    if(x>y)
    	return x;
    else
    	return y;
}
int nod(int a)
//nod= no. of digits
{
	int i;
	while(a!=0)
	{
		a/=10;
		i++;
	}
	return i;
}

int main()
{
    int num,f=0;
    //printf("Enter a no.");
    scanf("%d",&num);
    int ar[300];
    while(num--)
    {
        int a,b,sum=0,k,m,temp=0,mul=1,i=0,j=0,l;
        //printf("Enter Value of a \n");
	scanf("%d",&a);
        //printf("Enter value of b \n");
        scanf("%d",&b);
        //printf("\n");
        //used function instead of writing again
        /*k=a;
        m=b;
        while(k!=0)
        {
            k/=10;
            i++;
        }

        while(m!=0)
        {
            m/=10;
            j++;
        }*/

        	i=nod(a);
        	j=nod(b);
		l=gon(i,j);
		//printf("\n%d\n",l);

        k=a;
        m=b;
        while(l--)
        {
            temp=(k%10+m%10)%10;
		//printf("%d",temp);
            sum+=temp*mul;
        	//printf("\t%d\n",sum);
            mul=mul*10;
            k/=10;
            m/=10;
        }
        printf("%d\n",sum);
        /*ar[f]=sum;
        f++;*/
    }
    //printf("%d ",ar[f]);
    return 0;
}
