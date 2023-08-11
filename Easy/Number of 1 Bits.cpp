#define V4

#ifdef V1
int hammingWeight( uint32_t n ) {
  int i{};
  while ( n ) ++i, n &= n-1;
  return i;
}

#elif defined( V2 )
int hammingWeight( uint32_t n ) {
  return __builtin_popcount( n );
}

#elif defined( V3 )
int hammingWeight( uint32_t n ) {
  return bitset< 32 >( n ).count();
}

#elif defined( V4 )
int hammingWeight( uint32_t n ) {
  return n ? 1 + hammingWeight( n & n-1 ) : 0;
}

#endif
