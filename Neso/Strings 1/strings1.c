#include<stdio.h>
#include<string.h>
// This is a library that gives functions for string manuplation
//strlen(X) - will give length of string, String literals are characters within ""
//size of a string in bytes is the amount of letters + 1, last character is /0
//char *C2; will have its own address, C2 = C1 is valid, using the name of the arrray returns the addres, C2 now points to the first element
// in the array C1[6]="Hello". 
//Arrays are always passed to functions by reference
void print(char* C) {
    int i = 0;
    while (*C != '\0') { // while this pointer, C, that points to the first character of the array C is not 0
        printf("%c", *C); //Print the value of what this pointer points to (first character of C)
        C++; // go to the next address, which is then next char, and repeat until \0 is reached.
    }
} 
int main() {
    char C[20] = "Hello";
    print(C);
    return 0;
}