class Solution {
public:
    int maxVowels(string s, int k) {
    int i =0;
    int j =0;
    int count =0;
    int max_count = INT_MIN;
    map<char,int> mp;
    while(j<s.size()){
        if((j-i)<k-1){
            mp[s[j]]++;
            if(isVowel(s[j])){
                count++;
            }


        }
        if((j-i)==k-1){
            mp[s[j]]++;
            if(isVowel(s[j])){
                cout<<s[j]<<endl;
                count++;
            }
            max_count = max(count,max_count);
            cout<<count<<endl;
            if(isVowel(s[i])){
                cout<<s[i]<<endl;
                count--;
            }
            mp[s[i]]--;
            if(mp[s[i]]==0){
                mp.erase(s[i]);
            }
            i++;

        }
        j++;
    }
    return max_count;
    
        
    }
    bool isVowel(char s){
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
        return true;
    }
    return false;


    }
};