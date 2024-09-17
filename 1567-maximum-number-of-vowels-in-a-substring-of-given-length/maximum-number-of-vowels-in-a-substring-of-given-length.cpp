class Solution {
public:
    int maxVowels(string s, int k) {
    int left = 0;
    int vcount =0;
    int maxcount =0;
    for(int right =0;right<s.size();right++){
        if((right-left)+1 < k){
            if(isVowel(s[right])){
                vcount++;
            }
        }
        else if((right-left) + 1 == k){
            if(isVowel(s[right])){
                vcount++;
            }
            cout<<"VCOUNT"<<vcount<<endl;
            maxcount = max(vcount,maxcount);
            if(isVowel(s[left])){
                vcount--;
            }
            left ++;

        }
    }
    return maxcount;
        
    }
    bool isVowel(char s){
    if(s == 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u'){
        return true;
    }
    return false;
}
};