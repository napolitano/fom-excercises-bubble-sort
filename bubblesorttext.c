#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define maximumSize = 100;

/**
 * @brief Return true if interprets x > interprets y
 * 
 * @param x 
 * @param y 
 * @return true 
 * @return false 
 */
bool vergleiche(char interprets[][maximumSize], int x, int y) {
    return (strcmp(interprets[x],interprets[y]) > 0);
}

/**
 * @brief Exchanxe x with y and vice versa
 * 
 * @param interprets 
 * @param x
 * @param y 
 */
void tausche(char interprets[][maximumSize], int x, int y) {
    char temp[100];
    
    strcpy(temp, interprets[x]); 
    strcpy(interprets[x], interprets[y]); 
    strcpy(interprets[y], temp); 
}

/**
 * @brief Bubblesort algorithm
 * 
 * @param interprets 
 * @param sizeOfArray 
 */
void bubblesort(char interprets[][maximumSize], int sizeOfArray) {
    while(sizeOfArray--)
        for(int i = 1; i <= sizeOfArray; i++)
            if(vergleiche(interprets, i-1, i))
                tausche(interprets, i, i-1);
}

/**
 * @brief Output array of interprets
 * 
 * @param interprets 
 * @param sizeOfArray 
 */
void printTextArray(char interprets[][maximumSize], int sizeOfArray) {
    for(int x = 0; x < sizeOfArray; x++)
        printf("%s\n", interprets[x]);
}

/**
 * @brief Bubblesort example
 * 
 * @return int 
 */
int main () {

    // Unordered list of numbers
    char interprets[][maximumSize] = { "Bob Dylan", "Abba", "Elvis Presley", "Duran Duran", "Zappa", "Infected Mushroom", "Prodigy" };
    int sizeOfArray = sizeof(interprets)/sizeof(interprets[0]);

    // Sort the unordered list of numbers ascending
    bubblesort(interprets, sizeOfArray);
    // Output of sorted result
    printTextArray(interprets, sizeOfArray);

    return 0;
}