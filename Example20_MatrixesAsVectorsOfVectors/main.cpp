#include<stdio.h>

//In this part, the matrix values are shown, row by row to a good user's reading
void writeMatrixValues(int matrix[][3], int numberRows, int numberColumns, char matrixName){
    printf(" %c = \n", matrixName);
    for(int index1 = 0; index1 < numberRows; index1++){
        for(int index2 = 0; index2 < numberColumns; index2++){
            printf(" %d ", matrix[index1][index2]);
            if(index2 == numberColumns - 1){
                printf("\n");
            }
        }
    }
}

int main(){
    int matrixA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matrixB[2][3] = {1, 2, 3, 4, 5};
    int matrixC[2][3] = {{1, 2}, {4}};

    writeMatrixValues(matrixA, 2, 3, 'A');
    printf("\n");
    writeMatrixValues(matrixB, 2, 3, 'B');
    printf("\n");
    writeMatrixValues(matrixC, 2, 3, 'C');
    printf("\n");
    return 0;
}
