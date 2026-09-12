class Solution {
    public boolean contains(String haystack, String needle){
        return indexOf(haystack,needle) != -1;
    }
    public int indexOf(String s1, String s2){
        if(s2.length()==0)return 0;
        for(int i =0;i<=s1.length()-s2.length();i++){
            int j = 0;
            while(j<s2.length() && s1.charAt(i+j)==s2.charAt(j) ){
                j++;
            }
            if(j==s2.length()){
                return i;
            }
        }
        return -1;
    }
    public int strStr(String haystack, String needle) {
        if(contains(haystack,needle)){
            return indexOf(haystack,needle);
        }
        return -1;
    }
}