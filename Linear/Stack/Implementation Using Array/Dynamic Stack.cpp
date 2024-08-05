#include <iostream>

using namespace std;


// const int MAXSIZE = 100;  fixed size


template <class T>

class stack{

private:

    int top;
    T *array;
    int maxSize;


public:

    stack(int size = 10){
        if(size < 0){
            maxSize = 10;
        }
        else{
            maxSize = size;
            array = new T[maxSize];
        }
        top = 0;
    }

    
    void push(T element){
        if(isFull()){
            cout<<"The Stack Is Full"<<endl;
        }
        else{
            top++;
            array[top] = element;
        }
    }


    void pop(){
        if(isEmpty()){
            cout<<"The Stack Is Empty"<<endl;
        }
        else{
            top--;
        }
    }

    void getTop(){
        if(isEmpty()){
            cout<<"The Stack Is Empty"<<endl;
        }
        else{
            cout<<array[top]<<endl;
        }
    }


    void print(){
        for (size_t i = top; i > 0; i--){
            cout<<array[i]<<" ";
        }
    }

    int getSize(){
        return top;
    }

    bool isEmpty(){
        return top == 0;
    }

    bool isFull(){
        return top == maxSize;
    }



};



int main(){

    stack <int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    s.getTop(); // 5

    s.pop();

    s.getTop(); // 4

    cout<<s.getSize()<<endl; // 4

    s.print(); // 4 3 2 1

    return 0;
}