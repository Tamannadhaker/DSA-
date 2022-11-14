#include <stdio.h>
int main(){ 
int count, temp, i, j, number[30];
  printf("How many numbers are you going to enter?: "); 
  scanf("%d",&count);  
  printf("Enter %d numbers: ",count);  
  for(i=0;i<count;i++) 
  scanf("%d",&number[i]);      
  for(i=1;i<count;i++)  
  {
temp=number[i];  
j=i-1;     
while(temp<number[j] && j>=0){  
number[j+1]=number[j];   
j=j-1;   
}        
number[j+1]=temp;  
}  
printf("Sorted elements: ");  
for(i=0;i<count;i++)  
printf(" %d",number[i]); 
return 0;
}
