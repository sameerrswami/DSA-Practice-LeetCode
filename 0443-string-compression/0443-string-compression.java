class Solution {
    public int compress(char[] chars) {
        int ans=0;
        int cc=1;
        char c=chars[0];
        String res="";
        for(int i=1;i<chars.length;i++){
            if(chars[i]!=c){
                ans = ans + String.valueOf(cc).length();
                res+=c;
                if(cc>1){
                    res+=String.valueOf(cc);
                }
                c = chars[i];
                cc=1;
            }else{
                cc++;
            }
        }
        res+=c;
        if(cc>1){
            res+=String.valueOf(cc);
        }
        ans = ans + String.valueOf(cc).length();
        char []arr = res.toCharArray();
        int i=0;
        for(char chr:arr){
            chars[i]=chr;
            i++;
        }
        return res.length();
    }
}