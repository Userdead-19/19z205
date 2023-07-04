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
#include<stdio.h>
void main(){
char str[100];
FILE *fptr;
fptr=fopen("cfile.txt","r");
while(!feof(fptr)){
    fgets(str,100,fptr);
    printf("%s",str);
}
fclose(fptr);
}