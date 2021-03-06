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
	void printNode() {
		Node * tempNode = firstNode;
		while (tempNode != nullptr) {
			cout << tempNode->info << " ";
			tempNode = tempNode->link;
		}
		cout << endl;
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
	newList.printNode();
}