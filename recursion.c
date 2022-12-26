

#include <stdio.h>
#include <stdlib.h>

///  1.factorial using recursion
// int factorial( int n, int fact )
// {
// 	if ( n==1 )
// 		return fact;
// 	else
// 		factorial( n-1, n*fact );
// }

// int main( ){
// 	int n,value;
// 	//input an integer number
// 	printf( "Enter the number : " );
// 	scanf( "%d", &n );
// 	if ( n < 0 )
// 		printf( "No factorial of negative number\n" );
// 	else if ( n==0 )
// 			printf( "Factorial of  zero is 1\n" );
// 	else
// 	{
// 		value = factorial( n,1 );
// 		printf( "Factorial of %d = %d\n",n,value );
// 	}
// 	return 0;
// }

/// 2.   A power n using tail recursion
// int power(int b,int p,int o){
//     if(p==0) return 1;
//     else return power(b,p-1,b*p-1);
// }
// void main(){
//     int b,p;
//     printf("Enter the base and power:\n");
//     scanf("%d%d",&b,&p);
//     int res=power(b,p,1);
//     printf("Result is: %d",res);
// }

// /// 3.find nth fibonacci number using recursion
// int nth(int n)
// {
//     if (n == 1)
//     {
//         return 0;
//     }
//     else if (n == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return nth(n - 1) + nth(n - 2);
//     }
// }
// void main()
// {
//     int n;
//     printf("Enter the number:\n");
//     scanf("%d", &n);
//     int res = nth(n);
//     printf("Result is: %d", res);
// }

// ///// 4.Find gcd using tail recursion
// int gcd(int n1,int n2){
//     if(n2!=0)
//     return  gcd(n2,n1%n2);
//     else
//      return n1;
// }
// int main(){
//     int n1,n2;
//     printf("Enter the two number:\n");
//     scanf("%d%d",&n1,&n2);
//    printf("Gcd of two number is: %d", gcd(n1,n2));
//    return 0;
// }

// /// 5. Binary sort using recursion
// void BinarySearch(int arr[], int num, int first, int last)
// {
//     int mid;
//     if (first > last)
//     {
//         printf("Number is not found");
//     }
//     else
//     {
//         mid = (first + last) / 2;
//         if (arr[mid] == num)
//         {
//             printf("Element is found at index %d ", mid);
//             exit(1);
//         }
//         else if (arr[mid] > num)
//         {
//             BinarySearch(arr, num, first, mid - 1);
//         }
//         else
//         {
//             BinarySearch(arr, num, mid + 1, last);
//         }
//     }
// }

// void main()
// {

//     int arr[100], beg, mid, end, i, n, num;
//     printf("Enter the size of an array ");
//     scanf("%d", &n);
//     printf("Enter the values in sorted sequence \n");
//     for (i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     beg = 0;
//     end = n - 1;
//     printf("Enter a value to be search: ");
//     scanf("%d", &num);

//     BinarySearch(arr, num, beg, end);
// }

// /// 6.tower of hanoi using recursion
// void hanoi(int n, char fr, char tr, char ar) // fr=from rod,tr =to rod, ar=aux rod
// {
//     if (n == 1)
//     {
//         printf("\n Move disk 1 from rod %c to rod %c", fr, tr);
//         return;
//     }
//     hanoi(n - 1, fr, ar, tr);
//     printf("\n Move disk %d from rod %c to rod %c", n, fr, tr);
//     hanoi(n - 1, ar, tr, fr);
// }

// int main()
// {
//     int n = 4;                  // n implies the number of discs
//     hanoi(n, 'A', 'C', 'B'); // A, B and C are the name of rod
//     return 0;
// }



// //// 7.reverse of a given number using recursion
// int reverse(int n)
// {

//     if (n < 10)
//     {
//         printf("%d", n);
//         return;
//     }
//     else
//     {
//         printf("%d", n % 10);
//         reverse(n / 10);
//     }
// }
// void main()
// {
//     int n;
//     printf("Enter the number:\n");
//     scanf("%d", &n);
//     reverse(n);
// }
