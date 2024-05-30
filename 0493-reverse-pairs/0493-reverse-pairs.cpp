#include <vector>
using namespace std;

class Solution {
    
    void merge(int l, int md, int r, vector<int>& v) {
        vector<int> temp;
        int lf = l;
        int rt = md + 1;
        while (lf <= md && rt <= r) {
            if (v[lf] <= v[rt]) {
                temp.push_back(v[lf]);
                lf++;
            } else {
                temp.push_back(v[rt]);
                rt++;
            }
        }
        while (lf <= md) {
            temp.push_back(v[lf]);
            lf++;
        }
        while (rt <= r) {
            temp.push_back(v[rt]);
            rt++;
        }
        for (int i = l; i <= r; i++) {
            v[i] = temp[i - l];
        }
    }
    
    int countPairs(vector<int>& arr, int low, int mid, int high) {
        int right = mid + 1;
        int cnt = 0;
        for (int i = low; i <= mid; i++) {
            while (right <= high && arr[i] > (long long)2 * (long long)arr[right]) {
                right++;
            }
            cnt += (right - (mid + 1));
        }
        return cnt;
    }

    int mergeSort(int l, int r, vector<int>& v) {
        if (l >= r) return 0;
        int cnt = 0;
        int md = (l + r) / 2;
        cnt += mergeSort(l, md, v);
        cnt += mergeSort(md + 1, r, v);
        cnt += countPairs(v, l, md, r);
        merge(l, md, r, v);
        return cnt;
    }

public:
    int reversePairs(vector<int>& nums) {
        return mergeSort(0, nums.size() - 1, nums);
    }
};
