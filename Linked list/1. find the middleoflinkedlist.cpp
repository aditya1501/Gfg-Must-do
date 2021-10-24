// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}


/* Function to get the middle of the linked list*/
int getMiddle(struct Node *head);

/* Driver program to test above function*/
int main()
{
  int T,i,n,l;

    cin>>T;

    while(T--){
    struct Node *head = NULL,  *tail = NULL;

        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }

    printf("%d\n", getMiddle(head));
    }
    return 0;
}
// } Driver Code Ends
/* Link list Node 
struct Node {
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/


// // this approach is with counting the nodes
// int getMiddle(Node *head)
// {
//     int count=0;
//   Node *temp=head;
//   Node *temp2=head;
//   while(temp!=NULL)
//   {
//        count++;
//       temp=temp->next;
//   }
// //   count++;
//   int mid;
// //   cout<<count<<"------------"<<endl;
//   if(count%2)
//   {
//     mid=count/2;
//     // cout<<"---even"<<mid<<endl;
//     for(int i=0;i<mid;i++)
//     {
//         temp2=temp2->next;
//     }
//     return temp2->data;
//   }
//   else{
//     //   cout<<"--odd--"<<mid<<endl;
//       mid=count/2+1;
//     //   cout<<mid<<"-----"<<endl;
//       for(int i=0;i!=mid-1;i++)
//       {
//           temp2=temp2->next;
//       }
//       return temp2->data;
//   }
// }



///
 /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        // Your code her
    Node* slow=head;
    Node* fast=head;
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
    return slow->data;
    }