#include<bits/stdc++.h>

using namespace std;

class Node{
	public:
	int data;
	Node(int d){
		data=d;
	}
	Node *ptr;
};

bool ispallin(Node *head){
	Node *temp = head;
	
	stack<int> s;
	
	while(temp!=NULL)
	{
		s.push(temp->data);
		temp = temp->ptr;
	}
	
	while(head!=NULL)
	{
		int i=s.top();
		
		s.pop();
		
		if(head->data!=i)
		return false;
		
		
		head=head->ptr;
	}
			return true;
}

int main()
{
	Node one = Node(1);
	Node two = Node(2);
	Node three = Node(3);
	Node four = Node(2);
	Node five = Node(1);
	
	one.ptr = &two;
	two.ptr = &three;
	three.ptr = &four;
	four.ptr = &five;
	five.ptr = NULL;

	
	int result = ispallin(&one);
	
	if(result==1)
	cout<<"Linked List is pallindrome";
	else
	cout<<"Not Pallindrome";
}
