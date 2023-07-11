#include<Stdio.h>
#include<string.h>
void main(){
    FILE *fptr;
    char str[100];
    int no;
    printf("enter the number of lines to be written:");
    scanf("%d",&no);
    fptr=fopen("test.txt","w");
    if(fptr==NULL){
        printf("error!");
        exit(1);
    }
    for(int i=0;i<no;i++){
        printf("enter the string:");
        scanf("%s",str);
        fprintf(fptr,"%s\n",str);
    }
    fclose(fptr);
    fptr=fopen("test.txt","r");
    if(fptr==NULL){
        printf("error!");
        exit(1);
    }
    char ch[no][100];
    int k=0;
    while(fgets(ch[k],100,fptr)!=NULL){
        printf("%s",ch[k]);
        k++;
    }
    for(int i=0;i<k;i++){
        for(int j=0;ch[i][j]!=0;j++){
            ch[i][j]=ch[i][j]+3;
        }
    }
    for(int j=0;j<k;j++){
        printf("%s\n",ch[j]);
    }
}