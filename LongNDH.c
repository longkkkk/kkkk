/* 
 * File:   main.c
 * Author: Member
 *
 * Created on July 27, 2015, 10:55 AM
 */

#include <stdio.h>
#include <stdlib.h>
int** AddMatrix(int** pMatrix1, int** pMatrix2, int m, int n) {
    /* Student code here */
    int i=0,j=0;
    
    int** result = malloc(n * sizeof (int*));

    for (i = 0; i < m; i++) {
        result[i] = malloc(m * sizeof (int));
    }
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        { 
           result[i][j]= pMatrix1[i][j] + pMatrix2[i][j];
        }
    }
    return result;
}
int main(int argc, char** argv) {
    int m , n, i = 0, j = 0;
    printf("Matrix Add\n");
    printf("Accept size: ");
    scanf("%99d",&m);
    scanf("%99d",&n);
    
    int** pMatrix1 = malloc(n * sizeof (int*));
    for (i = 0; i < m; i++) {
        pMatrix1[i] = malloc(m * sizeof (int));
    }

    int** pMatrix2 = malloc(n * sizeof (int*));
    for (i = 0; i < m; i++) {
        pMatrix2[i] = malloc(m * sizeof (int));
    }
    
    printf("Accept matrix m1:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%99d",&pMatrix1[i][j]);
        }
    }
    
    printf("Accept matrix m2:\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            scanf("%99d",&pMatrix2[i][j]);
        }
    }
    int** result = AddMatrix(pMatrix1, pMatrix2, m, n);
    printf("m = m1 + m2\n");
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < n; j++) 
        {
            printf("%6d", result[i][j]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}
