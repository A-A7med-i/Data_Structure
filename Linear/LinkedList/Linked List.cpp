#include <iostream>

using namespace std;



struct Node
{
    int value;
    Node *next;
};



class LinkedList{


private:

    int size;
    Node *first, *last;



public:




    LinkedList(){
        size = 0;
        first = last = NULL;
    }



    ~LinkedList(){
        Node *current ;
        while (first != NULL){
            current = first;
            first = first->next;
            delete current;
        }
        last = NULL;
        size = 0;
    }





    void insertFirst(int element){
        Node *newItem = new Node;

        newItem->value = element;

        if(isEmpty()){
            first = last = newItem;
            newItem->next = NULL;
        }

        else{
            newItem->next = first;
            first = newItem;
        }

        size++;

    }






    void insertLast(int element){
        Node *newItem = new Node;

        newItem->value = element;

        if(isEmpty()){
            first = last = newItem;
            newItem->next = NULL;
        }

        else{
            last->next = newItem;
            newItem->next = NULL;
            last = newItem;
        }

        size++;       
    }






    void insertAt(int pos, int element){

            Node *newItem = new Node;
            newItem->value = element;

        if(pos < 0 || pos > size){
            cout<<"Out Of Range"<<endl;
        }

        else{

            if( pos == 0 ){
                insertFirst(element);
            }

            else if(pos == size){
                insertLast(element);
            }

            else{
                Node *current = first;
                for (size_t i = 1; i < pos; i++){
                    current = current->next;
                }
                newItem->next = current->next;
                current->next = newItem;
                size++;
            }
        }
    }






    void removeFirst(){
        if(isEmpty()){
            cout<<"The List Is Empty"<<endl;
        }
        else{
            if(size == 1){
                first = last = NULL;
                delete first;
            }
            else{
                Node *current = first;
                first = first->next;
                current->next = NULL;
                delete current;
            }
            size--;
        }
    }





    void removeLast(){
        if(isEmpty()){
            cout<<"The List Is Empty"<<endl;
        }
        else{
            if(size == 1){
                first = last = NULL;
                delete last;
            }
            else{
                Node *current = first->next;
                Node *previous = first;

                while (current != last){
                    previous = current;
                    current = current->next;
                }   
                
                delete current;
                previous->next = NULL;
                last = previous;
            }
            size--;
        }        
    }




    void removeAt(int pos){

        if(isEmpty()){
            cout<<"The List Is Empty"<<endl;
        }

        else if(pos < 0 || pos > size){
            cout<<"Out Of Range"<<endl;
        }

        else{

            if(size == 1){
                first = last = NULL;
                delete last;
            }

            else if(pos ==0 ){
                removeFirst();
            }

            else if(pos == size){
                removeLast();
            }

            else{
                Node *current = first->next;
                Node *previous = first;

                for (size_t i = 1; i < pos; i++){
                    previous = current;
                    current = current->next;
                }
    
                previous->next = current->next;

                delete current;

            }
            size--;

        }        
    }



    void remove(int element){
        if(isEmpty()){
            cout<<"The List Is Empty"<<endl;
        }
        else{
            Node *current = first->next;
            Node *previous = first;

            while (current != NULL){
                if(current->value == element) break;

                previous = current;
                current = current->next;

            }

            if(current == NULL){
                cout<<"The Item Not Founded"<<endl;
            }

            else if(current == first){
                removeFirst();
            }

            else if(current == last){
                removeLast();
            }

            else{

                previous->next = current->next;
                delete current;
                size--;    

            }
            
        }
    }




    int search(int element){
        int pos = -1;
        if(isEmpty()){
            cout<<"The List Is Empty"<<endl;
        }
        else{
            Node *current = first;
            for (size_t i = 0; i < size; i++){

                if(current->value == element){
                    pos = i;
                    break;
                }

                current = current->next;
                
            }
        }

        return pos;

    }




    void print(){
            Node *current = first;

            while (current != NULL){
                cout<<current->value<<" ";
                current = current->next;
            }

            cout<<endl;

    }


    int getSize(){
        return size;
    }



    bool isEmpty(){
        return size == 0;
    }



    int getFirst(){
        return first->value;
    }



    int getLast(){
        return last->value;
    }

};






int main(){


    LinkedList l;

    l.insertFirst(1);
    l.insertLast(3);
    l.insertLast(4);
    l.insertLast(5);
    l.insertLast(6);

    l.print(); // 1 3 4 5 6

    cout<<l.getFirst()<<endl; // 1

    cout<<l.getLast()<<endl; // 6 

    l.insertAt(1, 2);

    l.print(); // 1 2 3 4 5 6
    
    l.removeFirst();

    l.print(); // 2 3 4 5 6

    l.removeLast(); 

    l.print();  // 2 3 4 5

    l.removeAt(1);

    l.print(); // 2 4 5

    l.remove(10); // not founded

    l.remove(4);

    l.print(); // 2 5



    l.insertLast(6);
    l.insertLast(7);
    l.insertLast(8);


    cout<<l.search(10)<<endl;// -1


    cout<<l.search(2)<<endl; // 0



    cout<<l.search(8)<<endl; // 4


    cout<<l.search(6)<<endl; // 2





    return 0;
}