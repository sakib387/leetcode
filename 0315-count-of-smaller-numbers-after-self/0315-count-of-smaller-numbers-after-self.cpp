
class Solution {
    vector<pair<int, int>> v;
    int mp[100005]={0};

    void get(int l, int m, int r) {
         int rt = m + 1;
        for (int i = l; i <= m; i++) {
            
            while (rt <= r && v[i].first > v[rt].first) rt++;
            mp[v[i].second] += rt - (m + 1);
        }
    }

    void merge(int l, int m, int r) {
        int l1 = m - l + 1;
        int r1 = r - m;
        vector<pair<int, int>> L, R;
        for (int i = 0; i < l1; i++) {
            L.push_back(v[l + i]);
        }
        for (int i = 0; i < r1; i++) {
            R.push_back(v[m + 1 + i]);
        }
        int i = 0, j = 0, k = l;
        while (i < l1 && j < r1) {
            if (L[i].first <= R[j].first) {
                v[k] = L[i];
                i++;
            } else {
                v[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < l1) {
            v[k] = L[i];
            i++;
            k++;
        }
        while (j < r1) {
            v[k] = R[j];
            j++;
            k++;
        }
    }

    void mergesort(int l, int r) {
        if (l < r) {
            int md = (l + r) / 2;
            mergesort(l, md);
            mergesort(md + 1, r);
            get(l, md, r);
            merge(l, md, r);
        }
    }

public:
    vector<int> countSmaller(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            v.push_back({nums[i], i});
        }
        mergesort(0, nums.size() - 1);
        vector<int> ans;
        for (int i = 0; i < v.size(); i++) {
            ans.push_back(mp[i]);
        }
        return ans;
    }
};