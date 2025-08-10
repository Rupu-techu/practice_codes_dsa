#include<stdio.h>
int main(){
    //size of array
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    //elements in array
    int a[n],len,count=0,maxcount=0;
    for(int i=0;i<n;i++){
    printf("enter the elements in array at position %d:\n",i);
    scanf("%d",&a[i]);
}
//display array
 for(int i=0;i<n;i++){
    printf("the array is: %d\n",a[i]);
 }
len=sizeof(a)/sizeof(a[0]);//len denotes elements in the array
    for(int i=0;i<len;i++){
        if(a[i]==1){
            count++;
            if(count>maxcount){
                maxcount=count;
            }
        }
            else{
                count=0;
            }

            }

        
        printf("the maximum consecutive 1 is:%d",maxcount);
        return 0;
    }