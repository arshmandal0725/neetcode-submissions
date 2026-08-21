class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i = 0;
        int j = heights.size() -1;
        int ma = 0;
        while(i < j)
        {
            int l = min(heights[i],heights[j]);
            ma = max(ma,l * (j-i));

            if(heights[i] < heights[j])
            {
                i++;
            }
            else{
                j--;
            }
        }
        return ma;
    }
};
