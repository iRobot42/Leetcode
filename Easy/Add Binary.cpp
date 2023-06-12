string addBinary( string a, string b ) {
  if ( a.size() < b.size() ) a.swap( b );
  auto ia{ a.rbegin() }, ib{ b.rbegin() };
  int i{}; // sum or carry
  while ( ia != a.rend() )
    i += *ia - '0' + ( ib != b.rend() ? *ib++ - '0' : 0 ),
    *ia++ = i % 2 + '0', i /= 2; // full adder
  if ( i ) a.insert( 0, "1" );
  return a;
}
