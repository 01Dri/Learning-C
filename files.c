#include <stdio.h>

void createFile(char name[]) {

    FILE *fptr; // Calling pointer of File 

    fptr = fopen("filename.txt", "w"); // Create File 

    fprintf(fptr, name); // Writing on the file 
    fclose(fptr); // Closing File 

}


void readFile() {
    FILE *fptr;

    fptr = fopen("filename.txt", "r");

    if (fptr == NULL) { // If File doesn't exist 
        printf("File 'filename.txt' is null");
    }
    char string[100]; // Char array for to storing the text of file 
    fgets(string, 100, fptr); // Now to must pass the store variable, length of date that you're reading and file pointer
    printf("%s\n", string); // Print content 
    fclose(fptr); /// Closing file 
}


enum Level {
    LOW,
    MEDIUM,
    HIGH
};

struct myStructure // This  is like an 'object' in C your can put your fields with your types
{

    int myNum;
    char myLetter;
    enum Level enumLevel;
};


int main() {


  //  createFile("Diego"); // Calling functions 
    readFile();

    struct myStructure s1; // This variable that references the structure defined above
    s1.myLetter = 'D'; // Puting value in the fields 
    s1.myNum = 15;
    s1.enumLevel = MEDIUM;


    printf("%d\n", s1.myNum);
    printf("%c\n", s1.myLetter);
    printf("%d\n", s1.enumLevel); 
    getchar();


    return 0;
}


