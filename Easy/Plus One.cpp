vector< int > plusOne( vector< int >& d ) {
  for ( auto i{ d.rbegin() }; i != d.rend(); ++i )
    if ( ++*i %= 10 ) return d;
  return d.push_back( 0 ), d.front() = 1, d;
}
