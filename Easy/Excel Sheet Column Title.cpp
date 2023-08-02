#define ITERATIVE

#ifdef ITERATIVE
string convertToTitle( int c ) {
  string s;
  do s += char( --c % 26 + 'A' );
  while ( c /= 26 );
  return { s.crbegin(), s.crend() };
}

#elif defined( RECURSIVE )
string convertToTitle( int c ) {
  return c-- ? convertToTitle( c / 26 ) + char( c % 26 + 'A' ) : "";
}

#endif
