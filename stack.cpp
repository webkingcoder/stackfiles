#include<iostream>
using namespace std;

struct stack
{
    int arr[8];
    int tos;
};

void push(struct stack*,int);
void push(struct stack*p,int a)
{
    if (p->tos==4)
    {
        cout<<"stack overflow"<<endl;
        return ;
    }
p->tos=p->tos=+1;
p->arr[p->tos]=a;
cout<<"the pushed value is : "<<a<<endl;
}

int pop(struct stack*);
int pop(struct stack*p)
{
    if (p->tos==-1)
    {
        cout<<"stack underflow "<<endl;
        return 0;
    }
int x=p->arr[p->tos];
p->tos=p->tos-1;
return x;    
}


int main()
{
    struct stack k;
    k.tos=-1;
    int x;
    for (int i = 0; i < 5; i++)
    {
        cout<<"enter the value: ";
        cin>>x;
        push(&k,x);
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"enter the value: ";
        cin>>x;
        x=pop(&k);
        cout<<"the poped value is : "<<x<<endl;
    }
    
    return 0;
}