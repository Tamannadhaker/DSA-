#include <stdio.h>
#include <stdlib.h> 
struct btnode{ 
  int value;  
  struct btnode *l;  
  struct btnode *r;
}*root = NULL, *temp = NULL,*t2, *t1;
void delete1();
void insert();
void delete();
void inorder(struct btnode *t);
void create();
void search(struct btnode *t);
void preorder(struct btnode *t);
void postorder(struct btnode *t);
void search1(struct btnode *t,int data);   
void smallest(struct btnode *t);
void largest(struct btnode *t);

