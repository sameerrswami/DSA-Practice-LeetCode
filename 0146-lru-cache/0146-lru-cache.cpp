class Node {
public:
    int key, val;
    Node* prev;
    Node* next;

    Node(int k, int v) {
        key = k;
        val = v;
        next = prev = nullptr;
    }
};

class LRUCache {
public:
    int limit;
    Node* head;
    Node* tail;
    unordered_map<int, Node*> mp;

    LRUCache(int capacity) {
        limit = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head->next = tail;
        tail->prev = head;
    }

    void addNode(Node* newNode) {
        Node* oldNext = head->next;
        head->next = newNode;
        newNode->prev = head;
        newNode->next = oldNext;
        oldNext->prev = newNode;
    }

    void delNode(Node* oldNode) {
        Node* oldPrev = oldNode->prev;
        Node* oldNext = oldNode->next;

        oldPrev->next = oldNext;
        oldNext->prev = oldPrev;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;
        int val = mp[key]->val;
        Node* ansNode = mp[key];
        mp.erase(key);
        delNode(ansNode);
        addNode(ansNode);
        mp[key] = ansNode;
        return val;
    }

    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            Node* oldNode = mp[key];
            delNode(oldNode);
            mp.erase(key);
        }
        if (mp.size() == limit) {
            Node* lru = tail->prev;
            mp.erase(tail->prev->key);
            delNode(tail->prev);
            delete lru;
        }
        Node* newNode = new Node(key, value);
        addNode(newNode);
        mp[key] = newNode;
    }
};