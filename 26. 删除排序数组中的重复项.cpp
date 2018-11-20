class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int  cur=0,next=1;
        if(nums.empty())
            return 0;
        while(next!=nums.size())
        {

            if(nums[cur]!=nums[next])
            {

                nums[++cur]=nums[next];
            }
            ++next;
           
        }
         nums.resize(cur+1);
        return (cur+1);
    }
};