#include <stdio.h>struct student{
char id[10];  
char studentname[30]; 
char subjectname[30]; 
float mark;};int main()
{
struct student student1 = {"STU0001", "Anand", "Data structure", 80.5f};  
struct student *ptrstudent1;     
ptrstudent1 = &student1;    
printf("Student Id: %s", ptrstudent1->id);  
printf("Student Name: %s", ptrstudent1->studentname);  
printf("Subject Name: %s", ptrstudent1->subjectname);  
printf("Subject Mark: %f", ptrstudent1->mark);  
return 0;
}
