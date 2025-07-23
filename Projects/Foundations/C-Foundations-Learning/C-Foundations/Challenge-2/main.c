#include <stdio.h>

void reverseIntArray(int *array, size_t size) {
	for (size_t i = 0; i < (int)(size / 2); i++) {
		if (*(array + i) != *(array + (size - 1) - i)) {
			*(array + i) = *(array + i) ^ *(array + (size - 1) - i);
			*(array + (size - 1) - i) = *(array + i) ^ *(array + (size - 1) - i);
			*(array + i) = *(array + i) ^ *(array + (size - 1) - i);
		}
	}
}

void stringPrinter(char *string, size_t size) {
	for (size_t i = 0; i < size; i++) {
		printf("%c", *(string + i));
	}
}

int main() {
	float num = 5.6f;
	float *ptr = &num;
	char greeting[6] = "hello";
	int size = sizeof(greeting) / sizeof(greeting[0]);
	int integerArray[5] = {1, 2, 3, 4, 5};

	printf("Value of num: %.2f\n", num);
	printf("Address of num variable: %p\n", (void*)&num);
	printf("Address of num variable from the pointer: %p\n", (void*)ptr);
	printf("Value of num from pointer deference: %.2f\n", *ptr);

	stringPrinter(greeting, size);
	reverseIntArray(integerArray, 5);

	printf("\nReversed Integer Array: ");
	for (size_t i = 0; i < 5; i++) {
		printf((i == 4) ? "%d" : "%d, ", *(integerArray + i));
	}

	return 0;
}