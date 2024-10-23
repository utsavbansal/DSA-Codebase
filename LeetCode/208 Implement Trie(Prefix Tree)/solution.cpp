struct trie {
    vector<trie*> child;
    bool isEnd;

    // Constructor to initialize the Trie node
    trie() :  child(26, NULL), isEnd(false) {}
    trie(int x) :  child(26, NULL), isEnd(false) {}
};
class Trie {
public:
    struct trie* root;
    Trie() {
        root=new trie();
    }
    
    void insert(string word) {
        trie* node=root;
        for(int i=0;i<word.size();i++)
        {
            if(node->child[word[i]-'a']==NULL)
            {
                trie* n=new trie(word[i]);
                node->child[word[i]-'a']=n;
            }
            node=node->child[word[i]-'a'];
        }
        node->isEnd=true;
    }
    
    bool search(string word) {
        trie* node=root;
        for(int i=0;i<word.size();i++)
        {
            if(node->child[word[i]-'a']!=NULL)
            {
                node=node->child[word[i]-'a'];
            }
            else
                return false;
        }
        if(node->isEnd)
            return true;
        return false;
    }
    
    bool startsWith(string prefix) {
        trie* node=root;
        for(int i=0;i<prefix.size();i++)
        {
            if(node->child[prefix[i]-'a']!=NULL)
            {
                node=node->child[prefix[i]-'a'];
            }
            else
                return false;
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */