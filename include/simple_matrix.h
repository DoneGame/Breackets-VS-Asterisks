#ifndef SIMPLE_MATRIX_H
#define SIMPLE_MATRIX_H

void SimpleMatrixExps (void);

void PrintMatrix (int data[][3], size_t sizeX, size_t sizeY);
void Bad_PrintMatrix (int data[][3], size_t sizeX, size_t sizeY);
void Bad_PrintMatrix_2 (int data[][3], size_t sizeX, size_t sizeY);

void PrintMatrix_w_asterisk (int *data, size_t sizeX, size_t sizeY);

void PrintMatrix_full (int *data, size_t sizeX, size_t sizeY);
void Bad_PrintMatrix_full (int *data, size_t sizeX, size_t sizeY);

#endif //SIMPLE_MATRIX_H