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
//LARGEST NUMBER
int l,sl,tl,p1,p2,p3,pdt;
l=a[0];
p1=0;
for(int i=1;i<n;i++){
    if(a[i]>l){
        l=a[i];
        p1=i+1;
    }
}
printf("largest element is %d and is at position %d\n",l,p1);
// SECOND LARGEST NUMBER
    sl = -7e6; // initialize with a uncommon number
p2=0;
for(int i=0;i<n;i++){
    if(a[i]!=l){
        if (a[i]>sl){
        sl=a[i];
        p2=i+1;
    }
}
}
printf("second largest element is %d and is at position %d\n",sl,p2);
tl=-8e3;
p3=0;
for(int i=0;i<n;i++){
    if(a[i]!=l){
          if(a[i]!=sl){
            if (a[i]>tl){
        tl=a[i];
        p3=i+1;
            }
        }
    }
}
printf("third largest element is %d and is at position %d\n",tl,p3);
printf("the numbers are:%d %d %d\n",l ,sl ,tl);
pdt=l*sl*tl;
printf("maximum product of the triplet is:%d",pdt);
return 0;
}
