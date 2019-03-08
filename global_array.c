//
// Created by Ivo Georgiev on 2019-03-07.
//
// Exercise practiced by Gil Leibovich 2019-03-07
//
// Objectives:
//  1. Define a structure.
//  2. Declare a static array of structures, outside of any function. What is the type of the array variable?
//  3. Sketch the array on the worksheet.
//  4. Assign values in a loop.
//  5. Step through the code with the debugger.


#include <stdio.h>

// 1. Defining global array structure Structure_1 as S_1
typedef struct Structure_1 {
    int num;
    char ltr;
} S_1;

// 2. Declaring structure array global_array
S_1 global_array[12];

void run_global_array() {
    printf("Running global array\n");

    // YOUR CODE HERE
    // "Hello Global" will be passed into the structure
    char hello_array[13] = {'H', 'e', 'l', 'l', 'o', ' ',
                            'G', 'l', 'o', 'b', 'a', 'l', '\0'};
    int hello_size = sizeof(hello_array)/sizeof(hello_array[0]);

    // 4. Using a for loop to assign numeric and character values to global_array
    for(int i = 0; i < hello_size; i++) {
        global_array[i].num = i;
        global_array[i].ltr=hello_array[i];
    }

}