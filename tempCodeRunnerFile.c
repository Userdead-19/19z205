#include<stdio.h>
void main(){
    FILE *fptr;
    fptr=fopen("students.txt","w");
    int num;
    struct students{
        char name[100];
        int roll_no,age;
        int mark[3];
    };
    printf("enter the number of students:");
    scanf("%d",&num);
    int total=0;
    struct students st[num];
    for(int i=0;i<num;i++){
        printf("enter the name:");
        scanf("%s",st[i].name);
        printf("enter the roll no:");
        scanf("%d",&st[i].roll_no);
        printf("enter the age:");
        scanf("%d",&st[i].age);
        for(int j=0;j<3;j++){
            printf("%d.",j);
            scanf("%d",&st[i].mark[j]);
        }
    }
    fwrite(st,sizeof(st),num,fptr);
    fread(st,sizeof(st),num,fptr);
    for(int i=0;i<3;i++){
        printf("\n");
        total=0;
        for(int j=0;j<num;j++){
            total+=st[j].mark[i];
        }
        fprintf(fptr,"\nthe average mark of 1st subject is %d",total/num);
    }
}
