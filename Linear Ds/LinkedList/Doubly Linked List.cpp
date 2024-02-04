#include <iostream>

using namespace std;


struct Node
{
	int value;
	Node *next , *previous;
};


class 	LinkedList
{


private:

	Node *first , *last;
	int size ;


public:


	LinkedList(){
		first = last = NULL;
		size = 0;
	}


	~LinkedList(){
		Node *current;
		while (current != NULL){
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
			newItem->previous = newItem->next = NULL;
		}

		else{
			newItem->previous = NULL;
			newItem->next = first;
			first->previous = newItem;
			first = newItem;
		}

		size++;

	}



	void insertLast(int element){

		Node *newItem = new Node;

		newItem->value = element;

		if(isEmpty()){
			first = last = newItem;
			newItem->previous = newItem->next = NULL;
		}

		else{
			newItem->next = NULL;
			newItem->previous = last;
			last->next = newItem;
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

			if(pos == 0){
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

				newItem->previous = current;

				newItem->next = current->next;

				current->next = newItem;

				current->next->previous = newItem;

				size++;		
		
			}

		}

	}




	void removeFirst(){

		if(isEmpty()){
			cout<<"The List Is Empty"<<endl;
		}

		else if(size == 1){
			first = last = NULL;
			delete first;
			size--;
		}

		else{

			Node *current = first ;

			first = first->next;

			first->previous = NULL;

			delete current;

			size--;

		}


	}





	void removeLast(){

		if(isEmpty()){
			cout<<"The List Is Empty"<<endl;
		}

		else if(size == 1){

			first = last = NULL;
			delete first;
			size--;

		}

		else{

			Node *current = last ;

			last = last->previous;

			last->next = NULL;

			delete current;

			size--;

		}

	}



	void remove(int element){


		if(isEmpty()){
			cout<<"The List Is Empty"<<endl;
		}

		else{

			Node *current = first;

			if(current->value == element){
				removeFirst();
			}

			else if(last->value == element){
				removeLast();
			}

			else{
		
				while (current != NULL){
					if(current->value == element) break;
					current = current->next;
				}

				if(current == NULL) {
					cout<<"The Element Not Founded"<<endl;
				}

				else{
					current->previous->next = current->next;
					current->next->previous = current->previous;
					delete current;
					size--;
				}
		
			}
		}

	}






	void removeAt(int pos){

		if(isEmpty()){
			cout<<"The List Is Empty"<<endl;
		}

		else if(pos < 0 || pos > size){
			cout<<"Out Of Index"<<endl;
		}

		else{

			Node *current = first;

			for (size_t i = 1; i < pos; i++){
				current = current->next;
			}

			if(current == first){
				removeFirst();
			}

			else if(current == last){
				removeLast();
			}

			else{
				current->next->previous = current->previous;
				current->previous->next = current->next;
				delete current;
				size--;
			}

		}		

	}


	void print(){
		Node *current = first;
		while (current != NULL){
			cout<<current->value<<" ";
			current = current->next;
		}
		cout<<"\n";
	}



	bool isEmpty(){
		return size == 0;
	}

	int getSize(){
		return size;
	}

	int getFirst(){
		return first->value;
	}

	int getLast(){
		return last->value;
	}


};



int main(){


	LinkedList l ;

	l.insertFirst(1);
	l.insertLast(2);
	l.insertLast(3);
	l.insertLast(4);
	l.insertLast(5);

	cout<<l.getSize()<<endl; // 5

	cout<<l.getFirst()<<endl; // 1

	cout<<l.getLast()<<endl; // 5

	l.insertAt(0, 10);

	cout<<l.getSize()<<endl;  // 6

	cout<<l.getFirst()<<endl;  // 10

	cout<<l.getLast()<<endl;  // 5

	l.insertAt(7, 20); // out of range

	l.insertAt(6, 20);

	l.print(); // 10 1 2 3 4 5 20

	l.insertAt(2, 30);

	l.print(); // 10 1 20 2 3 4 5 20

	l.removeFirst();

	l.print(); // 1 20 2 3 4 5 20

	l.removeLast();

	l.print(); // 1 20 3 4 5 

	l.remove(100); // not founded

	l.print(); // 1 30 2 3 4 5

	l.remove(1);

	l.remove(5);

	l.remove(3);

	l.print();  // 30 2 4

	l.insertLast(50);
	l.insertLast(60);
	l.insertLast(70);


	l.print(); //  30 2 4 50 60 70


	l.removeAt(0); 


	l.print(); // 2 4 50 60 70


	l.removeAt(10); // out of index


	l.removeAt(5); 


	l.print(); // 2 4 50 60


	l.removeAt(2); // 2 50 60

	l.print();


	return 0;
}
