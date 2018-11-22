class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //思路：从头到尾将两个数进行按位^异或
        //最后得出的数就是只出现一次的数
        int cur =0;
        int num=nums.size();
        int i=0;
        while(i<num)
        {

            cur=cur^nums[i];
            i++;
        }
        return cur;
        
    }
};