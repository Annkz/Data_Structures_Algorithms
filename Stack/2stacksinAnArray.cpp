#include<iostream>
using namespace std;

class stack{
    public:
        int *arr;
        int top1;
        int top2;
        int size;

    stack(int size){
        arr = new int[size];
        this->size = size;
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2-top1 == 1){
            //no sapce available
            cout << "Overflow in Stack1" << endl;
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }

    void pop1(){
        if(top1 == -1){
            //means stack is empty
            cout << "Underflow in stack1" << endl;
        }
        else{
            arr[top1] = 0;
            top1--;
        }
    }

    void push2(int data){
        if(top2-top1 == 1){
            //no sapce available
            cout << "Overflow in Stack2" << endl;
        }
        else{
            top2--;
            arr[top2] = data;
        }
    }

    void pop2(){
        if(top2 == size){
            //stack is empty
            cout << "Underflow in Stack2" << endl;
        }
        else{
            arr[top2] = 0;
            top2++;
        }
    }

    void print(){
        cout << endl;
        cout << "top1:" << top1 << endl;
        cout << "top2:" << top2 << endl;
        for(int i=0; i<size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

};



int main(){

    stack st(10);

    st.push1(10);
    st.print();
    st.push1(20);
    st.print();
    st.push1(30);
    st.print();
    st.push1(40);
    st.print();
    st.push1(50);
    st.print();


    st.push2(99);
    st.print();
    st.push2(78);
    st.print();
    st.push2(82);
    st.print();
    st.push2(78);
    st.print();
    st.push2(82);
    st.print();
    
    st.push2(102);
    st.print();
    st.push1(102);
    st.print();


    

    
    return 0;
}