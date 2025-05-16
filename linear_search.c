#include<stdio.h>
int main(){
    int i,n,a[10],key,flag=0;
    printf("enter number of array elements:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("enter key to search");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(key==a[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("element %d found at %d position",key,i);
    }
    else{
        printf("element %d not found",key);
    }
    return 0;
}
