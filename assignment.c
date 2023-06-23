
//1
// #include<stdio.h>
// void main(){
//     int number,remainder,quotient,sumofdigits=0;
//     printf("Enter the number :");
//     scanf("%d",&number);
//     while(number!=0){
//        quotient=number%10;
//        number=number/10;
//        sumofdigits=sumofdigits+quotient;  
//     }    
//     printf("the sum of digits is :%d",sumofdigits);
// }


// #include<stdio.h>
// void main(){
//     char a,vowels[]={'a','e','i','o','u'};
//     int condition=0,vowel=0;
//     printf("enter the character:");
//     scanf("%c",&a);
//     for(int i=0;i<5;i++){
//         (a==vowels[i])?vowel++:condition++;
//     }
//     (vowel!=0)?printf("it is a vowel"):printf("it is a consonant");
// }


// #include<stdio.h>
// void main(){
//     int month;
//     printf("enter the month:");
//     scanf("%d",&month);
//     switch(month){
//         case 1:
//           printf("january");
//           break;
//         case 2:
//           printf("febraury");
//           break;
//         case 3:
//           printf("march");
//           break;
//         case 4:
//           printf("april");
//           break;
//         case 5:
//           printf("may");
//           break;
//         case 6:
//           printf("june");
//           break;
//         case 7:
//           printf("july");
//           break;
//         case 8:
//           printf("august");
//           break;
//         case 9:
//           printf("september");
//           break;
//         case 10:
//           printf("october");
//           break;
//         case 11:
//           printf("november");
//           break;
//         case 12:
//           printf("december");
//           break;
//         default:
//           printf("invalid month number");
//           break;
//      }
// }


// #include<Stdio.h>
// #include<string.h>
// void main(){
//     char a[10];
//     printf("enter the string input:");
    
    
// }

// #include<stdio.h>
// void main(){
//     int count;
//     printf("enter the rows:");
//     scanf("%d",&count);
//     for(int i=1;i<=count;i++){
//           for(int j=1;j<=i;j++){
//             printf("*");
//           } 
//           printf("\n");
//     }
// }

// #include<stdio.h>
// void main(){
//     int number[3][3]={{1,2,3},{4,5,6},{7,8,9}},max=number[0][0];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(number[i][j]>max){
//                 max=number[i][j];
//             }
//         }
//     }
//     printf("the maximum number is :%d",max);
// }

// #include<stdio.h>
// void main(){
//     char words[3][10];
//     for(int i=0;i<3;i++){
//         gets(words[i]);
//     }
//     for(int i=0;i<3;i++){
//         puts(words[i]);
//     }
// }



// #include<stdio.h>
// void main(){
//     int number;
//     printf("enter the number:");
//     scanf("%d",&number);
//     printf("%x",number);
// }


// #include<Stdio.h>
// void main(){
//     char String[10];
//     int number;
//     printf("enter the string and number:");
//     scanf("%s%d",String,&number);
//     printf("the string is %s and the number is %5d",String,number);
// }

// #include<Stdio.h>
// #include<stdlib.h>
// void main(){
//     int ran=rand()%50;
//     int guess;
//     printf("%d\n",ran);
//     do{
//         printf("have a guess:");
//         scanf("%d",&guess);
//         if(guess==ran){
//             printf("you have found it!!!");
//             break;
//         }
//         else{
//             printf("wrong guess please try again\n");
//         }
//     }while(1);
// }





// #include <stdio.h>
// #include <string.h>

// int main(){
//     char s[100];
//     scanf("%s",s);
//     (strcmp(s,strrev(s)))?printf("Not a palindrome"):printf("palindrome");
// }



///function to sort the array
// #include<Stdio.h>
// void main(){
//     int arr[]={1,2,3,4,5,6,7,8,9,10};
//     sort(arr,sizeof(arr)/sizeof(arr[0]));
// }

// void sort(int arr[],int size){
//     int temp;
//     for(int i=0;i<size;i++){
//         for(int j=0;j<size;j++){
//             if(arr[i]<arr[j]){
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     for(int i=0;i<size;i++){
//         printf("%d,",arr[i]);
//     }
// }

// //find the length of the shortest string and longest string in array
// #include<stdio.h>
// void main(){
//     char arr[4][100],option;
//     do{
//     for(int i=0;i<4;i++){
//         gets(arr[i]);
//     }
//     findlength(arr);
//     printf("\npress e to end \ndo you want to continue:");
//     scanf("%c",&option);   
// }while(option!='e');
// printf("the program has ended");
// }


// void findlength(char arr[4][100]){
//     int length[4];
//     for(int i=0;i<4;i++){
//         length[i]=strlen(arr[i]);
//     }
//     for(int i=0;i<4;i++){
//         printf("%d,",length[i]);
//     }
//     int temp;
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             if(length[i]<length[j]){
//                 temp=length[i];
//                 length[i]=length[j];
//                 length[j]=temp;
//             }
//         }
//     }
//     findShorteststring(length,arr);
//     findLongeststring(length,arr);
//     calculateaveragelength(length,arr);
//     abovethreshold(length,arr);
// }

// int findShorteststring(int length[],char arr[4][100]){
//     for(int i=0;i<4;i++){
//         if(length[0]==strlen(arr[i])){
//             printf("\nthe length of the shortest string is %s",arr[i]);
//             break;
//         }
//     }
// }

// int findLongeststring(int length[],char arr[4][100]){
//     for(int i=0;i<4;i++){
//         if(length[3]==strlen(arr[i])){
//             printf("\nthe length of the longest string is %s",arr[i]);
//             break;
//         }
//     }
// }

// int calculateaveragelength(int length[],char arr[4][100]){
//     int sum=0;
//     for(int i=0;i<4;i++){
//         sum+=length[i];
//     }
//     printf("\nthe average length of the string is %d",sum/4);
//     return 0;
// }

// int abovethreshold(int length[],char arr[4][100]){
//     int threshold;
//     printf("\nenter the threshold value:");
//     scanf("%d",&threshold);
//     for(int i=0;i<4;i++){
//         if(length[i]>threshold){
//             for(int j=0;j<4;j++){
//                 if(length[i]==strlen(arr[j])){
//                     printf("\nthe string is %s",arr[j]);
//             }
//         }
//         }
//     }
// }





// #include<stdio.h>
// #include <string.h>
// int main()
// {
//   char a[5][100];
//   int i,j,n;
//   char t[100];
//   printf("enter no of elements:");
//   scanf("%d",&n);
//   printf("enter the elements:\n");
//   for(i=0;i<n;i++){
//   scanf("%s",a[i]);
//   }
//   for (i=0;i<n;i=i+2){
//   if(i==n-1){
//     break;
//   }else{  
//   strcpy(t,a[i]);
//   strcpy(a[i],a[i+1]);
//   strcpy(a[i+1],t);
//   }
//   }
// printf("the sorted array is:");
// for (i=0;i<n;i++)
// {
//     printf("%s\n",a[i]);
// }
// return 0;
// }


// #include<Stdio.h>
// #include<string.h>
// void main(){
//     char string1[10],string2[10];
//     printf("enter a string:");
//     gets(string1);
//     strcpy(string2,string1);
//     printf("the copied string is :%s",string2);
// }

// #include<Stdio.h>
// struct employee{
//     char name[20];
//     int id;
    
// };
// void main(){
//     struct employee e={
//         "sai",
//         1
//     };
//     print   f("the name is %s and the id is %d",e.name,e.id);
// }

// #include<stdio.h>
// #include<string.h>
// struct employee{
//     char name[20];
//     int id;
// }e[3];
// void main(){
//     for(int i=0;i<3;i++){
//         printf("enter the name:");
//         gets(e[i].name);
//         printf("enter the id:");
//         scanf("%d",&e[i].id);
//         getchar();
//     }
//     for(int i=0;i<3;i++){
//         printf("the name is %s and the id is %d\n",e[i].name,e[i].id);
//     }
// }


// #include<stdio.h>
// struct employee{
//     char name[20];
//     int id;
// }e[3];

// void main(){
//     e[0]=(struct employee){
//         "sai",
//         1
//     };
//     e[1]=(struct employee){
//         "hello",
//         2
//     };
//     e[2]=(struct employee){
//         "world",
//         3
//     };
//     for(int i=0;i<3;i++){
//         printf("the name is %s and the id is %d\n",e[i].name,e[i].id);
//     }
// }


// #include<stdio.h>
// struct student{
//     char name[20];
//     int id;
//     int marks[3];
//     int total;
//     float average;
// }student[3];

// void main(){
//     for(int i=0;i<3;i++){
//         printf("enter the name:");
//         gets(student[i].name);
//         printf("enter the id:");
//         scanf("%d",&student[i].id);
//         printf("enter the marks of 3 subjects:");
//         for(int j=0;j<3;j++){
//             scanf("%d",&student[i].marks[j]);
//         }
//         getchar();
//     }
//     for(int i=0;i<3;i++){
//         student[i].total=0;
//         for(int j=0;j<3;j++){
//             student[i].total+=student[i].marks[j];
//         }
//         student[i].average=student[i].total/3;
//     }
//     for(int i=0;i<3;i++){
//         printf("the name is %s and the id is %d\n",student[i].name,student[i].id);
//         printf("the total marks is %d and the average is %f\n",student[i].total,student[i].average);
//     }
// }

// #include<stdio.h>
// struct student {
//     int marks[3];
//     int total;
//     float average;
// };

// void main(){
//    struct student stdArr[3];
//    for(int i=0;i<3;i++){
//        printf("enter the marks of 3 subjects:");
//        for(int j=0;j<3;j++){
//            scanf("%d",&stdArr[i].marks[j]);
//        }
//    }
//    for(int i=0;i<3;i++){
//     calculate_average(stdArr[i]);
//    }
// }


// void calculate_average(struct student std){
//     std.total=0;
//     for(int i=0;i<3;i++){
//         std.total+=std.marks[i];
//     }
//     std.average=std.total/3;
//     printf("the total marks is %d and the average is %f\n",std.total,std.average);
// }

// #include <stdio.h>

// // creating a student structure template
// struct student {
//   char firstname[64];
//   char lastname[64];
//   char id[64];
//   int score;
// };
  
// // function declaration
// void displayDetail(struct student std);

// int main(void) {
  
//   // creating a student structure array variable
//   struct student stdArr[3];
  
//   // other variables
//   int i;
  
//   // taking user input
//   for (i = 0; i < 3; i++) {
//     printf("Enter detail of student #%d\n", (i+1));

//     printf("Enter First Name: ");
//     scanf("%s", stdArr[i].firstname);
  
//     printf("Enter Last Name: ");
//     scanf("%s", stdArr[i].lastname);
  
//     printf("Enter ID: ");
//     scanf("%s", stdArr[i].id);
  
//     printf("Enter Score: ");
//     scanf("%d", &stdArr[i].score);
//   }
  
//   // output
//   for (i = 0; i < 3; i++) {
//     printf("\nStudent #%d Detail:\n", (i+1));
//     displayDetail(stdArr[i]);
//   }
  
//   return 0;
// }

// void displayDetail(struct student std) {
//   printf("Firstname: %s\n", std.firstname);
//   printf("Lastname: %s\n", std.lastname);
//   printf("ID: %s\n", std.id);
//   printf("Score: %d\n", std.score);
// }



// #include<stdio.h>
// struct student{
//     char name[20];
//     int id;
//     int marks[3];
//     int total;
//     float average;
// }student[3];

// void main(){
//   calculate_average(student);
// }

// void calculate_average(struct student std[3]){
//      for(int i=0;i<3;i++){
//         printf("enter the name:");
//         gets(std[i].name);
//         printf("enter the id:");
//         scanf("%d",&std[i].id);
//         printf("enter the marks of 3 subjects:");
//         for(int j=0;j<3;j++){
//             scanf("%d",&std[i].marks[j]);
//         }
//         getchar();
//      }
//         for(int i=0;i<3;i++){
//             std[i].total=0;
//             for(int j=0;j<3;j++){
//                 std[i].total+=std[i].marks[j];
//             }
//             std[i].average=std[i].total/3;
//         }
//         for(int i=0;i<3;i++){
//             printf("the name is %s and the id is %d\n",std[i].name,std[i].id);
//             printf("the total marks is %d and the average is %f\n",std[i].total,std[i].average);
//         }
// }