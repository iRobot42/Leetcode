int singleNumber( vector< int >& n ) {
  return accumulate( n.cbegin(), n.cend(), 0, bit_xor() );
}
