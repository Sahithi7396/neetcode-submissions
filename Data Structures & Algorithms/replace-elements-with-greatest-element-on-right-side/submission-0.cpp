class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int large=INT_MIN;
            for(int j=i+1;j<n;j++)
            {
                large=max(large,arr[j]);
                arr[i]=large;
            }
        }
        arr[n-1]=-1;
        return arr;

        
    }
};