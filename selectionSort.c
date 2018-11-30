#include<stdio.h>
void swap(int *xp,int *yp){
    int temp;
    temp=*xp;
    *xp=*yp;
    *yp=temp;
}
void selectionSort(int array[],int n)
{
    int i;
    int j;
    int minIndex;
    for(i=0;i<n-1;i++){
        minIndex=i;
        for(j=j+1;j<n;j++)
            if(array[minIndex]>array[j])
                minIndex=j;
        swap(&array[minIndex],&array[i]);
    }
}
void printArray(int array[],int size){
    int i;
    for(i=0;i<size;i++)
        printf("%d ",array[i]);
    printf("\n");
}
int main(){
    int array[]={34,22,45,78,32};
    int n=sizeof(array)/sizeof(array[0]);
    selectionSort(array,n);
    printf("Sorted Array: \n");
    printArray(array,n);
    return 0;
}


