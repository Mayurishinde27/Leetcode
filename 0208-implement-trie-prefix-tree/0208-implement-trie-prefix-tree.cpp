class Trie {
    struct TrieNode{
        struct TrieNode* next[26];
        bool nc;
    };
public:
    TrieNode* node;
    Trie()
    {
       node = new TrieNode();
    }
    
    void insert(string word)
    {
        TrieNode *run = node;
        int index;
        for(int i = 0; i< word.size(); i++)
        {
            index = word[i]-'a';
            if(!run -> next[index])
            {
                run -> next[index] = new TrieNode();
            }
            run = run->next[index];
        }
        run -> nc = true;
    }
    
    bool search(string word)
    {
        TrieNode *run = node;
        int index;
        for(int i = 0; i < word.size(); i++)
        {
            index = word[i]-'a';
            if(!run->next[index])
            {
                return 0;
            }
            run = run->next[index];
        }
        return run->nc;
    }
    
    bool startsWith(string prefix)
    {
        TrieNode *run = node;
        int index;
        for(int i = 0; i < prefix.size(); i++)
        {
            index = prefix[i]-'a';
            if(!run->next[index])
            {
                return 0;
            }
            run = run->next[index];
        }
        return 1;
        
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */