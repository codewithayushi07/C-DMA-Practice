#include<stdio.h>
#include<string.h>
struct student{
char name[100];
int rollno;
float cgpa;
};
int main()
{
struct student s1;
strcpy(s1.name, "ayushi"); 
s1.rollno = 25;
s1.cgpa = 4.5;
printf("student name = %s\n", s1.name);
printf("student roll no = %d\n", s1.rollno);
printf("student cgpa = %f\n", s1.cgpa);
return 0;
}
