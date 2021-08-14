class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>A;
        for(int i=0;i<nums.size();i++)
        {
            A[nums[i]]++;
            if(A[nums[i]]>1)
            {
                return nums[i];
            }
        }
     /*   for(auto s:A)
        {
            if(s.second>1)
            {
                return s.first;
            }
        }*/
        return 0;
    }
};
