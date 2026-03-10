

float findAverage(float data_array[], int size) {
    float sum = 0;

    //go throught array
    for (int i = 0; i < size; i++) {
        // calculate all nums together
        sum += data_array[i];
    }
    return sum / size;
}