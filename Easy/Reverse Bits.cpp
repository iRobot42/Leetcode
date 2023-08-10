uint32_t reverseBits( uint32_t n ) {
  uint32_t c{ 32 }, r{};
  while ( c-- ) ( r <<= 1 ) |= n & 1, n >>= 1;
  return r;
}
