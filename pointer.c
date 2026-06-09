#include <stdio.h>

int main(){
    printf("Pointers in C\n");

    // Variables are human readable names that refer to some data in memory.
    // Memory is a big array of bytes, and data is stored in the array.
    // A variable is a human readable name that refers to an address in memory, which is an index into the big array of bytes.


    // Getting a Variable's Address
    // In C, you can print the address of a variable by using the address-of-operator: &. Here's an example:

    // #include <stdio.h>
    // int main() {
    //   int age = 37;
    //   printf("The address of age is: %p\n", &age); The %p format specifier will format a pointer (memory address) to be printed.
    //   return 0;
    // }

    // The address of age is: 0xfff8
    //
    //
    // What Is an Address?

    // Memory can be thought of as a big array of bytes, and each byte has an address.

    // That's true, and the beauty is that each address is literally just a number. It's just a number.

    // You might be thinking, "Hey, if it's just a number, why does it look all disgusting like 0xfff8?"

    // That's because 0xfff8 is just a number. But:

    //     It's written in hexadecimal (base 16) instead of decimal (base 10).
    //     It's a pretty big number, so it's not very human readable. 0xfff8 is the same as 65,528 in decimal.



    // Virtual Memory

    // As it turns out, your code probably doesn't have direct access to the physical RAM in your computer.

    // Instead, your operating system provides a layer of abstraction called virtual memory. Virtual memory makes it seem like your program has direct access to all the memory on the machine, even if it doesn't.

    //     Physical Memory: The actual RAM sticks in your computer.
    //     Operating System: The software that manages access to the physical memory.
    //     Your Program: When it runs, it becomes a process and is given access to a chunk of virtual memory by the operating system.
    //     Virtual Memory: This abstracted chunk of memory that your program can use.

    // There are exceptions to this, for example if you're using C to build embedded firmware that runs without an operating system, your code might interact directly with physical memory.

    // By only giving processes access to a chunk of virtual memory, the operating system can do some cool things:

    //     Isolation: One process can't access the memory of another process.
    //     Security: The operating system can prevent processes from accessing certain parts of memory.
    //     Simplicity: Developers don't have to worry about managing physical memory and the memory of other processes.
    //     Performance: The operating system can optimize memory access depending on the hardware and needs of the program. For example, by moving data between physical memory and the hard drive.

    // At the end of the day, your program has direct access to a virtual chunk of memory. Just like physical memory, it can be thought of as a big array of bytes, where each byte has an address.
    //
    //
    //
    // Pointers

    // You've probably heard of pointers. You may have also seen jokes about how they are impossible to learn... Well, that's wrong.
    // In fact, now that you understand how memory is laid out in an array, a lot of the mystery behind pointers should be gone.
    // Put simply: a pointer is just a variable that stores a memory address. It's called a pointer, because it "points" to the address of a variable, which stores the actual data held in that variable.
    //
    // Syntax

    // A pointer is declared with an asterisk (*) after the type. For example, int *.

    int age = 37;
    int *pointer_to_age = &age;

    // Remember, to get the address of a variable so that we can store it in a pointer variable, we can use the address-of operator (&).

    // Why Pointers?
    // To illustrate the usefulness of pointers, let's pretend we want to pass a collection of data into a function. Within that function, we want to modify the data.
    //
    //
    // In C, structs are passed by value. That's why updating a field in the struct does not change the original struct from the main function.
    // To get the change to "persist", we needed to return the updated struct from the function (a new copy).
    // The memory address of the struct that went in to coordinate_update_and_return_x was not the same as the address of the struct that was returned. Again, because we created a copy.


    // Pointer Basics

    // Remember, pointers are just an address (read: value) that tells the computer where to look for other values. Just like how the address to your house is not actually your house, but points you to where your house is.
    // Syntax Review

    // Declare a pointer to an integer:

    // // declares `pointer_to_something` as a pointer to an int
    int *pointer_to_something;

    // Get the address of a variable:

    int meaning_of_life = 42;
    int *pointer_to_mol = &meaning_of_life;
    // pointer_to_mol now holds the address of meaning_of_life



    // New: Dereferencing Pointers

    // Oftentimes we have a pointer, but we want to get access to the data that it points to. Not the address itself, but the value stored at that address.

    // We can use an asterisk (*) to do it. The * operator dereferences a pointer.

    // int meaning_of_life = 42;
    // int *pointer_to_mol = &meaning_of_life;
    // int value_at_pointer = *pointer_to_mol;
    // value_at_pointer = 42

    // It can be a touch confusing, but remember that the asterisk symbol is used for two different things:

    //     Declaring a pointer type: int *pointer_to_thing;
    //     Dereferencing a pointer value: int value = *pointer_to_thing; (retrieving the value) or *pointer_to_thing = 20; (modifying the value)


    return 0;
}
