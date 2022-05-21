#include <stdio.h>
#include <stdlib.h>


typedef struct {
    unsigned int age;
    char* job;
    char* name;

} Staff;

void get_staff(Staff); //Pass by value
void get_staff_ptr(Staff*); // Pass by reference



int main(){

    Staff staffOne; //def variable

    staffOne.age = 21;
    staffOne.job = "Hacker";
    staffOne.name = "Kadir";
   
    get_staff(staffOne);

    return 0;
}

void get_staff(Staff staff){
    printf("%d",staff.age);

}