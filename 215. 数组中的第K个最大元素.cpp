class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //˼·������������ȼ����зǳ��ļ�
        //���ȼ�����Ĭ�ϻ����Ƚ����Ԫ�س����У������ö���pop k-1��
        //��ʱ��ͷ��Ԫ�ؾ��ǵ�k�����
        priority_queue<int> pq(nums.begin(),nums.end());
        for(int i=0;i<k-1;++i)
        {

            pq.pop();
        }
        return pq.top();
        
        
    }
};