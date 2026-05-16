#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    // ==============================
    // MALLOC
    // ==============================

    /*
        malloc() allocates memory dynamically.

        Syntax:
        ptr = (type*) malloc(size_in_bytes);

        It DOES NOT initialize memory.
        Garbage values may be present.
    */

    printf("Enter number of elements for malloc: ");
    scanf("%d", &n);

    // Dynamically allocating memory for n integers
    int *arr = (int*) malloc(n * sizeof(int));

    // Checking if memory allocation failed
    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Taking input
    printf("\nEnter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Printing elements
    printf("\nElements using malloc:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    // ==============================
    // REALLOC
    // ==============================

    /*
        realloc() changes previously allocated memory size.

        Syntax:
        ptr = realloc(ptr, new_size);

        Used to increase or decrease memory.
    */

    int newSize;

    printf("\nEnter new size for realloc: ");
    scanf("%d", &newSize);

    // Reallocating memory
    arr = (int*) realloc(arr, newSize * sizeof(int));

    // Checking realloc success
    if(arr == NULL)
    {
        printf("Reallocation failed!\n");
        return 1;
    }

    // If size increased, take new elements
    if(newSize > n)
    {
        printf("\nEnter %d more elements:\n", newSize - n);

        for(i = n; i < newSize; i++)
        {
            scanf("%d", &arr[i]);
        }
    }

    // Printing updated array
    printf("\nElements after realloc:\n");

    for(i = 0; i < newSize; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");


    // ==============================
    // FREE
    // ==============================

    /*
        free() releases dynamically allocated memory.

        Syntax:
        free(ptr);

        Prevents memory leaks.
    */

    free(arr);

    printf("\nMemory freed successfully.\n");


    // ==============================
    // CALLOC
    // ==============================

    /*
        calloc() allocates memory dynamically
        and initializes all values to 0.

        Syntax:
        ptr = (type*) calloc(number_of_elements, size);
    */

    int m;

    printf("\nEnter number of elements for calloc: ");
    scanf("%d", &m);

    int *arr2 = (int*) calloc(m, sizeof(int));

    // Checking allocation
    if(arr2 == NULL)
    {
        printf("Calloc allocation failed!\n");
        return 1;
    }

    // Printing default values
    printf("\nDefault values using calloc:\n");

    for(i = 0; i < m; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    // Taking input
    printf("\nEnter %d elements:\n", m);

    for(i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Printing values
    printf("\nElements using calloc:\n");

    for(i = 0; i < m; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");

    // Free calloc memory
    free(arr2);

    printf("\nCalloc memory freed successfully.\n");

    return 0;
}