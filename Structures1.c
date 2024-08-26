#include<stdio.h>
#include<string.h>

//user defined, we made a structure
struct student {
int roll;
float cgpa;
char name[100];
};

int main () {
struct student s1;   //now we are initialising it 
s1.roll = 79382;
s1.cgpa = 6.9;
strcpy(s1.name, "Dev");

struct student s2;   
s2.roll = 79352;
s2.cgpa = 8.9;
strcpy(s2.name, "Rahul");

printf("Student name is %s  \n", s1.name);
printf("Student cgpa is %f  \n", s1.cgpa);
printf("Student roll is %d  \n", s1.roll);

printf("Student name is %s  \n", s2.name);
printf("Student cgpa is %f  \n", s2.cgpa);
printf("Student roll is %d  \n", s2.roll);

return 0; 

}