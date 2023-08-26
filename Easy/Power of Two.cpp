#define V4

#ifdef V1
bool isPowerOfTwo( int n ) {
  return n > 0 && __builtin_popcount( n ) == 1;
}

#elif defined( V2 )
bool isPowerOfTwo( int n ) {
  return n > 0 && bitset< 64 >( n ).count() == 1;
}

#elif defined( V3 )
bool isPowerOfTwo( int n ) {
  return n > 0 && !( n & n-1 );
}

#elif defined( V4 )
bool isPowerOfTwo( int n ) {
  return n > 0 && pow( 2, floor( log2( n ))) == n;
}

#endif
