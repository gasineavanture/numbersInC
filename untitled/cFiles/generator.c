#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//define variable
int numOfNumbers = 0;

void generate_data_file() {
    //point to a certain file.  * makes it a pointer
    FILE *txtfile;

    //generate random number based time - seed
    srand(time(NULL));

    // Open file for writing("w")
    txtfile = fopen("data.txt", "w");
    if (txtfile == NULL) return;

    // Decide on number count. % 11 = 10 + 5 = 15 num
    numOfNumbers = (rand() % 11) + 5;

    // repeat for count
    for (int i = 0; i < numOfNumbers; i++) {
        //rand number / (max of random/100) each as a float
        float val = (float)rand() / (float)(RAND_MAX / 100.0);

        //print in f(file)
        fprintf(txtfile, "%.2f\n", val);
    }

    // close pointer
    fclose(txtfile);
    printf("Success! Generated %d floats in data.txt\n", numOfNumbers);
}