#include<bits/stdc++.h>
using namespace std;

void insert(stack<int> &st,int val){
    if(st.size() == 0 || st.top() <= val){
        st.push(val);
        return;
    }
    int temp = st.top();
    st.pop();
    insert(st,val); 
    st.push(temp);
}

void sort (stack<int> &st){
    if(st.size() == 1) return;
    int val = st.top();
    st.pop();
    sort(st);
    insert(st,val);
}


int main(){
    vector<int> v={3,5,1,2,7,9,6};
    stack<int> st;
    for(int i=0;i<v.size();i++){
        st.push(v[i]);
    }
    sort(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }


}