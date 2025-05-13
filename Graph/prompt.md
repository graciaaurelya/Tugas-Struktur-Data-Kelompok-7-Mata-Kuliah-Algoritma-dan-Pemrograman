# Promp yang Diberikan pada ChatGPT

In a town, there are n people labeled from 1 to n. There is a rumor that one of these people is secretly the town judge.

If the town judge exists, then:

The town judge trusts nobody.
Everybody (except for the town judge) trusts the town judge.
There is exactly one person that satisfies properties 1 and 2.
You are given an array trust where trust[i] = [ai, bi] representing that the person labeled ai trusts the person labeled bi. If a trust relationship does not exist in trust array, then such a trust relationship does not exist.

Return the label of the town judge if the town judge exists and can be identified, or return -1 otherwise.

jelaskan dan buatkan saya program dari soal tersebut dalam bahasa c

## answer 

Deskripsi Masalah :
Bayangkan ada sebuah kota dengan n orang yang diberi label dari 1 hingga n. Terdapat rumor bahwa salah satu dari mereka adalah Town Judge (Hakim Kota). Jika hakim tersebut benar-benar ada, maka:

Hakim tidak mempercayai siapa pun.

Semua orang (kecuali hakim) mempercayai hakim.

Hanya ada satu orang yang memenuhi dua kondisi di atas.

Anda diberikan sebuah array trust, di mana setiap elemen trust[i] = [a, b] menunjukkan bahwa orang dengan label a mempercayai orang dengan label b. Jika tidak ada hubungan kepercayaan antara dua orang, maka tidak akan ada pasangan yang merepresentasikannya dalam array tersebut.

Tugas Anda adalah menentukan label dari Town Judge jika dia ada dan dapat diidentifikasi, atau mengembalikan -1 jika tidak ada.

Pendekatan Penyelesaian :
Masalah ini dapat dimodelkan sebagai graf berarah, di mana setiap orang adalah simpul (node), dan setiap hubungan kepercayaan adalah sisi berarah dari a ke b. Dalam konteks ini:

Hakim Kota akan memiliki:

In-degree (jumlah orang yang mempercayainya) sebesar n - 1.

Out-degree (jumlah orang yang dia percayai) sebesar 0.

Dengan kata lain, hakim adalah simpul yang menerima semua sisi masuk dari simpul lain, tetapi tidak memiliki sisi keluar.

Untuk mengidentifikasi hakim:

Inisialisasi dua array:

in_degree[n + 1]: Menyimpan jumlah orang yang mempercayai setiap individu.

out_degree[n + 1]: Menyimpan jumlah orang yang dipercayai oleh setiap individu.

Iterasi melalui array trust:

Untuk setiap pasangan [a, b], tingkatkan in_degree[b] dan out_degree[a].

Iterasi melalui semua orang dari 1 hingga n:

Jika seseorang memiliki in_degree[i] == n - 1 dan out_degree[i] == 0, maka dia adalah hakim.

Contoh Kasus :
Input: n = 2, trust = [[1, 2]]

Analisis:

Orang 1 mempercayai orang 2.

Orang 2 tidak mempercayai siapa pun.

Orang 2 dipercaya oleh 1 orang (n - 1 = 1).

Output: 2 (Orang 2 adalah hakim).

Input: n = 3, trust = [[1, 3], [2, 3]]

Analisis:

Orang 1 dan 2 mempercayai orang 3.

Orang 3 tidak mempercayai siapa pun.

Orang 3 dipercaya oleh 2 orang (n - 1 = 2).

Output: 3 (Orang 3 adalah hakim).

Input: n = 3, trust = [[1, 3], [2, 3], [3, 1]]

Analisis:

Orang 1 dan 2 mempercayai orang 3.

Orang 3 mempercayai orang 1 (melanggar aturan bahwa hakim tidak mempercayai siapa pun).

Output: -1 (Tidak ada hakim yang memenuhi kriteria).

Kompleksitas Waktu dan Ruang :
Waktu: O(n + m), di mana n adalah jumlah orang dan m adalah jumlah pasangan kepercayaan.

Ruang: O(n), untuk menyimpan in-degree dan out-degree setiap orang.


