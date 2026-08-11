class Solution {
public:
    int maximalRectangle(vector<vector<char>>& mat) {
        int row=mat.size();
        int col=mat[0].size();
        vector<int> h(col,0);
        int ans=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]=='0'){
                    h[j]=0;
                }
                else{
                    h[j]+=1;
                }
            }
            ans=max(ans,maxarea(h));
        }
        return ans;
    }
    int maxarea(vector<int>& h){
        stack<int> s;
        vector<int> ps,ns(h.size());
        for(int i=0;i<h.size();i++){
            while(!s.empty() && h[s.top()]>=h[i]){
                s.pop();
            }
            if(s.empty()){
                ps.push_back(-1);
            }
            else{
                ps.push_back(s.top());
            }
            s.push(i);
        }
        while(!s.empty())s.pop();
        for(int i=h.size()-1;i>=0;i--){
            while(!s.empty() && h[s.top()]>=h[i]){
                s.pop();
            }
            if(s.empty()){
                ns[i]=h.size();
            }
            else{
                ns[i]=s.top();
            }
            s.push(i);
        }
        int mx=0;
        int l=0,r=h.size()-1;
        for(int i=0;i<h.size();i ++){
            int w=ns[i]-ps[i]-1;
            int area=w*h[i];
            mx=max(mx,area);
        }
        return mx;
    }
};