#include <stdio.h>

int main(){
    // The type of a variable determines how much space is allocated to it and how the bit pattern stored is interprated.
    // C is statically typed language meaning the variable name must always be accompanied with the type.
    // C is also a strongly types language meaning automatic or implicit conversion of one type to another is not allowed.
    printf("Here are the basic types in C \n");
    // BASIC TYPES
    int age = 5; //INTEGER
    char abbreviation = 'C'; // CHARACTER
    char *name = "Ben"; // STRING OR ARRAY OF CHARACTERS
    float average = 3.45; // FLOATING POINT

    return 0;
}
