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
 for(int i=0;i<n;i++){
    printf("the array is: %d\n",a[i]);
 }
 //searching the value
 int key,f,p;
 printf("enter the value to search:\n");
 scanf("%d",&key);
 for(int i=0;i<n;i++){
    if(key==a[i]){
        f=1;
        p=i+1;
        break;
    }
}
if(f==1){
    printf("the required value you were searching is:%d is found at %d",key,p);
    }
    else{
        printf("\nvalue is not found");
    }

return 0;
}



 

