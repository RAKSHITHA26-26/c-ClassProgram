#include<stdio.h>
#include<string.h>
struct person{
char name[50];
int rollno;
float marks;
};
int main(){

struct person person1;
strcpy(person1.name,"rakshitha");
person1.rollno = 3;
person1.marks = 99;

printf("Name: %s\n",person1.name);
printf("Rollno: %d\n",person1.rollno);
printf("Marks: %.4f\n",person1.marks);
return 0;
}
