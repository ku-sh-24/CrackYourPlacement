class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  if(m == 0){
    for(int i=0;i<n;i++){
        nums1[i] = nums2[i];
    }
   // print_arr(nums1);
  }

  // n value 0 works
else{
  int ptr1 = m-1;
  int ptr2 = n-1;
  int k = m+n-1;
  while(ptr1>-1 && ptr2 >-1){
    if(nums2[ptr2]>nums1[ptr1]){
     // cout<<"ptr2 : "<<ptr2<<" value at ptr2-> "<<nums2[ptr2]<<endl;
        nums1[k] = nums2[ptr2];
        ptr2--;
        
    }
    else{
        nums1[k] = nums1[ptr1];
        //cout<<"ptr1 : "<<ptr1<<" value at ptr1-> "<<nums1[ptr1]<<endl;
        ptr1--;
    }
    k--;
  }
  while (ptr2 > -1) {
            nums1[k] = nums2[ptr2];
            ptr2--;
            k--;
        }
}
    }
};