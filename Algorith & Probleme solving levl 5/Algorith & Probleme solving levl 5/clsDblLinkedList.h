#pragma once
#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{
protected:
    int _Size = 0;


public:

    class Node
    {
    public:
        T value;
        Node* next;
        Node* prev;
    };

    Node* head = NULL;

    void InsertAtBeginning(T value) {


        /*
        1-Create a new node with the desired value.
        2-Set the next pointer of the new node to the current head of the list.
        3-Set the previous pointer of the current head to the new node.
        4-Set the new node as the new head of the list.
        */

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = head;
        newNode->prev = NULL;

        if (head != NULL) {
            head->prev = newNode;
        }
        head = newNode;
        _Size++;
    }

    void PrintList()
    {
        Node* Current = head;

        while (Current != NULL) {
            cout << Current->value << " ";
            Current = Current->next;
        }
        cout << "\n";
        delete Current;
    }

    Node* Find(T value)
    {
        Node* Current = head;

        while (Current != NULL) {

            if (Current->value == value)
                return Current;

            Current = Current->next;
        }

        return NULL;

    }

    void InsertAfter(Node* current, T value) {

        /*
        1 - Create a new node with the desired value.
        2-Set the next pointer of the new node to the next node of the current node.
        3-Set the previous pointer of the new node to the current node.
        4-Set the next pointer of the current node to the new node.
        5-Set the previous pointer of the next node to the new node(if it exists).
        */

        Node* newNode = new Node();
        newNode->value = value;
        newNode->next = current->next;
        newNode->prev = current;

        if (current->next != NULL) {
            current->next->prev = newNode;
        }
        current->next = newNode;
        _Size++;
    }

    void InsertAtEnd(T value)
    {
        Node* new_node = new Node();

        new_node->value = value;
        new_node->next = NULL;

        if (head == NULL)
        {
            new_node->prev = NULL;
            head = new_node;
        }
        else
        {
            Node* current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->next = new_node;
            new_node->prev = current;

        }
        _Size++;
    }

    void DeleteNode(Node*& NodeToDelete)
    {
        if (head == NULL || NodeToDelete == NULL)
            return;


        if (head == NodeToDelete)
            head = NodeToDelete->next;

        if (NodeToDelete->next != NULL)
            NodeToDelete->next->prev = NodeToDelete->prev;

        if (NodeToDelete->prev != NULL)
            NodeToDelete->prev->next = NodeToDelete->next;

        delete NodeToDelete;
        _Size--;

    }

    void DeleteFirstNode()
    {
        if (head == NULL)
            return;

        Node* temp = head;

        head = head->next;

        if (head != NULL)
        {
            head->prev = NULL;
        }

        delete temp;
        _Size--;

    }

    void DeleteLastNode()
    {
        if (head == NULL)
            return;

        if (head->next == NULL)
        {
            delete head;
            head = NULL;
            return;
        }

        Node* Current = head;
        while (Current->next->next != NULL)
        {
            Current = Current->next;
        }

        Node* temp = Current->next;
        Current->next = NULL;
        delete temp;
        _Size--;
    }

    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0 ? true : false);
    }

    void Clear()
    {
        
        while (_Size > 0)
        {
            DeleteFirstNode();
        }
    
    }

   void Reverse()
    {
        Node* current = head;
        Node* temp = nullptr;
        while (current != nullptr) {
            temp = current->prev;
            current->prev = current->next;
            current->next = temp;
            current = current->prev;
        }

        if (temp != nullptr) {
            head = temp->prev;
        }
    }

    Node* GetNode(int Index)
    {
        int Counter = 0;

        if (Index > _Size || Index < 0)
            return NULL;

        Node* Current = head;

        while (Current != NULL && (Current->next != NULL))
        {
            if (Counter == Index)
                break;

            Current = Current->next;
            Counter++;
        }

        return Current;
    }

    T GetItem(int Item)
    {
        Node* ItemNode = GetNode(Item);

        if (ItemNode == NULL)
            return NULL;
        else
            return ItemNode->value;

    }

    void UpdateItem(int Index, T NewValue)
    {
        Node* IndexNode = GetNode(Index);

        if (IndexNode != NULL)
            IndexNode->value = NewValue;
    }

    void InsertAfter(int Index, T value) {

        Node* ItemNode = GetNode(Index);

        if (ItemNode != NULL)
        {
            InsertAfter(ItemNode, value);
        }
        
    }


};

