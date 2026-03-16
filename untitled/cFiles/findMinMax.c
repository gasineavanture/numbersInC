#include <stdio.h>

// make a obj that has two values
typedef struct {
    float max;
    float min;
} MinMaxResult;

// use obj MinMaxResult as return 
MinMaxResult findMinMax(float data_array[], int size) {
    MinMaxResult results; // reulst gets made using MinMaxResult blueprint

    // Initialize with the first element
    results.max = data_array[0];
    results.min = data_array[0];

    for (int i = 1; i < size; i++) {
        if (data_array[i] > results.max) {
            results.max = data_array[i];
        }
        if (data_array[i] < results.min) {
            results.min = data_array[i];
        }
    }

    return results;
}