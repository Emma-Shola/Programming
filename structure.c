#include <stdio.h>
#include <string.h>
struct info{
char student_name[3];
int matric_num;
int level;
char programme;

};
int main(){

struct info student1,student2,student3;
strcpy(student1.student_name, "john");
student1.matric_num= 50;
student1.level=200;
student1.programme="IFT";

strcpy(student2.student_name, "moses");
student2.matric_num=00734;
student2.level=300;
student2.programme="CMP";

strcpy(student3.student_name, "Emmanuel");
student3.matric_num=22;
student3.level=100;
student3.programme="MCB";


printf("The name of the student 1 is: %s \n", student1.student_name);
printf("the matric number of the first student is: %i \n", student1.matric_num);
printf("the level of the first student is: %i\n", student1.level);
printf("the programme of the first student is %s \n:",student1.programme);

printf("The name of the student 2 is: %s \n", student2.student_name);
printf("the matric number of the second student is: %i", student2.matric_num);
printf("the level of the second student is: %i \n",student2.level);
printf("the programme of the second student is: %s \n",student2.programme);

printf("The name of the student 3 is: %s \n", student3.student_name);
printf("the matric number of the third student is: %i \n", student3.matric_num);
printf("the level of the third student is: %i \n",student3.level);
printf("the programme of the third student is: %i \n",student3.programme);


}