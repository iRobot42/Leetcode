int minDepth( TreeNode* n ) {
#define L minDepth( n->left ) + 1
#define R minDepth( n->right ) + 1
  return n ? !n->left ? R : !n->right ? L : min( L, R ) : 0;
}
