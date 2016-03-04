# TubesOOP

[![Join the chat at https://gitter.im/nugroho-s/TubesOOP](https://badges.gitter.im/nugroho-s/TubesOOP.svg)](https://gitter.im/nugroho-s/TubesOOP?utm_source=badge&utm_medium=badge&utm_campaign=pr-badge&utm_content=badge)
Tubes OOP - Dunia Kita<br/>
Pembagian PIC (bukan pembagian tugas):<br/>
1. Nugroho: board, karnivora, singa.<br/>
2. Harry: ular, elang, makhluk.<br/>
3. Raja: Herbivora, kelinci, kura-kura.<br/>
4. AK: main, tumbuhan, zebra.<br/>
# Cara bekerja dengan github
1. clone repository<br/>
untuk mengclone repository github ke laptop kalian, gunakan perintah:<br/>
"https://github.com/nugroho-s/TubesOOP"<br/>
di cmd di direktori tempat kamu ingin copy<br/>
cuma perlu digunakan sekali saat memulai project<br/>
2. commit changes<br/>
jika kamu melakukan perubahan dan ingin push perubahan ke github, lakukan commit terlebih dulu dengan:<br/>
"git commit -m 'nama commit'"<br/>
jika tidak bisa, gunakan perintah ini dan ulangi<br/>
"git add ."<br/>
3. Push commit<br/>
untuk push perubahan ke github gunakan perintah<br/>
"git push origin master"<br/>
4. Sinkronasi dari github ke laptop<br/>
https://help.github.com/articles/fetching-a-remote/<br/>


# Peta spawn
1. lihat di KonsepDuniaKita.txt<br/>
2. spawn makhluk random berdasar tempatnya<br/>
3. ukuran disamakan dengan peta di KonsepDuniaKita.txt<br/>

# Teknis
1. semua include library ditaruh di dalam file "stdafx.h"<br/>
2. yang meng-include "stdafx.h" hanyalah "makhluk.h"<br/>
3. setiap class memiliki virtual destructor, walaupun implementasinya adalah "do nothing"<br/>
