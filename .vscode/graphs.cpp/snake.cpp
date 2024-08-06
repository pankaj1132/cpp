#include <iostream>
#include <queue>
#include <unordered_map>
#include <list>
using namespace std;

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adj;

	void addEdge(T u, T v, bool bidir = true) {
		adj[u].push_back(v);
		if (bidir) adj[v].push_back(u);
	}

	void print() {
		for (auto p : adj) {
			cout << p.first << " : ";
			for (auto neighbour : p.second) {
				cout << neighbour << ", ";
			}
			cout << endl;
		}
	}

	void bfs(T src) {
		unordered_map<T, bool> visited;

		queue<T> q;
		q.push(src);
		visited[src] = true;

		while (!q.empty()) {
			T f = q.front();
			q.pop();
			cout << f << " ";
			for (auto ch : adj[f]) {
				if (!visited[ch]) {
					visited[ch] = true;
					q.push(ch);
				}
			}
		}
	}


	void SSSP(T src, T des) {

		unordered_map<T, bool> visited;
		unordered_map<T, T> parent;
		unordered_map<T, int> dist;

		queue<T> q;
		q.push(src);
		visited[src] = true;
		parent[src] = src;
		dist[src] = 0;

		while (!q.empty()) {
			T f = q.front();
			q.pop();

			for (auto ch : adj[f]) {
				if (!visited[ch]) {
					visited[ch] = true;
					dist[ch] = dist[f] + 1;
					parent[ch] = f;
					q.push(ch);
				}
			}
		}

		cout << "Distance from " << src << " to " << des << " : " << dist[des] << endl;

		while (des != src) {
			cout << des << "<--";
			des = parent[des];
		}
		cout << des << endl;
	}

	void dfsHelper(T src, unordered_map<T, bool> &visited) {
		visited[src] = true;
		cout << src << " ";
		for (auto ch : adj[src]) {
			if (!visited[ch]) dfsHelper(ch, visited);
		}
	}
};

int main() {

	Graph<string> g;
	

	int board[50] = {0};
	board[2] = 13;
	board[5] = 2;
	board[9] = 18;
	board[18] = 11;
	board[17] = -13;
	board[20] = -14;
	board[24] = -8;
	board[25] = -10;
	board[32] = -2;
	board[34] = -22;

	for (int u = 1; u <= 36; ++u)
	{
		for (int dice = 1; dice <= 6; ++dice)
		{
			int v = u + dice + board[u + dice];
			g.addEdge(u, v, false);
		}
	}

	g.SSSP(1, 36);



	
	cout << endl;

	g.print();


	return 0;
}
