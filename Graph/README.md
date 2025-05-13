# Nama : Khairul Alam
# Nim : D121241059
# Problem Link : https://leetcode.com/problems/find-the-town-judge/description/?envType=problem-list-v2&envId=graph&utm_source=chatgpt.com
# Difficulity : Easy


## Kompleksitas Waktu dan Ruang

Waktu: O(n + m), di mana n adalah jumlah orang dan m adalah jumlah pasangan kepercayaan.

Ruang: O(n), untuk menyimpan in-degree dan out-degree setiap orang.

## Komponen Dasar Graf

Simpul (Vertex/Node): Mewakili entitas atau objek, dalam kasus ini, setiap warga kota.

Sisi (Edge): Mewakili hubungan antara dua simpul, yaitu siapa yang mempercayai siapa.

Graf dapat bersifat:

Berarah (Directed): Hubungan memiliki arah, misalnya, jika warga A mempercayai warga B, maka ada sisi dari A ke B.

Tak Berarah (Undirected): Hubungan tidak memiliki arah, misalnya, jika dua warga saling mempercayai.

##  Representasi Graf

Graf dapat direpresentasikan dalam berbagai cara, dua di antaranya adalah:

Daftar Ketetanggaan (Adjacency List): Setiap simpul menyimpan daftar simpul yang terhubung dengannya. Cocok untuk graf yang jarang (sparse).

Matriks Ketetanggaan (Adjacency Matrix): Menggunakan matriks dua dimensi untuk menunjukkan hubungan antara simpul. Cocok untuk graf yang padat (dense).

##  Aplikasi dalam Soal "Find the Town Judge"

Dalam soal ini, kita memodelkan hubungan kepercayaan sebagai graf berarah:

Simpul: Setiap warga kota.

Sisi: Jika warga A mempercayai warga B, maka ada sisi dari A ke B.

Kriteria untuk menjadi "Town Judge" adalah:

Tidak mempercayai siapa pun (tidak memiliki sisi keluar).

Dipercayai oleh semua warga lainnya (memiliki sisi masuk dari semua simpul lainnya).

Dengan menggunakan struktur data graf, kita dapat dengan efisien menganalisis hubungan kepercayaan ini untuk menentukan apakah ada warga yang memenuhi kriteria sebagai "Town Judge".
