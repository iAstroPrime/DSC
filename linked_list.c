#include <stdio.h>
#include <stdlib.h>
int nnodes;
int counter = 1;
struct node
{
    int data;
    struct node *link;
};
struct node *head = NULL;
void insertion(int n);
void creation(int n);
void deletion(int num);
void display();
int main()
{
    int input, n, i, num;
    printf("\t**THIS IS A SINGLY LINKED LIST!**\n");
    printf("\nEnter The number of nodes you wanna Create!\n");
    scanf("%d", &nnodes);
    head = (struct node *)malloc((nnodes + 1) * sizeof(struct node));
    creation(nnodes);

    do
    {
        printf("Enter The OPTION from The following\n");
        printf("1.INSERTING IN Linked List\t2.DELETING FROM Linked List\n3.DISPLAY THE Linked List\t4.EXIT THE PROGRAM\n");
        scanf("%d", &input);
        if (input == 1)
        {
            system("CLS");
            printf("Enter the number of node in which you want to Insert Data\n");
            scanf("%d", &n);
            insertion(n);
        }
        else if (input == 2)
        {
            system("CLS");
            printf("Enter the number of Node you want to Delete?\n");
            scanf("%d", &num);
            deletion(num);
        }
        else if (input == 3)
        {
            system("CLS");
            display();
        }
        else
        {
            system("CLS");
            printf("INVALID INPUT\n");
        }
    } while (input != 4);
    system("CLS");
    printf("Thanks For Using This Program!!\n\n");
    return 0;
}

void insertion(int n)
{
    int data;
    if (n > nnodes || n == 0)
    {
        printf("Data can't be Inserted in this Node\n ");
    }
    else
    {
        printf("Enter The Data For Node%d\n", n);
        scanf("%d", &head[n].data);
    }
}
void creation(int n)
{
    int i;
    for (i = 0; i < nnodes; i++)
    {
        if (counter != nnodes + 1)
        {
            printf("Enter The data for node %d\n", counter);
            head[counter - 1].link = &head[counter];
            scanf("%d", &head[counter].data);
            counter++;
        }
        else
        {
            printf("The Linked List Is Full\n");
        }
    }
}

void deletion(int num)
{
    int i;
    int j = nnodes;
    if (num > nnodes || num == 0)
    {

        printf("Such Node Dose'nt EXISTS\n");
    }
    else
    {
        if (head[num].data == NULL)
        {
            printf("Node Dose'nt EXISTS\n");
        }
        else
        {
            if (num == nnodes)
            {
                printf("Data %d from Node%d is Successfully Deleted\n", head[num].data, num);
                head[num].data = NULL;
            }
            else
            {

                printf("Data %d from Node%d is Successfully Deleted\n", head[num].data, num);
                head[num].data = NULL;
                for (i = num; i <= nnodes; i++)
                {

                    head[i] = head[i + 1];
                }
                head[j].data = NULL;
                j--;
            }
        }
    }
}
void display()
{
    int i, c = 1;
    printf("Start->");
    for (i = 1; i <= nnodes; i++)
    {
        if (head[i].data != NULL)
        {

            printf("node%d=%d->", c, head[i].data);
            c++;
        }
    }
    printf("End\n\n");
}
