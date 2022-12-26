

// // Bubble Sort
// #include <stdio.h>
// void main()
// {
//     int arr[20], n, temp;
//     printf("Enter the number of Elements You want to enter in an Array:");
//     scanf("%d", &n);
//     printf("Input Elements:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//         {
//             if (arr[j] > arr[j + 1])
//             {
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
//     printf("Sorted Arrays is :\n");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
// }


////  bubble sort using recursion
// void bubleSort(int arr[], int len)
// {
//     int temp;
//     if (len == 1)
//     {
//         return;
//     }
//     for (int i = 0; i < len - 1; i++)
//     {
//         if (arr[i] > arr[i + 1])
//         {
//             temp = arr[i];
//             arr[i] = arr[i + 1];
//             arr[i + 1] = temp;
//         }
//     }
//     len = len - 1;
//     bubleSort(arr, len);
// }
// void main()
// {
//     int Arr[] = {21, 34, 20, 31, 78, 43, 66};
//     int length = sizeof(Arr) / sizeof(Arr[0]);
//     bubleSort(Arr, length);
//     printf("Sorted array : ");
//     for (int i = 0; i < length; i++)
//     {
//         printf("%d ", Arr[i]);
//     }
// }

// /// Selection Sort
// #include <stdio.h>
// void main()
// {
//     int arr[20], n, temp, min;
//     printf("Enter the number of element:");
//     scanf("%d", &n);
//     printf("Input Elements:\n");
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n; i++)
//     {
//         min = i;
//         for (int j = 0; j < n; j++)
//         {
//             if (arr[j] < arr[min])
//             {
//                 min = j;
//             }
//             temp = arr[min];
//             arr[min] = arr[i];
//             arr[i] = temp;
//         }
//     }
//     printf("Selection Sorted Array is:\n");
//     for (int i = n - 1; i >= 0; i--)
//     {
//         printf("%d ", arr[i]);
//     }
// }

/// Insertion Sort
#include <stdio.h>
void main()
{
    int key, arr[20], n;
    printf("Input n:\n");
    scanf("%d", &n);
    printf("Input Elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (key<arr[j] && j >= 0)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    printf("Insertion Sorted Array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}

