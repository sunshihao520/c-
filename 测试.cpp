//#include <iostream>
//#include <string>
//
//using namespace std;
//
//struct trie_node
//{
//	int count;
//	struct trie_node* next[26];
//};
//
//void insert(trie_node* root, char* s)
//{
//
//	while (*s)
//	{
//		int index = *s - 'a';
//
//		if (root->next[index] == NULL)
//		{
//			root->next[index] = new trie_node();
//		}
//		root = root->next[index];
//		root->count++;
//		++s;
//	}
//}
//
//int find(trie_node *root, char* s)
//{
//	while (*s)
//	{
//		int index = *s - 'a';
//		root = root->next[index];
//		if (root == NULL)
//		{
//			return 0;
//		}
//		++s;
//	}
//	return root->count;
//}
//
//int main()
//{
//	int a, b;
//	char s[11];
//	char str[11];
//		trie_node *root = new trie_node();
//	cin >> a;
//	for (int i = 0; i != a; ++i)
//	{
//		cin >> s;
//		insert(root, s);
//	}
//	cin >> b;
//	for (int i = 0; i != b; ++i)
//	{
//		cin >> str;
//		cout << find(root, str) << endl;
//	}
//
//	return 0;
//}