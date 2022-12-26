


////   16.Matrix Addition
// #include <stdio.h>
// void main()
// {
//     int a[20][20], b[20][20], c[20][20];
//     int m, n, p, q, i, j;
//     printf("Enter the order of The Matrix A\n");
//     scanf("%d%d", &m, &n);
//     printf("Enter the order of The Matrix B\n");
//     scanf("%d%d", &p, &q);

//     if (m == p && n == q)

//     {
//         printf("Input Elements in Matrix A\n");
//         for (i = 0; i < m; i++)
//         {
//             for (j = 0; j < n; j++)
//             {
//                 scanf("%d", &a[i][j]);
//             }
//         }
//         printf("Input Elements in Matrix B\n");
//         for (i = 0; i < p; i++)
//         {
//             for (j = 0; j < q; j++)
//             {
//                 scanf("%d", &b[i][j]);
//             }
//         }

//         printf(" Matrix Sum is:\n");
//         for (i = 0; i < m; i++)
//         {
//             for (j = 0; j < n; j++)
//             {
//                 c[i][j] = a[i][j] + b[i][j];
//                 printf("%d ", c[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("Matrix Addition is not possible.");
//     }
// }

// ////   17.Matrix Subtraction
// #include <stdio.h>
// void main()
// {
//     int a[20][20], b[20][20], c[20][20];
//     int m, n, p, q, i, j;
//     printf("Enter the order of The Matrix A\n");
//     scanf("%d%d", &m, &n);
//     printf("Enter the order of The Matrix B\n");
//     scanf("%d%d", &p, &q);

//     if (m == p && n == q)

//     {
//         printf("Input Elements in Matrix A\n");
//         for (i = 0; i < m; i++)
//         {
//             for (j = 0; j < n; j++)
//             {
//                 scanf("%d", &a[i][j]);
//             }
//         }
//         printf("Input Elements in Matrix B\n");
//         for (i = 0; i < p; i++)
//         {
//             for (j = 0; j < q; j++)
//             {
//                 scanf("%d", &b[i][j]);
//             }
//         }

//         printf(" Matrix Subtraction is:\n");
//         for (i = 0; i < m; i++)
//         {
//             for (j = 0; j < n; j++)
//             {
//                 c[i][j] = a[i][j] - b[i][j];
//                 printf("%d ", c[i][j]);
//             }
//             printf("\n");
//         }
//     }
//     else
//     {
//         printf("Matrix Subtraction  is not possible.");
//     }
// }

// //  matrix multiplication
// #include<stdio.h>
// void main()
// {
//     int a[20][20],b[20][20],c[20][20];
//     int i,j,m,n,p,q,k;
//     printf("Enter the order of Matrix A\n");
//     scanf("%d%d",&m,&n);
//     printf("Enter the order of Matrix B\n");
//     scanf("%d%d",&p,&q);
//     if (n==p)
//     {
//        printf("Input the elements of Matrix A\n");
//        for (int i = 0; i < m; i++)
//        {
//           for (int j = 0; j < n; j++)
//           {
//             scanf("%d",&a[i][j]);
//           }
//        }
//        printf("Input the elements of Matrix B\n");
//        for (int i = 0; i < p; i++)
//        {
//           for (int j = 0; j < q; j++)
//           {
//             scanf("%d",&b[i][j]);
//           }
//        }
//        printf("Matrix multiplication is :\n");
//        for ( i = 0; i < m; i++)
//        {
//         for ( j = 0; j < q; j++)
//         {
//               c[i][j]=0;
//             for ( k = 0; k < n; k++)
//             {
//                c[i][j]=c[i][j]+a[k][i]*b[j][k];
//             }
//             printf("%d ",c[i][j]);
//         }
//         printf("\n");
//        }
//     }
//     else
//     printf("Multiplication is not Possible.");
// }

// // Transpose of a Matrix
// #include <stdio.h>
// void main()
// {
//     int a[20][20], i, j, m, n;
//     printf("Enter the order of the matrix:\n");
//     scanf("%d%d", &m, &n);
//     printf("Input Elements in Array:\n");
//     for (i = 0; i < m; i++)
//     {
//         for (j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("The Transpose of the Matrix is:\n");
//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             printf("%d ", a[j][i]);
//         }
//         printf("\n");
//     }
// }

// // determinant of a  matrix
// // we are assuming a 3*3 matrix
// #include <stdio.h>
// void main()
// {
//     int i, j, d, a[3][3];
//     printf("Input the elements of a 3*3 Matrix:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Matrix is:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("Determinant of the Matrix is:\n");
//     for (i = 0; i < 3; i++)
//     {
//         for (j = 0; j < 3; j++)
//         {
//             d = a[0][0] * ((a[2][2] * a[1][1] )- (a[2][1] * a[1][2])) - a[0][1] * ((a[2][2] * a[1][0]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[2][1] * a[1][0]) - (a[2][0] * a[1][1]));
           
//         }

//     }
//      printf("%d ", d);
// }
