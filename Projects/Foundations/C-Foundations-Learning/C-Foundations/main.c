#include <stdio.h>

void set_to_zero(int *arr, size_t size){
	for (size_t i = 0; i < size; i++) {
		arr[i] = 0;
	}
}

void swap(int *a, int *b){
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main(){
	int x = 100;
	int* xPtr = &x;
	int a = 10;
	int b = 20;
	int arr[5];
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Value of x: %d\n", x);
	printf("Address of x: %p\n", &x);
	printf("Address of x from pointer: %p\n", xPtr);
	printf("Value of x from pointer: %d\n", *xPtr);

	swap(&a, &b);

	printf("Value of a: %d\n", a);
	printf("Value of b: %d\n", b);

	set_to_zero(arr, size); // This will not work as intended, should pass an array

	printf("Array Values: ");
	for (size_t i = 0; i < size; i++) {
		printf((i == size - 1) ? "%d" : "%d, ", arr[i]);
	}

	return 0;
}