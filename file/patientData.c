#include <stdio.h>
#include <string.h>

struct patient
{
    int number;
    int age;
    char name[30];
    char description[100];

};
typedef struct patient patient;


void CreateFile(FILE *ptr);
void AddPatient(FILE *ptr);
void GetPatient(FILE *ptr);
void DeletePatient(FILE *ptr);
void UpdatePatient(FILE *ptr);

int main(){

    int loop = 1,key;
    FILE *mfPtr;

    while(loop) {
        printf("\n1-Create Patient File With 100 record\n2-Insert a new patient. \n");
        printf("3-Find a patient by record.\n4-Delete a patient record.\n");
        printf("5-Update a patient record\n 0-Exit\n");
        scanf("%d",&key);

        switch(key){
            case 1:
                CreateFile(mfPtr);
                break;
            case 2:
                AddPatient(mfPtr);
                break;
            case 3:
                GetPatient(mfPtr);
                break;
            case 4:
                DeletePatient(mfPtr);
                break;
            case 5:
                UpdatePatient(mfPtr);
                break;
                
            default:
                loop = 0;
                break;
        }
    }
    return 0;
}

void CreateFile(FILE *ptr){
    patient patient = {0,0,"",""};
    int n=2;

    if((ptr = fopen("patients","w")) == NULL)
    {
        printf("File couldn't be opened.\n");
    }
    else
    {
        for(int i = 0 ; i<n ; i++)
        {
            fwrite(&patient, sizeof(patient),1,ptr);
        }

        fclose(ptr);
    }

}

void AddPatient(FILE *ptr){
    patient patient = {0,0,"",""};

    if((ptr = fopen("patients","a+")) == NULL){
        printf("File couldn't be opened. \n");
    }else
    {
        printf("Enter the no, age, name, and description [0-Exit]\n");
        scanf("%d ",&patient.number);
        while(patient.number != 0){
            scanf("%d%s %s",&patient.age,patient.name,patient.description);
            fseek(ptr, (patient.number-1)*sizeof(patient),SEEK_SET);
            fwrite(&patient,sizeof(patient),1,ptr);

            printf("Enter the no, age, name and description [0-Exit]\n");
            scanf("%d",&patient.number);
        }

        fclose(ptr);
    }
}

void GetPatient(FILE *ptr){
    patient patient = {0,0,"",""};
    int number;

    if((ptr = fopen("patients","r")) == NULL){
        printf("File could not be opened \n");
    }else{
        printf("Patient number: ");
        scanf("%d",&number);

        while(!feof(ptr)){
            fread(&patient, sizeof(patient),1,ptr);

            if(patient.number != 0 && patient.number == number){
                printf("%-10d%-10d%-13s%s\n",patient.number,patient.age,patient.name,patient.description);
    
            }
        }
        fclose(ptr);
    }
} 

void DeletePatient(FILE *ptr){
    patient hasta = {0,0,"",""};
    patient bos = {0,0,"",""};
    int number;

    if((ptr = fopen("patients","r+")) == NULL){
        printf("File could not be opened \n");
    }else{
        printf("Patient number: ");
        scanf("%d",&number);
        printf("\n %-10s%-12s%-13s%s\n","No","Age","Name","Description");

        while(!feof(ptr)){
            fread(&hasta, sizeof(patient),1,ptr);

            if(hasta.number != 0 && hasta.number == number){
                printf("%-10d%-10d%-13s%s\n",bos.number,bos.age,bos.name,bos.description);
                fseek(ptr,-1*sizeof(patient),SEEK_CUR);
                fwrite(&bos,sizeof(patient),1,ptr);

            }
        }
        fclose(ptr);
    }
}  

void UpdatePatient(FILE *ptr){
    patient hasta = {0,0,"",""};
    patient updatePatient;

    int number;

   if((ptr = fopen("patients","r+")) == NULL){
        printf("File could not be opened \n");
    }else{
        printf("Patient Number: ");
        scanf("%d",&number);
        printf("\n %-10s%-12s%-13s%s\n","No","Age","Name","Description");


        while(!feof(ptr)){
            fread(&hasta, sizeof(patient),1,ptr);
            printf("new values:\n");
            scanf("%d%d%s%s",&updatePatient.number,&updatePatient.age,updatePatient.name,updatePatient.description);
            if(hasta.number != 0 && hasta.number == number){
                printf("%-10d%-10d%-13s%s\n",updatePatient.number,updatePatient.age,updatePatient.name,updatePatient.description);
                fseek(ptr,-1*sizeof(patient),SEEK_CUR);
                fwrite(&updatePatient,sizeof(patient),1,ptr);

            }
        }
        fclose(ptr);
    }
} 