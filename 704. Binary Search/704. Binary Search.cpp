class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        return binarySearch(nums,0,n,target);
    }
    int binarySearch(vector<int>& a,
                 int low,
                 int high,
				 int value)
{
      if(low<=high)
	  {
			  
	  int mid=low+(high-low)/2;
	  if(a[mid]==value) return mid;
	  else if(value<a[mid])
	  return binarySearch(a,low,mid-1,value);
	  else if(value>a[mid])
	  return binarySearch(a,mid+1,high,value);
   	}
	   	return -1;
}

    };