class Solution {
    public int lengthOfLastWord(String s) {
        int n = s.length()-1;
        int len=0;
        int lastidx=n;
        for(int i=n; i>=0;i-- ){
            if(s.charAt(i) == ' '){
                lastidx--;
            }else{
            break;}
        }
        for(int i =lastidx; i>=0;i--){
            if(s.charAt(i) == ' '){
                break;
            }
            len++;
        }
        return len;
    }
    
}