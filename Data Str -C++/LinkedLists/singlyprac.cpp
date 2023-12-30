#include<iostream>
using namespace std;

void cubes(int n){
    if(n<0){
        return;
    }
    cubes(n-1);
    cout<<n*n*n<<" ";
}

int main (){
    cubes(5);   


return 0;

}