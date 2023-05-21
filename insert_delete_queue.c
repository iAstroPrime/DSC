//                              A Program BY ASTRO

#include <stdio.h>
#include <stdlib.h>
int rear = 0;
int front = 0;
int n;
int *queue;
void insert();
void delete();
void display();
int main()
{
    int k;
    int input;
    printf("Enter the number of elements in the queue!\n");
    scanf("%d", &n);
    queue = (int *)malloc(n+1* sizeof(int));
    // for (k =0; k != n; k++)
    // {
    //     queue[k] = k-k;
    // }
    do
    {
        printf("\n**Choose one of the OPTIONS**\n");
        printf("1.INSERT\t2.DELETE\n3.DISPLAY\t4.EXIT\n");
        scanf("%d", &input);
        if (input == 1)
        {
            if((front == n)){  
                                  system("CLS");
                                  printf("OOPS.... The QUEUE is FULL..\n");
         }
            else{
                    system("CLS");
            insert();
        

            }
        }
        else if (input == 2)
        {
            system("CLS");
            delete ();
        }
        else if (input == 3)
        {
            system("CLS");
            display();
        }
        else
        {
            system("CLS");
            printf("OOPS...WRONG ACTION\tPlease choose valid input\n");
        }
    } while (input != 4);
    system("CLS");
    printf("Thanks For Executing the program!!!\n\n");
    return 0;
}
void insert()
{



    if ((front == 0) && (rear == 0))
    { 
         front++;
        rear++;
        printf("Enter a value for QUEUE\n");
       
        scanf("%d", &queue[rear]);
       
    }
    else if ((front != 0) && (rear <= n))
    {
        rear++;
        printf("Enter a value for QUEUE\n");
        scanf("%d", &queue[rear]);
    }
    else if ((front != 0) && (rear == n))
    {
        printf("OOPS.... The QUEUE is FULL..\n");
    }
  
    else
    {

        printf("Can't Insert To QUEUE\n");
    }
}
void delete()
{

    if ((front == 0) && (rear == 0))
    {
        printf("The QUEUE is UnderFlow\tCan't DELETE\n\n");
    }
    else if ((front != 0)&&(front!=rear))
    {
        queue[front] = 0;
        front++;
        printf("The ITEM is DELETED\n\n");
    }
   else{
    front=0;
    rear=0;
   }

}
void display()
{
    int c;
    printf("The QUEUE is:\n");
    for (c = 1; c <= n; c++)
    {
        printf("LOC %d=DATA %d\n", c, queue[c]);
    }
}