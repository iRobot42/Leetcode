#define ITERATIVE

#ifdef RECURSIVE
vector< int > postorder;
vector< int > postorderTraversal( TreeNode* root ) {
  if ( !root ) return {};
  postorderTraversal( root->left );
  postorderTraversal( root->right );
  postorder.push_back( root->val );
  return postorder;
}

#elif defined( ITERATIVE )
vector< int > postorderTraversal( TreeNode* root ) {
  vector< int > postorder;
  stack< TreeNode* > traversal;
  if ( root ) traversal.push( root );
  while ( !traversal.empty() ) {
    TreeNode* curr{ traversal.top() };
    traversal.pop();
    postorder.push_back( curr->val );
    if ( curr->left ) traversal.push( curr->left );
    if ( curr->right ) traversal.push( curr->right );
  }
  return { postorder.crbegin(), postorder.crend() };
}

#endif
