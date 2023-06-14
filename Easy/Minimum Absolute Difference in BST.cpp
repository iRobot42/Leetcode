struct TreeNode {
  int val;
  TreeNode* left;
  TreeNode* right;
  TreeNode()
    : val( 0 ), left( nullptr ), right( nullptr ) {}
  TreeNode( int x )
    : val( x ), left( nullptr ), right( nullptr ) {}
  TreeNode( int x, TreeNode* left, TreeNode* right )
    : val( x ), left( left ), right( right ) {}
};

int x{ INT_MAX };
TreeNode* p;
int getMinimumDifference( TreeNode* n ) {
  if ( !n ) return 0;
  getMinimumDifference( n->left );
  if ( p ) x = min( x, n->val - p->val );
  p = n;
  getMinimumDifference( n->right );
  return x;
}
