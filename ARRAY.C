



//traversing
// #include<stdio.h>
// void main()
// {
//     int a[10],i,n;
//     printf("Enter the number of Elements you want to enter\n");
//     scanf("%d",&n);
//     printf("Input elements:\n");
//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for ( i = 0; i < n; i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

/*
 */
// //   Merge two Sorted Array
// #include <stdio.h>
// void main()
// {
//     int a[10], b[10], c[40], m, n;
//     printf("Enter the no of first Array and Second Array\n");
//     scanf("%d%d", &m, &n);
//     printf("Input elements of first Array\n");
//     for (int i = 0; i < m; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     printf("Input elements of Second Array\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &b[i]);
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] < b[i])
//         {
//             c[i] = a[i];
//             printf("%d", c[i]);
//         }
//         else
//             c[i] = b[i];
//         printf("%d", c[i]);
//     }
// }
/*
// //insert an element in an array
// #include <stdio.h>
// void main()
// {
//     int i, n, ele = 25, pos, a[10];
//     printf("Enter the no of elements\n");
//     scanf("%d", &n);
//     printf("Input Position of the element\n");
//     scanf("%d", &pos);
//     printf("Input Elements of Array\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = n; i >=pos; i--)
//     {
//         a[i + 1] = a[i];
//     }
//     a[pos-1] = ele;
//     for (i = 0; i <= n; i++)
//     {
//         printf("%d ", a[i]);
//     }
// }
/*
*/
// ////    delete an element from an array
// #include <stdio.h>
// void main()
// {
//     int i, n, a[20], pos;
//     printf("Enter the no of elements you want to store in an array\n");
//     scanf("%d", &n);
//     printf("input Elements:\n ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the  position at which you want to delete the element\n");
//     scanf("%d", &pos);
//     for ( i=pos-1; i < n; i++)
//     {
//         a[i]=a[i+1];
//     }
//     printf("Now,Array is--\n");
//     for ( i = 0; i <n-1; i++)
//     {
//         printf("%d ",a[i]);
//     }
// }

/*
 */
// //  Missing No.
// #include <stdio.h>
// void main()
// {
//     int a[10], i, n, sum1 = 0, sum2, miss;
//     printf("Enter the no of elements: ");
//     scanf("%d", &n);
//     printf("Input Elements\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     for (i = 0; i < n; i++)
//     {
//         sum1 = sum1 + a[i];
//     }
//     n++;

//     sum2 = (n * (n + 1)) / 2;

//     miss = sum2 - sum1;
//     printf("Missing no is %d", miss);
// }
/*
 */
//////     Reversing of an array
// #include <stdio.h>
// void main()
// {
//     int arr[10], i, n;
//     printf("Enter the no of Elements : ");
//     scanf("%d", &n);
//     printf("Input Elements : ");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("Reverse Array is : \n");
//     for (i = n - 1; i >= 0; i--)
//     {

//         printf("%d ", arr[i]);
//     }
// }
/*
  /////    Intersection of two Array
#include <stdio.h>
void main()
{
    int a[10], b[10], m, n, i, j;
    printf("Enter the no of elements for Array a and for array b:\n");
    scanf("%d%d", &m, &n);
    printf("input Elements of Array A:\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("input Elements of Array B:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    printf("Intersection of Two Arrays:\n");
    for (i = 0; i < n; i++)
    {
        a[m+i]=b[i];
    }
    for ( i = 0; i < m+n; i++)
    {
           printf("%d ",a[i]);
    }
}
      ////     repeated Elements in an array
#include <stdio.h>
void main()
{
    int i, j, n, a[30], c = 0, r;
    printf("Enter the no of elements:\n");
    scanf("%d", &n);
    printf("Input Elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
       for ( j = i+1; i < n; i++)
       {
            if (a[i]==a[j])
            {
                c++;
                r = a[j];
            }
       }
    }
    printf("Repeated element is %d repeated %d times:\n", r, c);
}
#include<stdio.h>
void main()
{
    int i,j,a[20],b[20],m,n,r[10],c=0;
    printf("Enter the no of elements of array a[] and b[]  :\n");
    scanf("%d%d",&m,&n);
    printf("Input Elements of Array a[]:\n");
    for ( i = 0; i < m; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Input Elements of Array b[]:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&b[i]);
    }
    for ( i = 0; i < m+n; i++)
    {
        a[m+i]=b[i];
    }
    for ( i = 0; i < m+n; i++)
    {
        for ( j = i+1; j < m+n; j++)
        {
            if(a[i]==a[j])
            {
                c++;
                r[i]=a[i];
                continue;
            }
        }
    }
    for ( i = 0; i <m+n-c; i++)
    {
        a[m+n+i]=r[i];
    }
    for ( i = 0; i <m+n-c; i++)
    {
        printf("%d ",a[i]);
    }
}
///     10.intersection
#include<stdio.h>
void main()
{
    int i,j, arrA[20],n,m,arrB[20],arrC[20];
    printf("Enter the no of elements of Array A and Array B\n");
    scanf("%d%d",&m,&n);
    printf("Input Elements of Array A:\n");
    for ( i = 0; i<m; i++)
    {
        scanf("%d",&arrA[i]);
    }
    printf("Input Elements of Array B:\n");
    for ( i = 0; i<n; i++)
    {
        scanf("%d",&arrB[i]);
    }
    printf("Intersection of the Arrays is:\n ");
    for ( i = 0; i<n+m; i++)
    {
        if (arrA[i]==arrB[i])
        {
            arrC[i]=arrA[i];
        }
    }
}
//  Difference
#include <stdio.h>
void main()
{
    int i, j, m, n, a[20], b[20], r[20], c[20], k;
    printf("Enter the no of Elements in Array A and Array B\n");
    scanf("%d%d", &m, &n);
    printf("Input Elements of Array A\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input Elements of Array B\n");
    for (j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    for (i = 0; i < m; i++)
    {
        k = 0;
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                k++;
                break;
            }
        }
        if (k == 0)
        {
            printf("%d ", a[i]);
        }
    }
}
// */
//   ////   Difference
// #include <stdio.h>
// void main()
// {
//     int i, j, m, n, a[20], b[20],k;
//     printf("Enter the no of Elements in Array A and Array B\n");
//     scanf("%d%d", &m, &n);
//     printf("Input Elements of Array A\n");
//     for (i = 0; i < m; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Input Elements of Array B\n");
//     for (j = 0; j < n; j++)
//     {
//         scanf("%d", &b[j]);
//     }
//     printf("Difference is:\n");
//     for (i = 0; i < m; i++)
//     {
//         k = 0;
//         for (j = 0; j < n; j++)
//         {

//             if (a[i] == b[j])
//             {
//                 k++;
//                 break;
//             }
//         }
//         if (k == 0)
//         {
//             printf("%d ", a[i]);
//         }
//     }
// }

/*
#include <stdio.h>
void main()
{
    int a[20], b[20], c[20], m, n, i, j, k = 0;
    printf("Enter the size of Array a and Array b:\n");
    scanf("%d%d", &m, &n);
    printf("Input the el of A\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Input the el of B\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < m; i++)
    {
        for (j = i; j < n; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
            else
                a[i + j] = b[j];
        }
        for (i = 0; i < m + n; i++)
        {
            printf("%d ", a[i]);
        }
    }
}
*/


//// day 2 13
// #include <stdio.h>
// void main()
// {
//     int i,n,f,a[20],s,p;
//     printf("Enter the no of elements:\n");
//     scanf("%d", &n);
//     printf("Input Elements:\n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter the address of the first Element:\n");
//     scanf("%d", &f);
//     printf("Position of the element for the address of which, you are looking for:\n");
//     scanf("%d", &p);
//     printf("Enter the size of one Element:\n");
//     scanf("%d",&s);
//     printf("The address of the %d th element is:\n", p);
//     printf("%d", (f + s * (p - 1)));
// }
