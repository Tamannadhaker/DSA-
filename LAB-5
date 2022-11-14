#include <stdio.h>
#define SIZE 10struct Node
{  
int data;  
int next;
};
typedef int PtrNode;
typedef PtrNode POS;
typedef PtrNode LIST;
struct Node cursor[SIZE];
void InitCursor();
POS CursorAllocation();
void FreeCursor(int);
void Insert(int,int);
int IsLast(int);
POS Find(int, LIST);
POS FindPrevious(int, LIST);
void Delete(int, LIST);
void MakeEmpty(LIST);
void Display();
int main(){ 
LIST LI=-1;   
POS PO;  
int choice,position,dat,ch;  
printf("Enter 1 to continue");  
scanf("%d", &ch);
 while(ch==1)  
 {      
 printf("1.Create2.Insert3.Delete4.MakeEmpty5.Display6.Find7.Exit");      
 printf("Enter your choice:");     
 scanf("%d", &choice);          
 switch(choice)    
 {        
 case 1:     
 if(LI == -1)
 {           
 InitCursor();     
 LI = CursorAllocation();     
 printf("List created successfully");
   }    
   else   
   {       
   printf("List is already created"); 
   }       
   break;  
   case 2:  
   if(LI == -1)          
   {       
   printf("List is not Initialized");    
   }     
   else
   {
    printf("Enter the position you want to insert?");     
    scanf("%d", &position);     
    printf("Enter the data to insert");     
    scanf("%d", &dat);            
    Insert(dat, position);
    }         
    break;   
    case 3:   
    if(LI == -1)   
    {              
    printf("List is not Initialized");        
    }           
    else      
    {         
    printf("Which data you want to delete?");                
    scanf("%d", &dat);    
    Delete(dat, LI); 
    }            
    break;       
    case 4:
    if(LI == -1)        
    {             
    printf("List is not Initialized"); 
    }            
    else           
    {              
    MakeEmpty(LI); 
    }     
    break; 
    case 5:     
    if(LI == -1)  
    {            
    printf("List is not Initialized");
     }        
     else       
     {          
     Display(); 
     }          
     break;     
     case 6:    
     if(LI == -1)     
     {                
     printf("List is not Initialized");    
     }         
     else       
     {           
     printf("Which data you want to search?");         
     scanf("%d", &dat);      
     PO = Find(dat, LI);      
     printf("The data is at %d", PO);
      }        
      break;   
      default:  
      printf("***************ENTERED WRONG CHIOCE******************");   
      break;  
      }     
      printf("Enter 1 to continue");  
      scanf("%d", &ch);   
      } 
      return 0;
      }
      void InitCursor()
      {  
      int i; 
      for(i = 0; i <= SIZE; i++)
      {      
      cursor[i].next = i+1;  
      cursor[i].data = 0;    
      }    
      cursor[SIZE-1].next = -1;
      }
      POS CursorAllocation()
      { 
      POS PO;   
      PO = cursor[0].next;  
      cursor[0].next = cursor[PO].next; 
      cursor[PO].data = -1;   
      cursor[PO].next = -1;  
      return PO;
      }
      void FreeCursor(POS PO)
      { 
      cursor[PO].next = cursor[0].next;   
      cursor[0].next = PO;  
      cursor[PO].data = 0;
      }
      void Insert(int dat, POS PO)
      {  
      POS temp; 
      temp = CursorAllocation();   
      if(temp == -1)  
      {
      printf("List is Full"); 
      } 
      else if(cursor[PO].data == 0) 
      {      
      printf("Given Position is not in the list");  
      }  
      else  
      {    
      cursor[temp].data = dat;   
      cursor[temp].next = cursor[PO].next;  
      cursor[PO].next = temp;  
      }
      }int IsLast(POS PO)
      {  
      return cursor[PO].next == -1;
      }
      int IsEmpty(LIST LI)
      {  
      return cursor[LI].next == -1;
      }
      POS Find(int dat, LIST LI)
      {
      POS temp;   
      temp = cursor[LI].next;  
      while(temp != -1 && cursor[temp].data != dat)
      {       
      temp = cursor[temp].next;  
      }     
      return temp;
      } 
              printf("List is Full"); 
              }   
              else if(cursor[PO].data == 0) 
              {    
              printf("Given Position is not in the list"); 
              }   
              else  
              {      
              cursor[temp].data = dat;  
              cursor[temp].next = cursor[PO].next;  
              cursor[PO].next = temp;  
              }
              }
              int IsLast(POS PO)
              {    
              return cursor[PO].next == -1;
              }
              int IsEmpty(LIST LI)
              { 
              return cursor[LI].next == -1;
              }
              POS Find(int dat, LIST LI) 
              { 
              POS temp;  
              temp = cursor[LI].next; 
              while(temp != -1 && cursor[temp].data != dat)
              {      
              temp = cursor[temp].next;
              }   
              return temp;}POS FindPrevious(int dat, LIST LI)
              {   
              POS temp; 
              temp = LI;   
              while(temp != -1 && cursor[cursor[temp].next].data != dat)   
              {     
              temp = cursor[temp].next;  
              }     
              return temp;
              }
              void Delete(int dat, LIST LI)
              {
               POS PO, temp;
               PO = FindPrevious(dat, LI);  
               if(!IsLast(PO))  
               {   
               temp = cursor[PO].next;   
               cursor[PO].next = cursor[temp].next;  
               FreeCursor(temp); 
               }
               }
               void MakeEmpty(LIST LI)
               {   
               while(!IsEmpty(LI))  
               {      
               Delete(cursor[cursor[LI].next].data,LI);
               }
               }
               void Display()
               { 
               int i;  
               for(i = 0; i <= SIZE; i++)
               {     
               printf("%d%d%d", i, cursor[i].data, cursor[i].next); 
               }
               }


