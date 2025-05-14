#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    // Resize the memory block to hold 10 integers
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    
    // Check for allocation failure
    if (ptr == NULL) {
        printf("Memory Reallocation Failed");
        exit(0);
    }

    return 0;
}
//#include <stdio.h>
//#include <stdlib.h>

/*int main() {
    int *ptr = (int *)malloc(5 * sizeof(int));

    // Resize the memory block to hold 10 integers
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    
    // Check for allocation failure
    if (ptr == NULL) {
        printf("Memory Reallocation Failed");
        exit(0);
    }
    It is important to note that if realloc() fails and returns NULL, the original memory block is not freed
    so you should not overwrite the original pointer until you've successfully allocated a new block. To prevent memory leaks,
    it’s a good practice to handle the NULL return value carefully:
    calloc(n, size);
 return 0;
}*/
