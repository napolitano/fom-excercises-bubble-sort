#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define maximumInterprets 100
#define maximumInterpretSize 256

/**
 * @brief Return true if interprets x > interprets y
 * 
 * @param x 
 * @param y 
 * @return true 
 * @return false 
 */
bool vergleiche(char interprets[][maximumInterpretSize], int x, int y) {
    return (strcmp(interprets[x],interprets[y]) > 0);
}

/**
 * @brief Exchanxe x with y and vice versa
 * 
 * @param interprets 
 * @param x
 * @param y 
 */
void tausche(char interprets[][maximumInterpretSize], int x, int y) {
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
void bubblesort(char interprets[][maximumInterpretSize], int sizeOfArray) {
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
void printTextArray(char interprets[][maximumInterpretSize], int sizeOfArray) {
    for(int x = 0; x < sizeOfArray; x++)
        printf("%d: %s", x+1, interprets[x]);
}

/**
 * @brief Bare bones text file reader. DANGER: Do not use this this in production
 * 
 * @param fileName 
 * @return char
 */
void readTextFile(char interprets[][maximumInterpretSize], char fileName[]) {
    FILE* file = fopen(fileName, "r"); 
    char line[maximumInterpretSize]; 

    for(int i=0; i < 100 ; i++ ) {
        fgets(line, sizeof(line), file);
        strcpy(interprets[i], line);
    }

    fclose(file);
}

/**
 * @brief Bubblesort example
 * 
 * @return int 
 */
int main () {

    // Unordered list of numbers
    char interprets[maximumInterprets][maximumInterpretSize];

    // Read textfile line by line
    readTextFile(interprets, "rollingstone2005list100greatestartists.txt");

    int sizeOfArray = sizeof(interprets)/sizeof(interprets[0]);

    // Sort the unordered list of numbers ascending
    bubblesort(interprets, sizeOfArray);
    // Output of sorted result
    printTextArray(interprets, sizeOfArray);

    return 0;
}