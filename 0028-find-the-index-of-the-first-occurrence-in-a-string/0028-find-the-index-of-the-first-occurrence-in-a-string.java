class Solution {

    public boolean contains(String haystack, String needle) {
        return indexOf(haystack, needle) != -1;
    }
    public int indexOf(String haystack, String needle) {
        if(needle.length() == 0){
            return 0;
        }
        for(int i = 0; i <= haystack.length() - needle.length(); i++){
            int j = 0;
            while(j < needle.length() &&
                  haystack.charAt(i + j) == needle.charAt(j)){
                j++;
            }
            if(j == needle.length()){
                return i;
            }
        }
        return -1;
    }

    public int strStr(String haystack, String needle) {
        if(contains(haystack, needle)){
            return indexOf(haystack, needle);
        }
        return -1;
    }
}