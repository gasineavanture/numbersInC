#include <stdio.h>

float max = 0;
float min = 0;

void minMax(float data_array[], int size){


    //give initial value, as we assume the first number is the max and min
    max = data_array[0];
    min = data_array[0];


    // loop through array
    for (int i = 0; i < size; i++){


        // for each bigger crr max, become new max
        if (data_array[i] > max){
            max = data_array[i];
        }

        // for each smaller than crr min, become new min
        if (data_array[i] < min){
            min = data_array[i];
        }


    }


}
