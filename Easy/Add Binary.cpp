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

#if 0
string addBinary( string a, string b ) {
  if ( a == "0" && b == "0" ) return a;
  bitset< 10000 > ba( a ), bb( b );
  const size_t s{ max( a.size(), b.size() ) };
  for ( size_t i{}, n{}; i <= s; ++i )
    n += ba[ i ] + bb[ i ], ba[ i ] = n & 1, n /= 2;
  return a = ba.to_string(), a.substr( a.find( '1' ) );
}
#endif
