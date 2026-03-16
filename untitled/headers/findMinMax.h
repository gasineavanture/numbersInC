#ifndef UNTITLED_FINDMINMAX_H
#define UNTITLED_FINDMINMAX_H

// The compiler needs to see this BEFORE you use it in main.c
typedef struct {
    float min;
    float max;
} MinMaxResult;

// Use the exact same name here as in your .c file
MinMaxResult findMinMax(float data_array[], int size);

#endif