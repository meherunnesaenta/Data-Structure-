#include<stdio.h>
int main(){

   int i, j, k, temp, n[100];
   printf("size of array element: ");
   scanf("%d",&k);
   printf("Enter %d elements: ", k);
   for(i=0;i<k;i++)
      scanf("%d",&n[i]);
   for(i=1;i<k;i++){
      temp=n[i];
      j=i-1;
      while((temp<n[j])&&(j>=0)){
         n[j+1]=n[j];
         j=j-1;
      }
      n[j+1]=temp;
   }
   printf("Sorted elements: ");
   for(i=0;i<k;i++)
      printf(" %d",n[i]);
   return 0;
}
