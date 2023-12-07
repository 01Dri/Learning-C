#include <stdio.h>

#include <stdlib.h>

int main() {
  printf("Hello World! I am learning C. \n" ); // "n" for to break a line   
  const int numConstant = 20; // constant variable 
  int nonConstant = 20; // int 

  printf("%d\n", nonConstant); // %d for to see value of int variable 
  printf("%d\n", numConstant);
  printf("%d\n", 10 > 9); // Return 1 because 1 = True 0 = False


  int myAge = 14;
  int ageGf = 16;

  if (myAge > ageGf) { // Conditions 
    printf("Yes your age is greater than ageGf \n");
  } else {
    printf("Not your age is smaller than ageGf \n");
  }


  char greeeting[] = "Hello word!"; // This is a String  (Array of char)
  printf("%s\n", greeeting); // This form you can print this string 
  
  printf("%c", greeeting[1]); // It returns an E char, note that you can use %c and index 


  greeeting[0] = ']'; // Modifying a char character by index 

  printf("%s", greeeting); // It returns "[Ellow word!" because that first char to replaced 


  // Loops 

  int i = 0;
  while (i < 5) {
    printf("This is a loop with while\n");
    printf("%d\n", i);
    i++; 
  }

  for (int i = 0; i < 5; i++) {
    printf("This is a loop with for \n");
  }


  // Arrays 
  int myNumber[] = {1,2,3,4,5};
  char myChars[] = {'a', 'b', 'c'};


  // Inputs 
 // int numberInput; // Starting variable

 // printf("Type a number: \n"); 
 // scanf("%d", &myNumber); // Capturing number input

  //printf("Your number is: %d", myNumber);


  //char firstName[5]; //Lenght of char input
 // printf("Enter your firstName: \n");
 // scanf("%s", firstName); // Capturing string input 

  //printf("Hello %s", firstName);

  // Memory address 

  //int agePointer = 21;
  //printf("%p", &agePointer); //Use %p for print memory address and operator "&"


  // Pointers


  int intTest = 21;
  int* ptr = &intTest; // For to create a pointer variable, you need create the same type of variable that you're working with operator * and the value must be addres memory "&"


  getchar();

  return 0;
}