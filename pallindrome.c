#include <stdio.h>
int main(){
    char arr[1000];
    int begin;
    printf("Enter the string ");
    gets(arr);
    int count=0;
    while (arr[count] != '\0'){
        count++;
    }

    int end=count-1;
    int middle=count/2;

    for (begin = 0; begin < middle ; ++begin) {
        if (arr[begin] != arr[end])
        {
            printf("Not a pallindrome\n");
            break;
        }
        end--;
    }
    if(begin==middle)
        printf("Its a pallindrome\n");

    return 0;
}