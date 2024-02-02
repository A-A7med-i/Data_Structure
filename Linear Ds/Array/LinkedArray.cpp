#include <iostream>

using namespace std;





template <class T>



class ArrayList{


private:

    int size, maxSize;
    int *array;


public:

    ArrayList(int sz = 10){
        if(sz < 0){
            maxSize = 10;
        }
        else{
            maxSize = size;
        }
        array = new T[maxSize];
        size = 0;
    }



    ~ArrayList(){
        delete [] array;
    }




    void insertEnd(T element){
        if(isFull()){
            cout<<"The Array Is Full"<<endl;
        }
        else{
            array[size++] = element;
        }
    }



    void insertAt(int pos, T element){
        if(isFull()){
            cout<<"The Array Is Full"<<endl;
        }

        else if(pos < 0 || pos > maxSize){
            cout<<"Out Of Range"<<endl;
        }
        
        else{
            if(pos == size){
                insertEnd(element);
            }
            else{
                for (size_t i = size; i < pos; i++){
                    array[i] = array[i-1];
                }
                array[pos] = element;
                size++;
            }
        }

    }





    void removeAt(int pos){
        if(isEmpty()){
            cout<<"The Array Is Empty"<<endl;
        }

        else if(pos < 0 || pos > maxSize){
            cout<<"Out Of Range"<<endl;
        }

        else{
            for (size_t i = pos; i < size-1; i++){
                array[i] = array[i+1];
            }
            size--;
        }

    }



    int search(int element){
        int pos = -1;

        if (isEmpty()){
            cout<<"The Array Is Empty"<<endl;
        }

        else{
            for (size_t i = 0; i < size; i++){
                if(array[i] == element){
                    pos = i;
                    break;
                }
            }
        }

        return pos;
        
    }



    void print(){
        for (size_t i = 0; i < size; i++){
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }



    bool isEmpty(){
        return size == 0;
    }



    bool isFull(){
        return size == maxSize;
    }



    int getSize(){
        return size;
    }



};



int main(){


    ArrayList <int> array;


    array.insertAt(0,10);
    array.insertAt(1,20);
    array.insertAt(2,30);
    array.insertAt(3,40);
    array.insertAt(4,50);


    array.print(); // 10 20 30 40 50 


    cout<<array.getSize()<<endl;  // 5


    array.insertEnd(60);


    array.print(); // 10 20 30 40 50 60


    cout<<array.getSize()<<endl; // 6


    array.removeAt(1); 


    array.print(); // 10 30 40 50 60


    cout<<array.getSize()<<endl; // 5


    cout<<array.search(10)<<endl; // 0


    cout<<array.search(20)<<endl; // -1


    cout<<array.search(40)<<endl; // 2


    return 0;
}