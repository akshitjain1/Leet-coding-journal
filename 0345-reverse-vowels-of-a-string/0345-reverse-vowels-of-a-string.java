class Solution {
    public void reverse(ArrayList<Character> list){
        int first = 0;
        int last = list.size() - 1;

        while(first < last){
            char temp = list.get(first);
            list.set(first, list.get(last));
            list.set(last, temp);
            first++;
            last--;
        }
    }

    public String reverseVowels(String s) {
        String vow = "aeiouAEIOU";
        ArrayList<Character> list = new ArrayList<>();

        for(char c : s.toCharArray()){
            if(vow.indexOf(c) != -1){
                list.add(c);
            }
        }

        // reverse(list);

        int n = list.size() - 1;
        StringBuilder sb = new StringBuilder();

        for(char c : s.toCharArray()){
            if(vow.indexOf(c) != -1){
                sb.append(list.get(n));
                n--;
            }else{
                sb.append(c);
            }
        }

        return sb.toString();
    }
}