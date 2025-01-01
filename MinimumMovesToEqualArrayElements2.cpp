//Time Complexity : O(n) for finding median + O(n) for loop = O(n), Space complexity : O(1)
class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        int n = nums.size(), steps = 0;
        nth_element(nums.begin(), nums.begin()+(n/2), nums.end());      //Fixing ths median element
        
        int median = nums[n/2];
        for(int i = 0; i < n; i++)
        {
            steps += abs(nums[i] - median);
        }
        
        return steps;
    }
};

/*Approach - 1 -> Time Complexity : O(n logn) for sort + O(n) for loop = O(n logn), Space complexity : O(1)
class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        int n = nums.size(), steps = 0;
        sort(nums.begin(), nums.end());
        
        int median = nums[n/2];                 // Finding median
        for(int i = 0; i < n; i++)
        {
            steps += abs(nums[i] - median);     //Adding absolute difference
        }
        return steps;
    }
};

//Approach - 2 -> Time Complexity : O(n logn) for sort + O(n/2) for loop = O(n logn), Space complexity : O(1)
class Solution {
public:
    int minMoves2(vector<int>& nums) 
    {
        int n = nums.size(), steps = 0;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < n/2; i++)
        {
            steps += nums[n-1-i] - nums[i];     //Adding difference
        }
        
        return steps;
    }
};
*/
