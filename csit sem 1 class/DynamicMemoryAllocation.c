#include <stdio.h>
#include <stdlib.h>
 
int main()
{
 
    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n;
 
    // Get the number of elements for the array
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("Enter number of elements: %d\n", n);
 
    // Dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));
 
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using calloc.\n");
 
        // Get the elements of the array
        for (int i = 0; i < n; ++i) {
            printf("enter the salaray of employee%d:",i+1);
            scanf("%d",&ptr[i]);
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (int i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
 
        // Get the new size for the array
        printf("now enter the new value of n:");
        scanf("%d",&n);
        printf("\n\nEnter the new size of the array: %d\n", n);
 
        // Dynamically re-allocate memory using realloc()
        ptr = realloc(ptr, n * sizeof(int));
 
        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");
 
        // Get the new elements of the array
        for (int i = 0; i < n; ++i) {
            printf("enter the salaray of employee%d:",i+1);
            scanf("%d",&ptr[i]);
        }
 
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (int i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
 
        free(ptr);
    }
 
    return 0;
}