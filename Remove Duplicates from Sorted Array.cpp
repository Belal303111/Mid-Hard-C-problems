class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
   {
        int i=1;
        vector<int>A;
        A.push_back(nums.at(0));
        while(i<nums.size())
        {
            if(nums.at(i)!=A.at(A.size()-1)) {
                A.push_back(nums.at(i));
            }
            i++;
        }
        nums = A;
     return nums.size();
    }
};