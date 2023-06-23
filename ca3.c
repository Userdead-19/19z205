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