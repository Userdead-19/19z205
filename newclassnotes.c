// function to check the number is a factor of the given number or not
// #include<Stdio.h>
// int main(){
//     int number,x;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     printf("Enter 1 to find factors of %d: ", number);
//     scanf("%d", &x);
//     if(isfactor(number,x)==1){
//         printf("%d is a factor of %d", x, number);
//     }
//     else{
//         printf("%d is not a factor of %d", x, number);
//     }
//     return 0;
// }               

// int isfactor(int number,int x){
//     if(number%x==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }



// //function to check a number is prime or not
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter a number: ");
//     scanf("%d", &number);
//     if(isprime(number)==1){
//         printf("%d is a prime number", number);
//     }
//     else{
//         printf("%d is not a prime number", number);
//     }            
//     return 0;
// }

// int isprime(int number){
//     int i;
//     for(i=2;i<number;i++){
//         if(number%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }


// program to find prime numbers in a given range
// #include<Stdio.h>
// int main(){
//     range();
// }

// int range(){
//    int i,lower,upper;
//     printf("Enter the lower limit: ");
//     scanf("%d", &lower);
//     printf("Enter the upper limit: ");  
//     scanf("%d", &upper);
//     for(i=lower;i<=upper;i++){
//         if(isprime(i)==1){
//             printf("%d\n", i);
//         }
//     }
//     return 0;   
// }

// int isprime(int number){
//     int i,var;
//     for(i=2;i<number;i++){
//         if(factor(number,i)==0){
//             var=1;
//         }
//     }
//     if(var==1){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int factor(int number,int i){
//     if(number%i==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
    
// function to find the matrix multiplication
// #include<stdio.h>
// void main(){
//     int a[3][3],b[3][3];
//     int i,j;
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("Enter the value of a[%d][%d]: ", i,j);
//             scanf("%d", &a[i][j]);
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("Enter the value of b[%d][%d]: ", i,j);
//             scanf("%d", &b[i][j]);
//         }
//     }
//     matrix(a,b);
// }


// int matrix(int a[3][3],int b[3][3]){
//     int i,j,k;
//     int c[3][3];
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             c[i][j]=0;
//             for(k=0;k<3;k++){
//                 c[i][j]=c[i][j]+a[i][k]*b[k][j];
//             }
//         }
//     }
//     for(i=0;i<3;i++){
//         for(j=0;j<3;j++){
//             printf("%d\t", c[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }


// function to sort the array in ascending order
// #include<stdio.h>
// void main(){
//     int a[10],i;
//     for(i=0;i<10;i++){
//         printf("Enter the value of a[%d]: ", i);
//         scanf("%d", &a[i]);
//     }
//     sort(a);
// }

// void sort(int a[]){
//     int i,j,temp;
//     for(i=0;i<10;i++){
//         for(j=i+1;j<10;j++){
//             if(a[i]>a[j]){
//                 temp=a[i];
//                 a[i]=a[j];
//                 a[j]=temp;
//             }
//         }
//     } 
//     for(i=0;i<10;i++){
//         printf("%d\t", a[i]);
//     }
// }

// program to understand the concept of static variable
// #include<stdio.h>
// void main(){
//     int i=0;
//     a();
// }

// void a(){
//     int i=2;
//     b();
// }

// void b(){
//     int i=3;
//     c(i);
//     i=6;
//     c(i);
// }

// void c(int i){
//     printf("%d\n", i);
// }

// factorial in recursion
// #include<stdio.h>
// void main(){
//     int number;
//     printf("Enter a number to find factorial: ");
//     scanf("%d", &number);
//     int fact=factorial(number);
//     printf("The factorial of %d is %d", number,fact);
// }

// int factorial(int number){
//     if(number==1){
//         return 1;
//     }
//     else{
//         return number*factorial(number-1);
//     }
// }



// //tower of hanoi in recursion
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter the number of disks: ");
//     scanf("%d", &n);
//     tower(n,'A','B','C');
// }

// void tower(int n,char from,char to,char aux){
//     if(n==1){
//         printf("Move disk 1 from %c to %c\n", from,to);
//         return;
//     }
//     tower(n-1,from,aux,to);
//     printf("Move disk %d from %c to %c\n", n,from,to);
//     tower(n-1,aux,to,from);
// }

// //homework 

// fibanocci
// factorial
// tower of honai concept

// fibanocci
// #include<stdio.h>
// void main(){
//     int limit;
//     printf("Enter the limit: ");
//     scanf("%d", &limit);
//     fibanocci(limit);
// }

// void fibanocci(int limit){
//      int a=0,b=1,c=0;
//     printf("%d%d",a,b);
//     for(int i=2;i<limit;i++){
//         c=a+b;
//         printf("%d",c);
//         a=b;
//         b=c;
//     }    
// }

//factorial
// #include<stdio.h>
// void main(){
//     int number,factorial;
//     printf("enter the number :");
//     scanf("%d",&number);
//     factorial=factorial1(number);
//     printf("the factorial of the number is:%d",factorial);
// }

// int factorial1(int number){
//     if(number==1){
//         return 1;
//     }
//     else{
//         return number*factorial1(number-1);
//     }

// }

//30/5/23

// #include<stdio.h>
// void main(){
//     int x=100;
//     int *ptr=&x;
//     printf("%d\n", x);
//     printf("%d\n", *ptr);
// }


// #include<stdio.h>
// void main(){
//     float x=100,*fptr=&x;
//     printf("value=%f,%f\n", x,*fptr);
//     printf("address=%p,%p\n",&x,fptr);
// }

// #include<stdio.h>
// void main(){
//     int n1[]={1,2,3,4},n2;
//     int *p1=n1,*p2=&n2;
//     printf("%p\n",n1);
//     printf("%p\n",&n2);
//     printf("%p\n",p1);
//     printf("%d\n",*p1);
//     printf("%p\n",p2);
//     printf("%d\n",*p2);   
// }

// #include<stdio.h>
// void main(){
//     int n1[]={1,2,3,4};
//     int *p1=n1;
//     for(int i=0;i<4;i++){
//         printf("%d\n", *(p1));
//         p1++;
//     }   
// }

// #include<stdio.h>
// void main(){
//     static int i=5;
//     printf("%d\n",++i);
// }



// #include<Stdio.h>
// void main(){
//     register int i;
//     test();
//     printf("%d\n",i);
// }

// void test(){
//    static int x;
// }


// #include<stdio.h>
// void main(){
//     char *s="hello";
//     printf("%s",s);
// }

// #include<stdio.h>
// void main(){
//     int a[]={1,2,3,4};
//     int *s=a;
//     for(int i=0;i<4;i++){
//     printf("%d",*s+i);
//     }
// }

// #include<Stdio.h>
// void main(){
//     int a[]={1,2,3,4,5};
//     int *s=a;
//     add(s);
//     for(int i=0;i<5;i++){
//     printf("%d",*(s+i));
//     }
// }

// void add(int *s){
//         for(int i=0;i<5;i++){
//     printf("%d",(*s+i)+1);
//     }
// }


// tower of honai using recursion
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter the number of disks: ");
//     scanf("%d", &n);
//     tower(n,'A','B','C');
// }

// void tower(int n,char from,char to,char aux){
//     if(n==1){
//         printf("Move disk 1 from %c to %c\n", from,to);
//         return;
//     }
//     tower(n-1,from,aux,to);
//     printf("Move disk %d from %c to %c\n", n,from,to);
//     tower(n-1,aux,to,from);
// }

// #include <stdio.h>

// void print_arr(int arr[][3], int col_len, int row_len);

// int main(void)
// {
//     int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8 ,9}};
//     int col_len = sizeof(arr[0])/sizeof(int);
//     int row_len = sizeof(arr)/sizeof(arr[0]);
//     printf("%d%d",col_len, row_len);
// }


// void print_arr(int arr[][3], int col_len, int row_len)
// {
//     for (int i = 0; i < row_len; i++)
//     {
//         for (int j = 0; j < col_len; j++)
//         {
//             printf("%i ", arr[i][j]);
//         }
//         printf("\n");
//     }
// }



// #include<stdio.h>
// void main(){
//     int arr[]={1,2,3,4};
//     // int col_len = sizeof(arr[0])/sizeof(int);
//     // int row_len = sizeof(arr)/sizeof(arr[0]);
//     int *ptr=arr;
//     hello(ptr,sizeof(arr)/sizeof(int));
// }

// void hello(int *j,int x){
//    for(int i=0;i<x;i++){
//       printf("%d ",*j+i);
//    }   
// }


// #include<stdio.h>
// void main(){
//     int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
//     printingarray(arr,3,3);
// }

// void printingarray(int arr[][3],int col,int row){
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }   


// #include<Stdio.h>
// void main(){
//     int a[]={1,2,3,4},b[]={7,8,9,0},c[]={11,12,90};
//     int *ptra=a,*ptrb=b,*ptrc=c;
//     int ptrarr[]={*ptra,*ptrb,*ptrc};
//     int **pointe=ptrarr; 
//     helloworld(ptrarr);
// }

// void abinav(int **pointer){
   
    
// }

// #include<stdio.h>
// void main(){
//     int arr[]={1,2,3,4};
//     int number;
//     printf("Enter the number: ");
//     scanf("%d",&number);
//     factor(arr,number);
// }
// void factor(int arr[],int number){
//     for(int i=0;i<4;i++){
//         if(number%arr[i]==0){
//             printf("%d ",arr[i]);
//         }
//     }
// }



