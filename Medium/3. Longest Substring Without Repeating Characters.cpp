struct Solution {
  int lengthOfLongestSubstring( string s ) {
    int x{}, l{}, r{}, i, h[ CHAR_MAX ];
    fill( h, h + CHAR_MAX, -1 );
    while ( r < s.size() )
      l = ( i = h[ s[ r ] ] ) >= l && i < r ? i + 1 : l,
      h[ s[ r++ ] ] = r, x = max( x, r - l );
    return x;
  }
};
