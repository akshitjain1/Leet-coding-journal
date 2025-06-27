class Solution {
public:
    bool EatAll(vector<int>& piles, int hours, int capacity){
        int h1 = 0;
        for(int i =0;i<piles.size();i++){
            h1 += piles[i]/capacity;
            if(piles[i]%capacity != 0){
                h1++;
            }
        }
        return h1<=hours;
    };
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(begin(piles),end(piles));
        while(l<r){
            int mid = l + (r-l)/2;
            if(EatAll(piles, h, mid)){
                r = mid;
            }else{
                l = mid+1;
            }
        }
        return l;
    }
};