class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right = heights.size() -1;

        int maxWater =0;

        while(left < right){
            int currentHeight = min(heights[left],heights[right]);
            int width = right - left;

            int area = currentHeight * width;

            maxWater = max(maxWater,area);

            if(heights[left] < heights[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxWater;
    }
};
