#include <stdio.h>

struct student {
int roll;
float cgpa;
char name[100];
};

int main () {
struct student s1 = {1822, 9.2, "Divyansh"};   //Poora function ek sath define krdia 
printf("student roll no. = %d \n", s1.roll);   //Bs roll number print krva lia standard tareeke se 

//But how to use pointers?

struct student *ptr = &s1;
printf("student roll no. = %d\n", (*ptr).roll); //(*ptr) krke usko s1 pr point krva lia aur fir .roll daalkar roll number print krvane ko bol dia 
}