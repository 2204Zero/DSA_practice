#include <stdio.h>
int main (){
    int a[10],n,k;
    print("Enter the size of an array\n");
    scanf("%d",&n);

    printf("Enter the element in array\n");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    print("Enterthe key element \n");
    scanf("%d",&k);

    for (int i = 0; i<n; i++){
        if(a[i]==k){
            printf("%d key element found\n",k);
            print("%d",&a[i]);
            print("%d",i);
        }
        else{
            ("In this position key element is not found try another position\n");
        }
    }
    printf("element not found\n");
    return 0;
}