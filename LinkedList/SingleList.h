#pragma once

class SingleList {
protected:
	class Node {
	friend class SingleList;
		
	    int data;
		Node* next;

		
		
	public:
		Node(int data) : data{ data } {

		}
		~Node() {
			delete next;
		}
	};
	
	int size;
	Node* head;
	Node* tail;

public:
	class Iterator {
	protected:
		Node* value;
	public:
		Iterator(Node* value) : value{ value } {

		}

		Iterator& operator++() { //Prefix ++i it increases, then we use it. 
			value = value->next;
			return *this;
		}
		Iterator& operator++(int) { //Post fix i++. capture, increase, return captured. 
			Iterator temp = *this;
			value = value->next;
			return temp;
		}

		bool operator != (const Iterator& rhs) {
			return value != rhs.value;
		}

		bool operator ==(const Iterator& rhs) {
			return value == rhs.value;
		}


		int operator*() {
			return value->data;
		}

		Node* operator->() {
			return value;
		}

		Node* GetValue() const{
			return value;
		}
	};


public:

	SingleList();
	~SingleList();

	void PushFront(int data);

	void PopFront();
	
	bool IsEmpty();
	int Size();

	int First();
	int Last();
	Iterator Begin();
	Iterator End();
	
	
	void Clear();
	void Remove(int toRemove);



};