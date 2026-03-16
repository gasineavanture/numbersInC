#include <stdio.h>
#include "../headers/generator.h"
#include "../headers/findMinMax.h"
#include "../headers/average.h"
#include "../headers/deviation.h"



int main() {
    // call generate_data_file from generator.c
    int numOfNumbers = generate_data_file();

    if(numOfNumbers == -1){
        return 0;
    }

    // make array the same size as number of numbers in data.txt
    float data_array[numOfNumbers];
    int count = 0;

    // reatPtr becomes pointer for data.txt
    // r stands for read
    FILE *readPtr = fopen("data.txt", "r");
    if (readPtr == NULL) return 1;

    // fscanf reads data from the location readPtr provides and saves it into data_array, if it finds a float its shows a value 1
    // & gives it the exact memory location of data_array which means it can write into it
    // without & it would give it just a copy of the variable that it can read and not write
    while (count < numOfNumbers && fscanf(readPtr, "%f", &data_array[count]) == 1) {
        count++;
    }

    fclose(readPtr);



    // calculate the size. sizeof(data_array) = all bytes and sizeof(data_array[0] = bytes for one element
    int size = sizeof(data_array) / sizeof(data_array[0]);


    MinMaxResult results = findMinMax(data_array, size);

    printf("--- Results in main ---\n");
    printf("Maximum: %.2f\n", results.max); // Access via .max
    printf("Minimum: %.2f\n", results.min);


    float average = findAverage(data_array, size);
    printf("Average: %.2f\n", average);

    float deviationStandard = deviation(data_array, size);
    printf("Standard deviation: %.2f\n", deviationStandard);


    return 0;
}