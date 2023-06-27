//recursive function to calculate the power of a given number (x^n) where x and n are both integers

#include<Stdio.h>
void main(){
    int x,n;
    printf("enter the value of x and n:");
    scanf("%d%d",&x,&n);
    int result=power(x,n);
    printf("the result is %d",result);
}

int power(int x,int n){
    if(n==0){
        return 1;
    }
    else{
        return x*power(x,n-1);
    }
}



/*Implement a function that accepts a string and returns a dynamically allocated array of characters
containing the unique characters in the string, sorted in ascending order.*/

#include<Stdio.h>
void main(){
    char str[100];
    printf("enter a string:");
    gets(str);
    char *ptr=unique(str);
    printf("the unique characters are:");
    puts(ptr);
}

char *unique(char str[]){
    int i,j,k;
    char *ptr;
    ptr=(char *)malloc(100*sizeof(char));
    for(i=0;str[i]!='\0';i++){
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                break;
            }
        }
        if(i==j){
            ptr[k]=str[i];
            k++;
        }
    }
    return ptr;
}


/* Write a function that accepts a two-dimensional array of integers and returns the transpose of the
array (rows become columns and vice versa) without malloc.*/

#include<Stdio.h>
void main(){
    int arr[100][100],i,j,m,n;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    printf("enter the elements of the array:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    transpose(arr,m,n);
}

void transpose(int arr[100][100],int m,int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d",arr[j][i]);
        }
        printf("\n");
    }
}



/*Write a function that accepts a string and returns the longest palindrome substring in the string.*/

#include<Stdio.h>
void main(){
    char str[100];
    printf("enter a string:");
    gets(str);
    char *ptr=longestpalindrome(str);
    printf("the longest palindrome substring is:");
    puts(ptr);
}

char *longestpalindrome(char str[]){
    int i,j,k;
    char *ptr;
    ptr=(char *)malloc(100*sizeof(char));
    for(i=0;str[i]!='\0';i++){
        for(j=0;str[j]!='\0';j++){
            if(str[i]==str[j]){
                break;
            }
        }
        if(i==j){
            ptr[k]=str[i];
            k++;
        }
    }
    return ptr;
}


/*Implement a recursive function to solve the Tower of Hanoi problem with n disks, given three
towers.*/

#include<Stdio.h>
void main(){
    int n;
    printf("enter the number of disks:");
    scanf("%d",&n);
    towerofhanoi(n,'A','B','C');
}


void towerofhanoi(int n,char frompeg,char topeg,char auxpeg){
    if(n==1){
        printf("move disk 1 from peg %c to peg %c",frompeg,topeg);
        return;
    }
    towerofhanoi(n-1,frompeg,auxpeg,topeg);
    printf("move disk %d from peg %c to peg %c",n,frompeg,topeg);
    towerofhanoi(n-1,auxpeg,topeg,frompeg);
}



/*Write a function that accepts a two-dimensional array of integers and returns the largest square
submatrix that consists of only 1s*/


#include<Stdio.h>
void main(){
    int arr[100][100],i,j,m,n;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    printf("enter the elements of the array:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int result=largestsquare(arr,m,n);
    printf("the largest square submatrix is %d",result);
}

int largestsquare(int arr[100][100],int m,int n){
    int i,j,k;
    int max=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]==1){
                k=1;
                while(arr[i][j+k]==1 && arr[i+k][j]==1 && arr[i+k][j+k]==1){
                    k++;
                }
                if(k>max){
                    max=k;
                }
            }
        }
    }
    return max;
}


/*Write a function that accepts a pointer to a string and removes all the vowels from the string,
modifying it in-place.*/

#include<Stdio.h>
void main(){
    char str[100];
    printf("enter a string:");
    gets(str);
    removevowels(str);
    printf("the string after removing vowels is:");
    puts(str);
}


void removevowels(char str[]){
    int i,j;
    for(i=0;str[i]!='\0';i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            for(j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
            i--;
        }
    }
}

/* Create a function that accepts two dynamically allocated arrays of integers and merges them into
a new sorted array. The function should return a pointer to the merged array, and it should handle
the deallocation of the input arrays.*/


#include<Stdio.h>
void main(){
    int *ptr1,*ptr2;
    int n1,n2,i;
    printf("enter the size of the first array:");
    scanf("%d",&n1);
    printf("enter the size of the second array:");
    scanf("%d",&n2);
    ptr1=(int *)malloc(n1*sizeof(int));
    ptr2=(int *)malloc(n2*sizeof(int));
    printf("enter the elements of the first array:");
    for(i=0;i<n1;i++){
        scanf("%d",&ptr1[i]);
    }
    printf("enter the elements of the second array:");
    for(i=0;i<n2;i++){
        scanf("%d",&ptr2[i]);
    }
    int *ptr3=merge(ptr1,ptr2,n1,n2);
    printf("the merged array is:");
    for(i=0;i<n1+n2;i++){
        printf("%d",ptr3[i]);
    }
}


int *merge(int *ptr1,int *ptr2,int n1,int n2){
    int *ptr3;
    ptr3=(int *)malloc((n1+n2)*sizeof(int));
    int i,j,k;
    i=0;
    j=0;
    k=0;
    while(i<n1 && j<n2){
        if(ptr1[i]<ptr2[j]){
            ptr3[k]=ptr1[i];
            i++;
            k++;
        }
        else{
            ptr3[k]=ptr2[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        ptr3[k]=ptr1[i];
        i++;
        k++;
    }
    while(j<n2){
        ptr3[k]=ptr2[j];
        j++;
        k++;
    }
    return ptr3;
}

/*Write a function that accepts a pointer to a 2D array of integers and rotates the array 90 degrees
clockwise in-place.*/


#include<Stdio.h>
void main(){
    int arr[100][100],i,j,m,n;
    printf("enter the number of rows and columns:");
    scanf("%d%d",&m,&n);
    printf("enter the elements of the array:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    rotate(arr,m,n);
    printf("the rotated array is:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}


void rotate(int arr[100][100],int m,int n){
    int i,j,temp;
    for(i=0;i<m;i++){
        for(j=i+1;j<n;j++){
            temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n/2;j++){
            temp=arr[i][j];
            arr[i][j]=arr[i][n-j-1];
            arr[i][n-j-1]=temp;
        }
    }
}

/*Create a function that accepts a pointer to a 2D array of floating-point numbers and calculates
the average value of each column, storing the results in a dynamically allocated 1D array. The
function should return a pointer to the resulting array.*/

#include<Stdio.h>
void main(){
    float arr[100][100],i,j,m,n;
    printf("enter the number of rows and columns:");
    scanf("%f%f",&m,&n);
    printf("enter the elements of the array:");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%f",&arr[i][j]);
        }
    }
    float *ptr=avg(arr,m,n);
    printf("the average of each column is:");
    for(i=0;i<n;i++){
        printf("%f",ptr[i]);
    }
}

float *avg(float arr[100][100],int m,int n){
    float *ptr;
    ptr=(float *)malloc(n*sizeof(float));
    int i,j;
    float sum;
    for(i=0;i<n;i++){
        sum=0;
        for(j=0;j<m;j++){
            sum=sum+arr[j][i];
        }
        ptr[i]=sum/m;
    }
    return ptr;
}