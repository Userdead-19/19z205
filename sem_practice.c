// ASCII SEARCH


//[pattern printing CA -1 10 MARK

// #include<Stdio.h>
// void main(){
//     int input,temp=0,j;
//     printf("enter the pattern range:");
//     scanf("%d",&input);
//     for(int i=1;i<input;i+=2){
//         for(int k=input;k>i;k--){
//             printf(" ");
//         }
//         temp++;
//         for(j=temp;j<=i;j++){
//             printf("%d ",j);
//         }
//         for(int k=j-2;k>=temp;k--){
//             printf("%d ",k);
//         }
//         printf("\n");
//     }
// }


//matrix multiplication CA-1 5 MARK

// #include<stdio.h>
// void main(){
//     int rowA,columnA,rowB,columnB;
//     printf("enter the number of rows and columns of first matrix:");
//     scanf("%d%d",&rowA,&columnA);
//     int a[rowA][columnA];
//     printf("enter the number of rows and columns of second matrix:");
//     scanf("%d%d",&rowB,&columnB);
//     int b[rowB][columnB];
//     if(columnA==rowB){
//     for(int i=0;i<rowA;i++)
//     {
//         for(int j=0;j<columnA;j++)
//         {
//             printf("enter the element of first matrix:");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<rowB;i++)
//     {
//         for(int j=0;j<columnB;j++)
//         {
//             printf("enter the element of second matrix:");
//             scanf("%d",&b[i][j]);
//         }
//     }
//     int c[rowA][columnB];
//     for(int i=0;i<rowA;i++)
//     {
//         for(int j=0;j<columnB;j++)
//         {
//             c[i][j]=0;
//             for(int k=0;k<columnA;k++)
//             {
//                 c[i][j]+=a[i][k]*b[k][j];
//             }
//         }
//     }
//     }
//     else{
//         printf("the matrix multiplication is not possible with these matrices :(");
//     }
// }

//maximum occuring letter in a string

// #include<Stdio.h>
// void main(){
//     char str[100],temp;
//     int max=0,count=1;
//     printf("Enter the string:");
//     scanf("%s",str);
//     for(int i=0;str[i]!='\0';i++){
//         count=1;
//         for(int j=i+1;str[j]!='\0';j++){
//             if(str[i]==str[j]){
//                 count++;
//             }
//             if(count>max){
//                 temp=(int)str[i];
//                 max=count;
//             }
//         }
//     }
//     printf("%c",temp);
// }

//sort array of strings

// #include<Stdio.h>
// #include<string.h>
// void main(){
//     char str[100][100],temp[100];
//     int n;
//     printf("enter the number of strings:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("enter the string:");
//         scanf("%s",str[i]);
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(strcmp(str[i],str[j])>0){
//                 strcpy(temp,str[i]);
//                 strcpy(str[i],str[j]);
//                 strcpy(str[j],temp);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%s\n",str[i]);
//     }
// }



//file operations


// #include<Stdio.h>
// void main(){
//     char input[10],temp[10],read[10];
//     FILE *fp;
//     fp=fopen("cfile.txt","r");
//     printf("enter the word to replace in the file :");
//     scanf("%s",input);
//     printf("\nto replace it with:");
//     scanf("%s",temp);
//     while(fscanf(fp,"%s",read)!=NULL){
//         if(read==input){
//             printf("%s",read);
//         }
//     }
// }



// #include<Stdio.h>

// void main(){
//     int number,j=0;
//     printf("enter the number of words in the name:");
//     scanf("%d",&number);
//     char name[number][100];
//     printf("enter the name:");
//     for(int i=0;i<number;i++){
//       scanf("%s",name[i]);
//     }    
//     while(j<number-1){
//         printf("%c. ",name[j][0]);
//         j++;
//     }
//     printf("%s",name[number-1]);
// }


//replace a particular word in a file by another word

// #include<Stdio.h>
// #include<string.h>
// void main(){
//     FILE *fp;
//     fp=fopen("cfile.txt","r");
//     char input[10],temp[10],read[10];
//     printf("enter the word to replace in the file :");
//     scanf("%s",input);
//     printf("\nto replace it with:");
//     scanf("%s",temp);
//     while(fscanf(fp,"%s",read)!=EOF){
//         if(strcmp(read,input)==0){
//             printf("%s ",temp);
//         }
//         else{
//             printf("%s ",read);
//         }
//     }
// }



// swapping i and i+1 strings in an array where i is given as input from user

// #include<Stdio.h>
// #include<string.h>
// void main(){
//     char str[100][100],temp[100];
//     int n,i;
//     printf("enter the number of strings:");
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         printf("enter the string:");
//         scanf("%s",str[i]);
//     }
//     printf("enter the value of i:");
//     scanf("%d",&i);
//     strcpy(temp,str[i]);
//     strcpy(str[i],str[i+1]);
//     strcpy(str[i+1],temp);
//     for(int i=0;i<n;i++){
//         printf("%s\n",str[i]);
//     }
// }


//find transpose of a matrix using pointer and findig the max element in the matrix
// #include<Stdio.h>
// void main(){
//     int row,column;
//     printf("enter the number of rows and columns of the matrix:");
//     scanf("%d%d",&row,&column);
//     int a[row][column];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("enter the element:");
//             scanf("%d",&a[i][j]);
//         }
//     }
//     int *p;
//     p=&a[0][0];
//     transpose(p,row,column);
// }

// void transpose(int *p,int row,int column){
//     int b[row][column];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             b[j][i]=((p+i)+j);
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include<Stdio.h>
// void main(){
//     int row,column;
//     printf("enter the number of rows and columns of the matrix:");
//     scanf("%d%d",&row,&column);
//     int a[row][column];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("enter the element:");
//             scanf("%d",&a[i][j]);
//         }

//     }
//     int *p;
//     p=&a[0][0];
//     transpose(p,row,column);
// }

// void transpose(int *p,int row,int column){
//     int b[row][column];
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             b[j][i]=*(p+i*column+j);
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
// }





// #include<stdio.h>
// void main(){
//     int x;
//     x=50%(5*(16%12*(17/3)));
//     printf("%d",x);
// }

