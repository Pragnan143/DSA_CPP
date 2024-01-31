#include<iostream>

using namespace std;

class Stack{
public:
int *arr;
int top;
int size;

Stack(int size){
this->size=size;
arr= new int[size];
top=-1;
}

void push(int key){
if((size-top)>1){
    top++;
    arr[top]=key;
}else{
    cout<<"Space Overflow...."<<endl;
}
}

void pop(){
if(top>=0){
    top--;
}else{
    cout<<"Stack Underflow ...."<<endl;
}
}

int peek(){
if(top>=0){
  return arr[top];
    }else{
    cout<<"Stack is empty ...."<<endl;
    return -1;
}
}

bool isEmpty(){
    if(top>=0){
        return false;
    }else{
        return true;
    }

}

};
// class TwoStack{
// public:
//  int *arr;
//  int top1;
//  int top2;
//  int size;

// TwoStack(int size){
// this->size=size;
// arr= new int[size];
// top1=-1;
// top2=size;
// }

// void push1(int key){
//  if(top2-top1>1){
//     top1++;
//     arr[top1]=key;
//  }else{
//     cout<<"Stack Overflow"<<endl;
//  }
// }

// void push2(int key){
//  if(top2-top1>1){
//     top2--;
//     arr[top2]=key;
//  }else{
//     cout<<"Stack Overflow"<<endl;
//  }
// }

// int pop1(){
// if(top1>=0){
//     int poped=arr[top1];
//     top1--;
//     return poped;
// }else{
//         cout<<"Stack is empty"<<endl;
// }
// }

// int pop2(){
// if(top2<=size){
//     int poped=arr[top2];
//     top2++;
//     return poped;
//     }else{
//         cout<<"Stack is empty"<<endl;
//     }
// }

// };

class LinkedlistStack{

};










int main(){

    // Stack s(5);
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // s.push(6);
    // cout<<s.peek()<<endl;

    // TwoStack stack(5);
    // stack.push1(2);
    // stack.push1(3);
    // stack.push1(4);
    // stack.push2(6);
    // stack.push2(5);
    // stack.pop1();
    // stack.pop1();
    // stack.pop1();
    


}