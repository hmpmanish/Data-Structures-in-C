// Online C compiler (editor)
// Write and run C online using this editor.

#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *adj[5];

void add_edge(int u , int v){
    struct node* new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data = v;
    new_node->next = adj[u];
    adj[u]=new_node;
}
int main() {
    int vertices , edges , u ,v;
    
    printf("enter vertices: ");
    scanf("%d",&vertices);
    
    printf("enter edges: ");
    scanf("%d",&edges);
    
    for(int i = 0 ; i < vertices ; i++){
        adj[i] = NULL;
    }
    
    for(int i = 0 ; i < edges ; i++){
        scanf("%d %d", &u , &v);
    }
    
    add_edge(0,1);
    add_edge(1,0);
    return 0;
} 
