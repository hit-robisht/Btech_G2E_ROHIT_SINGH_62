#include<stdio.h>
int main(){
    int n,a[100],b[100],c[100],i;
    printf("Enter the no. of element in the array: \n");
    scanf("%d",&n);
    printf("enter the first array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter the second array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    printf("enter the third array: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        c[i]=a[i]+b[i];
        printf("%d", c[i]);
    }
    return 0;
}
