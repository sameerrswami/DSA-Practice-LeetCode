class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int c=0;
        mp[0]=1; // sum 0 has frequncy 1 
        int sum=0; 
        for(int i:nums){
            sum+=i; 
            if(mp.find(sum-k)!=mp.end()){  
                 // cheking if the frequency of that sum already exists 
                c+=mp[sum-k];
         // if it was there then we will add that frequency of that diffrence sum to the count
            }
            mp[sum]++; 
             // increasing the frequncy of current sum
        }
        return c;
    }
};

// exampple  3 4 7 -2 2 1 4 2    k = 7  

// sums   3 7 14 12 14 15 19 21
// difference from k -4 0 7 5 7 8 12 14
// difference present means from that sum to this element the sum of elements in between is k thats why we can find that sum before
// so we will add the frequecies of the sum that are present
// count = 7 // 0(1) 7(1) 7(2) 12(1) 14(2) total = 7