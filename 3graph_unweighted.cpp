// coding blocks video 3
/*
Adj. list
0->1,2          //list1
1->2,0          //list2
2->3,0,1
3->2

*/

#include<iostream>
#include<list>
using namespace std;

class Graph
{
    int V;      //vertices or nodes
    list<int> *l;
    public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int> [V];
    }
    void addEdge(int x, int y)
    {
        // bidirectional
        l[x].push_back(y);
        l[y].push_back(x);
    }
    void printAdjList()
    {
        // iterate over all vertices
        for(int i = 0;i<V;i++)
        {
            cout<<"vertex "<<i<<"->";
            for(int neighbour : l[i])
            {
                cout<<neighbour<<" ";
            }
            cout<<endl;
        }

    }
};

int main()
{
    // 4 vertices
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    g.addEdge(1, 2);
    g.printAdjList();
}
