// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* left;
//     Node* right;

//     Node(int d){
//         this->data=d;
//         this->left=NULL;
//         this->right=NULL;
//     }

// };
// class BSTtree{

// public:

//     void inorderscc(Node* node,int val){
//         if(node==NULL){
//             return;
//         }
//         inorderscc(node->left,val);
//         cout<<node->data<<" ";
//         inorderscc(node->right,val);
//     }















//     Node* minVal(Node* node){
//         Node* temp = node;

//         while(temp->left!=NULL){
//             temp=temp->left;
//         }
//         return temp;
//     }

//     Node* maxVal(Node* node){
//         Node* temp = node;

//         while(temp->right!=NULL){
//             temp=temp->right;
//         }
//         return temp;
//     }

//         void takeinput(Node* &node){
//         int data;
//         cin>>data;

//         while(data!= -1){
//             insertintoBST(node,data);
//             cin>>data;
//         }
//     }

    // void preorder(Node* node){

    //     if(node==NULL){
    //         return;
    //     }
    //     cout<<node->data<<" ";
    //     preorder(node->left);
    //     preorder(node->right);
    // }



//     Node* insertintoBST(Node* &node,int d){

//         if(node==NULL){
//             node=new Node(d);
//             return node;
//         }

//         if(d>node->data){
//             node->right = insertintoBST(node->right,d); 
//         }
//         else{
//             node->left = insertintoBST(node->left, d);
//         }

//         return node;
//     };


//     void searchBST(Node* node,int x){
//         if(node == NULL){
//             cout<<"Not found! "<<endl;
//             return;

//         }
//         if(node->data ==x){
//             cout<<"Founded "<<x<<endl;
//             return;
//         }
//         if(node->data > x){
//             searchBST(node->left,x);
//         }
//         else{
//             searchBST(node->right,x);
//         }

//     }

//     Node* deletenode(Node* &node,int val){

//         if(node == NULL){
//             return node;
//         }

//         if(node->data == val){
//             // 0 child
//             if(node->left==NULL && node->right == NULL){
//                 delete node;
//                 return NULL;
//             }

//             // 1 child

//             if(node->left != NULL && node->right == NULL){
//                     Node* temp = node->left;
//                     delete node;
//                     return temp;
//                 }
//             if(node->left == NULL && node->right != NULL){
//                     Node* temp = node->right;
//                     delete node;
//                     return temp;
//                 }

//             // 2 child

//             if(node->left != NULL && node->right != NULL){
                    
//                     int min= minVal(node->right)->data;
//                     node->data = min;
//                     node->right = deletenode(node->right, min);
//                     return node;

//                 }

//         }
//         else if(node->data > val){
//             node->left = deletenode(node->left, val);
//             return node;
//         }
//         else{
//             node->right = deletenode(node->right, val);
//             return node;
//         }};






// };

// int main (){
//     Node* root = NULL;

//     BSTtree t;

//     cout<<"Enter the data: "<<endl;
//     t.takeinput(root);
//     cout<<"Printing. . "<<endl;
//     t.preorder(root);

//     cout<<endl;
//     // t.searchBST(root,60);
//     // t.searchBST(root,100);
//     // t.searchBST(root,21);
//     // t.searchBST(root,11);
//     // t.searchBST(root,70);
//     // t.searchBST(root,56);

//     // cout<<t.minVal(root)->data;
//     // cout<<endl;
//     // cout<<t.maxVal(root)->data;

//     // root=t.deletenode(root,5);
//     // t.preorder(root);

//     t.inorderscc(root,5);

    





// return 0;

// }

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
class BSTtree{

public:

    void inorderscc(Node* node,int val){
        if(node==NULL){
            return;
        }
        
        inorderscc(node->left,val);
        cout<<node->data<<" ";
        inorderscc(node->right,val);
    }

    void preorder(Node* node){

        if(node==NULL){
            return;
        }
        cout<<node->data<<" ";
        preorder(node->left);
        preorder(node->right);
    }

    Node* insertintoBST(Node* &node,int d){

        if(node==NULL){
            node=new Node(d);
            return node;
        }

        if(d>node->data){
            node->right = insertintoBST(node->right,d); 
        }
        else{
            node->left = insertintoBST(node->left, d);
        }

        return node;
    };




};

int main (){
    Node* root = NULL;

    BSTtree t;

    t.insertintoBST(root,21);
    t.insertintoBST(root,10);
    t.insertintoBST(root,5);
    t.insertintoBST(root,15);
    t.insertintoBST(root,50);
    t.insertintoBST(root,40);
    t.insertintoBST(root,60);
    t.insertintoBST(root,55);
    t.insertintoBST(root,70);

    cout<<"Printing. . "<<endl;

    cout<<"Preorder"<<endl;
    t.preorder(root);
    cout<<endl;
    cout<<"inorder"<<endl;
    t.inorderscc(root,5);
return 0;

}