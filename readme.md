# C Programming 


using printf statements in C
```c
#include<stdio.h>
int main()   
{
    printf("hello world");
}
```

getting run time input from the user and printing it 

```c
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the first number:");
    scanf("%d",&x);
    printf("enter the second number:");
    scanf("%d",&y);
    printf("the numbers are :%d,%d",x,y);
}    
```
adding and multiplying three numbers

```c
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("the sum of three numbers is %d\n",a+b+c);
    printf("the product of three numbers is %d\n",a*b*c);
    return 0;
}
```

6)How does the compiler locate the Headerfiles in c?

The #include&lt;stdio.h&gt; is the most commonly used header file in C language
programming. This statement works like the import modules statement in python
language. The stdio stands for Standard input and output header file which holds the
input and output statements like printf scanf gets fgets methods and so on. Usually,
we used to install all the software in the C: drive and locate other files in another
directory. C uses MinGW compiler to run the programs which also contains the
headerfiles. In case ,The programs we used to work on are located in D directory the
header file paths are need to be assigned to the particular program .Usually the
compiler first checks for the header file locally and searches for it globally inside the
System. To set path of the headerfiles to the program first we need to find the path
where the header files are stored in the computer . Then we need to copy the path
and add it to the environmental variable settings in the computer to make the
particular folder to be used from any part of the program. We can also set path the
header files folder to the compiler so that the compiler searches only in the given
path. Now if we run the program the compiler doesn’t show any error and it executes
the program. If we didn’t set path the header files the compiler throws an error.

# --------------------

getting a string input from the user with and without spaces

```c
#include<stdio.h>
int main(){
    char name[20];
    printf("enter your name:");
    scanf("%s",name);
    printf("your name is %s",name);
    return 0;
}
```

```c    
#include<stdio.h>
int main(){
    char name[20];
    printf("enter your name:");
    gets(name);
    printf("your name is %s",name);
    return 0;
}
```

conversion of celsius to fahrenheit

```c
#include<stdio.h>
void main(){
    float celsius;
    printf(">>");
    scanf("%f",&celsius);
    printf("the fahrenheit is %f",((9/5)*celsius+35));
}
```

size of all data types :
```c
#include<stdio.h>
void main(){
    printf("the size of int is %d\n",sizeof(int));
    printf("the size of float is %d\n",sizeof(float));
    printf("the size of char is :%d\n",sizeof(char));
    printf("the size of double is :%d\n",sizeof(double));
    printf("the size of long double is :%d\n",sizeof(long double));
    printf("the size of unsigned int is :%d\n",sizeof(unsigned int));
    printf("the size of short int is :%d\n",sizeof(short int));
    printf("the size of the long int is :%d\n",sizeof(long int));
    printf("the size of long long int is :%d\n",sizeof(long long int));
    printf("the size of unsigned long int is :%d\n",sizeof(unsigned long int));
    printf("the size of unsigned long long int is:%d\n",sizeof(unsigned long long int));
    printf("the size of signed char is :%d\n",sizeof(signed char));
    printf("the size of unsigned char is :%d\n",sizeof(unsigned char));
}

```

## FOR loops

general format of for loop

```c
for(initialization;condition;increment/decrement)
{
    //statements
}
```

code 

```c
#include<stdio.h>
int main(){
    int i;
    for(i=0;i<10;i++){
        printf("%d\n",i);
    }
    return 0;
}
```


multiplication table of a number

```c
#include<stdio.h>
void main(){
   int multiple,limit;
   printf("enter the limit number:");
   scanf("%d",&limit);
   printf("enter the number to find its multipication table:");
   scanf("%d",&multiple);
   for(int i=1;i<=limit;i++){
    for(int j=1;j<=multiple;j++){
      printf("%d x %d = %d\t",i,j,(i*j));
    }
    printf("\n");
   }
}
```

printing a number pattern

```c

#include<stdio.h>
void main(){
  int limit;
  printf("enter the limit:");
  scanf("%d",&limit);
  for(int i=1;i<=limit;i++){
     for(int j=limit;j>=i;j--){
      printf("\t");
     }
     for(int j=1;j<=i;j++){
       printf("%d\t",j);
     }
     for(int j=i-1;j>=1;j--){
      printf("%d\t",j);
     }
     printf("\n");
  }
  printf("");
}
```

## WHILE loops

general format of while loop

```c
while(condition)
{
    //statements
}
```

code

```c
#include<stdio.h>
int main(){
    int i=0;
    while(i<10){
        printf("%d\n",i);
        i++;
    }
    return 0;
}
```
using loop skipping the numbers which are divisble by 5

```c
#include<stdio.h>
void main(){
  int i=1;
  while(i<500){
    if(i%5==0){
      i++;
    continue;}
  }
  printf("%d",i);
  i++;
}
```

priting a given pattern using for and while

```c

#include<stdio.h>
void main(){
  int start,end,limit,j=0;
  printf("enter the starting and ending values:");
  scanf("%d%d",&start,&end);
  printf("enter the limit:");
  scanf("%d",&limit);
  while(limit>=j){
  for(int i=start;i<=end;i++){
    printf("%d\n",i);
    j++;
    if(j==limit){
      goto  jump;
    }
  }
  }
  jump:
    printf("the loop is over");
}
```

conversion to octal and hexadecimal

```c
#include<stdio.h>
void main(){
  int number;
  printf("enter the number:");
  scanf("%d",&number);
  printf("the octal value is %o\n",number);
  printf("the hexadecimal value is %x\n",number);
}
```

restricting the decimals after the decimal point

```c
#include<stdio.h>
void main(){
  float number;
  printf("enter the number:");
  scanf("%f",&number);
  printf("the number is %.2f",number);
}
```

## Arrays

```c
#include<stdio.h>
void main(){
  int array[5];
  printf("enter the elements of the array:");
  for(int i=0;i<5;i++){
    scanf("%d",&array[i]);
  }
  printf("the elements of the array are:");
  for(int i=0;i<5;i++){
    printf("%d\n",array[i]);
  }
}
```

Row major order and column major order

```c
#include<stdio.h>
void main(){
  int array[3][3];
  printf("enter the elements of the array:");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&array[i][j]);
    }
  }
  printf("the elements of the array are:");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d\t",array[i][j]);
    }
    printf("\n");
  }
}
```

- by default the array is stored in row major order

- to store the array in column major order we have to use the following code

```c
#include<stdio.h>
void main(){
  int array[3][3];
  printf("enter the elements of the array:");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&array[j][i]);
    }
  }
  printf("the elements of the array are:");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d\t",array[j][i]);
    }
    printf("\n");
  }
}
```

finding a base address of an array element

```c
#include<stdio.h>
void main(){
  int n[2][2]={{1,2},{3,4}};
  int baseaddress;
  printf("the first address is : %d\n",&n[0][0]);
  printf("enter the base address:");
  scanf("%d",&baseaddress);
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
      int  temp=&n[i][j];
      if(temp==baseaddress){
        printf("the element is :%d",n[i][j]);
      }
    }
  }
}
```

returning the address of a particular element in an array

```c
#include<Stdio.h>
void main(){
  int a[2][2]={{1,2},{3,4}};
  int row,column;
  printf("enter the row and column to find its address:");
  scanf("%d%d",&row,&column);
  printf("the address of the given row and column is :%d",&a[row][column]);
 }
```

sum and average of an array

```c
#include<stdio.h>
void main(){
    int arr[100];
    int sum=0;
    for(int i=0;i<100;i++){
        arr[i]=i;
    }
    for(int i=0;i<100;i++){
        sum+=arr[i];
    }
    printf("the average is :%f",(float)sum/100);
}
```

swapping elements in an array

```c
#include<stdio.h>
void main(){
    int arr[5]={1,2,3,4,5},temp;
    for(int i=0;i<5;i+=2){
       temp=arr[i];
       arr[i]=arr[i+1];
       arr[i+1]=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d\n",arr[i]);
    }
}
```

Multiplication of two matrices

```c
#include<stdio.h>
void main(){
  int a[3][3],b[3][3],c[3][3];
  printf("enter the elements of the first matrix:");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&a[i][j]);
    }
  }
  printf("enter the elements of the second matrix:");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      scanf("%d",&b[i][j]);
    }
  }
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      c[i][j]=0;
      for(int k=0;k<3;k++){
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
  printf("the elements of the resultant matrix are:");
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
}
```

priting a pattern in a matrix

```c
#include<stdio.h>
void main(){
  int limit;
  printf("enter the limit:");
  scanf("%d",&limit);
  for(int i=1;i<=limit;i++){
     for(int j=limit;j>=i;j--){
      printf("\t");
     }
     for(int j=1;j<=i;j++){
       printf("%d\t",j);
     }
     for(int j=i-1;j>=1;j--){
      printf("%d\t",j);
     }
     printf("\n");
  }
}
```

### F flush function

```c
#include<stdio.h>
void main(){
   char a[10],b[10];
   scanf("%s",a);
   fflush(stdin);
   scanf("%s",b);
  printf("%s %s",a,b);
}
```
- used to remove the garbage value in the buffer
 
 ### do while loop
 
 ```c
 #include<stdio.h>
void main(){
  char c[20];
  int i=0;
  do{
    printf(">>");
    c[i]=getchar();
    i++;
  }while(c[i-1]!='.');
  printf("%s",c);
}
```

- this code gets input upto a dot

## Switch case

syntax
    
 ```c
switch(expression){
    case 1:
    //code
    break;
    case 2:
    //code
    break;
    default:
    //code
    break;
}
```

code
    
```c
#include<stdio.h>
void main(){
  int choice;
  printf("enter the choice:");
  scanf("%d",&choice);
  switch(choice){
    case 1:
    printf("one");
    break;
    case 2:
    printf("two");
    break;
    default:
    printf("invalid choice");
    break;
  }
}
```

using switch case to print addition , subtraction , multiplication , division

```c
#include<stdio.h>
void main(){
  int a,b;
  char option;
  printf("welcome :/\n'a'ddtion\n's'ubract\n'm'ultiply\n'd'ivide\n>>");
  do{
     scanf("%c",&option);
     switch(option){
      case 'a':
         printf("enter the two numbers with space:");
         scanf("%d%d",&a,&b);
         printf("%d\n>>",a+b);
         break;
      case 's':
         printf("enter the two numbers with space:");
         scanf("%d%d",&a,&b);
         printf("%d\n>>",a-b);
         break;
      case 'm':
         printf("enter the two numbers with space:");
         scanf("%d%d",&a,&b);
         printf("%d\n>>",a*b);
         break;
      case 'd':
         printf("enter the two numbers with space:");
         scanf("%d%d",&a,&b);
         printf("%d\n>>",(float)a/b);
         break;   
      case 'e':
         printf("you pressed end");
         break;  
      default: 
         printf("you pressed !--");
         break;
     }
  }while(option!='e');
}
```

### ternary operator

syntax

```c
condition?true:false
```

code

```c
#include<Stdio.h>
void main(){
  int a=1,b=2,c,max;
  max=(a>b)?a:b;
  printf("%d",max);
}
```

printing even or odd

```c
#include<stdio.h>
void main(){
    int number;
    printf("enter a number to check odd or even:");
    scanf("%d",&number);
    (number%2==0)?printf("even"):printf("odd");
}
```

## String functions

String reverse

```c
#include<stdio.h>
#include<string.h>
void main(){
  char a[10];
  printf("enter a string:");
  scanf("%s",a);
  printf("the reverse of the string is %s",strrev(a));
}
```

reverse a number


```c      
#include<stdio.h>
int main(){
    int n=245,remainder,c=0;
    while(n!=0){
       remainder=n%10;
       n=n/10;
       c=(c*10)+remainder;
    }
    printf("%d",c);
    return 0;
}
```

getting a array of sentences and printing it using puts

```c
#include<stdio.h>
void main(){
    char words[3][10];
    for(int i=0;i<3;i++){
        gets(words[i]);
    }
    for(int i=0;i<3;i++){
        puts(words[i]);
    }
}
```

function to sort an array

```c
/function to sort the array
#include<Stdio.h>
void main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    sort(arr,sizeof(arr)/sizeof(arr[0]));
}

void sort(int arr[],int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
}
```
find the length of the shortest string and longest string in array
```c
#include<stdio.h>
void main(){
    char arr[4][100],option;
    do{
    for(int i=0;i<4;i++){
        gets(arr[i]);
    }
    findlength(arr);
    printf("\npress e to end \ndo you want to continue:");
    scanf("%c",&option);   
}while(option!='e');
printf("the program has ended");
}


void findlength(char arr[4][100]){
    int length[4];
    for(int i=0;i<4;i++){
        length[i]=strlen(arr[i]);
    }
    for(int i=0;i<4;i++){
        printf("%d,",length[i]);
    }
    int temp;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(length[i]<length[j]){
                temp=length[i];
                length[i]=length[j];
                length[j]=temp;
            }
        }
    }
    findShorteststring(length,arr);
    findLongeststring(length,arr);
    calculateaveragelength(length,arr);
    abovethreshold(length,arr);
}

int findShorteststring(int length[],char arr[4][100]){
    for(int i=0;i<4;i++){
        if(length[0]==strlen(arr[i])){
            printf("\nthe length of the shortest string is %s",arr[i]);
            break;
        }
    }
}

int findLongeststring(int length[],char arr[4][100]){
    for(int i=0;i<4;i++){
        if(length[3]==strlen(arr[i])){
            printf("\nthe length of the longest string is %s",arr[i]);
            break;
        }
    }
}

int calculateaveragelength(int length[],char arr[4][100]){
    int sum=0;
    for(int i=0;i<4;i++){
        sum+=length[i];
    }
    printf("\nthe average length of the string is %d",sum/4);
    return 0;
}

int abovethreshold(int length[],char arr[4][100]){
    int threshold;
    printf("\nenter the threshold value:");
    scanf("%d",&threshold);
    for(int i=0;i<4;i++){
        if(length[i]>threshold){
            for(int j=0;j<4;j++){
                if(length[i]==strlen(arr[j])){
                    printf("\nthe string is %s",arr[j]);
            }
        }
        }
    }
}
```

### pointers

- the pointer is a variable that stores the address of another variable

syntax

```c
datatype *pointername;
```

code

```c
#include<stdio.h>
void main(){
    int a=10;
    int *p;
    p=&a;
    printf("%d",*p);
}
```

pointer passing to a function

```c
#include<stdio.h>
void main(){
    int a=10;
    int *p;
    p=&a;
    printf("%d",*p);
    change(p);
    printf("\n%d",*p);
}

void change(int *p){
    *p=20;
}
```

pointer to a array

```c
#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=arr;
    for(int i=0;i<10;i++){
        printf("%d,",*p);
        p++;
    }
}
```

pointer to a array using function

```c
#include<stdio.h>
void main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=arr;
    print(p);
}

void print(int *p){
    for(int i=0;i<10;i++){
        printf("%d,",*p);
        p++;
    }
}
```

### functions

- functions are used to perform a specific task
- functions are used to make the code more readable
- functions are used to reduce the complexity of the code

syntax

```c
returntype functionname(datatype parameter1,datatype parameter2){
    //code
    return value;
}
```

code

```c
#include<stdio.h>
int add(int a,int b);
void main(){
    int a=10,b=20;
    printf("%d",add(a,b));
}

int add(int a,int b){
    return a+b;
}
```

function prototype

```c
#include<stdio.h>
int add(int a,int b);
void main(){
    int a=10,b=20;
    printf("%d",add(a,b));
}

int add(int a,int b){
    return a+b;
}
```

void function

```c
#include<stdio.h>
void add(int a,int b);
void main(){
    int a=10,b=20;
    add(a,b);
}

void add(int a,int b){
    printf("%d",a+b);
}
```

### recursion

- recursion is a function that calls itself
- recursion is used to solve the problem that can be broken down into smaller problems of the same type

code

```c
#include<stdio.h>
int factorial(int n);
void main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("%d",factorial(n));
}

int factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
```

### structures

- structures are used to store the data of different data types
- structures are used to store the data of different data types under the same name
- structures are used to store the data of different data types under the same name and access them using a single pointer

syntax

```c
struct structurename{
    datatype member1;
    datatype member2;
    datatype member3;
    .
    .
    .
    datatype membern;
};
```

code
```c
#include<stdio.h>
struct student{
    char name[100];
    int rollno;
    int marks;
};

void main(){
    struct student s1;
    printf("enter the name:");
    scanf("%s",s1.name);
    printf("enter the rollno:");
    scanf("%d",&s1.rollno);
    printf("enter the marks:");
    scanf("%d",&s1.marks);
    printf("\nname:%s",s1.name);
    printf("\nrollno:%d",s1.rollno);
    printf("\nmarks:%d",s1.marks);
}
```

structure for storing the details of 10 students

```c
#include<stdio.h>
struct student{
    char name[100];
    int rollno;
    int marks;
};

void main(){
    struct student s1[10];
    for(int i=0;i<10;i++){
        printf("enter the name:");
        scanf("%s",s1[i].name);
        printf("enter the rollno:");
        scanf("%d",&s1[i].rollno);
        printf("enter the marks:");
        scanf("%d",&s1[i].marks);
    }
    for(int i=0;i<10;i++){
        printf("\nname:%s",s1[i].name);
        printf("\nrollno:%d",s1[i].rollno);
        printf("\nmarks:%d",s1[i].marks);
    }
}
```

passing structure to a function

```c
#include<stdio.h>
struct student{
    char name[100];
    int rollno;
    int marks;
};

void print(struct student s1){
    printf("\nname:%s",s1.name);
    printf("\nrollno:%d",s1.rollno);
    printf("\nmarks:%d",s1.marks);
}

void main(){
    struct student s1;
    printf("enter the name:");
    scanf("%s",s1.name);
    printf("enter the rollno:");
    scanf("%d",&s1.rollno);
    printf("enter the marks:");
    scanf("%d",&s1.marks);
    print(s1);
}
```



