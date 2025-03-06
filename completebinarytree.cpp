#include <bits/stdc++.h>
using namespace std;
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode (int n): val(n),left(NULL),right(NULL){}
};
TreeNode *createBST(TreeNode *root,int val){
    if(root == NULL){
        return new TreeNode(val);
    }
    if(val < root -> val){
        root -> left = createBST(root -> left , val);
    }
    else if(val > root -> val){
        root -> right = createBST(root -> right , val);
    }
    return root;
}
bool isCheckComplete(TreeNode* root){
    if(!root) return true;
    queue<TreeNode*>q;
    q.push(root);
    bool last = false;
    while(!q.empty()){
        TreeNode*curr = q.front();
        q.pop();
        if(curr == NULL){
            last = true;
        }else{
            if(last){
                return false;
            }
            q.push(curr->left);
            q.push(curr->right);
        }
    } 
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int& x:a){
        cin>>x;
    }
    TreeNode* root = NULL;
    for(int i=0;i<n;i++){
    root =createBST(root,a[i]);
    }
    if(isCheckComplete(root)){
        cout<<"Yes\n";
    }else{
        cout<<"No\n";
    }
    }
   
    return 0;
}
