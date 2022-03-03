class Linked_Queue {
private:  
    struct Node {
        int value;
        Node* next;
    };
    Node* front;
    Node* rear;
    int length;

public:
    Linked_Queue():front(NULL),rear(NULL),length(0) {
    }

    bool isEmpty() {
                return length == 0;
            }
        
    void Enqueue(int element) {

        Node* newPtr = new Node;
        newPtr->value = element;
        newPtr->next = NULL;

        if (isEmpty()) {
            rear = front = newPtr;
           
        }
        else {
            rear->next = newPtr;
            rear = newPtr;
            //cout<<"Full queue" << endl;
        }
        length++;
    }


    void Dequeue() {

        if (isEmpty()) {
            cout << "Empty Queue cant dequeue" << endl;

        }
        else if (length == 1) {//only one node in the queue 
            front = rear = NULL;
           // delete front;
            length=0;

        }
        else{  
            Node* Temp = front;
                front = front->next;
                Temp->next = NULL;
                delete Temp;
                length = 0;

        }
    }

    int getfront() {
        assert(!isEmpty());
        return front->value;
    }


    void clearQueue() {
        Node* curr;
        while (front != NULL) {
            curr = front;
            front = front->next;
            delete curr;
        }
        rear = NULL;
        length = 0;
    }

    void DisplayQueue() {
        Node* curr=front;
        while (curr!=NULL)
        {
            cout << curr->value << endl;
            curr = curr->next;
        }

    }

  };
