class Solution {
    public Boolean isVowel(char c){
        return "aeiouAEIOU".indexOf(c) != -1;
    }

    public String reverseVowels(String s) {
        char[] c = s.toCharArray();
        int left = 0;
        int right = c.length -1;
        while(left<right){
            while(left<right && !isVowel(c[left])){
                left++;
            }
            while(left<right && !isVowel(c[right])){
                right--;
            }
            if(left < right){
                char temp = c[left];
                c[left] = c[right];
                c[right] =temp;
            }
            left++;
            right--;
        }
        return new String(c);
    }
}

// //Valid But o(n) space complexity
// class Solution {

//     public String reverseVowels(String s) {
//         String vow = "aeiouAEIOU";
//         ArrayList<Character> list = new ArrayList<>();

//         for(char c : s.toCharArray()){
//             if(vow.indexOf(c) != -1){
//                 list.add(c);
//             }
//         }


//         int n = list.size() - 1;
//         StringBuilder sb = new StringBuilder();

//         for(char c : s.toCharArray()){
//             if(vow.indexOf(c) != -1){
//                 sb.append(list.get(n));
//                 n--;
//             }else{
//                 sb.append(c);
//             }
//         }

//         return sb.toString();
//     }
// }