class Solution {
    public String reverseWords(String s) {
        StringBuilder result = new StringBuilder();
        int n = s.length()-1;
        while(n>=0){
            while(n>=0 && s.charAt(n)==' '){
                n--;
            }
            if(n<0)break;
            int endIdx = n;
            while(n>=0 && s.charAt(n) != ' '){
                n--;
            }
            if(result.length() > 0){
                result.append(" ");
            }
            result.append(s,n+1,endIdx+1);
        }
        return result.toString();
    }
}