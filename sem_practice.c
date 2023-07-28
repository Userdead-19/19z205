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


// matrix multiplication using pointers and storing using pointer

// #include<Stdio.h>
// void main(){
//     int row1,column1,row2,column2;
//     printf("enter the number of rows and columns of the first matrix:");
//     scanf("%d%d",&row1,&column1);
//     printf("enter the number of rows and columns of the second matrix:");
//     scanf("%d%d",&row2,&column2);
//     if(column1!=row2){
//         printf("matrix multiplication is not possible");
//     }
//     else{
//         int a[row1][column1],b[row2][column2],c[row1][column2];
//         for(int i=0;i<row1;i++){
//             for(int j=0;j<column1;j++){
//                 printf("enter the element:");
//                 scanf("%d",&a[i][j]);
//             }
//         }
//         for(int i=0;i<row2;i++){
//             for(int j=0;j<column2;j++){
//                 printf("enter the element:");
//                 scanf("%d",&b[i][j]);
//             }
//         }
//         int *p,*q,*r;
//         p=&a[0][0];
//         q=&b[0][0];
//         r=&c[0][0];
//         multiply(p,q,r,row1,column1,column2);
//     }
// }

// void multiply(int *p,int *q,int *r,int row1,int column1,int column2){
//     int sum=0;
//     for(int i=0;i<row1;i++){
//         for(int j=0;j<column2;j++){
//             for(int k=0;k<column1;k++){
//                 sum=sum+(*(p+i*column1+k))*(*(q+k*column2+j));
//             }
//             *(r+i*column2+j)=sum;
//             sum=0;
//         }
//     }
//     for(int i=0;i<row1;i++){
//         for(int j=0;j<column2;j++){
//             printf("%d ",*(r+i*column2+j));
//         }
//         printf("\n");
//     }
// }


//transpose of a matrix using pointer
// #include <stdio.h>

// // Function prototype
// void transpose(int *src, int *dest, int rows, int columns);

// int main() {
//     int rows, columns;
//     printf("Enter the number of rows and columns of the matrix: ");
//     scanf("%d%d", &rows, &columns);

//     int matrix[rows][columns];
//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < columns; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     int transposedMatrix[columns][rows];
//     transpose(&matrix[0][0], &transposedMatrix[0][0], rows, columns);

//     printf("Transposed matrix:\n");
//     for (int i = 0; i < columns; i++) {
//         for (int j = 0; j < rows; j++) {
//             printf("%d ", transposedMatrix[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// void transpose(int *src, int *dest, int rows, int columns) {
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < columns; j++) {
//             *(dest + j * rows + i) = *(src + i * columns + j);
//         }
//     }
// }


// #include<stdio.h>
// int main()
// {
//     printf("the value %d\n",2*9+3/2.0);
// }

//swapping two rows in a matrix using pointers

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
//     swap(p,row,column);
// }

// void swap(int *p,int row,int column){
//     int b[row][column];
//     int r1,r2;
//     printf("enter the row numbers to be swapped:");
//     scanf("%d%d",&r1,&r2);
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             if(i==r1-1){
//                 b[r2-1][j]=*(p+i*column+j);
//             }
//             else if(i==r2-1){
//                 b[r1-1][j]=*(p+i*column+j);
//             }
//             else{
//                 b[i][j]=*(p+i*column+j);
//             }
//         }
//     }
//     for(int i=0;i<row;i++){
//         for(int j=0;j<column;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include <stdio.h>

// // Function prototype
// void swapRows(int *row1, int *row2, int columns);

// int main() {
//     int rows, columns;
//     printf("Enter the number of rows and columns of the matrix: ");
//     scanf("%d%d", &rows, &columns);

//     int matrix[rows][columns];
//     printf("Enter the elements of the matrix:\n");
//     for (int i = 0; i < rows; i++) {
//         for (int j = 0; j < columns; j++) {
//             scanf("%d", &matrix[i][j]);
//         }
//     }

//     int row1, row2;
//     printf("Enter the row numbers (starting from 0) to swap: ");
//     scanf("%d%d", &row1, &row2);

//     if (row1 >= 0 && row1 < rows && row2 >= 0 && row2 < rows) {
//         swapRows(&matrix[row1][0], &matrix[row2][0], columns);

//         printf("Matrix after swapping rows %d and %d:\n", row1, row2);
//         for (int i = 0; i < rows; i++) {
//             for (int j = 0; j < columns; j++) {
//                 printf("%d ", matrix[i][j]);
//             }
//             printf("\n");
//         }
//     } else {
//         printf("Invalid row numbers. Please enter valid row numbers within the range (0 to %d).\n", rows - 1);
//     }

//     return 0;
// }

// void swapRows(int *row1, int *row2, int columns) {
//     for (int i = 0; i < columns; i++) {
//         int temp = *(row1 + i);
//         *(row1 + i) = *(row2 + i);
//         *(row2 + i) = temp;
//     }
// }

// give a program to read text from a file and write it to another file in lower case
// #include<stdio.h>
// #include<ctype.h>
// void main(){
//     FILE *fp1,*fp2;
//     char ch;
//     fp1=fopen("file1.txt","r");
//     fp2=fopen("file2.txt","w");
//     while((ch=fgetc(fp1))!=EOF){
//         fputc(tolower(ch),fp2);
//     }
//     fclose(fp1);
//     fclose(fp2);
// }



// //give a c program to perform multiplication operation on two complex numbers 
// #include<stdio.h>
// struct complex{
//     int real;
//     int imaginary;
// };
// void main(){
//     struct complex c1,c2,c3;
//     printf("enter the real and imaginary part of the first complex number:");
//     scanf("%d%d",&c1.real,&c1.imaginary);
//     printf("enter the real and imaginary part of the second complex number:");
//     scanf("%d%d",&c2.real,&c2.imaginary);
//     c3.real=c1.real*c2.real-c1.imaginary*c2.imaginary;
//     c3.imaginary=c1.real*c2.imaginary+c1.imaginary*c2.real;
//     printf("the product of the two complex numbers is %d+i%d",c3.real,c3.imaginary);
// }


// // compare two complex numbers and return the smallest one

// #include<stdio.h>
// struct complex{
//     int real;
//     int imaginary;
// };
// void main(){
//     struct complex c1,c2;
//     printf("enter the real and imaginary part of the first complex number:");
//     scanf("%d%d",&c1.real,&c1.imaginary);
//     printf("enter the real and imaginary part of the second complex number:");
//     scanf("%d%d",&c2.real,&c2.imaginary);
//     if(c1.real<c2.real){
//         printf("the first complex number is smaller");
//     }
//     else if(c1.real>c2.real){
//         printf("the second complex number is smaller");
//     }
//     else{
//         if(c1.imaginary<c2.imaginary){
//             printf("the first complex number is smaller");
//         }
//         else if(c1.imaginary>c2.imaginary){
//             printf("the second complex number is smaller");
//         }
//         else{
//             printf("both the complex numbers are equal");
//         }
//     }
// }


// #include <stdio.h>

// int main(void)
// {
//     int a = 5, b = 6;
//     printf("~a = %d\n", b||a);
// }

// #include<Stdio.h>
// void main(){
//     FILE *fp;
//     char a;
//     fp=fopen("cfile.txt","r");
//     a=fseek(fp,0,SEEK_END);
//     printf("%d",a);
// }

how to read a file in c using fseek

#include<stdio.h>
main(){
    
}