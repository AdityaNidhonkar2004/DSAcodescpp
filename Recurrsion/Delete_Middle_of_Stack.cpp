#include<bits/stdc++.h>
using namespace std;

void deleteMidofStack(stack<int> &st,int mid){
    if(mid==1){
        st.pop();
        return;
    }
    int temp=st.top();
    st.pop();
    deleteMidofStack(st,mid-1);
    st.push(temp);
}

int main(){

stack<int> st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);
st.push(7);
int n=st.size();
int mid = n/2+1;
deleteMidofStack(st,mid);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}