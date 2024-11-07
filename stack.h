#ifndef STACK_H
#define STACK_H
using namespace std;

template<class T>
class stack
{
    private:
        T*arr;
        size_t capacity;
        int currtop;

        bool isEmpty(){return currtop==-1;}

        void resize(int newCap){
            T*newArr=new T[newCap];
            for(int i=0;i<=currtop;i++){
                newArr[i]=arr[i];
            }
            delete[] arr;
            arr=newArr;
            capacity=newCap;
        }

    public:
        stack(size_t cap=2) {
            capacity=cap;
            arr=new T[capacity];
            currtop=-1;
        }

        void push(T val){
            if(currtop+1==capacity){
                resize(2*capacity);
            }
            arr[++currtop]=val;
            cout<<"push into stack"<<endl;
        }

        void pop(){
            if(currtop==-1){
                cout<<"stack is full"<<endl;
            }
            cout<<arr[currtop--]<<" is pop from stack"<<endl;
            if(currtop+1<=capacity/4 && capacity>2){
                resize(capacity/2);
            }
        }

        T peek(){
            if(currtop==-1){
                cout<<"empty stack"<<endl;
                return -1;
            }
            return arr[currtop];
        }

        size_t getSize(){
            return currtop+1;
        }

        size_t getCapacity(){
            return capacity;
        }

        void print(){
            cout<<endl<<"elements : ";
            for(int i=0;i<=currtop;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }


        ~stack() {delete[]arr;}

    protected:

};

#endif // STACK_H
