#include <stdio.h>

enum weekDays{
    Mon,Tue,Wed,Thu,Fri,Sat,Sun
};
typedef enum weekDays Day;

typedef struct 
{
   char* name;
   unsigned int hours;
   Day day;

}Lecture ;

void get_lecture(Lecture);


int main(){

    Lecture lectureOne ;
    lectureOne.name = "Programming Languages II";
    lectureOne.day = Mon;
    lectureOne.hours = 2;


    get_lecture(lectureOne);
}

void get_lecture(Lecture lecture){

    printf("%d",lecture.hours);
}