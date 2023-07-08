// Write a program in C to sort the lines of a text file in alphabetical order

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// void main(){
//     FILE *fp;
//     char str[100];
//     char *ptr[100];
//     int i=0;
//     fp=fopen("test.txt","r");
//     if(fp==NULL){
//         printf("file not found");
//         exit(1);
//     }
//     while(fgets(str,100,fp)!=NULL){
//         ptr[i]=(char *)malloc(strlen(str)+1);
//         strcpy(ptr[i],str);
//         i++;
//     }
//     int j;
//     char *temp;
//     for(int j=0;j<i;j++){
//         for(int k=j+1;k<i;k++){
//             if(strcmp(ptr[j],ptr[k])>0){
//                 temp=ptr[j];
//                 ptr[j]=ptr[k];
//                 ptr[k]=temp;
//             }
//         }
//     }
//     for(int j=0;j<i;j++){
//         printf("%s",ptr[j]);
//     }
//     fclose(fp);
// }


//.Write a program in C to encrypt the contents of a file using a simple encryption algorithm

// #include<Stdio.h>
// #include<String.h>
// void main(){
//     FILE *fptr;
//     char String[100];
//     char *p[100];
//     int i=0;
//     fptr=fopen("test.txt","r");
//     if(fptr==NULL){
//         printf("file not found");
//         exit(1);
//     }
//     while(fgets(String,100,fptr)!=NULL){
//         p[i]=(char *)malloc(strlen(String)+1);
//         strcpy(p[i],String);
//         i++;
//     }
//     //encrypting
//     for(int j=0;j<i;j++){
//         for(int k=0;p[j][k]!=0;k++){
//             p[j][k]=p[j][k]+3;
//         }
//     }
//     for(int j=0;j<i;j++){
//         printf("%s\n",p[j]);
//     }
//     //decrypting
//     for(int j=0;j<i;j++){
//         for(int k=0;p[j][k]!=0;k++){
//             p[j][k]=p[j][k]-3;
//         }
//     }
//     for(int j=0;j<i;j++){
//         printf("%s",p[j]);
//     }
//     fclose(fptr);
// }

// Write a program in C to calculate the average of numbers stored in a file.

#include<Stdio.h>
#include<stdlib.h>
void main(){
    FILE *fptr;
    int num;
    fptr=fopen("numbers.txt","r");
    if(fptr==NULL){
        printf("file not found");
        exit(1);
    }
    int sum=0;
    int count=0;
    while(fscanf(fptr,"%d",&num)!=NULL){
        sum=sum+num;
        count++;
    }
    printf("the average is %d",sum/count);
    fclose(fptr);

}