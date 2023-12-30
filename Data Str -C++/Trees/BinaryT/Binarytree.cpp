#include<iostream>
using namespace std;

class Node{
public:

    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;

    }

};

class Tree{
public:
    Node* buildTree(Node* node){

        cout<<"Enter the data: "<<endl;
        int data;
        cin>>data;

        node= new Node(data);

        // defining Condition to stop!
        if(data ==-1){
            return NULL;
        }


        cout<<"Enter data for inserting in left of "<<data<<endl;
        node->left=buildTree(node->left);
       
        cout<<"Enter data for inserting in right of "<<data<<endl;
        node->right=buildTree(node->right);

        

        return node;
    }



    void preorder(Node* node){
        if(node == NULL){
            return;
        }

        cout<<node->data<<" ";
        preorder(node->left);
        preorder(node->right);
        cout<<endl;
    }


    void inorder(Node* node){
        if(node == NULL){
            return;
        }

        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);
        cout<<endl;

    }

    void postorder(Node* node){
        if(node == NULL){
            return;
        }

        postorder(node->left);
        postorder(node->right);
        cout<<node->data<<" ";
        cout<<endl;
    }
    
};



int main (){

    Tree t;

    Node* root = NULL;

    root = t.buildTree(root);
    cout<<"Tree Created :)"<<endl;

    // t.preorder(root);
    cout<<endl;
    t.inorder(root);
    cout<<endl;
    // t.postorder(root);
    


    return 0;
}