#include<iostream>

using namespace std;

class Queue{
    int top,size,ele,count = 0;
    int *arr;

    public:
        Queue(){
            cout << "Enter the size of Queue:- " << endl;
            cin >> size; 
        }
        ~Queue(){
            delete[] arr;
        }
};

int main(){
    
    return 0;
}