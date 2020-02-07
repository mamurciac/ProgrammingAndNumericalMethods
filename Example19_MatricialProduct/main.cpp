#include<stdio.h>

//In this part, the user indicates the numbers matrix entering the values one by one
void readMatrixValues(double matrix[][40], int numberRows, int numberColumns, char matrixName){
    for(int index1 = 0; index1 < numberRows; index1++){
        for(int index2 = 0; index2 < numberColumns; index2++){
            printf(" Enter the value for %c[%d][%d] = ", matrixName, index1 + 1, index2 + 1);
            scanf("%lf", &matrix[index1][index2]);
        }
    }
}

//In this part, the matrix values are shown, row by row to a good user's reading
void writeMatrixValues(double matrix[][40], int numberRows, int numberColumns, char matrixName){
    printf(" %c = \n", matrixName);
    for(int index1 = 0; index1 < numberRows; index1++){
        for(int index2 = 0; index2 < numberColumns; index2++){
            printf(" %7.5lf ", matrix[index1][index2]);
            if(index2 == numberColumns - 1){
                printf("\n");
            }
        }
    }
}

//In this part, the matrix product is computed (First, it's verified the matrix product condition)
int computeMatrixProduct(double matrixA[][40], double matrixB[][40], double matrixProductAB[][40], int numberRowsMatrixA, int numberColumnsMatrixA, int numberRowsMatrixB, int numberColumnsMatrixB){
    if(numberColumnsMatrixA == numberRowsMatrixB){
        for(int index1 = 0; index1 < numberRowsMatrixA; index1++){
            for(int index2 = 0; index2 < numberColumnsMatrixB; index2++){
                double dotProduct = 0.0;
                for(int index3 = 0; index3 < numberColumnsMatrixA; index3++){
                    dotProduct += matrixA[index1][index3] * matrixB[index3][index2];
                }
                matrixProductAB[index1][index2] = dotProduct;
            }
        }
        return 1;
    }else{
        return 0;
    }
}

int main(){
    double matrixA[40][40], matrixB[40][40], matrixProductAB[40][40];
    int numberRowsMatrixA = 2, numberColumnsMatrixA = 4, numberRowsMatrixB = 4, numberColumnsMatrixB = 3;

    if(numberColumnsMatrixA != numberRowsMatrixB){
        printf(" The matrix product isn't possible to compute it\n");
    }
    readMatrixValues(matrixA, numberRowsMatrixA, numberColumnsMatrixA, 'A');
    printf("\n");
    writeMatrixValues(matrixA, numberRowsMatrixA, numberColumnsMatrixA, 'A');
    printf("\n");
    readMatrixValues(matrixB, numberRowsMatrixB, numberColumnsMatrixB, 'B');
    printf("\n");
    writeMatrixValues(matrixB, numberRowsMatrixB, numberColumnsMatrixB, 'B');
    printf("\n");
    if(computeMatrixProduct(matrixA, matrixB, matrixProductAB, numberRowsMatrixA, numberColumnsMatrixA, numberRowsMatrixB, numberColumnsMatrixB)){
        writeMatrixValues(matrixProductAB, numberRowsMatrixA, numberColumnsMatrixB, 'C');
        printf("\n");
    }else{
        printf("There is an error.\n");

    }

    return 0;
}
