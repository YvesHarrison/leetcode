class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int start=0,end=numbers.size()-1;
        vector<int>res;
        while(start<end){
            if(numbers[start]+numbers[end]>target)end--;
            else if(numbers[start]+numbers[end]<target)start++;
            else{
                res.push_back(start+1);res.push_back(end+1);break;
            }
        }
        return res;
    }
};
