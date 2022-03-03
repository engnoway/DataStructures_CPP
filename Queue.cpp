template<class  t>  
class Queue {
private:
    int rear;//for adding the elements
    int front;//or removing the elements
    //int arr[MAX_Length];
    t *arr;//generic template array of any type
    int length;//like a counter
    int maxSize;

public:
    Queue(int size) {
        
       
        if (size <= 0)
            maxSize = 100;
        else
            maxSize = size;

            front = 0;
        length = 0;
        rear = maxSize - 1;
        arr = new t[maxSize];
    }

    bool isEmpty() {
        return length == 0;
    }

    bool isFull() {
        return length == maxSize;
    }

    void Enqueu(t element) {
        if (isFull())
            cout << "FULL Queue" << endl;
        else {
            rear = (rear + 1) % maxSize;
            arr[rear] = element;
            length++;
            
        }
    }


    void Dequeue() {
        if (isEmpty())
            cout << "Empty Queue" << endl;
        else {
            front = (front + 1) % maxSize;
            length--;
        }
    }
        int GetFront() {

            if (isEmpty())
                cout << "Empty Queue" << endl;
            else {
                return arr[front];
            }
        }


        int GetRear() {

            if (isEmpty())
                cout << "Empty Queue" << endl;
            else {
                return arr[rear];
            }
        }


        void PrintQueue() {
            int  i = 0;
            if (!isEmpty()) {
                for ( i = front; i != (rear ); i = (i + 1) % maxSize) {
                    cout << arr[i] << endl;
                }
                cout << arr[rear]<<endl;
            }
            else {
                cout << "Empty queue" << endl;
            }
        }


        void SearchQueue(t Element) {
            int  i = 0;
            int pos = -1;
            if (!isEmpty()) {
                for (i = front; i != (rear); i = (i + 1) % maxSize) {
                   
                    if (arr[i] == Element)
                    {
                        pos = i;
                        break;
                    }
                }
                if (pos == -1) { //the element is the last one in the queue
                    if (arr[rear] == Element) {
                        pos = rear;
                    }
                }
                cout << "the indext of the element is " << pos << endl;
               
            }
            else {
                cout << "Empty queue" << endl;
            }
        }

    };


 int main()
 {
    Queue<int>q(3);
        q.Enqueu(10);
        q.Enqueu(20);
        q.Enqueu(30);

        q.Dequeue();
       q.Enqueu(40);
        q.SearchQueue(40);//here the index will be Zero as  40 is added in the plce of element 10 because it is circular queue
   
 }
   
