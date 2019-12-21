#include <iostream>
#include <cstdlib>

using namespace std;

struct stock
{
    int arr[10];
    int top = -1 ;
}stock1;

void display()
{
    if (stock1.top == -1)
    {
        cout << "Stack is Empty!"<<endl;
    }
    else{
        for(int i = 0; i<=stock1.top; i++)
        {
            cout << stock1.arr[i]<<endl;
        }
    }
}



void push(){

    int x;

    cout << "Please enter Info: ";
    cin >> x;

    if(stock1.top== -1){
        stock1.top++;
        stock1.arr[stock1.top] = x;
    }
    else if(stock1.top>=0 && stock1.top < 10){
        stock1.top++;
        stock1.arr[stock1.top] = x;
    }
    else
        cout << "OverFlow....!\n";
    }

void pop(){

    if(stock1.top <0 || stock1.top > 9 ){
        cout << "Under Flow...!\n";
    }
    else{
        stock1.arr[stock1.top] = NULL;
        stock1.top--;
    }
}

int main(){

    int choice;
    label:

    cout << " [ 1 ] Insertion\n [ 2 ] Deletion\n [ 3 ] Display\n\n Enter your Choice:  ";
    cin >> choice;
    switch(choice){
    case 1:
        system("cls");
        push();
        goto label;
    case 2:
        system("cls");
        pop();
        goto label;
    case 3:
        system("cls");
        display();
        goto label;
    default:
        cout << "Wrong Input....!\n";
        goto label;
    }

    return 0;
}
