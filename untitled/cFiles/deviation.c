#include "../headers/average.h"
#include <math.h>

float deviation(float data_array[], int size) {
    // call find average
    float average = findAverage(data_array, size);

    float sum_of_squares = 0;

    for (int i = 0; i < size; i++) {
        // subtract average from crr
        float diff = data_array[i] - average;

        // square the diff and add it to sum
        sum_of_squares += pow(diff, 2);
    }

    // divide by n-1
    float variance = sum_of_squares / (size - 1);

    // return square root
    return sqrt(variance);
}