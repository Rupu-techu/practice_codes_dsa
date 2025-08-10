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
//Checking underfliow and over flow condition and traversal
int index;
   printf("Enter an index to access (to test overflow/underflow):\n");
   scanf("%d", &index);
   if (index < 0) {
       printf("Underflow: Index %d is less than 0\n", index);
   } else if (index >= n) {
       printf("Overflow: Index %d is beyond array size %d\n", index, n);
   } else {
       printf("Access successful: a[%d] = %d\n", index, a[index]);
   }
    //inserting element in array
    int num,pos;
    printf("enter the number to insert:\n");
    scanf("%d",&num);
    printf("enter the position to insert:\n");
    scanf("%d",&pos);
    //checking position validity
    if(pos>n+1 || pos<=0){
        printf("invalid position\n");
        
    }
    else{
        for(int i=n-1;i>=pos-1;i--){
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    //printing the new array
    for(int i=0;i<n;i++){
    printf("the array is :%d\n",a[i]);

}
    }

    return 0;
}