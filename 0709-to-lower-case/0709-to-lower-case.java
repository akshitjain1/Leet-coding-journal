// class Solution {
//     public String toLowerCase(String s) {
//         return s.toLowerCase();
//     }
// }

class Solution {

    public String toLowerCase(String s) {

        StringBuilder sb = new StringBuilder();

        for(char c : s.toCharArray()){

            if(c >= 'A' && c <= 'Z'){
                c = (char)(c + 32);
            }

            sb.append(c);
        }

        return sb.toString();
    }
}