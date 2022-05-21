#include <stdio.h>
#include <stdlib.h>


typedef struct 
    {
        unsigned int age ;
        char *skill;
        unsigned int rank;
        char *name;
    } Person;


    int main(){

        Person person1;
        person1.name = "Kadir";
        person1.age = 21;
        person1.skill = "Programmer";
        person1.rank = 132;



        printf("his/her name is %s rank %d age %d skill %s\n ",person1.name,person1.rank,person1.age,person1.skill);

        Person person2 = {28,"Enteprenuer",234,"Omer"};


        printf("his/her name is %s rank %d age %d skill %s\n ",person2.name,person2.rank,person2.age,person2.skill);

        Person* person3;

        person3 = (Person*)malloc(sizeof(Person));
        (*person3).age = 26;
        (*person3).name = "Nihal";
        (*person3).skill = "Photographer";
        (*person3).rank = 234;
        printf("his/her name is %s rank %d age %d skill %s ",person3->name,person3->rank,person3->age,person3->skill);

    }       