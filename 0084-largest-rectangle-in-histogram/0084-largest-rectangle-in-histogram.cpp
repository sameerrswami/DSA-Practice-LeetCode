class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> s;
        vector<int> ps,ng(h.size());
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
                ng[i]=h.size();
            }
            else{
                ng[i]=s.top();
            }
            s.push(i);
        }
        int mx=0;
        int l=0,r=h.size()-1;
        for(int i=0;i<h.size();i++){
            int w=ng[i]-ps[i]-1;
            int area=w*h[i];
            mx=max(mx,area);
        }
        return mx;
    }
};

