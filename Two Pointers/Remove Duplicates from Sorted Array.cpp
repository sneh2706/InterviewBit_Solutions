/*

Remove duplicates from Sorted Array
Given a sorted array, remove the duplicates in place such that each element appears only once and return the new length.

Note that even though we want you to return the new length, make sure to change the original array as well in place

Do not allocate extra space for another array, you must do this in place with constant memory.

*/

int Solution::removeDuplicates(vector<int> &v) {
    int n = v.size();
    if(n<=1) return n;
    
    int k=0;
    for(int i=1; i<n; ++i) {
        if(v[i]!=v[k]) {
            v[k+1] = v[i];
            k++;
        }
    }
    
    v.erase(v.begin()+k+1, v.end());
    return v.size();
}
