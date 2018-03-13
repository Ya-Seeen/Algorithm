#include <bits/stdc++.h>
using namespace std;

int visit[ 1003 ];
vector < int > Graph[ 1003 ];

void DFS( int vertex ){
        cout << vertex << " ";
        if( visit[ vertex ] )return;
        visit[ vertex ] = 1;
        int length = Graph[ vertex ].size();
        for( int idx = 0; idx < length; idx++ ){
                int connected_vertex = Graph[ vertex ][ idx ];
                DFS( connected_vertex );
        }
}

int main(){
        Graph[ 1 ].push_back( 3 );
        Graph[ 3 ].push_back( 1 );
        Graph[ 1 ].push_back( 2 );
        Graph[ 2 ].push_back( 1 );
        Graph[ 4 ].push_back( 10 );
        Graph[ 10 ].push_back( 4 );
        Graph[ 1 ].push_back( 4 );
        Graph[ 4 ].push_back( 1 );
        Graph[ 6 ].push_back( 5 );
        Graph[ 5 ].push_back( 6 );
        Graph[ 5 ].push_back( 4 );
        Graph[ 4 ].push_back( 5 );
        DFS( 1 );
        puts( "" );
        return 0;
}
