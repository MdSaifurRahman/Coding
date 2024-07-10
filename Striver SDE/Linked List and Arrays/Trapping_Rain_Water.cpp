class Solution {
public:
    int trap(vector<int>& height) {
        int l = 0, r = height.size() - 1;
        int s = 0, xl = 0, xr = 0;

        while (l <= r) {
            if (height[l] <= height[r]) {
                xl = max(xl, height[l]);
                s += xl - height[l];
                l++;
            } else {
                xr = max(xr, height[r]);
                s += xr - height[r];
                r--;
            }
        }

        return s;
    }
};
