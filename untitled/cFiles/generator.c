#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//define variable


int generate_data_file() {
    int count = 0;
    //make a pointer to file structure 
    FILE *txtfile;

    //generate random number based time - seed
    srand(time(NULL));

    // Open file for writing("w")
    txtfile = fopen("data.txt", "w");
    if (txtfile == NULL) return -1;

    // Decide on number count. % 11 = 10 + 5 = 15 num
    // Dividing by 11 is always a number between 0 to 10
    count = (rand() % 11) + 5;

    // repeat for count
    for (int i = 0; i < count; i++) {
        //(rand number / max of random)*100 each as a float between 0 and 100
        float val = ((float)rand() / (float)RAND_MAX) * 100.0;
        //print in f(file)
        fprintf(txtfile, "%.2f\n", val);
    }

    // close pointer
    fclose(txtfile);
    printf("Success! Generated %d floats in data.txt\n", count);

    return count;
}