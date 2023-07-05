// #include<stdio.h>
// void main(){
//   struct class{
//     char name[100];
//     int rollno;
//     int marks;
//   };
//   struct class student;
//   student.rollno=1;
//   student.marks=100;
//   strcpy(student.name,"sai daddy");
//   FILE *fptr;
//   //open in binary write mode
//   fptr=fopen("cfile.bin","wb");
//   fwrite(&student,sizeof(student),1,fptr);
//   fclose(fptr);
// }

//fread() a binary file
// #include<stdio.h>
// void main(){
//     struct class{
//         char name[100];
//         int rollno;
//         int marks;
//     };
//     struct class student;
//     FILE *fptr;
//     fptr=fopen("cfile.bin","rb");
//     fread(&student,sizeof(student),1,fptr);
//     printf("the name of the student is %s\n",student.name);
//     printf("the rollno of the student is %d\n",student.rollno);
//     printf("the marks of the student is %d\n",student.marks);
//     fclose(fptr);
// }

//fwrite() a array of structures
#include<stdio.h>
void main(){
    struct class{
        char name[100];
        int rollno;
        int marks;
    };
    struct class student[3];
    FILE *fptr;
    fptr=fopen("cfile.bin","wb");
    for(int i=0;i<3;i++){
        printf("enter the name of the student:");
        gets(student[i].name);
        printf("enter the rollno of the student:");
        scanf("%d",&student[i].rollno);
        printf("enter the marks of the student:");
        scanf("%d",&student[i].marks);
        fflush(stdin);
    }
    fwrite(student,sizeof(student),3,fptr);
    fclose(fptr);
}