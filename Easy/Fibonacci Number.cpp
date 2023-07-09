int fib( int n ) {
  int a{}, b{ 1 };
  for ( int i{ 2 }; i <= n; ++i )
    swap( a += b, b );
  return n ? b : a;
}
