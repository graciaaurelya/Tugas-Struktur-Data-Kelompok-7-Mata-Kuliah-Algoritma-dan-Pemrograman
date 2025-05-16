#include <stdio.h>
#include <stdlib.h>

// Definisi struktur TreeNode
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void preorderTraversal(struct TreeNode* root) {
    if (root == NULL) return;
    
    int capacity = 100;  // Kapasitas awal stack
    struct TreeNode** stack = (struct TreeNode**)malloc(capacity * sizeof(struct TreeNode*));
    int top = -1;  // Indeks top stack
    int first = 1;  // Flag untuk mengecek elemen pertama
    
    stack[++top] = root;  // Push root ke stack
    
    while (top >= 0) {
        struct TreeNode* node = stack[top--];  // Pop node dari stack
        
        if (node != NULL) {
            // Cetak nilai node dengan format sesuai
            if (first) {
                printf("%d", node->val);
                first = 0;
            } else {
                printf(" %d", node->val);
            }
            
            // Periksa apakah perlu resize stack sebelum push anak
            if (top + 2 >= capacity) {
                capacity *= 2;
                stack = (struct TreeNode**)realloc(stack, capacity * sizeof(struct TreeNode*));
            }
            
            // Push anak kanan lalu kiri (agar kiri diproses lebih dulu)
            stack[++top] = node->right;
            stack[++top] = node->left;
        }
    }
    
    free(stack);  // Bebaskan memori stack
}

// Contoh penggunaan
int main() {
    // Membangun contoh pohon
    struct TreeNode n6 = {6, NULL, NULL};
    struct TreeNode n5 = {5, NULL, &n6};
    struct TreeNode n4 = {4, NULL, NULL};
    struct TreeNode n3 = {3, NULL, NULL};
    struct TreeNode n2 = {2, &n3, &n4};
    struct TreeNode root = {1, &n2, &n5};
    
    // Melakukan traversal dan mencetak hasil
    preorderTraversal(&root);  // Output: 1 2 3 4 5 6
    
    return 0;
}
