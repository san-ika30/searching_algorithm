#include<stdio.h>
int main(){
  int a[10],key,n,i,passes=0,found=0;
  int low=0;
  int high;
  int mid;
  printf("enter number of array elements:");
  scanf("%d",&n);
  printf("enter array elements:");
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("enter key to search");
  scanf("%d",&key);
  high=n-1;
  while(low<=high){
    passes++;
    mid=(low+high)/2;
    if(key==a[mid]){
        printf("element found at %d position\n",mid);
        found=1;
        printf("number of passes:%d",passes);
        break;
    }
    else if(key<a[mid]){
        high=mid-1;
    }
    else{
        low=mid+1;
    }

  }
  if(!found){
    printf("element not found");
  }
  return 0;
}
