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
 //checks the n1st elements of the narray with the respective element after that
 for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            int alreadyprinted=0;
            //This loop checks whether a[i] was already seen before position i
            //  it checks every time it finds a duplicate again the loop breaks thus printing only once.
             for(int k=0;k<i;k++){
                if(a[k]==a[i]){
                    alreadyprinted=1;
                    break;

                }
                

        }
        //prints the 1st loop value i.e i and j
        if(alreadyprinted!=1){
            printf("the duplicate value is:%d\n",a[i]);

        }
        //cheking a[i] stop
        break;
    }
 }
}
return 0;
}