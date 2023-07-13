double findMaxAverage( vector< int >& n, int k ) {
  int s{ accumulate( n.cbegin(), n.cbegin()+k, 0 )}, r{ s };
  for ( size_t i = k; i < n.size(); ++i )
    r = max( r, s += n[ i ] - n[ i-k ] );
  return static_cast< double >( r ) / k;
}
