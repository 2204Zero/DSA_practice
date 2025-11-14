#include<stdio.h>

int main(){
    int a[10],n,p=-1,k,m;

    printf("Enter the size of array\n");
    scanf("%d",&n);

    printf("Enter elements in the array\n");
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the element you want to search\n");
    scanf("%d",&k);

    for (int i = 0 ; i<n; i++){
        if (a[i]==k){
            p++;
            m = i;     
           }
    }
    if (p>=0){
        printf("Element found \n");
        printf("Index of element is %d",m+1);
    }else{
        printf("Element not found\n"); 
    }

    return 0;
}
