class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //˼·����ͷ��β�����������а�λ^���
        //���ó���������ֻ����һ�ε���
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