#include <stdio.h>
int main() 
{   
int elementsArray[100], searchValue, c, totalElements;     
printf("Enter the total number of elements you are going to store n");   
scanf("%d", &totalElements);    
printf("Enter %d integer values one by one", totalElements);    
for(c = 0 ;c < totalElements; c++)    
{ scanf("%d", &elementsArray[c]); 
}            
printf("Enter a value to search in the array ");    
scanf("%d", &searchValue); 
 for(c = 0; c < totalElements; c++) 
 {      
 if(elementsArray[c] == searchValue) 
 {         
 printf("%d is present at location %d.", searchValue, c+1);         
 break;     
 }   
 }     
 if(c == totalElements)   
 {       
 printf("%d is not available in the entered numbers", searchValue);  
 }      
 return 0;
 }
