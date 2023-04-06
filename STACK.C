#include<stdio.h>
#include<conio.h>
#define maxsize 5
int a[maxsize];
int top=-1;
void push();
void pop();
void display();
void main(){
int choice;
clrscr();
while(24){
printf("\n enter your choice :\n 1:push\n 2:pop\n 3:display\n 4:exit\n choice =  ");
scanf("%d",&choice);
switch(choice){
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit();
default: printf("enter wrong choice");
}
}
getch();
}
void push(){
int item;
if(top==maxsize-1){
printf("stack is overflow \n");
}
else{
printf("enter the item : ");
scanf("%d",&item);
top=top+1;
a[top]=item;
}
}
void pop(){
if(top==-1){
printf("stack is underflow \n");
}
else{
printf("deleted item from stack = %d \n",a[top]);
top--;
}
}
void display(){
int i;
if(top==-1){
printf("stack is empty ");
}
else{
printf("stack is : ");
for(i=0;i<=top;i++){
printf("%d ",a[i]);
}
}
}



