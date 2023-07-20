#define L ( node->left )
#define R ( node->right )
#define S ( sum - node->val )
bool hasPathSum( TreeNode* node, int sum ) {
  return node ? L || R ? hasPathSum( L, S ) || hasPathSum( R, S ) : !S : false;
}
