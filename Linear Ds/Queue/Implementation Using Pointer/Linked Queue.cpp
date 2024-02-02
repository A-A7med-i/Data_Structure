#include <iostream>

using namespace std;

struct Node{
    int value;
    Node *next;
};

template <class T>

class queue{

private:
    Node *front , *back;
    int size;

public:

    queue(){
        front = back = NULL;
        size = 0;
    }

    void enQueue(T element){

        Node *newItem = new Node;
        
        newItem->value = element;

        newItem->next = NULL;


        if(isEmpty()){
            front = back = newItem;
        }

        else{
            back->next = newItem;
            back = newItem;
        }

        size++;
    }


    void deQueue(){
        if(isEmpty()){
            cout<<"The Queue Is Empty"<<endl;
        }
        else{
            if(size == 0){
                front = back = NULL;
            }
            else{
                Node *current = front;
                front = front->next;
                current->next = NULL;
                delete current;
            }
            size--;
        }
    }



    void print(){
        Node *current = front;
        while (current != NULL){
            cout<<current->value<<" ";
            current = current->next;
        }
    }


    bool isEmpty(){
        return size == 0;
    }

    int getSize(){
        return size;
    }

    int getFront(){
        return front->value;
    }

    int getBack(){
        return back->value;
    }


};




int main(){

    queue <int> q;

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);

    cout<<q.getFront()<<endl;  // 1
 
    cout<<q.getBack()<<endl;   // 4 


    cout<<q.getSize()<<endl;   // 4

    q.deQueue();


    cout<<q.getFront()<<endl;  // 2

    cout<<q.getBack()<<endl;  // 4


    cout<<q.getSize()<<endl;  // 3

    q.print();


    return 0;
}