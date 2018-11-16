class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //思路：这个题用优先级队列非常的简单
        //优先级队列默认会优先将大的元素出队列，所以让队列pop k-1次
        //此时队头的元素就是第k大的数
        priority_queue<int> pq(nums.begin(),nums.end());
        for(int i=0;i<k-1;++i)
        {

            pq.pop();
        }
        return pq.top();
        
        
    }
};