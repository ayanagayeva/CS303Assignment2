// function declarations
#pragma once
template <typename Item_Type>

class Single_Linked_List {
private:
    // node to store data + pointer to the next node
    struct Node {
        Item_Type data;
        Node* next;
        Node(const Item_Type& val) : data(val), next(nullptr) {}
    };

    Node* head;       // pointer to the first node in the list
    Node* tail;       // pointer to the last node in the list
    size_t num_items; // num of items in the list

public:
    // constructor to initialize the linked list
    Single_Linked_List();

    // Ddstructor to clean up memory when the list is destroyed
    ~Single_Linked_List();

    // item to the front of the list
    void push_front(const Item_Type& item);

    // item to the back of the list
    void push_back(const Item_Type& item);

    // remove the item at the front of the list
    void pop_front();

    // remove the item at the back of the list
    void pop_back();

    // get the value of the item at the front of the list
    Item_Type front() const;

    // get the value of the item at the back of the list
    Item_Type back() const;

    // check if the list = empty
    bool empty() const;

    // insert an item @ a specific index  
    void insert(size_t index, const Item_Type& item);

    // remove an item @ a specific index  
    bool remove(size_t index);

    // find the index of the first occurrence of an item 
    size_t find(const Item_Type& item);
};
