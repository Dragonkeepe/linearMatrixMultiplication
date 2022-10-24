//Created by Jeffrey Bengis 9/24/2022
//Purpose Matrix multiplication using for loops
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int matrixARow = 0;
    int matrixAColumn= 0;
    int matrixBRow = 0;
    int matrixBColumn = 0;
    srand(time(0));

    printf("Enter the number of rows of Matrix A:");     // Asking user to input rows of matrix A
    scanf("%d",&matrixARow);
    printf("Enter the number of columns of Matrix A:");     // Asking user to input columns of matrix A
    scanf("%d",&matrixAColumn);

    printf("Enter the number of rows of Matrix B:");      // Asking user to input rows of matrix B
    scanf("%d",&matrixBRow);
    printf("Enter the number of columns of Matrix B:");     // Asking user to input columns of matrix B
    scanf("%d",&matrixBColumn);

    if (matrixARow != matrixBColumn)
    {
        printf("Columns & rows must be equal!");            //checking for error
      return 0;
    }

    int matrixA[matrixARow][matrixAColumn];                        //Initializing Matrix
    int matrixB[matrixBRow][matrixBColumn];                        //Initializing Matrix
    int matrixC[matrixARow][matrixBColumn];                        //Initializing Matrix

    for (int i = 0; i < matrixARow; i++)
    {
        for (int j = 0; j < matrixAColumn; j++)
        {
            matrixA[i][j] = (rand() % 10)+ 1;                       //Filling MatrixA with random numbers
        }
    }
    for (int i = 0; i < matrixBRow; i++)
    {
        for (int j = 0; j < matrixBColumn; j++)
        {
            matrixB[i][j] = (rand() % 10)+ 1;                       //Filling MatrixB with random numbers
        }
    }

    for (int i = 0; i < matrixARow; i++)
    {
        for (int j = 0; j < matrixBColumn; j++)
        {
            matrixC[i][j]=0;                                        //Initializing Matrix
            for (int k = 0; k < matrixAColumn; k++)
            {
                matrixC[i][j] += matrixA[i][k] * matrixB[k][j];     //Matrix multiplication
            }
        }
    }
    printf("Printing Matrix A: \n");
    for (int i = 0; i < matrixARow; i++)
    {
        for (int j = 0; j < matrixAColumn; j++)
        {
            printf("%3d ",matrixA[i][j]);                    //Printing MatrixA
        }
        printf("\n");
    }
    printf("Printing Matrix B: \n");
    for (int i = 0; i < matrixBRow; i++)
    {
        for (int j = 0; j < matrixBColumn; j++)
        {
            printf("%3d",matrixB[i][j]);                    //Printing MatrixB
        }
        printf("\n");
    }
    printf("Printing Matrix C: \n");
    for (int i = 0; i < matrixARow; i++)
    {
        for (int j = 0; j < matrixBColumn; j++)
        {
            printf("%3d ",matrixC[i][j]);                   //Printing MatrixC
        }
        printf("\n");
    }

    return 0;
}