// Given a Binary Tree of nodes, you need to find all the possible paths from the root node to all the leaf nodes of the binary tree. 
 
class Solution {
  public:
  //store all the leaf nodes
  void dfs(Node* root,vector<int> &v){
      if(root==NULL) return ;
      if(root->left==NULL && root->right == NULL) v.push_back(root->data);
      dfs(root->left,v);
      dfs(root->right,v);
  }

  bool getPath(Node* root,int x,vector<int> &t){
      if(root == NULL){
          return false;
      }
      //store the node
      t.push_back(root->data);
      //if its the target node then just return true 
      if(root->data == x) return true;
      //or else any of the subtree contains the target node return true
      if(getPath(root->left,x,t) || getPath(root->right,x,t)){
          return true;
      }
      //if not then the target node is not present in the given subtree just pop that value if just recently inserted
       t.pop_back();
       return false;
      
      
  }
    vector<vector<int>> Paths(Node* root) {
        vector<vector<int>> ans;
        vector<int> nodes; //contains all leaf nodes
        dfs(root,nodes);
        for(int i=0;i<nodes.size();i++){
            vector<int> t;
            if(getPath(root,nodes[i],t) == true);
            ans.push_back(t);
        }
        return ans;
    }
};