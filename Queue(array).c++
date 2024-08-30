#include <iostream>
using namespace std;
class Queue{
    private:
    int rear; //(ENQUEUE)
    int front;//(DEQUEUE)
    int arr[5];
       public:
         Queue(){
            rear=-1;
            front=-1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
         }
         void Enqueue(int value){
            if(rear==4){
                cout<<"Queue is full"<<endl;
            }
            else if(front==-1 && rear==-1){
                front=0;
                rear=0;
                arr[rear]=value;
            }
            else{
                rear++;
                arr[rear]=value;
            }    
                
         }

         int Dequeue(){
            int x;
            if(front==-1 && rear==-1){
                cout<<"Queue is empty"<<endl;
            } 
            else if(front == rear){
                x=arr[front];
                arr[front]=0;
                front=-1;
                rear=-1;
                return x;
            }
            else{
                x=arr[front];
                arr[front]=0;
                front++;
          }
         }
       
                void display(){
                cout<<"QUEUE ELEMENTS"<<endl;
                for(int i=0;i<5;i++){
                    cout<<arr[i]<<endl;
                }
            } 
        };
 int main(){
    Queue q1;
    q1.Enqueue(10);
    q1.Enqueue(20);
    q1.display();
    q1.Dequeue();
    q1.display();
 }
