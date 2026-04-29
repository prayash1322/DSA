#include<iostream>

using namespace std;

class Stack{
    int top,size,ele,count = 0;
    int *arr;

    public:
        Stack(){
            cout << "Enter the size of stack : ";
            cin >> size;
            arr = new int[size];
            top = -1;
        }
        void PushonStack(){
            if(top >= size-1){
                cout << "Stack Overflow" << endl;
            }
            else{
                cout << "Enter the element : ";
                cin >> ele;
                top++;
                arr[top] = ele;
                cout << "Element inserted successfully" << endl << endl;
                count++;
            }
        }
        void PopfromStack(){
            if(top < 0){
                cout << "Stack Underflow" << endl;
            }
            else{
                cout << "Element deleted is : " << arr[top] << endl;
                top--;
                count--;
                cout << "Element deleted successfully" << endl << endl;
            }
        }
        void peekStack(){
            if(top < 0){
                cout << "Stack is empty" << endl;
            }
            else{
                cout << "First element in the stack is : " << arr[top] << endl;
            }
        }
        void displayStack(){
            cout << "Elements in the stack are : ";
            for(int i=top; i>=0; i--){
                cout << arr[i] << " ";
            }
        }
        void isEmpty(){
            if(top <= -1){
                cout << "Stack is Empty" << endl;
            }
            else{
                cout << "Stack is not Empty" << endl;
            }
        }
        void isFull(){
            if(top >= size-1){
                cout << "Stack is Full" << endl;
            }
            else{
                cout << "Stack is not Full" << endl;
            }
        }
        void sizeofStack(){
            cout << "Size of the stack is : " << count << endl;
        }
        ~Stack(){
            delete[] arr;
        }

};

int main(){
    int choice;
    Stack s;
    
    do
    {
        cout << endl << "Welcome to Stack operations program" << endl << endl;
        cout << "Select the operation to perform in the stack" << endl;
        cout << "--------------------------------------" << endl;
        cout << "1. Push (Insert) a element in the stack" << endl;
        cout << "2. Pop (Delete) a element in the stack" << endl;
        cout << "3. Peek (Display) First the element in the stack" << endl;
        cout << "4. Display all the elements in the stack" << endl;
        cout << "5. Is Stack empty? (isEmpty) a element in the stack" << endl;
        cout << "6. Is Stack full? (isFull) a element in the stack" << endl;
        cout << "7. Size of a element in the stack" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.PushonStack();
            break;
        case 2:
            s.PopfromStack();
            break;
        case 3:
            s.peekStack();
            break;
        case 4:
            s.displayStack();
            break;
        case 5:
            s.isEmpty();
            break;
        case 6:
            s.isFull();
            break;
        case 7:
            s.sizeofStack();
            break;
        default:
            cout << "Invalid Choice" << endl;
            break;
        }

        
    } while (choice != 0);
    cout << "Thank you for using Stack Operation!!" << endl;
    
    return 0;
}