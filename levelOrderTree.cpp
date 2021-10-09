#include <iostream>
#include<queue>
using namespace std;

class Node{
	public:
	int data;
	Node *left;
	Node *right;

	Node(int d)
	{
		data = d;
		left = right = NULL;
	}
};

Node *BuildTree()
{
	int d;
	cin>>d;
	if(d == -1)
	{
		return NULL;
	}
	Node *n = new Node(d);
	n->left = BuildTree();
	n->right = BuildTree();
	return n;
}

Node* LevelOrderBuild()
{
	int d;
	cin>>d;
	Node *root = new Node(d);
	queue<Node*> q;
	q.push(root);

	while(!q.empty())
	{
		Node *current = q.front();
		q.pop();

		int c1, c2;
		cin>>c1 >> c2;
		if(c1 != -1)
		{
			current->left = new Node(c1);
			q.push(current->left);
		}
		if(c2 != -1)
		{
			current ->right = new Node(c2);
			q.push(current->right);
		}
	}
	return root;
}

void LevelOrderPrint(Node *root)
{
	queue<Node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		Node *temp = q.front();
		if(q.front() == NULL)
		{
			q.pop();
			if(!q.empty())
			{
				cout<<endl;
				q.push(NULL);
			}
		}
		else
		{
			q.pop();
			cout<<temp->data<<" ";
			if(temp->left != NULL)
			{
				q.push(temp->left);
			}
			if(temp->right != NULL)
			{
				q.push(temp->right);
			}
		}
	}
}

int height(Node *root)
{
	if(root == NULL)
	{
		return 0;
	}

	int h1 = height(root->left);
	int h2 = height(root->right);
	return 1 + max(h1,h2);
}

int main() {
	
	//Node *root = BuildTree();
	Node *root = LevelOrderBuild();
	LevelOrderPrint(root);
	int h = height(root);
	cout<<endl;
	cout<<"the height : "<<h;
	return 0;
}

