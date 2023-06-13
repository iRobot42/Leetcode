#define V1

#ifdef V1 // integer Newton's method
int mySqrt( int x ) {
  long i{ x };
  while ( i * i > x )
    i = i + x / i >> 1;
  return i;
}

#elif defined( V2 ) // recursive
int mySqrt( int x ) {
  if ( !x ) return x;
  long i{ mySqrt( x / 4 ) * 2 + 1 };
  return i * i > x ? --i : i;
}

#endif
