#include<stdio.h>
#include<conio.h>
#include<string.h>
int top=-1;
char stack[13];
void push(char x)
{
top=top+1;

stack[top]=x;

}
void pop(char t)
{
if(t=='}')
{

if(stack[top]=='{')
top=top-1;

}
else if(t==')'){

if(stack[top]=='(')
top=top-1;

}
else if(t==']'){

if(stack[top]=='[')
top=top-1;
}


}
void display()
{
int i;
if(top==-1)
printf("stack empty\n this is a balanced paranthesis");
else{

for(i=0;i<=top;i++)
printf("\t %c",stack[i]);
}}
int main()
{
char exp[36],x,t;
int k,i;

scanf("%s",exp);
printf("your input is %s",exp);
k=strlen(exp);
printf("\nthe length of exp is %d",k);
for(i=0;i<k;i++)
{
if((exp[i]=='{')||(exp[i]=='(')||(exp[i]=='['))
{
x=exp[i];
push(x);

           }
           else if((exp[i]=='}')||(exp[i]==')')||(exp[i]==']'))
           {

          t=exp[i];

           pop(t);
    }
}
display();
getch();
}
