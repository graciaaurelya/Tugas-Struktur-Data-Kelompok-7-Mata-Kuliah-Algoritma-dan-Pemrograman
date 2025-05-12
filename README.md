## Nama dan NIM
Nama : Gracia Aurelya

NIM : D121241095

## Problem Link From LeetCode
https://leetcode.com/problems/implement-queue-using-stacks/description/

## Difficulty Level
Easy

## Short Approach Summary
1. Gunakan 2 stack : 
   - stack 1 untuk menambahkan elemen ke antrian (fungsi push).
   - stack 2  untuk menghapus dan melihat elemen dari depan antrian (fungsi pop dan peek).

2. push(x): Ketika kita menambahkan elemen ke antrian, kita cukup memasukkan elemen tersebut ke dalam stack1.

3. pop(): Jika stack2 kosong, kita akan memindahkan semua elemen dari stack1 ke stack2. Ini akan membalikkan urutan elemen sehingga elemen yang paling lama (yang berada di depan antrian) berada di atas stack2, siap untuk dihapus. Setelah itu, kita pop dari stack2.

4. peek(): Sama seperti pop, tetapi kita hanya mengakses elemen yang berada di depan (top dari stack2) tanpa menghapusnya.
   
5. empty(): Antrian kosong jika kedua stack, stack1 dan stack2, kosong.