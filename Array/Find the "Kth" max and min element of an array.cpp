class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        vector<int>v;
        for(int i=l;i<=r;i++)
        {
            v.push_back(arr[i]);
        }
        
        sort(v.begin(),v.end());
        return v[k-1];
      
        
    }
