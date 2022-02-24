#include <bits/stdc++.h>
using namespace std;
 
int minDistance(string word1, string word2) {
    int n = word1.length();
    int m = word2.length();
    
    vector<vector<int>> dp(n+1 , vector<int>(m+1, 0));
    
    for(int i=0 ; i < n + 1 ; i++)
        dp[i][0] = i;
    
    for(int j = 0 ; j < m + 1 ; j++)
        dp[0][j] = j;
    
    for(int i=1 ; i < n+1 ; i++){
        for(int j = 1 ; j < m+1 ; j++){
            if(word1[i-1] == word2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = min(dp[i-1][j-1], min(dp[i-1][j], dp[i][j-1])) + 1;
            }
        }
    }
    
    return dp[n][m];
}
 
int main() {
    int dictionarySize;
    vector<string> dictionary;
    
    set<pair<int, string>> minimalSet;
    
    string incorrectWord;
    cout<<"Enter a word : ";
    cin>>incorrectWord;
    cout<<"Enter Mini Lexicon size : ";
    cin>>dictionarySize;
    cout<<"Enter the lexicon words : ";
    for(int i=0; i<dictionarySize; i++){
        string word;
        cin>>word;
        dictionary.push_back(word);
    }
    
    for(int i = 0 ; i < dictionary.size() ; i++){
        int currentEditDistance = minDistance(incorrectWord, dictionary[i]);
        minimalSet.insert(make_pair(currentEditDistance, dictionary[i]));
    }
  
    cout<<"The top 5 minimum edit distances between the query word and all the real words in the lexicon from the given word are : -\n";
    
    for(int i = 0 ; i < 5 ; i++){
        pair<int, string> cur_pair = *minimalSet.begin();
        minimalSet.erase(cur_pair);
        int cur_distance = cur_pair.first;
        string cur_word = cur_pair.second;
        cout<<cur_word<<" with the edit distance : "<<cur_distance<<endl;
    }
    
    return 0;
}

