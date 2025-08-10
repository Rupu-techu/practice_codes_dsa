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
    // element in array
    int num,pos;
    printf("enter the number to delete:\n");
    scanf("%d",&num);
    printf("enter the position to delete:\n");
    scanf("%d",&pos);
    //checking position validity
    if(pos>n+1 || pos<=0){
        printf("invalid position\n");
        
    }
    else{
        for(int i=pos-1;i<=n;i++){
        a[i]=a[i+1];
    }
    n--;
    //printing the new array
    for(int i=0;i<n;i++){
    printf("the array is :%d\n",a[i]);
    }
}


    

    return 0;
}
