#include <stdlib.h>
#include <stdio.h>

int main() {

	int *x = malloc(sizeof(int)); 

	*x = 7;

	realloc(x, 2 * sizeof(int));

	*(x + 1) = 13;

	printf("%d\n", *x);

	printf("%d\n", *(x + 1));

	free(x);

}
