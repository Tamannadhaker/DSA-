#include <stdio.h>
int main()
{ 
int array[100], position, c, n, value;  
printf("Enter number of elements in array"); 
scanf("%d", &n);   
printf("Enter %d elements", n);   
for (c = 0; c < n; c++)  
scanf("%d", &array[c]);  
printf("Enter the location to insert an element");  
scanf("%d", &position);
 printf("Enter the number to insert");  
 scanf("%d", &value);  
 for (c = n - 1; c >= position - 1; c--)  
 array[c+1] = array[c];  
 array[position-1] = value;
  printf("After Insertion the array output is"); 
  for (c = 0; c <= n; c++)    
  printf("%d", array[c]);   
  return 0;
  }
