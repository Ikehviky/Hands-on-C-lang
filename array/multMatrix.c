#include<stdio.h>
#define N 50

int main()
{
    // declear dynamic variables
    int a[N][N], b[N][N], c[N][N], i, j, k, sum, m, n, p, q;

    printf("Enter the number of row and column for the first matrix: \n");

    scanf("%d %d", &m, &n);

    // accept input for the first matrix
    printf("\n Enter the first matrix: \n");
    for(i = 0; i<m; i++){
        for(j = 0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }

    // accept input for the second matrix
    printf("\n Enter the number of row and column for the second matrix: \n");

    scanf("%d %d", &p, &q);

    //accept input for the first matrix
    printf("\n Enter the second matrix: \n");
    for(i = 0; i < p; i++){
        for(j = 0; j<q; j++){
            scanf("%d", &b[i][j]);
        }
    }

    //output of the first matrix
    printf("\n Output of the first matrix: \n");

    for(i = 0; i < m; i++){
        for(j = 0; j<n; j++){
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }

    //output of the second matrix
    printf("\n Output of the second matrix: \n");

    for(i = 0; i < p; i++){
        for(j = 0; j<q; j++){
            printf("%d \t", b[i][j]);
        }
        printf("\n");
    }

    //check if number of column of the first matrix is equal to number of row of the second matrix
    if(n != p){

        printf("Can not multiply \n The number of column of the first matrix must be equal to the number of row of the second matrix");

    }else{

         //multiplication of the two matrix

        for(i = 0; i < m; i++){
            for(j = 0; j < q; j++ ){
                sum = 0;
                for(k = 0; k < m; k++){
                    sum = sum + (a[i][k]*b[k][j]);
                }
                c[i][j] = sum;
            }
        }

            //output of the multiplication.
            printf("\n Output of the matrix is \n");
            for(i = 0; i < m; i++){
                for(j = 0; j < q; j++){
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
    }

}