struct Solution {
  int searchInsert( vector< int >& n, int t ) {
    int l{}, r{ int( n.size() ) - 1 };
    while ( l <= r ) {
      int m{ ( l + r ) / 2 };
      n[ m ] < t ? l = ++m : r = --m;
    }
    return l;
  }
};
