// #include<iostream>
// using namespace std;



// int bs(int *arr,int d,int &h,int &l,int &m){

//     if (h < l) {
//         cout << "Not Found!" << endl;
//         return -1; // or any suitable value indicating not found
//     }

//     int mid= (h+l)/2;
    
//     if(arr[mid]==d){
//         cout<<"Found"<<endl;
//         return -1;
//     }
//     else{
//         if(arr[mid]>d){
//             h=mid-1;
//             bs(arr,d,h,l,m);
//         }
//         else{
//             l=mid+1;
//             bs(arr,d,h,l,m);
//         }


//     }

// }

// int main (){

//     int array[10]={1,2,3,4,5,6,7,8,9,10};
//     int high=sizeof(array)/sizeof(array[0])-1;
//     int low = 0;
//     int mid= high/2;
   

//     bs(array,4,high,low,mid);


    

// return 0;

// }


// ----------------------------------------------------------------


// #include<iostream>
// using namespace std;


// int LinearSearch(int *A,int n){
//     if(n==1){
//         return A[0];
//     }
//     else{
//         return LinearSearch(A,n-1)+A[n-1];
//     }

// }

// int main (){

//     int array[5]={1,2,3,4,5};

//     cout<<LinearSearch(array,5);


    


// return 0;

// }


// ----------------------------------------


// #include<iostream>
// using namespace std;

// void reverse(int *A,int i,int j){
//     if(i<j){
//         int temp=A[i];
//         A[i]=A[j];
//         A[j]=temp;

//         reverse(A,i+1,j-1);

//     }
//     return;
// }

// int main (){

//     int arr[]={1,2,3,4,5};
//     int f=0;
//     int l=4;
//     reverse(arr,f,l);

//     for(int i =0 ;i<5;i++){
//         cout<<arr[i]<<" ";
//     }
    


// return 0;

// }


// -------------------------------------


// #include<iostream>
// using namespace std;

// int i,j;

// int LinFib(int k){
//     if(k<=1){
//         return (k,0);
//     }
//     else{
//         i,j=LinFib(k-1);
//         return(i+j,i);
//     }
// }

// int main (){

//     cout<<LinFib(4);

    


// return 0;

// }

// -----------------------------------------------


// #include<iostream>
// using namespace std;

// int LinSearch(int *arr,int x,int size,int i=0){
    
//     if(i>size){
//         return -1;
//     }
//     if(arr[i]==x){
//         return 1;
//     }

//     return LinSearch(arr,x,size,i+1);


// }

// int main (){

//     int array[]={1,2,3,4,5,6,7,8,9};

//     cout<<LinSearch(array,11,9);


    


// return 0;

// }

// ------------------------------------------------

// #include<iostream>
// using namespace std;

// int f(int n,int i=1){
    
//     if(i==n){
//         return 0;
//     }

//     if(i%2==0){
//         cout<<i*i*i<<" ";
//     }
//     f(n,i+1);

// }

// int main (){

//     f(10);

// return 0;

// }


// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int data;
//     Node* next;


//     Node(int d){
//         this->data=d;
//         this->next=NULL;
//     }
//     ~Node(){
//         delete next;
//         next=NULL;
//     }
// };

// class SinglyLinkedList{
// public:

//     void insertathead(Node* &head,int d){
//         Node* newnode = new Node(d);
//         newnode->next=head;
//         head=newnode;
//  }
    
//     void showll(Node* head){
//         Node* temp = head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }

//     void displayReverse(Node* head){
//         Node* temp = head;

//         if(temp==NULL){
//             return;
//         }

//         displayReverse(temp->next);

//         cout<<temp->data<<" ";


//     }

// };



// int main (){
//     Node* head=NULL;

//     SinglyLinkedList sll;

//     sll.insertathead(head,5);
//     sll.insertathead(head,10);
//     sll.insertathead(head,15);
//     sll.insertathead(head,20);
//     sll.insertathead(head,25);

//     sll.showll(head);
//     cout<<endl;
//     sll.displayReverse(head);

// return 0;

// }


// ------------------------------------------


// #include<iostream>
// #include<stack>
// using namespace std;

// void 

// int main (){

//     stack<int> s;

//     s.push(5);
//     s.push(10);
//     s.push(15);
//     s.push(20);

//     // cout<<s.top()<<" ";
//     // s.pop();
//     // cout<<s.top()<<" ";
//     // s.pop();
//     // cout<<s.top()<<" ";
//     // s.pop();
//     // cout<<s.top()<<" ";


//     stack <int> s1;

//     for(int i=0;i<4;i++){
//         s1.push(s.top());
//         s.pop();
    
//     }

//     for(int i=0;i<4;i++){
//         cout<<s1.top()<<" ";
//         s1.pop();
//     }




    


  

    


// return 0;

// }
// -------------------------------------------------



#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};
class SinglyLinkedList{

public:
    Node* head=NULL;
    Node* tail=NULL;

    void inserthead(int d){
        Node* newnode = new Node(d);
        newnode->next=head;
        head=newnode;

        if(tail==NULL){
            tail=newnode;
        }


    }
    void inserttail(int d){
        Node* newnode = new Node(d);
        if(tail==NULL){
            tail=head=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }


    }

    void showll(Node* head){
        Node* temp= head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void Mergell(SinglyLinkedList &sl1,SinglyLinkedList &sl2,SinglyLinkedList &ml){
        
        Node* a=sl1.head;
        Node* b=sl2.head;
        Node* c=ml.head;


    
        while(a!=NULL && b!=NULL){
            
        if(a->data < b->data){
            ml.inserttail(a->data);
            a=a->next;
    
            
        }
        else if(b->data < a->data){
            ml.inserttail(b->data);
            b=b->next;
            
        }
        
        else {
         // Duplicate value, insert only once
            ml.inserttail(a->data);
            a = a->next;
            b = b->next;
        }}

         while (a != NULL) {
            ml.inserttail(a->data);
            a = a->next;
        }

        while (b != NULL) {
            ml.inserttail(b->data);
            b = b->next;
        }
    }


    int lengthrec(Node* head,int i=0){
        Node* temp =head;

        if(temp==NULL){
            return i;
        }
        temp=temp->next;
        return lengthrec(temp,i+1);
    }

    void func1(Node*p){
        if(p==NULL){
            return;
        }

        func1(p->next->next);
        cout<<p->data+1;

    }
    void func2(Node* s){
        if(s==NULL){
            return;
        }
        cout<<s->data;
        if(s->next!=NULL){
            func2(s->next->next);
        }

        cout<<s->data;

    }



};



int main (){


    SinglyLinkedList sll1;
    SinglyLinkedList sll2;
    SinglyLinkedList mll;

    sll1.inserthead(1);

    sll1.inserttail(2);
    sll1.inserttail(3);
    sll1.inserttail(4);
    sll1.inserttail(5);
    sll1.inserttail(6);

    sll1.showll(sll1.head);

    cout<<endl;

    sll1.func2(sll1.head->next);

    // cout<<sll1.lengthrec(sll1.head);

    // sll2.inserthead(3);

    // sll2.inserttail(6);
    // sll2.inserttail(9);
    // sll2.inserttail(12);
    // sll2.showll(sll2.head);

    // mll.Mergell(sll1,sll2,mll);
    // cout<<endl;
    // mll.showll(mll.head);


return 0;

}

// -----------------------------------------------------



// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* prev;
//     Node* next;

//     Node(int d){
//         this->data=d;
//         this->next=NULL;
//         this->prev=NULL;

//     }
//     ~Node(){

//     }
// };
// class DLL{

// public:
//     void insertathead(Node* &head,Node* &tail,int d){
//         Node* newnode=new Node(d);
//         if(head==NULL){
//             tail=head=newnode;
//         }
//         else{
//             newnode->next=head;
//             head->prev=newnode;
//             head=newnode;}

//     }
//     void inserttail(Node* &head,Node* &tail,int d){
//         Node* newnode= new Node(d);
//         if(tail==NULL){
//             tail=head=newnode;
//         }
//         else{
//             tail->next=newnode;
//             newnode->prev=tail;
//             tail=newnode;
//         }
//     }


//     void delnode(Node* &head, int p){
        
//         Node* pre=NULL;
//         Node* curr =head;


//         if(p==1){
//             Node* temp=head;
//             temp->next->prev=NULL;
//             head=head->next;
//             temp->next=NULL;

//             delete temp;
//         }
//         else{
//             int c=1;
//         while(c<p){
//             pre=curr;
//             curr=curr->next;
//             c++;
//         }
        
//         pre->next=curr->next;
//         if(curr->next==NULL){
//             curr->prev=NULL;
//         }
//         else{
//             curr->next->prev=pre;
//         }

//         curr->next=NULL;
//         curr->prev=NULL;
//         delete curr;

//         }


        
    
//     }


//     void showll(Node* head){
//         Node* temp = head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//         cout<<endl;
//     }



//     void swap(Node* &head,Node* &tail,int k){
//         Node* kl =head;
//         Node* kr =tail;

//         if(k==0){
//             kl->prev = kr->prev;
//             kl->prev->next = kl;
//             tail=kl;

//             kr->next=kl->next;
//             kr->next->prev=kr;
//             head=kr; 

//             kl->next=NULL;
//             kr->prev=NULL;
            
//         }
//         else{
//             int count=0;
//         while(count!=k){
//             kl=kl->next;
//             kr=kr->prev;
//             count++;
//         }

        


//         // preserving kr
//         Node* krnext=kr->next;
//         Node* krnextp =kr->next->prev;
//         Node* krprev=kr->prev;
//         Node* krpnext =kr->prev->next;
//         // ---------------------------------

//         // swapping:  a:kl   b:kr
//         kl->prev->next =kr;
//         kr->prev=kl->prev;
//         kl->next->prev=kr;
//         kr->next=kl->next;

//         // -------------------------------
//         kl->next=krnext;
//         kl->next->prev=kl;
//         kl->prev=krprev;
//         kl->prev->next=kl;
     
//         }
//     }

//     };

    
    


// int main (){

//     Node* head=NULL;
//     Node* tail=NULL;


//     DLL dl;
//     dl.insertathead(head,tail,0);
//     dl.inserttail(head,tail,1);
//     dl.inserttail(head,tail,2);
//     dl.inserttail(head,tail,3);
//     dl.inserttail(head,tail,4);
//     dl.inserttail(head,tail,5);
//     dl.inserttail(head,tail,6);
//     dl.showll(head);
//     dl.swap(head,tail,1);
//     dl.showll(head);
    







//     // dl.delnode(head,1);


//     // for(int i=1;i<=7;i++){
//     //     if(i%2!=0){
//     //         dl.delnode(head,i);
//     //     }
//     // }

//     // dl.showll(head);

// return 0;}

// ------------------------------------------------



// #include<iostream>
// using namespace std;

// void cubes(int n,int i=1){

//    if(i>n){
//       return;
//    }

//    cout<<i*i*i<<" ";
//    cubes(n,i+1);
// }

// int main (){

//    cubes(5,1);
    


// return 0;

// }

// --------------------------------------------





// #include<iostream>
// using namespace std;

// class Node{
// public:
//     int data;
//     Node* next;

//     Node(int d){
//         this->data=d;
//         this->next=NULL;
//     }
// };
// class SinglyLinkedList{

// public:
//     Node* head=NULL;


//    void insert(Node* &head,int d){
//       Node* newnode= new Node(d);
//       if(head==NULL){
//          head=newnode;
//       }
//       else{
//          Node* temp =head;
//          while(temp->next!=NULL && temp->next->data < d){
//            temp=temp->next;
//           }
//          newnode->next=temp->next;
//          temp->next=newnode;

//       }
//    }

//     void showll(Node* head){
//         Node* temp= head;
//         while(temp!=NULL){
//             cout<<temp->data<<" ";
//             temp=temp->next;
//         }
//     }

 
// };



// int main (){


//     SinglyLinkedList sl;


//    sl.insert(sl.head,1);
//    sl.insert(sl.head,3);
//    sl.insert(sl.head,2);
//    sl.insert(sl.head,16);
//    sl.insert(sl.head,4);
//    sl.showll(sl.head);

//     cout<<endl;




// return 0;

// }


// ----------------------------------


// #include<iostream>
// using namespace std;

// int LinSum(int *arr,int size,int i=0){

//     if(i==size){
//         return 0;
//     }

//     return arr[i] + LinSum(arr,size,i+1) ;

// }

// int main (){

//     int arr[]={10,20,30,40,50};

//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<LinSum(arr,size);


    


// return 0;

// }

// ------------------------------------------




// #include<iostream>
// using namespace std;

// double calc(int x,int n){
//     int res=1;
//     for(int i=1;i<=n;i++){
//         res=res*x;
//     }
//     cout<<res;
// } 

// int main (){
//     cout<<calc(5,4);

    


// return 0;

// }


// ---------------------------------------


// #include<iostream>
// using namespace std;

// class Vector{
// public:
//     int* arr;
//     int capacity;
//     int size;

//     Vector(int initcap = 10){
//         capacity = initcap;
//         arr=new int[capacity];
//         size=0;
//     }
//     ~Vector(){
//         delete[] arr;
//     }


//     void insert(int ind,int d){
//         if(ind<0 || ind>size){
//             cout<<"Invalid OXOXO"<<endl;
//             return;
//         }

//         if(size==capacity)
//     {       
//         capacity=capacity*2;
//         int* newarr = new int[capacity];

//         // Copying the values from previous arr to newarr
//         // in between inserting at 'i' also 

//         for(int i=0;i<ind;++i){
//             newarr[i]=arr[i];
//         }
//         newarr[ind]=d;

//         for(int i=ind;i<size;++i){
//             newarr[i+1] =arr[i];
//         }

//         delete[] arr;
//         arr=newarr;
//     }
//     else{
//         for(int i=size;i>ind;i--){
//             arr[i]=arr[i-1];
//         }
//         arr[ind]=d;
        
//     }
//     size++;
        
//     }

//     void erase(int ind){
//         // NULL and Extreme index case ....

//         // 
//         for(int i=ind;i<size-1;i++){
//             arr[i]=arr[i+1];
//         }

//         size--;
//     }

//     void print(){
//         for(int i=0;i<size;i++){
//             cout<<arr[i]<<" ";
//         }
//     }
// };

// int main (){

//     Vector v1;
//     v1.insert(0,10);
//     v1.insert(1,20);
//     v1.insert(2,30);
//     v1.insert(1,15);
//     v1.print();
//     v1.erase(1);
//     v1.print();


    


    


// return 0;

// }