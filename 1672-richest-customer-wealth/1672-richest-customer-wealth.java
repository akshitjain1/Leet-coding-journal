class Solution {
    public int maximumWealth(int[][] accounts) {
        int max_amount = Integer.MIN_VALUE;
        int row = accounts.length;
        int col = accounts[0].length;
        for(int i =0;i<row;i++){
            int sum = 0;
            for(int j =0;j<col;j++){
                sum += accounts[i][j];
            }
            max_amount = Math.max(max_amount, sum);
        }
        return max_amount;
    }
}