bool isBalanced( TreeNode* root ) {
  if ( !root ) return true;
  const int l{ height( root->left )}, r{ height( root->right )};
  return abs( l-r )<2 && isBalanced( root->left ) && isBalanced( root->right );
}
int height( TreeNode* node ) {
  return node ? max( height( node->left ), height( node->right ))+1 : 0;
}
