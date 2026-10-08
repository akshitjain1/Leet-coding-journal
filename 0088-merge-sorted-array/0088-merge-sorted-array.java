class Solution {
    public void merge(int[] a, int m, int[] b, int n) {
        int pointer1= m-1;
        int pointer2 = n-1;
        int p = m+n-1;
        while(pointer1>=0 && pointer2>=0){
            if(a[pointer1]>=b[pointer2]){
                a[p] = a[pointer1];
                pointer1--;
            }else{
                a[p]=b[pointer2];
                pointer2--;
            }
            p--;
        }

        while(pointer2>=0){
            a[p]=b[pointer2];
            pointer2--;
            p--;
        }
    }
}