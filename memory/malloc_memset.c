#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void test_ptr_to_ptr(int **ptr_to_ptr) {
	*(*ptr_to_ptr + 5) = 12;
}

int main () {

	int *ptr = malloc(15 * sizeof(int));
	memset(ptr, 0, 15 * sizeof(int));

	*(ptr + 5) = 16;

	printf("%d\n", *(ptr + 5));

	test_ptr_to_ptr(&ptr);

	printf("%d\n", *(ptr + 5));

	free(ptr);

}
