int maxDepth( TreeNode* n ) {
  return n ? max( maxDepth( n->left ), maxDepth( n->right )) + 1 : 0;
}
