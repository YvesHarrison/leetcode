class Solution {
public:
    void backtrack(vector<vector<int>>&res,vector<int>&tmp,vector<int>&nums,int pos){
        if(find(res.begin(),res.end(),tmp)==res.end()){
            res.push_back(tmp);//�Ӽ�1��1������1��2��3��3�����ǲ�ͬ�������������������һ�����������ж�ֱ�Ӽ������������ݸ�����������һ�����������µļ���������أ�����ڲ��Ȳ������ĸ������н������
        }
        if(tmp.size()==nums.size()||pos==nums.size())return;
        for(int i=pos;i<nums.size();++i){
            tmp.push_back(nums[i]);
            backtrack(res,tmp,nums,i+1);
            tmp.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int>tmp;
        res.push_back(tmp);
        sort(nums.begin(),nums.end());//��subsetI��һ��
        backtrack(res,tmp,nums,0);
        return res;
    }
};