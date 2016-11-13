//hacker earth Signal Range stack class
#include<bits/stdc++.h>
using namespace std;
class stack1
{
vector<int> stack;

int top=0;
    int n;
    public:
    stack1(int z)
    {
        n=z;
        stack.resize(z);
    }
void push (int x ) 
{
 if ( top == n-1 ) {         //If the top position is the last of position in a stack, this means that the stack is full
    cout << "Stack is full.Overflow condition!" ;
    }
    else{
        top = top +1 ;            //Incrementing top position 
        stack[ top ] = x ;       //Inserting element on incremented position  
    }
}
 void pop ( ) 
    {

        if( isEmpty ( ) )
        {
            cout << "Stack is empty. Underflow condition! "<< endl ;
        }
        else    
        {
             top = top - 1 ; //Decrementing top’s position will detach last element from stack            
        }
    }
 int print(int j)
 {int count1=0;
     for(int i=0;i<j;i++)
     if(stack[j]>stack[i])
     count1++;
     cout<<count1<<" ";
     
 }
int topElement ( )
    {
        return stack[ top ];
    }
    
void print()
{
    for(int i=0;i<top;i++)
   cout<<stack[i]<<" ";
}
bool isEmpty ( )
    {
        if ( top == -1 )  //Stack is empty
        return true ; 
        else
        return false;
    }
int size ( )
    {
        return top + 1;
    }
};   
int main( )
{
 int t,l,m;
 cin>>t;
 cin>>l;
  stack1 m1(l+1);

 for(int i=0;i<l;i++)
 {
     cin>>m;
     m1.push(m);
 }
for(int i=1;i<=l;i++)  
m1.print(i);
}