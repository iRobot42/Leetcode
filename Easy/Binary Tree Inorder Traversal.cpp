vector< int > result;
vector< int > inorderTraversal( TreeNode* root ) {
  if ( !root ) return result;
  inorderTraversal( root->left );
  result.push_back( root->val );
  inorderTraversal( root->right );
  return result;
}
