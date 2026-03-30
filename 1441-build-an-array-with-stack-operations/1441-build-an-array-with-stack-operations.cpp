class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int currentStreamNum = 1;

        for (int num : target) {
            // If the stream number is less than the target number,
            // it means we need to skip it by Pushing then Popping.
            while (currentStreamNum < num) {
                result.push_back("Push");
                result.push_back("Pop");
                currentStreamNum++;
            }
            
            // Now currentStreamNum == num, so we Push it to the stack
            result.push_back("Push");
            currentStreamNum++;
        }

        return result;
    }
};
