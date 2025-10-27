class Solution {
  public:
    int inversionCount(vector<int> &arr) {
        // Code Here
        return mergeSortAndCount(arr,0,arr.size()-1);
        
    }
    
    int mergeSortAndCount(vector<int> &arr, int left, int right){
        int mid, count = 0;
        if(left < right){
            mid = left+(right - left)/2;
            count += mergeSortAndCount(arr,left,mid);
            count += mergeSortAndCount(arr,mid+1,right);
            
            count += mergeAndCount(arr,left,mid,right);
        }
        return count;
    }
    
    int mergeAndCount(vector<int> &arr, int st, int mid, int end){
        int invcount = 0;
        vector<int> temp;
        int i = st, j = mid+1;
        while(i <= mid && j <= end){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i]);
                i++;
            }
            else{
                temp.push_back(arr[j]);
                j++;
                invcount += (mid-i+1);
            }
        }
        
        while(i <= mid){
            temp.push_back(arr[i]);
            i++;
        }
        
        while(j <= end){
            temp.push_back(arr[j]);
            j++;
        }
        
        for(int idx=0; idx<temp.size(); idx++){
            arr[idx+st] = temp[idx];
        }
        return invcount;
    }
};
