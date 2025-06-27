class Solution {
public:
    bool isValid(vector<int>& weights, int capacity, int days){
        int total=0;
        int count =1;
        for(int i =0;i<weights.size();i++){
            total+=weights[i];
            if(total > capacity){
                total =weights[i];
                count++;
            }
        }
        return count<=days;
    };
    int capacity(vector <int>& weights, int days,int low ,int high){
        int ans=0;
        while(low <=high){
            int mid = low+(high-low)/2;
            if(isValid(weights, mid, days)){
                ans = mid;
                high =mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    };
    int shipWithinDays(vector<int>& weights, int days) {
        int sum = 0;
        int low = 0;
        for(int i =0;i<weights.size();i++){
            sum += weights[i];
            if(low<weights[i]){
                low = weights[i];
            }
        }
        return capacity(weights, days, low,sum);


    }
};