#include<iostream>

using namespace std;

class Node
{
private:

public:
    Node(){
        cout << "Node is created" << endl;
    };
    
    ~Node();
};


int main(){
    Node n1;
    
    return 0;
}