int countNodes( TreeNode* root ) {
  return root ? countNodes( root->left ) + countNodes( root->right ) + 1 : 0;
}
