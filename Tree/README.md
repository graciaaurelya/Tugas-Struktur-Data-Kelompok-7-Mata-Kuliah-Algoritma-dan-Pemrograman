Tree: Preorder Traversal

Nama: Muh Zayyaan Dzakwan YNIM: D121241029

Problem Link: Tree: Preorder TraversalDifficulty: Easy

Short Approach Summary

Pendekatan Rekursif dalam C

Base Case: Jika root == NULL, hentikan fungsi.

Visit: Cetak nilai node saat ini (root->data).

Rekursi ke Subtree Kiri: Panggil preOrder(root->left).

Rekursi ke Subtree Kanan: Panggil preOrder(root->right).
