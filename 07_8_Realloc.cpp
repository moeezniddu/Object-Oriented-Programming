#include <stdio.h>
#include <stdlib.h>

// realloc(void *ptr, size_t size) is a function change the size 
// of a previously allocated memory block. 
// It takes two arguments: a pointer to the previously allocated 
// memory block, and the new size of the block.

int main() 
{    
    int *array = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        array[i] = i;
    }

    // Print the array
    printf("\nBefore reallocation\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }

    // Increase the size of the array to 10
    array = (int *)realloc(array, 10 * sizeof(int));
    // Print the array
    for (int i = 5; i < 10; i++) {
        array[i] = i;
    }
    
    printf("\nAfter reallocation\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    
    free(array);
    return 0;
}