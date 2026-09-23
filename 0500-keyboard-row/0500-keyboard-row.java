class Solution {
    public String[] findWords(String[] words) {
        String q="qwertyuiop";
        String a="asdfghjkl";
        String z="zxcvbnm";
        List<String> res= new ArrayList<>();
        for(String s:words){
            Boolean qb=true,ab=true,zb=true;
            String ls = s.toLowerCase();
            for(int i=0;i<ls.length();i++){
                String lc=String.valueOf(ls.charAt(i));
                if(!q.contains(lc)){
                    qb=false;
                }
                if(!a.contains(lc)){
                    ab=false;
                }
                if(!z.contains(lc)){
                    zb=false;
                }
            }
            if(qb || zb || ab){
                res.add(s);
            }
        }
        return res.toArray(new String[0]);
    }
}