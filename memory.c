
#include <stdio.h>
#include <stdlib.h>

 
int main() {

    printf("Memory Management\n");
    printf("Enter your integer number: \n");

    int iNumber;
    scanf("%d", &iNumber); // Input number

    int* ptr = &iNumber; // Pointer number
    printf("Your number is %d\n", *ptr);
    printf("Your address memory from number is: %p\n", (void*)ptr);
    printf("Your length in bytes %d\n", sizeof(*ptr));
    printf("Do you want to change the memory address?\n");
    char choose[2];
    scanf("%1s", choose);

    if (choose[0] == 'y') {
        int length;
        printf("Enter with length of address memory: \n");
        scanf("%d", &length);
        int *ptrNew = malloc(length * sizeof(int));
        if (ptrNew != NULL) {
            *ptrNew = *ptr;
            printf("Your number is %d\n", *ptrNew);
            printf("New address of number in memory %p\n", (void*)ptrNew);
            printf("Your length in bytes %d\n", length * sizeof(ptr));
            free(ptrNew);
        } else {
            printf("Failed ");
        }

    }
    system("pause");

    return 0;
}