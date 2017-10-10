#include <iostream>
using namespace std;

struct Node {
	char info[9];
	Node * link;
};
struct List {
	Node * firstNode = nullptr;
	void addFirstNode(char * newInfo) {
		Node * newNode = new Node;
		strcpy_s(newNode->info, 9, newInfo);
		newNode->link = firstNode;
		firstNode = newNode;
	}
	void addLastNode(char * newInfo) {
		Node * newNode = new Node;
		strcpy_s(newNode->info, 9, newInfo);
		Node * tempNode = firstNode;
		while (tempNode->link != nullptr) {
			tempNode = tempNode->link;
		}
		tempNode->link = newNode;
		newNode->link = nullptr;
	}
	void printNode() {
		Node * tempNode = firstNode;
		while (tempNode != nullptr) {
			cout << tempNode->info << " ";
			tempNode = tempNode->link;
		}
		cout << endl;
	}
	void Dealocate() {
		Node * tempNode = firstNode;
		Node * nextNode = nullptr;
		while (tempNode != nullptr) {
			Node * needToBeDeleted = tempNode;
			nextNode = tempNode->link;
			delete needToBeDeleted;
			tempNode = nextNode;
		}
	}
};

void main() {
	List newList;
	newList.addFirstNode("IB160250");
	newList.addFirstNode("IB160116");
	newList.addFirstNode("IB160045");
	newList.addFirstNode("IB160107");
	newList.addFirstNode("IB160025");
	newList.addFirstNode("IB160059");
	newList.addFirstNode("IB160093");
	newList.addFirstNode("IB160188");
	newList.addFirstNode("IB160033");
	newList.addLastNode("IB160033");
	newList.printNode();
}
