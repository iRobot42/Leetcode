struct Solution {
  bool isPalindrome( int x ) {
    if ( !x ) return true;
    if ( x < 0 || !( x % 10 ) ) return false;
    int r{};
    do r = x % 10 + r * 10;
    while ( ( x /= 10 ) > r );
    return x == r || x == r / 10;
  }
};
