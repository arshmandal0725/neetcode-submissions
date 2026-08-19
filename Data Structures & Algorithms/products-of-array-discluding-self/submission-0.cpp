class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
       vector<int> right;
       vector<int> left;
       vector<int> op;
       int product =1;

       for(int i=0; i< nums.size();i++)
       {
         product *= nums[i];
         right.push_back(product);
       }

       product =1;

       for(int i=nums.size()-1; i>= 0;i--)
       {
         product *= nums[i];
         left.push_back(product);
       }

       reverse(left.begin(),left.end());

       

       for(int i=0;i< nums.size();i++)
       {
          if(i == 0)
          {
            op.push_back(left[i+1]);
          }else if(i == nums.size()-1){
             op.push_back(right[i-1]);
          }
          else{
              op.push_back(right[i-1]*left[i+1]);
          }
       }

      return op;
    }
};
