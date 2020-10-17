#include <iostream>
using namespace std;

class Queue {
	private:
		int front;
		int rear ;
		int arr[5];
		
	public:
		Queue() {
			front = -1;
			rear = -1;
			for(int i=0; i<5; i++) {
				arr[i] = 0;
			}
			
		}
		
		bool isEmpty() {
			if(front == -1 && rear== -1)
				return true;
			else
				return false;
		}
		
		bool isFull() {
			if( rear == sizeof(arr)-1)
				return true;
			else 
				return false;
		}
		
		void enqueue(int val) {
			if(isFull) {
				cout << "Queue is FULL" << endl;
			}
			else if(isEmpty()) {
				rear = 0;
				front = 0;
				arr[rear] = val;
			}
			else {
				rear++;
				arr[rear] = val;
			}
				
		}
		
		int dequeue() {
			int x;
			if(isEmpty()) {
				cout << "Queue is Empty" << endl;
				return 0;
			}
			else if(front == rear) {
				x = arr[front];
				arr[front] = 0;
				rear = -1;
				front = -1;
				return x;
			}
			else {
				x = arr[front];
				arr[front] = 0;
				front++;
				return x;
			}
		}
		
		int count() {
			return (rear-front+1);
		}
}

int main() {
	Queue q1;
	int option,value;
	
	do {
		cout << "\n\t\t Welcome to queue(array) data structure. What operation do you want to perform? " << endl;
		cout << "1. Enqueue" << endl;
		cout << "2. Dequeue" << endl;
		cout << "3. IsEmpty?" << endl;
		cout << "4. IsFull?" << endl;
		cout << "5. Peek" << endl;
		cout << "6. Count" << endl;
		cout << "7. Display" << endl;
		cout << "8. Clear Screen" << endl;
		
		cin >> option;
		switch(option) {
			case 0:
				break;
			case 1:
				cout << "Enter a item to push in the queue" << endl;
				cin >> value;
				s1.push(value);
				break;
			case 2:
				cout << "The popped value form queue is: " << s1.pop() << endl;
				break;
			case 3:
				if (s1.isEmpty()) cout << "Queue is empty" << endl;
				else cout << "Queue isn't empty" << endl;
				break;
			case 4:
				if (s1.isFull()) cout << "Queue is full" << endl;
				else cout << "Queue isn't full" << endl;
				break;
			case 5:
				cout << "Enter a position to peek from queue " << endl;
				cin >> position;
				cout << "Peek function called - The peeked vlaue: " << s1.peek(position) << endl;
				break;
			case 6:
				cout << "There are " << s1.count() << " no of elements in queue" << endl;
				break;
			
			case 7:
				s1.display();
				break;
			case 8:
				#ifdef linux
				system("clear");
				#else
				system("cls");
				#endif
				break;
			default:
				cout << "Enter a valid option " << endl;
			
		}
		
		
	}while(option!=0);

	
	return 0;
}
