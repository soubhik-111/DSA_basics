#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void printArray(int *a, int n)
{
    for (int i = 0; i < n; i++)
        printf("%d  ", a[i]);
    printf("\n");
}
int maximum(int A[],int n){
    int max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(A[i]>max)
        max=A[i];
    }
    return max;
}
void countSort(int *A,int n){
    int i,j;
    int max = maximum(A,n);
    int *count=(int *)malloc((max+1)*sizeof(int));

    for ( i = 0; i < max+1; i++)
        count[i]=0;
    for ( i = 0; i < n; i++)
        count[A[i]]+=1;

    i=j=0;

    while(i<=max){
        if(count[i]>0){
            A[j]=i;
            count[i] -= 1;
            j++;
        }
        else{
            i++;
        }
    }


}
int main()
{
    int n;
    printf("Enter the number of element you want -\t");
    scanf("%d", &n);
    int *a = (int *)malloc(n*sizeof(int));
    printf("Enter the elements - \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    countSort(a, n);
    printArray(a, n);
    return 0;
}