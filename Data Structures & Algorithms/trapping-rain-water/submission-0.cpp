class Solution {
public:
    int trap(vector<int>& h) {
        vector<int> left;
        vector<int> right;
        int maxx =0;
        int ans =0;

        for(int i=0;i< h.size();i++)
        {
            if(i==0)
            {
                left.push_back(0);
                maxx = max(maxx,h[i]);
                continue;
            }

            left.push_back(maxx);
            maxx = max(maxx,h[i]);
        }

        maxx = 0;

         for(int i=h.size() -1;i >= 0;i--)
        {
            if(i==h.size() - 1)
            {
                right.push_back(0);
                maxx = max(maxx,h[i]);
                continue;
            }

            right.push_back(maxx);
            maxx = max(maxx,h[i]);
        }

        reverse(right.begin(),right.end());

        for(int i =0;i<h.size();i++)
        {
           int minn = min(left[i],right[i]);

           if(minn > h[i])
           {
            ans += (minn-h[i]);
           }
        }

        return ans;
    }
};
