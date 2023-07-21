vector< vector< int >> generate( int n ) {
  vector< vector< int >> v{{ 1 }};
  while ( --n ) {
    vector< int > t{ v.back() };
    adjacent_difference( t.cbegin(), t.cend(), t.begin(), plus() );
    t.push_back( 1 ), v.push_back( t );
  }
  return v;
}
