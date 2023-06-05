struct Solution {
  int removeElement( vector< int >& n, int v ) {
    size_t k{ n.size() };
    for ( size_t i{}; i < k; ++i )
      if ( n[ i ] == v )
        swap( n[ i-- ], n[ --k ] );
    return k;
  }
};
