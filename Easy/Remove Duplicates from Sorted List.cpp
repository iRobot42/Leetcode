/*
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val( 0 ), next( nullptr ) {}
  ListNode( int x ) : val( x ), next( nullptr ) {}
  ListNode( int x, ListNode* next ) : val( x ), next( next ) {}
};
*/
ListNode* deleteDuplicates( ListNode* head ) {
  if ( auto n{ head }; n )
    while ( n->next ) n->val == n->next->val ?
      n->next = n->next->next : n = n->next;
  return head;
}
