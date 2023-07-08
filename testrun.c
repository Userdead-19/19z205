//write numbers in file
#include<stdio.h>
void main(){
    FILE *fptr;
    fptr=fopen("numbers.txt","w");
    if(fptr==NULL){
        printf("file not found");
        exit(1);
    }
    fwrite("1 2 3 4 5 6 7 8 9 10",1,21,fptr);
    
}   