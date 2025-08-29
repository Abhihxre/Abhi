#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
    node(int data1 , node*next1){
        data=data1;
        next=next1;
    }
    node(int data1 ){
        data=data1;
        next=nullptr;
    }
};
node* convertarraytoll(vector<int>&arr){
    node* head =new node(arr[0]);
    node*mover=head;
    for(int i=1;i<arr.size();i++){
        node* temp= new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
int lengthofthell(vector<int>arr){
    int cnt=0;

}
int main(){
vector<int>arr{2,3,4,5,8};
node* head=convertarraytoll(arr);
node*temp=lengthofthell(arr);
}