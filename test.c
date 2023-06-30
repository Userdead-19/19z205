// #include<stdio.h>
// struct test
// {
//     int a;
// };

// int main(){
//    struct test t1;
//    printf("hello world:");
//    scanf("%d",&t1.a);
//    printf("the value is :%d",t1.a);
//    return 0;
// }


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[10],c[100];
//     printf("hello world");
//     printf("\nenter a name:");
//     fgets(a,10,stdin);
//     int len;
//     printf("enter a number:");

//     printf("the number is :%d",len);
//     printf("\nenter the next name:");
//     gets(c);
//     printf("%s",c);
//     return 0;
// }


// #include<stdio.h>
// #include<math.h>
// void main(){
//     int a=3,b=4,c=5,d=6;
//     int Max=fmax(a,b);
//     int MAx2=fmax(Max,c);
//     int MAx3=fmax(MAx2,d);
//     printf("%d",MAx3);
// }


// #include <stdio.h>

// int main() {
//     char str[50];
//     int n;

//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin);

//     printf("the size of the string:");
//     scanf("%d",&n);

//     printf("You entered: %s and %d", str, n);

//     return 0;
// }


// #include<stdio.h>
// void main(){
//     char name[20];
//     int n;
//     printf("enter the variable :");
//     gets(name);

//     printf(">>");
//     scanf("%d",&n);
//     printf("the name is :%s",name);
// }


// #include<stdio.h>
// void main(){
//     int n;
//     printf(">>");
//     scanf("%d",&n);
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//             printf(" %d",n);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// #include<stdlib.h>
// void main(){
//     int n,a;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     a=n;
//     for(int i=1;i<=2*n-1;i++)
// {
//     for(int j=1;j<=2*n-1;j++)
//     {
//         if(j<n-abs(n-i)){printf("%d ",a);a--;}
//         else if(j>n+abs(n-i)){a++;printf("%d ",a);}
//         else printf("%d ",a);
//     }
//     printf("\n");
// }
// }



// #include<stdio.h>
// void main(){
//     char *c;
//     printf("enter your name:");
//     gets(c);
//     printf("the name is %s",c);
// }


// #include<stdio.h>
// #include<conio.h>
// void main(){
//  int a=10,*b,**c,***d;  //-12,-14,-16,-18

//   b=&a; //-12
//   c=&b; //-14
//   d=&c; //-16
//   printf("a : %d",a);
//   printf("\n b : %d  *b = %d",b,*b);
//   printf("\n c : %d , *c : %d, **c : %d",c,*c,**c);
//   **c=100;
//     printf("\na : %d",a);

//  }





// adding and multiping 3 numbers

//the numbers are %d and %d

//first number is 10 and second is 5

// #include<stdio.h>

// void main(){
//     char a[10],b[100],c[100];
//     printf(">>");
//     scanf("%s",a);
//     printf(">>");
//     scanf("%s",b);
//     printf(">>");
//     fgets(c,sizeof(c),stdin);
//     printf("%s",c);
// }


//print hello world

//print hi hi hello world

//the numbers are %d and %d

//first number is 10 and second is 5

// adding and multiping 3 numbers

//how does complier find header files in c

//header file path

// #include<stdio.h>
// void main(){
//     int x,y;
//     printf(">>");
//     scanf("%d",&x);
//     printf(">>");
//     scanf("%d",&y);
//     printf("the first numbers is %d and the second number is %d",x,y);
// }

// #include<stdio.h>
// void main(){
//     int x,y,z;
//     printf(">>");
//     scanf("%d",&x);
//     printf(">>");
//     scnaf("%d",&y);
//     printf(">>");
//     scanf("%d",&z);
//     printf("the sum of three numers is %d",x+y+z);
//     printf("the product of three numbers is %d",x*y*z);
// }

// #include<stdio.h>
// #include<math.h>
// void main(){
//     int n;
//     printf(">>");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         long double temp=pow(2,i);
//         printf("%d.%Lf\n",i,temp);
//     }
// }

// #include<stdio.h>
// #include<string.h>
// void main(){
//     int i=0;
//     char a[100];
//     tostring(a,i);
//     printf("%s",a);
// }


// #include<stdio.h>
// void main(){
//     float celsius;
//     printf(">>");
//     scanf("%f",&celsius);
//     printf("the fahrenheit is %f",((9/5)*celsius+35));
// }

// #include<stdio.h>
// #include<math.h>
// void main(){
//     double x=pow(9,100);
//     printf("%lf",x);
// }

// #include<stdio.h>
// #include<math.h>
// void main(){
//     for(int i=0;i<=1000;i++){
//         double x= pow(9,i);
//         printf("%Lf\n",x);
//     }
// }

// #include<stdio.h>
// void main(){
//     printf("the size of int is %d\n",sizeof(int));
//     printf("the size of float is %d\n",sizeof(float));
//     printf("the size of char is :%d\n",sizeof(char));
//     printf("the size of double is :%d\n",sizeof(double));
//     printf("the size of long double is :%d\n",sizeof(long double));
//     printf("the size of unsigned int is :%d\n",sizeof(unsigned int));
//     printf("the size of short int is :%d\n",sizeof(short int));
//     printf("the size of the long int is :%d\n",sizeof(long int));
//     printf("the size of long long int is :%d\n",sizeof(long long int));
//     printf("the size of unsigned long int is :%d\n",sizeof(unsigned long int));
//     printf("the size of unsigned long long int is:%d\n",sizeof(unsigned long long int));
//     printf("the size of signed char is :%d\n",sizeof(signed char));
//     printf("the size of unsigned char is :%d\n",sizeof(unsigned char));
// }


// #include<stdio.h>
// void main(){
//     unsigned char u=0;
//     for(u=0;u<=255;u++){
//        printf("%c",u);
//     }
// }

// #include<stdio.h>
// void main(){
//     float f=10.03;
//     printf("%d",f);
// }


// #include<stdio.h>
// void main(){
//     for(int i=100000;i>=1;i-=12){
//         printf("%d\n",i);
//     }
// }

//multplication table parralel

// #include<stdio.h>
// void main(){
//    int multiple,limit;
//    printf("enter the limit number:");
//    scanf("%d",&limit);
//    printf("enter the number to find its multipication table:");
//    scanf("%d",&multiple);
//    for(int i=1;i<=limit;i++){
//     for(int j=1;j<=multiple;j++){
//       printf("%d x %d = %d\t",i,j,(i*j));
//     }
//     printf("\n");
//    }
// }

// // pattern

// #include<stdio.h>
// void main(){
//   int limit;
//   printf("enter the limit:");
//   scanf("%d",&limit);
//   for(int i=1;i<=limit;i++){
//      for(int j=limit;j>=i;j--){
//       printf("\t");
//      }
//      for(int j=1;j<=i;j++){
//        printf("%d\t",j);
//      }
//      for(int j=i-1;j>=1;j--){
//       printf("%d\t",j);
//      }
//      printf("\n");
//   }
//   printf("");
// }




// #include<stdio.h>
// void main(){
//   int b=5,c;
//   c=++b;
//   printf("%d",c);
// }




//op: 123123123 -start and ending range from user

// #include<stdio.h>
// void main(){
//   int start,end,limit,j=0;
//   printf("enter the starting and ending values:");
//   scanf("%d%d",&start,&end);
//   printf("enter the limit:");
//   scanf("%d",&limit);
//   while(limit>=j){
//   for(int i=start;i<=end;i++){
//     printf("%d\n",i);
//     j++;
//     if(j==limit){
//       goto  jump;
//     }
//   }
//   }
//   jump:
//     printf("the loop is over");
// }

/*x=3
o/p=123123
*/


// #include<stdio.h>
// void main(){
//   int i=1;
//   while(i<500){
//     if(i%5==0){
//       i++;
//     continue;}
//   }
//   printf("%d",i);
//   i++;
// }



// #include<stdio.h>
// void main(){
//   int i;
//   printf("enter the value of i:");
//   scanf("%d",&i);
//   for(int j=1;j<=10;j++){
//     if(j%5==0){
//       continue;
//     }
//     printf("%d x %d = %d\n",j,i,(j*i));
//   }
// }


// #include<stdio.h>
// void main(){
//   for(int i=1;i<=10;i++)
//   for (int j=2;j<5;j++)
//    printf("%d",j);
//   if(j%2==0){
//    printf("");
//   }
// }


// #include<stdio.h>

// void main()
// {
//   int i;
//   int j=1;
//    for (i=1;i<=20;i=i*3)
//    {
//      printf("3*%d=%d\n",j,i);
//      j++;
//    }
// }



// #include<stdio.h>
// void main(){
//   int i=35;
//   printf("decimal =%d octal=%o hexa deimal =%x",i,i,i);
// }

// #include<stdio.h>
// void main(){
//   float n;
//   scanf("%5f",&n);
//   printf("%f",n);
// }

// #include<stdio.h>

// void main(){
//   int n[100];
//   for(int i=0;i<100;i++){
//     scanf("%d",&n[i]);
//   }
//   for(int i=0;i<100;i++){
//     printf("%d",n[i]);
//   }
//   printf("%d",sizeof(n));
// }



// #include<stdio.h>
// void main(){
//   char names[10][10];
//   //for(int i=0;)
// }

//consider an array with base address B the index starts from 0 and the elements maybe in rmo or cmo in the index x,y is given must return the adress of the variable
//total no rows is r and total number of columns is c

// #include<stdio.h>
// void main(){
//   int n[2][2]={{1,2},{3,4}};
//   int baseaddress;
//   printf("the first address is : %d\n",&n[0][0]);
//   printf("enter the base address:");
//   scanf("%d",&baseaddress);
//   for(int i=0;i<2;i++){
//     for(int j=0;j<2;j++){
//       int  temp=&n[i][j];
//       if(temp==baseaddress){
//         printf("the element is :%d",n[i][j]);
//       }
//     }
//   }
// }



// #include<Stdio.h>
// void main(){
//   int a[2][2]={{1,2},{3,4}};
//   int row,column;
//   printf("enter the row and column to find its address:");
//   scanf("%d%d",&row,&column);
//   printf("the address of the given row and column is :%d",&a[row][column]);
//  }

//
// #include<stdio.h>
// void main(){
//     int arr[100];
//     int sum=0;
//     for(int i=0;i<100;i++){
//         arr[i]=i;
//     }
//     for(int i=0;i<100;i++){
//         sum+=arr[i];
//     }
//     printf("the average is :%f",(float)sum/100);
// }


// #include<stdio.h>
// void main(){
//     int arr[5]={1,2,3,4,5},temp;
//     for(int i=0;i<5;i+=2){
//        temp=arr[i];
//        arr[i]=arr[i+1];
//        arr[i+1]=temp;
//     }
//     for(int i=0;i<5;i++){
//         printf("%d\n",arr[i]);
//     }
// }



// #include<stdio.h>
// void main(){
//  int arr[10];
//  for(int i=0;i<10;i++){
//     printf("%d\n",arr[i]);
//  }
// }


// #include<stdio.h>
// void main(){
//    int a[3][2],b[3][2],c[3][2];
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//         scanf("%d",&a[i][j]);
//     }
//   }
//      for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//         scanf("%d",&b[i][j]);
//     }
//   }
//    for(int i=0;i<3;i++){
//        for(int j=0;j<2;j++){
//         c[i][j]=a[i][j]+b[i][j];
//         printf("%d \t",c[i][j]);
//     }
//     printf("\n");
//   }
// }

// #include<stdio.h>
// void main(){
//   int limit;
//   printf("enter the limit:");
//   scanf("%d",&limit);
//   for(int i=1;i<=limit;i++){
//      for(int j=limit;j>=i;j--){
//       printf("\t");
//      }
//      for(int j=1;j<=i;j++){
//        printf("%d\t",j);
//      }
//      for(int j=i-1;j>=1;j--){
//       printf("%d\t",j);
//      }
//      printf("\n");
//   }
// }



// #include<stdio.h>
// void main(){
//     int a[3][3]={{0,0,0},{0,0,0},{0,0,0}};
//     for(int i=0;i<3;i++){
//         for(int j=i;j<3;j++){
//             printf("a[%d][%d]=",i,j);
//              scanf("%d",&a[i][j]);
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//              printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
// }


// #include<stdio.h>
// void main(){
//    char a[10],b[10];
//    scanf("%s",a);
//    fflush(stdin);
//    scanf("%s",b);
//   printf("%s %s",a,b);
// }



// #include<stdio.h>
// void main(){
//   char c[20];
//   int i=0;
//   do{
//     printf(">>");
//     c[i]=getchar();
//     i++;
//   }while(c[i-1]!='.');
//   printf("%s",c);
// }



// #include<stdio.h>
// void main(){
//   int a,b;
//   char option;
//   printf("welcome :/\n'a'ddtion\n's'ubract\n'm'ultiply\n'd'ivide\n>>");
//   do{
//      scanf("%c",&option);
//      switch(option){
//       case 'a':
//          printf("enter the two numbers with space:");
//          scanf("%d%d",&a,&b);
//          printf("%d\n>>",a+b);
//          break;
//       case 's':
//          printf("enter the two numbers with space:");
//          scanf("%d%d",&a,&b);
//          printf("%d\n>>",a-b);
//          break;
//       case 'm':
//          printf("enter the two numbers with space:");
//          scanf("%d%d",&a,&b);
//          printf("%d\n>>",a*b);
//          break;
//       case 'd':
//          printf("enter the two numbers with space:");
//          scanf("%d%d",&a,&b);
//          printf("%d\n>>",(float)a/b);
//          break;
//       case 'e':
//          printf("you pressed end");
//          break;
//       default:
//          printf("you pressed !--");
//          break;
//      }
//   }while(option!='e');
// }
//given matrices of 0 and 1 find all sub matrices that are all ones

//get character as input using scanf getchar using getch
// write the fucntion prototype for getch getche and getchar
//get the input from one string without spaces using scanf gets
//one input of a string with spaces
//paragraph as input using gets
// get multiple paragraphs as input using gets
//get input till d is pressed
//other way of format of specifiers

// // input character
// #include<stdio.h>
// void main(){
//     char a,x;
//     scanf("%c",&a);
//     x=getchar();
// }

// //input character without space
// #include<stdio.h>
// void main(){
//     char x[10];
//     scanf("%s",x);
//     gets(x);
// }


// //innput with space
// #include<stdio.h>
// void main(){
//     char a[10];
//     gets(a);
// }

// //paragraph input with gets
// #include<stdio.h>
// void main(){
//     char a[100];
//     gets(a);
//     printf("%s",a);
// }

// //multiple paragraphs as input
// #include<Stdio.h>
// void main(){
//     char paragraph[3][100];
//     int i=0;
//     while(i<3){
//         gets(paragraph[i]);
//         printf("%s\n",paragraph[i]);
//         i++;
//     }
// }

// //input till "d" is pressed

// #include<stdio.h>
// void main(){
//     char a;
//     do{
//         a=getchar;
//         printf("%c",a);
//     }while(a!='d');
// }



// #include<Stdio.h>
// void main(){
//   int a=1,b=2,c,max;
//   max=(a>b)?a:b;
//   printf("%d",max);
// }


// #include<stdio.h>
// void main(){
//     int number;
//     printf("enter a number to check odd or even:");
//     scanf("%d",&number);
//     (number%2==0)?printf("even"):printf("odd");
// }


// #include<Stdio.h>
// void main(){
//     int a=1,b=2,c=3;
//     (a>b && a>c)?printf("a is greatest"):(b>a && b>c)?printf("b is greatest"):printf("c is greatest");;
// }

// #include<Stdio.h>
// void main(){
//     char a=5,b=6;
//     printf("%d",a&b);
//     printf("%d",a&&b);
// }


//swap two number without using a temp variable
//find the element that appears only once


// #include<stdio.h>
// void main(){
//     char a=5,b=1;
//     printf("%d",a>>b);
// }

// #include<Stdio.h>
// #include<string.h>
// void main(){
//     char a[10]="hello";
//     printf("%s",strrev(a));
// }


// #include<Stdio.h>
// #include<string.h>
// void main(){
//     char ch[10],x[10];
//     printf("enter:");
//     scanf("%s",ch);
//     strrev(ch);
//     printf("%s",ch);
// }



//reverse a number
// #include<stdio.h>
// int main(){
//     int n=245,remainder,c=0;
//     while(n!=0){
//        remainder=n%10;
//        n=n/10;
//        c=(c*10)+remainder;
//     }
//     printf("%d",c);
//     return 0;
// }

//vowel or consonant
// #include<stdio.h>
// void main(){
//     int vowel=0,consonant=0;
//     char input,vowels[]={'a','e','i','o','u'};
//     printf("enter the character:");
//     input=getchar();
//     for(int i=0;i<5;i++){
//         (input==vowels[i])?vowel++:consonant++;
//     }
//     (vowel!=0)?printf("it is a vowel"):printf("it is a consonant");
// }


// palindome check for a string
// #include<stdio.h>
// void main(){
//     int condition=0;
//     char input[10];
//     printf("enter the word to check for palindrome:");
//     gets(input);
//     for(int i=0;i<sizeof(input);i++){
//         for(int j=1;j<=sizeof(input);j++){
//         printf("[i]%c[-i]%c",input[i],input[-i]);
//         if(input[i]==input[-j]){
//            continue;
//         }
//         else{
//             condition++;
//             break;
//         }
//         }
//     }
//     if(condition==1){
//         printf("it is not a palindrome");
//     }
//     else{
//         printf("it is a palindrome");
//     }
// }


// adding and multiping three numbers
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the three numbers:");
//     scanf("%d%d%d",&a,&b,&c);
//     printf("the sum of three numbers is %d\n",a+b+c);
//     printf("the product of three numbers is %d\n",a*b*c);
//     return 0;
// }

#include<Stdio.h>
void main(){
  printf("hello world");
}
