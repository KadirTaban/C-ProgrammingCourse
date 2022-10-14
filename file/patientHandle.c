#include <stdio.h>
#include <string.h>

struct patient{
    char name[30];
    int age;
    char illnessInfo[50];
};


typedef struct patient patient;

void addRecord(FILE *ptr);
void findByName(FILE *ptr);
void deleteRecord(FILE *ptr);
void modifyRecord(FILE *ptr);
void printRecords(FILE *ptr);



int main(){
    int loop = 1,key,counter = 0 ;
    FILE *raPtr;
    while(loop)

}