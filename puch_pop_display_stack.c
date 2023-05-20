#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int top=0;
int n;
int *stack;
void insertion();
void deletion();
void display();
int main(){
int input;
printf("Enter The Number Of Element In STACK\n");
scanf("%d",&n);
stack=(int *)malloc(n*sizeof(int));
do{
printf("Enter The OPTION from The following\n");
printf("1.INSERTING IN STACK\t2.DELETING FROM STACK\n3.DISPLAY THE SATCK\t4.EXIT THE PROGRAM\n");
scanf("%d",&input);
if(input==1){
    system("CLS");
    insertion();
}
else if(input==2){
    system("CLS");
deletion();
}
else if(input==3){
    system("CLS");
display();
}
else{
system("CLS");
printf("INVALID INPUT\n");
}
}while(input!=4);
system("CLS");
printf("Thanks For Using This Program!!\n\n");
return 0;}
void insertion(){
    if(top<n){
top=top+1;
printf("Please Enter A Value For POSITION %d\n",top);
scanf("%d",&stack[top]);
    }
    else{
printf("\nOOPS.....THE STACK IS FULL!!!\n");

    }
}
void deletion(){
if(top==0){
    printf("The Stack IS Empty!\n");
}
else{
    printf("DATA");
    stack[top]=NULL;
    top=top-1;

}
}
void display(){
    int j=1;
    int i=1;
    printf("\nThe total elements in stack is:\n\n");
for(i;i<=n;i++){
printf("LOC %d=DATA %d\n",j,stack[i]);
j++;
}

}