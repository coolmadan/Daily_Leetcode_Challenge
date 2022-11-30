class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>Map;
        for(auto it: arr)
        {
            Map[it]++;
        }
        unordered_set<int>Set;
        for(auto &it :Map)
        {
            Set.insert(it.second);
        }
        return Map.size()==Set.size();
    }
};