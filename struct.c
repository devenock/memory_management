#pragma once

// NOTE: A file names with a .h extension in C programming is for declarations of types and function prototypes. e.g struct.h

#include <stdio.h>

int main(){
    printf("Struct lesson in C\n");
    // struct example
    struct Car{
      int milage; //integer
      char *name; // array of characters/string(javascript)
      int is_painted; // integer
      char *color; // array of characters/string(javascript)
      float consumption;
    };

    // struct initializers
    // example
    struct City{
        char *name;
        int lat;
        int lon;
    };

    // zero initializer
    // int main(){
    //     struct City c = {0}
    // };
    // This sets all the fields to 0 values.


    // Positional Initializer
    // int main(){
    //     struct City c = {"San Francisco", 37, -122};
    // }



    // Designated Initializer
    // This is my (generally) preferred way to initialize a struct. Why?
    //     It's easier to read (has the field names)
    //     If the fields change, you don't have to worry about breaking the ordering

    // int main() {
    //   struct City c = {
    //     .name = "San Francisco",
    //     .lat = 37,
    //     .lon = -122
    //   };
    // }
    // Remember, it's .name not name. If this trips you up, just remember it's .name and not name because that's how you access the field, e.g. c.name.


    // Accessing Fields
    // Accessing a field in a struct is done using the . operator. For example:
    // struct City c;
    // c.lat = 41; // Set the latitude
    // printf("Latitude: %d", c.lat); // Print the latitude
    //
    //
    // Typedef
    // example
    // struct Pastry{
    //     char *name;
    //     float weight;
    // };

    // This can also be written as:
    typedef struct Pastry{
        char *name;
        float weight;
    }pastry_t;
    // Now, you can use pastry_t wherever before you would have used struct Pastry.
    // The _t at the end is a common convention to indicate a type.



    // In fact, you can optionally skip giving the struct a name:

    // typedef struct {
    //     char *name;
    //     float weight;
    // } pastry_t;

    // pastry_t muffin = {"Muffin", 0.3};


    // SizeOf
    // sizeof can be used to view the size of a type.
    // But this isn't just true of builtin types like int or float, you can also use it to find out the size of structs!
    // printf("Size of coordinate_t: %zu bytes\n", sizeof(coordinate_t));
    //
    // Memory Layout
    // Structs are stored contiguously in memory one field after another. Take this struct:

    typedef struct Coordinate {
        int x;
        int y;
        int z;
    } coordinate_t;

    // Mixed Type Structs

    typedef struct Human{
        char first_initial;
        int age;
        double height;
    } human_t;


    // Wait! What is that padding doing here?

    // It turns out that CPUs don't like accessing data that isn't aligned
    // (incredible oversimplification alert, since obviously CPUs don't have feelings
    // (yet)), so C inserts padding to maintain alignment (e.g. every 4 bytes in this example).

    // Huge caveat: these layouts can vary depending on the compiler and system architecture.


    // Struct Padding

    // There are a bunch of complicated rules and heuristics that different compilers use to determine how to lay out your structs. But to oversimplify:

    //     The fields of a struct are laid out in memory contiguously (next to each other).
    //     Structs can vary in size depending on how they are laid out.

    // C is a language that aims to give tight control over memory, so the fact that you can control the layout of your structs is a feature, not a bug.

    // Compilers + modern hardware + optimizations + skill issues means that sometimes what you think the computer is going to do isn't exactly what it actually does. That said, C is designed to get you close to the machine and allows you to dig in and figure out what's going on if you want to for a specific compiler or architecture.

    // As a rule of thumb, ordering your fields from largest to smallest will help the compiler minimize padding:

    typedef struct {
      char* a;
      double b;
      char c;
      char d;
      long e;
      char f;
    } poorly_aligned_t;

    typedef struct {
      double b;
      long e;
      char* a;
      char c;
      char d;
      char f;
    } better_t;



    return 0;
}
