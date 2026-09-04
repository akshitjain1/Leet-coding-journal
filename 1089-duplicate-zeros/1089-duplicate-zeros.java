class Solution {
    public void duplicateZeros(int[] arr) {
        int n = arr.length;
        int i = 0;
        int j = 0;

        while (i < n && j < n) {
            if (arr[i] == 0) {
                j += 2;
            }else{
                j++;
            }
            i++;
        }

        i--;
        j--;

        if (j == n && arr[i] == 0) {
            arr[j - 1] = 0; // Boundary zero has room for itself, but not its duplicate.
            i--;
            j -= 2;
        }

        while (i >= 0) {
            arr[j] = arr[i];
            j--;

            if (arr[i] == 0) {
                arr[j] = 0;
                j--;
            }

            i--;
        }
    }
}