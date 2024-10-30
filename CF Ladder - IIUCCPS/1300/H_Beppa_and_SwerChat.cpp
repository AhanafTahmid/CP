#include <iostream>
using namespace std;

struct node
{
  int data;
  node *link;
};
node *head=0;

void insert(int val)
{

    if(head==0){
        head = new node;
        (*head).data=val;
        (*head).link=0;
    }
    else{
        node* temp=new node;
        (*temp).data=val;
        (*temp).link=0;
        
        node* t=head;
        while((*t).link!=0){
            t=(*t).link;
        }
        (*t).link=temp;
    }
}
void print(){
    node* t=head;
    while(t!=0){
        cout<<(*t).data<<endl;
        t=(*t).link;
    }
    //cout<<(*t).data<<"";
}

int main ()
{
  int i;
  for(int j=0;j<5;j++){
      cin>>i;
      insert(i);
  }
  print();
  return 0;
}