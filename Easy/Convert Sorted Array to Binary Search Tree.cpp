TreeNode* sortedArrayToBST( vector< int >& nums ) {
  return helper( nums, 0, nums.size() );
}
TreeNode* helper( vector< int >& v, size_t l, size_t r ) {
  if ( l == r ) return nullptr;
  size_t m{ l + r >> 1 };
  TreeNode* n{ new TreeNode( v[ m ] )};
  n->left = helper( v, l, m );
  n->right = helper( v, ++m, r );
  return n;
}
