#include <stdio.h>
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
