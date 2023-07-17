class node {
    public:
   int value;
   node* next;
   node(){
       value=0;
       next=NULL;
   }
};
class MyLinkedList {
public:
    node* head;
    MyLinkedList() {
        head=NULL;
    }
    
    int get(int index) {
        if(head==NULL)
        return -1;
        node* temp=head;
       int c=0;
       
       while(c!=index){
         temp=temp->next;
         if(temp==NULL)
            return -1;
         c++;
       }
           return temp->value; 
        }
           
    
    
    void addAtHead(int val) {
        node* n = new node();
        n->value=val;
         if(head==NULL)
           head=n;
    
     else{  
    node* temp=head;
       head=n;
       n->next=temp;
       }
    }
    
    void addAtTail(int val) {
         node* n = new node();
        n->value=val;
         if (head == NULL) 
        head = n;
       
       else {
        node* ptr = head;
        while (ptr -> next != NULL) {
          ptr = ptr -> next;
        }
        ptr -> next = n;
      
      }
    }
    
    void addAtIndex(int index, int val) { 
        if(index==0){
        addAtHead(val);
        return;}
         if(head==NULL && index>0){
   
          return;
        }
    
        node* n = new node();
        n->value=val;
         
    node* temp=head;
   
    
       int c=0;
       while(c!=(index-1)){
         temp=temp->next;
         if(temp==NULL){
         
         return ;}
         c++;
       }
if(temp->next==NULL){
temp->next=n;


}
else{
node* ptr=temp->next;
temp->next=n;
n->next=ptr;

}
    }
    
    
    void deleteAtIndex(int index) {
         if(head==NULL){
           return;}
     node* temp=head;
     if(index==0){
       head=head->next;
       return;
     }
      else{
       int c=0;
       while(c!=(index-1)){
         temp=temp->next;
         if(temp==NULL){
        
         return;}
         c++;
     }
      }
     if(temp->next==NULL){
     return;
      
     }
     else{
     node* ptr = temp->next;
     if(ptr->next==NULL){
     temp->next=NULL;
     ;
     }
     else{
     temp->next=ptr->next;
     
     
     
     }
      }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */