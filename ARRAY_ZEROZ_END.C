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

 int index=0;
 //coping the index of the array into this
 for(int i=0;i<n;i++){
    if(a[i]!=0){
        a[index]=a[i];
        index++;
        //coping the non zero element 
    }
}
//filling rest of the indexes with zero
while (index<n){
    a[index]=0;
    index++;
}
//display array
printf("array after moving all the zeros to end\n");
 for(int i=0;i<n;i++){
    printf("the array is: %d\n",a[i]);
 }
 return 0;
}