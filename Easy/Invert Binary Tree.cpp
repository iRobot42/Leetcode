#define V2

#ifdef V1
TreeNode* invertTree( TreeNode* r ) {
  stack< TreeNode* > s;
  s.push( r );
  while ( !s.empty() ) {
    TreeNode* n{ s.top() };
    s.pop();
    if ( n ) swap( n->left, n->right ),
      s.push( n->left ), s.push( n->right );
  }
  return r;
}

#elif defined( V2 )
TreeNode* invertTree( TreeNode* r ) {
  if ( r ) swap( r->left, r->right ),
    invertTree( r->left ), invertTree( r->right );
  return r;
}

#endif
