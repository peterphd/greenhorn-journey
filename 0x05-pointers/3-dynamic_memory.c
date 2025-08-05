#include <stdio.h>
#include <stdlib.h>

int main (void){
	int size;
	int *dynamic_array;
	int i;

	printf("how many numbers do you want to store? ");
	scanf("%d", &size);

	/* alllocate memory for size integers */
	dynamic_array = malloc(size * sizeof(int));
	
	if (dynamic_array == NULL){
		printf("Memory allocation failed! \n");
		return 1;
	}

	/* filling array with values */

	printf("filling array with values: \n");
	for (i=0;i<size;i++){
		dynamic_array[i] = i+1;
	}
	printf("array content: ");
	for(i=0;i<size; i++){
		printf("%d ", dynamic_array[i]);
	}
	printf("\n");

	free(dynamic_array);
	return 0;
}
