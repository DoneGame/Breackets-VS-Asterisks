#include <stdio.h>

#include "simple_matrix.h"

void SimpleMatrixExps (void) {
    int data[][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    size_t sizeW = sizeof(data[0])/sizeof(data[0][0]);
    size_t sizeH = sizeof(data)/sizeof(data[0]);

    PrintMatrix (data, sizeW, sizeH);
    printf ("\n");
    Bad_PrintMatrix (data, sizeW, sizeH);
    printf ("\n");
    Bad_PrintMatrix_2 (data, sizeW, sizeH);
    printf ("\n");
    PrintMatrix_w_asterisk (*data, sizeW, sizeH);
    printf ("\n");
    PrintMatrix_full (*data, sizeW, sizeH);
    printf ("\n");
    Bad_PrintMatrix_full (*data, sizeW, sizeH);
    printf ("\n");
}

void PrintMatrix (int data[][3], size_t sizeX, size_t sizeY) {
    for (size_t y = 0; y < sizeY; y++) {
        for (size_t x = 0; x < sizeX; x++)
            printf ("data[%d][%d]=%d ", y, x, data[y][x]);

        printf ("\n");
    }
}

void Bad_PrintMatrix (int data[][3], size_t sizeX, size_t sizeY) {
    for (size_t y = 0; y < sizeY; y++) {
        for (size_t x = 0; x < sizeX; x++)
            printf ("data[%d][%d]=%d ", y, x, data[x][y]);

        printf ("\n");
    }
}

void Bad_PrintMatrix_2 (int data[][3], size_t sizeX, size_t sizeY) {
    for (size_t y = 0; y < sizeY + 1; y++) {
        for (size_t x = 0; x < sizeX + 1; x++)
            printf ("data[%d][%d]=%d ", y, x, data[x][y]);

        printf ("\n");
    }
}

void PrintMatrix_w_asterisk (int *data, size_t sizeX, size_t sizeY) {
    for (size_t y = 0; y < sizeY; y++) {
        for (size_t x = 0; x < sizeX; x++)
            printf ("data[%d][%d]=%d ", y, x, 
                     *(data + (y*sizeX + x)) );

        printf ("\n");
    }
}

void PrintMatrix_full (int *data, size_t sizeX, size_t sizeY) {
    for (size_t y = 0; y < sizeY; y++) {
        for (size_t x = 0; x < sizeX; x++)
            printf ("data[%d][%d]=%d ", y, x, 
                     *(int *)((size_t) data + (y*sizeX + x) * sizeof(int)) );

        printf ("\n");
    }
}

void Bad_PrintMatrix_full (int *data, size_t sizeX, size_t sizeY) {
    for (size_t y = 0; y < sizeY; y++) {
        for (size_t x = 0; x < sizeX; x++)
            printf ("data[%d][%d]=%d ", y, x, 
                     *(int *)((size_t) data + (y*sizeX + x) * sizeof(int) + 1) );

        printf ("\n");
    }
}
