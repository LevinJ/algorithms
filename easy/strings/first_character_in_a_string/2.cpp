class Solution {
public:
    int firstUniqChar(string s) {

        using IT = list<int>::iterator;
        unordered_map<char, IT> lookup;
        list<int> candidates;
       //loop over the s
        for(unsigned int i=0; i< s.size();i++){
             //get each character c
            const auto& c = s[i];
             //if c is not in lookup, add i into list, add <c,list iterator> into lookup
            if(!lookup.count(c)){
                auto it = candidates.emplace(candidates.end(), i);
                lookup[c] = it;
                continue;
            }
            //if c is in lookup, remove previous i from list, reassign lookup[c] with past last iterator
            if(lookup[c] != candidates.end()){
                candidates.erase(lookup[c]);
                lookup[c] = candidates.end();
            }

        }
          return candidates.empty()? -1 : candidates.front();




    }
};
