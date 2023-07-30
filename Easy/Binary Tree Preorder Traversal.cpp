#define V2

#ifdef V1 // recursive
vector< int > preorder;
vector< int > preorderTraversal( TreeNode* root ) {
  if ( !root ) return {};
  preorder.push_back( root->val );
  preorderTraversal( root->left );
  preorderTraversal( root->right );
  return preorder;
}

#elif defined( V2 ) // iterative
vector< int > preorderTraversal( TreeNode* root ) {
  vector< int > preorder;
  stack< TreeNode* > traversal;
  if ( root ) traversal.push( root );
  while ( !traversal.empty() ) {
    TreeNode* curr{ traversal.top() };
    traversal.pop();
    preorder.push_back( curr->val );
    if ( curr->right ) traversal.push( curr->right );
    if ( curr->left ) traversal.push( curr->left );
  }
  return preorder;
}

#endif
