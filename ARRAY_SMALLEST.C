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
//SMALLEST BNUMBER
int smal,secsmal;
smal=a[0];
for(int i=0;i<n;i++){
    if(a[i]<smal){
        smal=a[i];
    }
}
printf("smallest element is %d \n",smal);

return 0;
}
