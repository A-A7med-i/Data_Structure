#include <iostream>

using namespace std;

// const int MAXSIZE = 100; fixed size

template <class T>

class queue{

private:

    int front, back, size, maxSize;
    int *array;

public:

    queue(int sz = 10){

        if(sz < 0) maxSize = 10;

        else back = maxSize-1;

        maxSize = sz; 

        array = new T[maxSize];

        size = front = 0;
    }

    void enQueue(T element){
        if(isFull()){
            cout<<"The Queue Is Full"<<endl;
        }
        else{
            back = (back+1) % maxSize;
            array[back] = element;
            size++;
        }
    }


    void deQueue(){
        if (isEmpty()){
            cout<<"The Queue Is Empty"<<endl;
        }
        else{
            front = (front+1) % maxSize;
            size --;
        }
    }

    int search(T element){
        int pos = -1;

        if(isEmpty()){
            cout<<"The Queue Is Empty"<<endl;
        }
        else{
            for (size_t i = front; i < back; i = (i+1) % maxSize){
                if(array[i] == element){
                    pos = i;
                    break;
                }
            }
        }

        return pos;
    }


    void print(){
        for (size_t i = front; i <= back; i = (i+1)%100){
            cout<<array[i]<<" ";
        }
    }


    
    int getFront(){
        return array[front];
    }

    int getBack(){
        return array[back];
    }

    bool isFull(){
        return size == maxSize-1;
    }

    bool isEmpty(){
        return size == 0;
    }

    int getSize(){
        return size;
    }

};



int main(){

    queue <int> q;

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);

    cout<<q.getFront()<<endl; // 1

    cout<<q.getBack()<<endl; // 4

    q.deQueue();

    cout<<q.getFront()<<endl; // 2

    cout<<q.getBack()<<endl;  // 4

    cout<<q.search(10)<<endl; // -1

    cout<<q.search(3)<<endl;  // 2

    q.print(); // 2 3 4


    return 0;
}