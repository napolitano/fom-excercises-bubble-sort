#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * @brief Return true if x > y
 * 
 * @param x 
 * @param y 
 * @return true 
 * @return false 
 */
bool vergleiche(int x, int y) {
    return (x > y);
}

/**
 * @brief Exchanxe x with y and vice versa
 * 
 * @param numbers 
 * @param x 
 * @param y 
 */
void tausche(int *numbers, int x, int y) {
    int temp = numbers[x];
    numbers[x]=numbers[y];
    numbers[y]=temp;
}

/**
 * @brief Bubblesort algorithm
 * 
 * @param numbers 
 * @param sizeOfArray 
 */
void bubblesort(int *numbers, int sizeOfArray) {
    while(sizeOfArray--)
        for(int i = 1; i <= sizeOfArray; i++)
            if(vergleiche(numbers[i-1], numbers[i]))
                tausche(numbers, i, i-1);
}

/**
 * @brief Output array of numbers
 * 
 * @param numbers 
 * @param sizeOfArray 
 */
void printIntegerArray(int *numbers, int sizeOfArray) {
    for(int x = 0; x < sizeOfArray; x++)
        printf("%d ", numbers[x]);
}

/**
 * @brief Bubblesort example
 * 
 * @return int 
 */
int main () {

    // Unordered list of numbers
    int numbers[] = { 9,3,1,7,6,2,4,8,5,11,22,18,19,15,12,20,13,21,14,17,16,10 };
    int sizeOfArray = sizeof(numbers)/sizeof(int);

    // Sort the unordered list of numbers ascending
    bubblesort(numbers, sizeOfArray);
    // Output of sorted result
    printIntegerArray(numbers, sizeOfArray);

    return 0;
}