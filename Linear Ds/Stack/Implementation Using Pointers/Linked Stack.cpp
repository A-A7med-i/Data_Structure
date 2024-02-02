#include <iostream>

using namespace std;




struct Node
{
    int value;
    Node *next;
};


template <class T>


class stack{

private:

    Node *top;
    int size;


public:

    stack(){
        top = NULL;
        size = 0 ;
    }



    void push(T element){

        Node *newItem = new Node;

        newItem->value = element;

        newItem->next = top;

        top = newItem;

        size++;
    }


    void pop(){
        if(isEmpty()){
            cout<<"The Stack Is Empty"<<endl;
        }
        else{
            Node *current = top;
            top = top->next;
            delete current;
            size--;
        }
    }


    void print(){
        Node *current = top;
        while (current != NULL){
            cout<<current->value<<" ";
            current = current->next;
        }
    }


    int getTop(){
        return top->value;
    }


    int getSize(){
        return size;
    }

    bool isEmpty(){
        return size == 0;
    }


};



int main(){


    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);


    cout<<s.getTop()<<endl; // 5

    s.pop();

    cout<<s.getTop()<<endl; // 4

    cout<<s.getSize()<<endl; // 3

    s.print(); // 4 3 2 1


    return 0;
}