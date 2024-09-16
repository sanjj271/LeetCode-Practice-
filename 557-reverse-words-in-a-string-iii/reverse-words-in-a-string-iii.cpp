class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        string res = "";
        while(ss >> word){
            res = res + reverseSTR(word) + " ";

        }
        if(res.back()==' '){
            res.pop_back();
        }
        return res;


        
    }
    string reverseSTR(string a){
    int right = a.size()-1;
    for(int left = 0;left<a.size()/2;left++){
        char x = a[left];
        a[left] = a[right];
        a[right]=x;
        right --;
    }
    return a;
    }
};