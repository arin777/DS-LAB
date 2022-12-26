

#include<stdio.h>
// int main(){
//     int n,a[20];
//     scanf("%d",&n);
//     for (int i = 0;  i<n && n>0; i++)
//     {
//        a[i]=n%2;
//        n=n/2;
//     }
//     for ( int j = n-1; j>=0; j--)
//      {
//        printf("%d",a[j]);
//      }
//     return  0;
    
// }



#include<stdio.h>
#define size 20;
 typedef struct queue
    {
        int arr[20];
        int f;
        int r;
    }queue_type ;
    void initial(queue_type *a){
      int f=-1;
      int r=-1;
    }
    int underflow(queue_type *a){

    }
    


#include <stdio.h>
# define SIZE 100
void insertion();
void deletion();
void show();
int arr[SIZE];
int Rear = - 1;
int Front = - 1;
main()
{
    int ch;
    while (1)
    {
        printf("1.Insertion Operation\n");
        printf("2.Deletion Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
            insertion();
            break;
            case 2:
            deletion();
            break;
            case 3:
            show();
            break;
            case 4:
            exit(0);
            default:
            printf("Incorrect choice \n");
        } 
    } 
} 
 
void insertion()
{
    int insert_item;
    if (Rear == SIZE - 1)
       printf("Overflow \n");
    else
    {
        if (Front == - 1)
      
        Front = 0;
        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        Rear = Rear + 1;
        arr[Rear] = insert_item;
    }
} 
 
void deletion()
{
    if (Front == - 1 || Front > Rear)
    {
        printf("Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", arr[Front]);
        Front = Front + 1;
    }
} 
 
void show()
{
    
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue: \n");
        for (int i = Front; i <= Rear; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
}
