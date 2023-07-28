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


//  #include<stdio.h>
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


// #include<stdio.h>
// #include<string.h>


// int main()
// {
//     int n;
//     char str[100], temp[100][100], temp1[100];// no of sentences, letters
//     printf("Enter the number of lines: ");
//     scanf("%d",&n);
//     getchar();
//     FILE *fptr;
//     fptr = fopen("hello.txt","w");
//     for(int i=0;i<n;i++)
//     {
//         fgets(str, sizeof(str),stdin);
//         fputs(str,fptr);
//     }
//     fclose(fptr);
//     fptr = fopen("hello.txt","r");
//     for (int i = 0; i < n; i++)
//     {
//         fgets(temp[i], sizeof(temp[i]),fptr);
//     }
//     fclose(fptr);
//     for (int i = 0; i < n-1; i++)
//     {
//         for(int j=i; j< n;j++)
//         if(strcmp(temp[i],temp[j])>0)
//         {
//             strcpy(temp1,temp[i]);
//             strcpy(temp[i],temp[j]);
//             strcpy(temp[j], temp1);
//         }
//     }


//     fptr = fopen("hello.txt", "w");
//     for (int i = 0; i < n; i++)
//     {
//         fputs(temp[i], fptr);
//     }

//     fclose(fptr);


//     fptr = fopen("hello.txt", "r");
//     printf("\n");
//     for (int i = 0; i < n; i++)
//     {
//         fgets(temp1,sizeof(temp1),fptr);
//         fputs(temp1,stdout);
//     }
//     fclose(fptr);


// }

//strcmp of two strings given by the user
// #include<stdio.h>
// #include<string.h>
// void main(){
//     char str1[100],str2[100];
//     printf("enter the first string:");
//     scanf("%s",str1);
//     printf("enter the second string:");
//     scanf("%s",str2);
//     int i=0;
//     while(str1[i]==str2[i]&&str1[i]!='\0'&&str2[i]!='\0'){
//         i++;
    
//     if(str1[i]>str2[i]){
//         printf("the first string is greater than the second string");
//         break;
//     }
//     else if(str1[i]<str2[i]){
//         printf("the second string is greater than the first string");
//         break;
//     }
//     else{
//         printf("the two strings are equal");
//         break;  
//     }
// }
// }  


// #include <stdio.h>

// int main(int argc, char *argv[]) {
//     if (argc < 2) {
//         printf("Usage: %s <name>\n", argv[0]);
//         return 1;
//     }

//     printf("Hello, %s!\n", argv[1]);

//     return 0;
// }


// #include<Stdio.h>
// struct cylinder{
//     float radius;
//     float height;
//     float pi=3.14;
// }
// void main(){
//     struct cylinder cy;
//     int n;
//     input();
//     printf("enter the opertion to be performed:");
//     scanf("%d",&n);
//     switch(n){
//         case 1:
//           TSA();
//           break;
//         case 2:
//           CSA():
//           break;
//         default:
//           break;   
//     }
// }

// void input(){
//     struct cylinder cy;
//     printf("enter the radius:");
//     scanf("%f",&cy.radius);
//     printf("enter the height:");
//     scanf("%f",&cy.height);
// }