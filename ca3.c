// 16/6/23


// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {

// 	// This pointer will hold the
// 	// base address of the block created
// 	int* ptr;
// 	int n, i;

// 	// Get the number of elements for the array
	
// 	printf("Enter number of elements: ");
//     scanf("%d", &n);
    
// 	// Dynamically allocate memory using calloc()
// 	ptr = (int*)calloc(n, sizeof(int));

// 	// Check if the memory has been successfully
// 	// allocated by calloc or not
// 	if (ptr == NULL) {
// 		printf("Memory not allocated.\n");
// 		exit(0);
// 	}
// 	else {

// 		// Memory has been successfully allocated
// 		printf("Memory successfully allocated using calloc.\n");

// 		// Get the elements of the array
// 		for (i = 0; i < n; ++i) {
// 			ptr[i] = i + 1;
// 		}

// 		// Print the elements of the array
// 		printf("The elements of the array are: ");
// 		for (i = 0; i < n; ++i) {
// 			printf("%d, ", ptr[i]);
// 		}
// 	}

// 	return 0;
// }


// //write a program that gets a sentence as input and randomly allocates memory for that sentence 
// //count the number of words in that sentence

    // #include<stdio.h>
    // struct products{
    // 	char name[20];
    // 	int quantity;
    // 	int costofproduct;
    // }p[5];
    // void main(){
    //   for(int i=0;i<5;i++){	
    //   printf("Enter the name of the product: ");
    //   scanf("%s", &ptr[i].name);
    //   printf("Enter the quantity of the product: ");
    //   scanf("%d", &ptr[i].quantity);
    //   printf("Enter the cost of the product: ");
    //   scanf("%d", &ptr[i].costofproduct);
    //   printf("The name of the product is %s\n", ptr[i].name);
    //   printf("The quantity of the product is %d\n", ptr[i].quantity);
    //   printf("The cost of the product is %d\n", ptr[i].costofproduct);
    // }
    // }

// #include<Stdio.h>
// void main(){
//     for(func();func();func())
//      printf("%d",func());
// }

// int i=16;

// int func(){
//     extern int i;
//     return i--;
// }



#include<Stdio.h>
#include<string.h>
struct str{
    char productname[100];
    int no_ofproducts;
    float priceof1product;
};
int i=0;
void getitem(number);
void printi(i);//print i th element 
void printall(); //print all elements
int search(string); // to check the item is present in the array
int  greaterthanN(number,structs); //return all the items that have units greater than threshold
void sort();//based on price
void main(){
    int number,option,i;
    char pro[100];
    printf("enter the number of items:");
    scanf("%d",&number);
    struct str ptr[number];
    getitem(number,ptr);
    printf("here are the options:\n1.print a particular element\n2.print all the elements\n3.search a product\n4.greater than threshold");
    scanf("%d",&option);
    if(option==1){
        printf("enter to find a particular element:");
        scanf("%d",&i);
        printi(i,ptr);
    }
    else if(option==2){
        printall(ptr);
    }
    else if(option==3){
        printf("enter a product name to search for it:");
        gets(pro);
        int x=search(pro,ptr);
    }
    else if(option==4){
        printf("enter the threshold value:");
        scanf("%d",&number);
        int x=greaterthanN(number,ptr);
    }
    else{
        printf("enter a valid option");
    }
}

void getitem(int number,struct str ptr[]){
    extern int i; 
    for(i=0;i<number;i++){
        printf("enter the name of the product :");
        gets(ptr[i].productname);
        printf("enter the number of products:");
        scanf("%d",&ptr[i].no_ofproducts);
        printf("enter the price of 1 product:");
        scanf("%f",&ptr[i].priceof1product);
    }
}

//function to print the i th element and return the structure elements
void printi(int i,struct str ptr[]){
    
    printf("the name of the products is :%s",ptr[i].productname);
    printf("the no of quantites:%d",ptr[i].no_ofproducts);
    printf("the cost of 1 product is :%f",ptr[i].priceof1product);
    //return ptr[i];
}

// struct item printi(struct str ptr[]){
//     return ptr[i];
// }

void printall(struct str ptr[]){
    extern int i;
    
    for(int j=0;j<i;j++){
    printf("the name of the products is :%s",ptr[j].productname);
    printf("the no of quantites:%d",ptr[j].no_ofproducts);
    printf("the cost of 1 product is :%f",ptr[j].priceof1product);
    }
}


// function to search a product in the structue
int search(char string[],struct str ptr[]){
    extern int i;
    for(int j=0;j<i;j++){
        if(strcmp(ptr[j].productname,string)==0){
            return j;
        }
    }
    return -1;
}

//function to return all the products that have units greater than threshold
int greaterthanN(int number,struct str ptr[]){
    extern int i;
    for(int j=0;j<i;j++){
        if(ptr[j].no_ofproducts>number){
            printf("the name of the products is :%s",ptr[j].productname);
            printf("the no of quantites:%d",ptr[j].no_ofproducts);
            printf("the cost of 1 product is :%f",ptr[j].priceof1product);
        }
    }
}

//function to sort the products based on price
void sort(struct str ptr[]){
    extern int i;
    for(int j=0;j<i;j++){
        for(int k=0;k<i;k++){
            if(ptr[j].priceof1product>ptr[k].priceof1product){
                struct str temp=ptr[j];
                ptr[j]=ptr[k];
                ptr[k]=temp;
            }
        }
    }
    printall(ptr);
}