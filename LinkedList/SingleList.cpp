#include "SingleList.h"

SingleList::SingleList() : head{nullptr}, tail{nullptr}, size{0}
{}

SingleList::~SingleList()
{
	delete head;
}

void SingleList::PushFront(int data)
{
	auto temp = new Node(data);
	if(head == nullptr){
		tail = temp;
	}
	temp->next = head;
	head = temp;
	size++;
}

void SingleList::PopFront()
{
	if (head != nullptr) {
		auto temp = head;
		head = head->next;

	    temp->next = nullptr;
		delete temp;
		size--;
	}
}

bool SingleList::IsEmpty()
{
	return size == 0;
}

int SingleList::Size()
{
	return size;
}

int SingleList::First()
{
	return head->data;
}

int SingleList::Last()
{
	return tail->data;
}

SingleList::Iterator SingleList::Begin()
{
	return Iterator(head);
}

SingleList::Iterator SingleList::End()
{
	return Iterator(nullptr);
}

void SingleList::Clear()
{
	delete head;
	head = nullptr;
	tail = nullptr;
	size = 0;

}

void SingleList::Remove(int toRemove)
{
	Iterator pr(nullptr);
	for (auto it = Begin(); it != End();) {

		if (*it == toRemove) {

			if (it.GetValue() == head) {
				head = it->next;
				Node* temp = it.GetValue();
				++it;
				temp->next = nullptr;
				delete temp;
				size--;
				continue;
			}

			else if (it.GetValue() == tail) {
				pr->next = tail->next;
				delete tail;
				tail = pr.GetValue();
				size--;
				return;
			}

			else {

				pr->next = it->next;
				Node* temp = it.GetValue();
				++it;
				temp->next = nullptr;
				delete temp;
				size--;
				continue;
			}
		}
		pr = it;
		++it;
	}

}
