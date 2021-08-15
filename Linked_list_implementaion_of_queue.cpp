#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node (int val){
        data=val;
        next=NULL;
    }
};

class queue{
    Node* front;
    Node* back;
    public:
    queue(){
    front = NULL;
    back=NULL;
    }

    void push(int x){
     Node* n = new Node(x);
     
     if(front==NULL){
         front=n;
         back=n;
         return;
     }

     back->next = n;

     back=n;


    }
    void pop(){
        if(front==NULL){
            return;
        }
        Node* todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek(){
        if(front==NULL){
            return -1;
        }
        return front->data;
    }
    bool empyt(){
        if(front==NULL){
            return true;
        }
        return false;
    }
};


int main(){

queue q;

q.push(10);

q.push(20);


q.push(30);

q.push(40);
q.push(50);

q.pop();
q.pop();
q.pop();
q.pop();
q.pop();

cout<<q.peek()<<endl;
 q.empyt();
return 0;
}
