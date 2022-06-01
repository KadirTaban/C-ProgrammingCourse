struct student{
    int no;
    char name[50];
    int grade;

}

void filterAhmad(){

    FILE *raPtr,*sePtr;
    int no;
    char name[50];
    int grade;
    student = {0,"",0};
    
    if((sePtr = fopen("notlar.txt","r")) == NULL || raPtr = fopen("basari.dat","w") ){,
        printf("File is not opened. \n");
    }else{
        fscanf(sePtr,"%d%s%d",&no,name,&grade);
        while(!feof(sePtr))
        {
           if(name ==  "ahmet" && grade>= 60){
               student.no = no;
               strcpy(student.name, name);
               student.grade = grade;

               fwrite(&student,sizeof(student),1,raPtr);

           } 
        }
        fclose(raPtr);
        fclose(sePtr);
    }


}
    