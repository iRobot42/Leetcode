vector< int > getRow( int i ) {
  vector< int > v{ 1 };
  while ( i-- )
    adjacent_difference( v.cbegin(), v.cend(), v.begin(), plus() ),
    v.push_back( 1 );
  return v;
}
