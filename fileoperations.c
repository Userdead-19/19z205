// writing in a file using fputs() function

// #include<stdio.h>
// void main(){
//     char str[100];
//     FILE *fptr;
//     fptr=fopen("cfile.txt","w");     
//     printf("enter the content to write to in the file:");
//     gets(str);
//     fputs(str,fptr);
//     fclose(fptr);
// }


//write a program to read a file using fgets method

// #include<stdio.h>
// void main(){
//     char str[100];
//     FILE *fptr; 
//     fptr=fopen("cfile.txt","r");
//     fgets(str,100,fptr);
//     printf("the content of the file is %s",str);
//     fclose(fptr);
// }

//write a program to write multiple lines in a file using fputs() function
// #include<stdio.h>
//
// void main(){
//     char str[100];
//     FILE *fptr;
//     fptr=fopen("cfile.txt","w");
//     printf("enter the content to write to in the file:");
//     while(strlen(gets(str))>0){
//         fputs(str,fptr);
//         fputs("\n",fptr);
//     }
//     fclose(fptr);
// }


//printing multiple lines in a file using fgets() function
// #include<stdio.h>
// void main(){
//     char str[100];
//     FILE *fptr;
//     fptr=fopen("cfile.txt","r");
//     while(fgets(str,100,fptr)!=NULL){
//         printf("%s",str);
//     }
//     fclose(fptr);
// }

//printing multiple lines in a file using fgets() function and its location using ftell() function

// #include<stdio.h>
// void main(){
//     char str[100];
//     FILE *fptr;
//     fptr=fopen("cfile.txt","r");
//     while(fgets(str,100,fptr)!=NULL){
//         printf("%s",str);
//         printf("the location of the pointer is %d\n",ftell(fptr));
//     }
//     fclose(fptr);
// }

//fseek()

// #include<stdio.h>
// void main(){
//     FILE *fptr;
//     fptr=fopen("cfile.txt","r");
//     printf("%d",fseek(fptr,10,0));
//     fclose(fptr);
// }

//write a program using feof()
// #include<stdio.h>
// void main(){
// char str[100];
// FILE *fptr;
// fptr=fopen("cfile.txt","r");
// while(!feof(fptr)){
//     fgets(str,100,fptr);
//     printf("%s",str);
// }
// fclose(fptr);
// }


// #include<stdlib.h>
// #include<stdio.h>
// void main(){
//     FILE *fptr;
//     fptr=fopen("test.txt","w");
//     int num=69;
//     fprintf(fptr,"%d",num);
//     fclose(fptr); 
//     fptr=fopen("test.txt","r");
//     if(fptr==NULL){
//         printf("file not found");
//         exit(1);
//     }
//     int num1;
//     fscanf(fptr,"%d",&num1);
//     printf("the number is %d",num1);
//     fclose(fptr);
// }


//write a program to write the details of n students into a file. The details are name , roll no , marks , read the data as input and write it into the file 
// after writing it into the files total students and average marks of the students in each subjects


// #include<stdio.h>
// void main(){
//     FILE *fptr;
//     fptr=fopen("students.txt","w");
//     int num;
//     struct students{
//         char name[100];
//         int roll_no,age;
//         int mark[3];
//     };
//     printf("enter the number of students:");
//     scanf("%d",&num);
//     int total=0;
//     struct students st[num];
//     for(int i=0;i<num;i++){
//         printf("enter the name:");
//         scanf("%s",st[i].name);
//         printf("enter the roll no:");
//         scanf("%d",&st[i].roll_no);
//         printf("enter the age:");
//         scanf("%d",&st[i].age);
//         for(int j=0;j<3;j++){
//             printf("%d.",j);
//             scanf("%d",&st[i].mark[j]);
//         }
//     }
//     fwrite(st,sizeof(st),num,fptr);
//     for(int i=0;i<3;i++){
//         printf("\n");
//         total=0;
//         for(int j=0;j<num;j++){
//             total+=st[j].mark[i];
//         }
//         fprintf(fptr,"\nthe average mark of 1st subject is %d",total/num);
//     }
//     fclose(fptr);
// }


// #include<Stdio.h>
// enum errorcode{
//     on,off
// };
// void main(){
//     enum errorcode status=on;
//     scanf("%d",&status);
//     if(status==on){
//         printf("the status is on");
//     }
//     else if(status==off){
//         printf("the status is off");
//     }
//     else{
//         printf("invalid status");
//     }
// }


//union
// #include<stdio.h>
// union student{
//     char name[100];
//     int roll_no;
//     int age;
// };

// void main(){
//     union student st;
//     printf("enter the name:");
//     scanf("%s",st.name);
//     printf("enter the roll no:");
//     scanf("%d",&st.roll_no);
//     printf("enter the age:");
//     scanf("%d",&st.age);
//     printf("the name is %s\n",st.name);
//     printf("the roll no is %d\n",st.roll_no);
//     printf("the age is %d\n",st.age);
//     printf("the size of the union is %d",sizeof(st));
// }

// //structure
// #include<stdio.h>
// struct student{
//     char name[100];
//     int roll_no;
//     int age;
// };
// void main(){
//     struct student st;
//     printf("enter the name:");
//     scanf("%s",st.name);
//     printf("enter the roll no:");
//     scanf("%d",&st.roll_no);
//     printf("enter the age:");
//     scanf("%d",&st.age);
//     printf("the name is %s\n",st.name);
//     printf("the roll no is %d\n",st.roll_no);
//     printf("the age is %d\n",st.age);
//     printf("the size of the structure is %d",sizeof(st));
// }


// #include<stdio.h>
// union student{
//     char name[4];
//     int num;
// };

// void main(int ){
//     union student st;
//     printf("enter the number:");
//     scanf("%d",&st.num);
//     printf("enter the name:");
//     scanf("%s",st.name);
//     printf("the name is %s\n",st.name);
//     printf("the number is %d\n",st.num);
//     printf("the size of the union is %d",sizeof(st));
// }

#include<stdio.h>
void main(int args,char *argv[]){
   
}