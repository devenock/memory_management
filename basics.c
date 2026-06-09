#include <stdio.h>

// A function named main is always the entry point to a C program.
// int is the return type of the function and because this is the main function, the return
// value is the exit code of the program. 0 means SUCCESS, anything else means FAILURE.
// print feels very different from language like Python, but it is done using printf which comes from the stdio.h(standard input/output) library
// and to use it, you need an #include at the top of your file.
// Notice \n is required to print a newline character which print() in Python does automatically.
int main() {
    printf("Hello, world!\n");
    // C is a compiled language, meaning that the compiler throws a error is there is any even before the program
    // can be run.

    // BASIC TYPES
    // int - An integer
    // float - A floating point number
    // char - A character
    // char * - An array of characters
    int max_recursive_calls = 100;
    char io_mode = 'w';
    float throttle_speed = 0.2;

    printf("Max recursive calls: %d\n", max_recursive_calls);
    printf("IO mode: %c\n", io_mode);
    printf("Throttle speed: %f\n", throttle_speed);

    // STRINGS
    // Most programming languages these days have got some sort of built-in string type but C does not.
    // Instead, C strings are just arrays of characters.
    // Example
    char *msg_from_max = "You still have 0 users";
    printf("%s\n", msg_from_max);

    // Printing Variables
    // In C, we have to tell the compiler how we want particular values to be printed using "format specifiers"
    // %d - digit(integer)
    // %c - character
    // %f - floating point number
    // %s - string (char *)
    int age = 23;
    char *fullname = "Mike Been";
    printf("Hey %s, you are %d years old\n", fullname, age);

    // Newline character
    // The print() function in Python automatically adds a newline character(\n) at the end of the string. In C, we have to do this manually.
    printf("Hello, Washi\n");

    int sneklang_default_max_threads = 8;
    char sneklang_default_perms = 'r';
    float sneklang_default_pi = 3.141592;
    char *sneklang_title = "Sneklang";

    printf("Default max threads: %d\n", sneklang_default_max_threads);
    printf("Custom perms: %c\n", sneklang_default_perms);
    printf("Constant pi value: %f\n", sneklang_default_pi);
    printf("Sneklang title: %s\n", sneklang_title);

    // Compilations Types
    // In C you are not allowed to change the type of an existing variable like it can be done in dynamic languages like Python or Javascript.
    // However, the variable's value can change
    int x = 90;
    x = 40;
    // If we want to create a variable that cannot change, we can use the const keyword so that the values remains the same.
    const int y = 40;
    // y = 50; error

    // Functions
    //

    return 0;
}
