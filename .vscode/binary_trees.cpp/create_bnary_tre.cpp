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
// class Pair
// {
// public:
//    int height;
//    int diameter;
// };
// Pair fastdaimeter(node *root)
// {
//    if (!root)
//    {
//       /* code */ Pair p;
//       p.height = p.diameter = 0;
//       return p;
//    }
//    Pair left = fastdaimeter(root->left);
//    Pair right = fastdaimeter(root->right);
//    Pair p;
//    p.height = 1 + max(left.height, right.height);
//    int op1 = left.height + right.height;
//    int op2 = left.diameter;
//    int op3 = right.diameter;
//    p.diameter = max(op1, max(op2, op3));
// }
void mirror(node *root)
{
   if (!root)
   {
      /* code */ return;
   }
   swap(root->left, root->right);
   mirror(root->left);
   mirror(root->right);
}
int pre[] = {8, 10, 1, 6, 4, 7, 3, 14, 13};
int k = 0;
node *buildtree(int *in, int s, int e)
{
   if (s > e)
   {
      return NULL;
   }
   int d = pre[k++];
   node *root = new node(d);
   int i;
   for (int j = s; j <= e; j++)
   {
      /* code */ if (in[j] == d)
      {
         /* code */ i = j;
         break;
      }
   }
   root->left = buildtree(in, s, i - 1);
   root->right = buildtree(in, i - 1, e);
   return root;
}
node *insertInbst(node *root, int d)
{
   if (!root)
   {
      root = new node(d);
      /* code */ return root;
   }
   if (root->data > d)
   {
      /* code */ root->left = insertInbst(root->left, d);
   }
   else
   {
      root->right = insertInbst(root->right, d);
   }
   return root;
}
node *createbst()
{
   node *root = NULL;
   int data;
   cin >> data;
   while (data != -1)
   {
      /* code */ root = insertInbst(root, data);
      cin >> data;
   }
   return root;
}
void printrange(node *root, int k1, int k2)
{
   if (!root)
   {
      /* code */ return;
   }
   printrange(root->left, k1, k2);
   if (root->data >= k1 and root->data <= k2)
   {
      /* code */ cout << root->data << " ";
   }
   printrange(root->right, k1, k2);
}
node *searchbst(node *root, int key)
{
   if (!root)
   {
      /* code */ return NULL;
   }
   if (root->data == key)
   {
      /* code */ return root;
   }
   else if (root->data > key)
   {
      return searchbst(root->left, key);
   }
   else
   {
      return searchbst(root->right, key);
   }
}
bool isbalanced(node *root)
{
   if (!root)
   {
      /* code */ return true;
   }
   int h1 = height(root->left);
   int h2 = height(root->right);
   if (abs(h1 - h2) <= 1 and isbalanced(root->left) and isbalanced(root->left))
   {
      /* code */ return true;
   }
   return false;
}
class Pair {
   public:
   int height ;
   bool isbalanced;
};
Pair  checkblanced( node * root ){
   if (!root )
   {
      /* code */Pair p;
      p.height= 0;
      p. isbalanced  = true ;
      return p ;

   }
   Pair left = checkblanced(root -> left);
   Pair right = checkblanced (root -> right);
   Pair p;
   p.height = max (left . height  , right.height)+1;
   if (abs(left.height - right. height )<= 1 and left.isbalanced and right.isbalanced)
   {
      /* code */p.isbalanced = true;

   }
   else {
      p.isbalanced = false ;
   }
   return p;
   
}

//  8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1
int main()
{
   // node *root = createtree();
   // int in[]= {1,10,4,6,7,8,3,13,14};
   // int n = sizeof(in )/sizeof(int);
   // node *root = buildtree(in , 0 , n-1);
   // preorder(root);
   // cout << endl;
   // inorder(root);
   // cout << endl;
   // postorder(root);
   // cout << endl;
   // cout << countnodes(root);
   // cout << endl;
   // cout << height(root);
   // cout<<endl;
   // cout<<diameter(root);
   // cout<<endl;
   // node * ans = findnote(root, 6);
   // if (ans != NULL)
   // {
   //    /* code */cout<<root->data<<endl;
   // }
   // else{
   //    cout<<"nhi  mila";
   // }
   // cout<<endl;
   // levelorder(root);
   // cout<<endl;
   // levelorder(root);
   // mirror(root);
   // levelorder(root);
   node *root = createbst();
   // cout<< endl;

   // Pair ans = fastdaimeter(root);
   // cout<<
   node *ans = searchbst(root, 14);
   if (ans != NULL)
   {
      /* code */ cout << "found " << ans->data;
   }
   else
   {
      cout << "not foud";
   }
   cout<<endl;
   if (isbalanced(root) ==  true )
   {
      /* code */cout<< "balanced";
   }
   else{
      cout<<"not found ";
   }
   Pair x = checkblanced(root);
   if (x.isbalanced)
   {
      /* code */cout << "balanced";
   }
   else{
      cout <<" balanced";
   }


   return 0;
}