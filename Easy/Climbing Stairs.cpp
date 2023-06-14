int climbStairs( int n ) {
  long a{ 1 }, b{ 1 };
  do swap( a += b, b );
  while ( --n );
  return a;
}
