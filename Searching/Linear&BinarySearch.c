// Binary & Linear Search
#include<stdio.h>
#include<stdlib.h>
// Linear Search function
void linearSearch(int* a,int s,int n){
    int i;
    for(i=0;i<n;i++){
        if(s==a[i]){
            printf("Element %d is present in %d index or %d position",s,i,i+1);
            break;
        }
    }
    if(!(i<n))
    printf("Element is absent.\n");
    
}
// Binary Search function
void BinarySearch(int* a,int s,int n){
    int lb=0,ub=n-1,mid;
    while(lb<=ub){
        mid=(ub+lb)/2;
        if(a[mid]==s){
            printf("Element %d is present in %d index or %d position",s,mid,mid+1);
            break;
        }
        else if(a[mid]<s){
            ub=mid-1;
        }
        else if(a[mid]>s){
            lb=mid+1;
        }
    }
    if(lb>ub)
    printf("Element is absent.\n");
}
// Main Function
int main(){
    //Your code goes here
    int n,i,s,ch;
    int* a;
    printf("Enter the number of element you want -  ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter the elements  -  \n");
    for( i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element you want to find -  ");
    scanf("%d",&s);
    printf("Which search you want to use \nFor Linear press 1 for Binary press 2....");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        linearSearch(a,s,n);
        break;
        case 2:
        BinarySearch(a,s,n);
        break;
        default:
        printf("Thanks for visiting -  ");
    }
    return 0;
}