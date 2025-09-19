#include<stdio.h>

int main(){
    printf("Akash Kumar Singh\n");
    printf("Roll No. - 2400320100119\n");
    printf("CSE 12\n");
    int arr[100],i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
   printf("The elements of array are::");
   for(i=0;i<n;i++){
    printf("%d ",arr[i]);
   }
   return 0;
}