#include<stdio.h>
int main(){
    //size of array
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    //elements in array
    int a[n];
    for(int i=0;i<n;i++){
    printf("enter the elements in array at position %d:\n",i);
    scanf("%d",&a[i]);
}
//display array
printf("the array is:\n");
 for(int i=0;i<n;i++){
    printf(" %d\n",a[i]);
 }
 //REMOVAL OF DUPLICATE NUMBERS
 printf("array after removal of duplicate value\n");
 for(int i=0;i<n;i++){
    if(i==0 || a[i]!=a[i-1]){
        printf("%d\n",a[i]);
    }
 }
 return 0;
}