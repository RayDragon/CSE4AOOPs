#include<iostream>
#include<vector>
using namespace std;
struct Node{
    Node *left, *right;
    int val;
    Node(){left=NULL;right=NULL;}
    void insert(Node* n){
        if(n->val>val){
            if(right==NULL)right = n;
            else right->insert(n);
            //cout<<val<<":"<<n->val<<"right ";
        }
        else {
            if(left==NULL)left = n;
            else left->insert(n);
            //cout<<val<<":"<<n->val<<"left ";
        }
    }
    void printlmr()
    {
        
        if(left != NULL) left->printlmr();
        cout<<val<<" ";
        if(right != NULL) right->printlmr();
    }
};
vector<Node*> nodes;
int main()
{
    int T;
    cin>>T;
    while(T--){
        Node root=Node();
        int l;
        cin>>l;
        cin>>root.val;
        for(int i=1;i<l;i++)
        {
            Node* n=new Node;
            cin>>n->val;
            nodes.push_back(n);
            root.insert(n);
        }
        cout<<"\n";
        /*for(int i=0;i<l;i++)
        {
            cout<<nodes[i].left->val;
        }*/
        root.printlmr();
        cout<<"\n";
    }
}