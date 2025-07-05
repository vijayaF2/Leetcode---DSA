class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     // brute force:---- using sort builtin function
    //  int j=0;
    //  for(int i=0;i<nums1.size();i++)
    //  {
    //     if(nums1[i]==0 && j<=n-1)
    //     {
    //         nums1[i]=nums2[j];
    //         j++;
    //     }
    //  }
    //  sort(nums1.begin(),nums1.end());    
     // time complexity :- sort function:---o(n log n); for loop:---o(n) ----> n log n dominated n so overall time complexity is o(n log n) ----> o((m+n) log (m+n));
     // space complexity: o(log n) for sort function

     // optimized soltion:----- without using builtin sort function
         int i=m-1;
         int j=n-1,k=m+n-1;
         while(j>=0)
         {
            if(i>=0 && nums1[i]>nums2[j])
            {
                nums1[k--]=nums1[i--];
            }
            else{
                nums1[k--]=nums2[j--];
            }
         }


        
        
    }
};