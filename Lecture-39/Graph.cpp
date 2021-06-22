#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
using namespace std;
#define pb push_back

template<typename T>
class Graph {
public:
	unordered_map<T, list<T> > adjList;

	void addEdge(T u, T v, bool bidir = true) {
		adjList[u].pb(v);
		if (bidir) {
			adjList[v].pb(u);
		}
	}

	void Print() {
		for (auto node : adjList) {
			cout << node.first << "-->";
			for (auto neighbours : node.second) {
				cout << neighbours << " ";
			}
			cout << endl;
		}
	}

	void bfs(T src) {
		queue<T> q;
		q.push(src);

		unordered_map<T, bool> visited;
		visited[src] = true;

		while (!q.empty()) {
			auto node = q.front();
			q.pop();
			cout << node << " ";

			for (auto neighbours : adjList[node]) {
				if (!visited[neighbours]) {
					q.push(neighbours);
					visited[neighbours] = true;
				}
			}
		}
		cout << endl;
	}

	int SSSP(T src, T des) { // Single Source Shortest Path
		queue<T> q;
		q.push(src);

		unordered_map<T, bool> visited;
		unordered_map<T, int> distance;
		unordered_map<T, T> parent;

		distance[src] = 0;
		visited[src] = true;

		while (!q.empty()) {
			auto node = q.front();
			q.pop();


			for (auto neighbours : adjList[node]) {
				if (!visited[neighbours]) {
					q.push(neighbours);
					visited[neighbours] = true;
					distance[neighbours] = distance[node] + 1;
					parent[neighbours] = node;
				}
			}
		}

		cout << "Path followed: ";
		T x = des;
		while (x != src) {
			cout << x << "<--";
			x = parent[x];
		}
		cout << src << endl;

		// for (auto node : distance) {
		// 	cout << "Distance of " << node.first << " from " << src << " is " << node.second << endl;
		// }

		return distance[des];
	}
};

int main() {

	Graph<int> g;
	g.addEdge(1, 2);
	g.addEdge(3, 2);
	g.addEdge(3, 4);
	g.addEdge(3, 5);
	g.addEdge(1, 4);
	g.addEdge(5, 4);
	g.addEdge(5, 6);
	// g.addEdge("Putin", "Trump");
	// g.addEdge("Putin", "Modi");
	// g.addEdge("Trump", "Modi", true);
	// g.addEdge("Yogi", "Modi", true);
	// g.addEdge("Yogi", "Prabhu");
	// g.addEdge("Prabhu", "Modi");
	// g.addEdge("Putin", "Pope");

	// g.Print();
	g.bfs(1);
	cout << "Minimum Distance b/w 1 and 6 " << g.SSSP(1, 6) << endl;

	return 0;
}
















