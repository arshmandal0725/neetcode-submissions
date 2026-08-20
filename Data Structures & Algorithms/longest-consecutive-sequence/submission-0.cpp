class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size() == 0)
       {
        return 0;
       }

       if(nums.size()==1)
       {
        return 1;
       }

       sort(nums.begin(),nums.end());

        int i =1;
        int cnt = 1;
        int max_cnt = 1;

        while(i < nums.size())
        {
          if(nums[i] == nums[i-1]+1)
          {
            cnt++;
          }
          else if(nums[i] != nums[i-1]){
            max_cnt = max(max_cnt,cnt);
            cnt = 1;
          }
          i++;
        }

        max_cnt = max(max_cnt,cnt);

        return max_cnt;
    }
};
