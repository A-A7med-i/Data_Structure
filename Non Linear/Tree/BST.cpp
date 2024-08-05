#include <iostream>

using namespace std;


struct Node
{
    int value;
    Node *right;
    Node *left;
};




class binarySearchTree{

    private:

        Node *root;



    public:



        binarySearchTree(){
            root = NULL;
        }



        void insert(int element){
            Node *newItem = new Node;

            Node *current ;

            Node *previousCurrent ;


            newItem->value = element;

            newItem->left = newItem->right = NULL;

            if(isEmpty()){
                root = newItem ;
            }

            else{

                current = root;

                while (current != NULL){

                    previousCurrent = current;

                    if(current->value > element){
                        current = current->right;
                    }

                    else if(current->value < element){
                        current = current->left;
                    }
                    
                }

                if(previousCurrent->value > element){
                    previousCurrent->left = newItem;
                }

                else {
                    previousCurrent->right = newItem;
                }

            }

        }


        bool search(int element){
            Node *current = root;

            while (current != NULL){

                if(current->value == element){
                    return true;
                }

                else if(current->value > element){
                    current = current->left;
                }

                else {
                    current = current->right;
                }

            }

            return false;
            
        }


        
        int height(Node *current){
            
            if( current == NULL ) return 0;

            else return 1 + max( height(current->left), height(current->right));
            
        }

        int nodeCount(Node *current){

            if (current == NULL) return 0;

            else 1 + nodeCount(current->left) + nodeCount(current->right);

        }


        bool isEmpty(){
            return root == NULL;
        }


};


int main(){

    binarySearchTree bst;

    bst.insert(10);
    bst.insert(20);
    bst.insert(5);

    cout<<bst.search(20)<<endl; // 1


    return 0;
}


