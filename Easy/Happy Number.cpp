bool isHappy( int n ) {
  while ( n > 9 ) {
    int num{ n }, sum{};
    do sum += pow( num % 10, 2 );
    while ( num /= 10 );
    n = sum;
  }
  return n == 1 || n == 7;
}
