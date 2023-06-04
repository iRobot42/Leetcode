struct Solution {
  int removeDuplicates( vector< int >& nums ) {
    int c{};
    for ( size_t i{ 1 }; i < nums.size(); ++i )
      if ( nums[ c ] != nums[ i ] )
        nums[ ++c ] = nums[ i ];
    return ++c;
  }
};
