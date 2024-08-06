#include <bits/stdc++.h>
using namespace std;
class node
{
public:
   int data;
   node *left;
   node *right;
   node(int d)
   {
      data = d;
      left = right = NULL;
   }
};
node *createtree()
{
   int data;
   cin >> data;
   if (data == -1)
   {
      /* code */ return NULL;
   }
   node *root = new node(data);
   root->left = createtree();
   root->right = createtree();
   return root;
}
void preorder(node *root)
{
   if (!root)
   {
      /* code */ return;
   }
   cout << root->data << " ";
   preorder(root->left);
   preorder(root->right);
}
void inorder(node *root)
{
   if (!root)
   {
      /* code */ return;
   }
   inorder(root->left);
   cout << root->data << " ";

   inorder(root->right);
}
void postorder(node *root)
{
   if (!root)
   {
      /* code */ return;
   }
   postorder(root->left);

   postorder(root->right);
   cout << root->data << " ";
}
int countnodes(node *root)
{
   if (!root)
   {
      /* code */ return 0;
   }
   return countnodes(root->left) + countnodes(root->right) + 1;
}
int height(node *root)
{
   if (!root)
   {
      /* code */ return 0;
   }

   return max(height(root->left), height(root->right)) + 1;
}
int diameter(node *root)
{
   if (!root)
   {
      return 0;
   }
   int op1 = height(root->left) + height(root->right);
   int op2 = diameter(root->left);
   int op3 = diameter(root->right);

   return max(op1, max(op2, op3));
}
node *findnote(node *root, int key)
{
   if (!root)
   {
      /* code */ return NULL;
   }
   if (root->data == key)
   {
      /* code */ return root;
   }
   node *ans = findnote(root->left, key);
   if (ans != NULL)
   {
      /* code */ return ans;
   }
   ans = findnote(root->right, key);
   return ans;
}
void levelorder(node *root)
{
   if (!root)
   {
      /* code */ return;
   }
   queue<node *> q;
   q.push(root);
   q.push(NULL);
   while (!q.empty())
   {
      /* code */ node *n = q.front();
      q.pop();

      if (n)

      {
         /* code */ cout << n->data << " ";
         if (n->left)
         {
            /* code */ q.push(n->left);
         }
         if (n->right)
         {
            /* code */ q.push(n->right);
         }
      }
      else
      {
         cout << endl;
         if (!q.empty())
         {
            /* code */ q.push(NULL);
         }
      }
   }
}
node *insertInBST(node *root, int data)
{
   if (!root)
   {
      root = new node(data);
      return root;
   }
   if (root->data > data)
   {
      root->left = insertInBST(root->left, data);
   }
   else
   {
      root->right = insertInBST(root->right, data);
   }
   return root;
}
node *createBST()
{
   node *root = NULL;
   int data;
   cin >> data;
   while (data != -1)
   {
      root = insertInBST(root, data);
      cin >> data;
   }
   return root;
}
node *searchinbst(node *root, int key)
{
   // base case
   if (!root)
   {
      return NULL;
   }
   // recursive case
   if (root->data == key)
   {
      return root;
   }
   else if (root->data > key)
   {
      return searchinbst(root->left, key);
   }
   else
   {
      return searchinbst(root->right, key);
   }
}
int Height(node *root)
{
   if (!root)
   {
      /* code */ return 0;
   }

   return max(Height(root->left), Height(root->right)) + 1;
}

bool isbalancedbst(node *root)
{
   // base case
   if (!root)
   {
      return true;
   }
   // recursive case
   int hl = Height(root->left);
   int hr = Height(root->right);
   if (abs(hl - hr) <= 1 and isbalancedbst(root->left) and isbalancedbst(root->right))
   {
      return true;
   }
   return false;
}
class Pair
{
public:
   int Height;
   bool isbalanced;
};
Pair checkbalanced(node *root)
{
   if (!root)
   {
      Pair p;
      p.Height = 0;
      p.isbalanced = true;
      return p;
   }
   Pair left = checkbalanced(root->left);
   Pair right = checkbalanced(root->right);
   Pair p;
   p.Height = max(left.Height, right.Height) + 1;
   if (abs(left.Height - right.Height) <= 1 and left.isbalanced and right.isbalanced)
   {
      p.isbalanced = true;
   }
   else
   {
      p.isbalanced = false;
   }
   return p;
}
node *buildbalancedbst(int a[], int s, int e)
{
   int m = (s + e) / 2;
   node *root = new node(a[m]);
   root->left = buildbalancedbst(a, s, m - 1);
   root->right = buildbalancedbst(a, m + 1, e);
   return root;
}
// BST TO LL
class LinkedList
{
public:
   node *head, *tail;
   LinkedList(node *root)
   {
      head = tail = NULL;
   }
};
LinkedList bsttoll(node *root)
{
   LinkedList L(root);

   // base case
   if (!root)
   {
      return L;
   }
   // recursive case
   if (root->left and root->right)
   {
      LinkedList left = bsttoll(root->left);
      LinkedList right = bsttoll(root->right);
      // left ke tail ko right mei rooot daal do
      left.tail->right = root;
      // root ke right mei right ka head
      root->right = right.head;
      L.head = left.head;
      L.tail = right.tail;
      return L;
   }
   else if (root->left and !root->right)
   {
      LinkedList left = bsttoll(root->left);
      left.tail->right = root;
      L.head = left.head;
      L.tail = root;
      return L;
   }
   else if (!root->left and root->right)
   {
      LinkedList right = bsttoll(root->right);
      root->right = right.head;
      L.head = root;
      L.tail = right.tail;
      return L;
   }
   else
   {
      L.head = L.tail = root;
      return 0;
   }
}

int main()
{
   // 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
   int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int n = sizeof(a) / sizeof(int);
   node *root = buildbalancedbst(a, 0, n - 1);
   // node *root = createtree();
   preorder(root);
   cout << endl;
   inorder(root);
   cout << endl;
   postorder(root);
   cout << endl;
   cout << countnodes(root);
   cout << endl;
   cout << height(root);
   cout << endl;
   cout << diameter(root);
   cout << endl;
   // node *ans = findnote(root, 6);
   // if (ans != NULL)
   // {
   //    /* code */ cout << root->data << endl;
   // }
   // else
   // {
   //    cout << "nhi  mila";
   // }
   // cout << endl;
   levelorder(root);
   cout << endl;
   node *ans = searchinbst(root, 14);

   if (ans != NULL)
   {
      cout << ans->data << endl;
   }
   cout << endl;
   if (isbalancedbst(root) == true)
   {
      cout << "balanced" << endl;
   }
   else
   {
      cout << "not balanced" << endl;
   }
   Pair x = checkbalanced(root);
   if (x.isbalanced)
   {
      cout << "balanced" << endl;
   }
   else
   {
      cout << "not balanced" << endl;
   }

   return 0;
}
