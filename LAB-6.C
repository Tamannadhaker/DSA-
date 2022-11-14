#include <stdio.h>
#include <stdlib.h>struct node{ 
struct node *prev; 
struct node *next;  
int data;
};
struct node *head;
void insertion_beginning();
void insertion_last();
void insertion_specified();
void deletion_beginning();
void deletion_last();
void deletion_specified();
void display();
void search();void main(){  
int choice = 0;  
while(choice != 9) 
{        
printf("\n**********Main Menu**********\n");  
printf("\nChoose one option in following list\n");    
printf("\n======================================\n");   
printf("\n1.Insert in beginning\n2.Insert at last\n3.Insert at any random location\n4.
Delete from Beginning\n5.Delete from last\n6.Delete the node after the given data\n7.Search\n8.Show\n9.Exit");    
printf("\nEnter your choice?\n");   
scanf("\n%d",&choice);  
switch(choice)     
{        
case 1:   
insertion_beginning();
break;     
case 2:        
insertion_last(); 
break;       
case 3:          
insertion_specified();    
break;       
case 4:       
deletion_beginning();            
break;      
case 5:      
deletion_last();          
break;       
case 6:       
deletion_specified();   
break;          
case 7:            
search();          
break;
case 8:   
display();  
break;    
case 9:     
exit(0);    
break;       
default:     
printf("Please enter the valid choice.."); 
}  
}
}
void insertion_beginning(){   
struct node *ptr;
int item;  
ptr = (struct node*)malloc(sizeof(struct node));   
printf("\nEnter Item value : "); 
scanf("%d",&item);    
if(head == NULL)  
{      
ptr->next = NULL;  
ptr->prev = NULL; 
ptr->data = item;  
head=ptr;   
}    
else

        ptr -> next = temp -> next;      
        temp -> next -> prev = ptr;   
        free(temp);     
        printf("\nnode deleted\n"); 
        }   
        }
        void display(){ 
        struct node *ptr;
        printf("\nPrinting the values..\n");  
        ptr = head;   
        while(ptr != NULL) 
        {  
        printf("%d\n", ptr -> data);      
        ptr=ptr->next;   
        }
        }
        void search() 
        {    
        struct node *ptr;    
        int item,i=0,flag; 
        ptr = head;     
        if(ptr == NULL)   
        {      
        printf("\nEmpty List\n"); 
        }      
        else   
        {      
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);
        while (ptr!=NULL)     
        {             
        if(ptr->data == item)     
        {              
        printf("\nitem found at location %d ",i+1);  
        flag=0;          
        break;            
        }          
        else
        {        
        flag=1; 
        }     
        i++;      
        ptr = ptr -> next;   
        } 
        if(flag==1)  
        {    
        printf("\nItem not found\n");  
        }    
        }
        }
