class Solution {
public:
    void parent(vector<string> &ans,int l,int r,int n,string &temp){
        if(l+r==2*n){
            ans.push_back(temp);
            return;
        }
        if(l<n){
            temp+='(';
            parent(ans,l+1,r,n,temp);
            temp.pop_back();
        }
        if(r<l){
            temp+=')';
            parent(ans,l,r+1,n,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp="";
        parent(ans,0,0,n,temp);
        return ans;
    }
};