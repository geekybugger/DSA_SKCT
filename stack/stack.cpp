#include <iostream>
#include <string>

using namespace std;

class Stack {
	private:
		int top;
		int arr[5];
	public:
		Stack() {
			top = -1;
			for (int i=0; i<5; i++) {
				arr[i] = 0;
			}
		}
		bool isEmpty() {
			if(top==-1) 
				return true;
			else 
				return false;
		}
		
		bool isFull() {
			if(top==4)
				return true;
			else
				return false;
		}
		
		void push(int val) {
			if(isFull()) {
				cout<<"Stack Overflow"<<endl;
			}
			else {
				top++;
				arr[top] = val;
			}
		}
		
		int pop() {
			if(isEmpty()) {
				cout<<"Stack underflow"<<endl;
				return 0;
			}
			else {
				int popValue = arr[top];
				arr[top] = 0;
				top--;
				return popValue;
			}
		}
		
		int count() {
			return(top+1);
		}
		
		int peek(int pos) {
			if(isEmpty()) {
				cout << "Stack Underflow" << endl;
				return 0;
			}
			else {
				return arr[pos];
			}
		}
		
		void change(int pos, int val) {
				arr[pos] = val;
				cout << "Value changed at position" <<pos<<endl;
		}
	
		void display() {
			cout << "All values in the stack are "<<endl;
			for (int i=4; i>=0; i--) {
				cout << arr[i] << endl;
			}
		}
};

int main() {
	Stack s1;
	int option, position, value;
	
	do {
		cout << "\n\t\t Welcome to stack data structure. What operation do you want to perform? " << endl;
		cout << "1. Push" << endl;
		cout << "2. Pop" << endl;
		cout << "3. IsEmpty?" << endl;
		cout << "4. IsFull?" << endl;
		cout << "5. Peek" << endl;
		cout << "6. Count" << endl;
		cout << "7. Change" << endl;
		cout << "8. Display" << endl;
		cout << "9. Clear Screen" << endl;
		
		cin >> option;
		switch(option) {
			case 1:
				cout << "Enter a item to push in the stack" << endl;
				cin >> value;
				s1.push(value);
				break;
			case 2:
				cout << "The popped value form stack is: " << s1.pop() << endl;
				break;
			case 3:
				if (s1.isEmpty()) cout << "Stack is empty" << endl;
				else cout << "Stack isn't empty" << endl;
				break;
			case 4:
				if (s1.isFull()) cout << "Stack is full" << endl;
				else cout << "Stack isn't full" << endl;
				break;
			case 5:
				cout << "Enter a position to peek from stack " << endl;
				cin >> position;
				cout << "Peek function called - The peeked vlaue: " << s1.peek(position) << endl;
				break;
			case 6:
				cout << "There are " << s1.count() << " no of elements in stack" << endl;
				break;
			case 7:
				cout << "Change function called- " << endl;
				cout << "Enter position: ";
				cin >> position;
				cout << endl;
				cout << "Enter the value to change : ";
				cin >> value;
				cout << endl;
				s1.change(position,value);
				break;
			case 8:
				s1.display();
				break;
			case 9:
				system("clear");
				break;
			default:
				cout << "Enter a valid option " << endl;
		}
		
		
	}while(option!=0);
	
	return 0;
}
