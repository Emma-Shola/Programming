#include <stdio.h>



struct students{
char student;
int matricno;
char course;
int ca;
int exam;
};

struct students stu[10];
int i, ;
int main(void){

for(i=0; i<10; i++){
    printf("student name:", (i+1));
    scanf("%i",stu[i].student);

    printf("matric no:",(i+1));
    scanf("%i",& stu[i].matricno);

    printf("course", (i+1));
    scanf("%i",stu[i].course);

   

    printf("exam:",(1+i));
    scanf("%i", stu[i].exam);

    do{
         printf("ca:", (i+1));
    scanf("%i", stu[10].ca);
}
while(stu[10].ca>40);

}




}





