#include<stdio.h>
#include<string.h>
struct student{
char name[100];
int roll;
float cgpa;
};
int main()
{
struct student s1;
strcpy(s1.name,"shraddha");
s1.roll = 2345;
s1.cgpa = 4.5;
printf("student name = %s\n",s1.name);
printf("student roll = %d\n",s1.roll);
printf("student cpga = %f\n",s1.cgpa);

struct student s2;
strcpy(s2.name,"ayushi");
s2.roll = 2346;
s2.cgpa = 6.7;
printf("student name = %s\n",s2.name);
printf("student roll = %d\n",s2.roll);
printf("student cpga = %f\n",s2.cgpa);

struct student s3;
strcpy(s3.name,"neha");
s3.roll = 2347;
s3.cgpa = 4.6;
printf("student name = %s\n",s3.name);
printf("student roll = %d\n",s3.roll);
printf("student cpga = %f\n",s3.cgpa);
return 0;
}

