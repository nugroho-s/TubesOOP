# TubesOOP
Tubes OOP - Dunia Kita<br/>
Pembagian PIC (bukan pembagian tugas):<br/>
1. Nugroho: board, karnivora, singa.<br/>
2. Harry: ular, elang, makhluk.<br/>
3. Raja: Herbivora, kelinci, kura-kura.<br/>
4. AK: main, tumbuhan, zebra.<br/>
<br/>
# Format Commit:
dd x y<br/>
dd tanggal commit<br/>
x nomor anggota (ada di pembagian PIC di atas)<br/>
y nomor commit hari ini yang kalian buat<br/>

----------------
KISAH DUNIA KITA
----------------

Alkisah terdapat sebuah kehidupan di sebuah sabana. Kehidupan itu dipenuhi oleh 2 jenis makhluk
yaitu HEWAN dan TUMBUHAN. Makhluk yang termasuk ke dalam kategori HEWAN memiliki 2 jenis lagi, yaitu
HERBIVORA dan KARNIVORA. 

HERBIVORA terdiri dari kelinci, kura-kura, dan zebra. KARNIVORA terdiri dari singa, ular, dan elang.

Jadi ceritanya begini:
	- kaum HERBIVORA memiliki BENTENG PERLINDUNGAN di UTARA Sabana, dimana benteng itu akan melindungi
		mereka dari kaum KARNIVORA (bahkan elang pun tidak bisa masuk ke wilayah udara benteng itu).
	- kaum KARNIVORA menguasai daerah tengah sabana, yaitu mulai dari BARAT sampai TIMUR, kecuali daerah
		SELATAN. 
	- bagi kaum HERBIVORA, daerah SELATAN merupakan "surga" bagi mereka, dimana segala kebutuhan hidup
		tersedia dan DIJAMIN jika sudah sampai di SELATAN mereka tidak akan mati.
	- TUJUAN kita menciptakan dunia sabana ini adalah ingin melihat apakah kaum HERBIVORA bisa mencapai
		daerah SELATAN dengan dihalangi oleh kaum KARNIVORA yang akan menghalangi perjalanan mereka.
	- di tengah perjalanan, kaum HERBIVORA mampu berlindung di sebuah BENTENG KECIL, dimana kaum 
		KARNIVORA tidak akan mampu mengganggunya.
	- kaum HERBIVORA bisa berlindung di BENTENG KECIL itu sampai si KARNIVORA pergi meninggalkannya.
	- khusus untuk KURA-KURA, karena ia punya tempurung maka ia dapat melindungi dirinya sendiri.

Sketsa:
	============================================================================================
	=..................................BENTENG PERLINDUNGAN....................................=
	=.......kelinci...............................kelinci.................kura2................=
	=...........................zebra.............................................zebra........=
	=======================================PINTU KELUAR=========================================
	............................................................................................
	............................................................................................
	.........singa..............................................................singa...........
	............................................................................................
	......................ular...............=========..........ular............................
	.........................................=BENTENG=..................................singa...
	...........=========.....................=.......=..........................................
	...........=BENTENG=.....................=.KECIL.=..........................................
	...........=.......X.....................====X====..........................................
	...........=.KECIL.=........................................................................
	...........=========............................singa..........ular..........elang..........
	...singa.....................elang..........................elang....................ular...
	========================================PINTU MASUK=========================================
	=..........................................................................................=
	=......................................BENTENG TUJUAN......................................=
	============================================================================================

Ketentuan:
	- setiap hewan baik HERBIVORA maupun KARNIVORA punya kekuatan sendiri. Kekuatan ini bisa 
		bertambah jika mereka makan rumput (HERBIVORA) dan makan herbivora (KARNIVORA).
		Kekuatan ini akan selalu berkurang, sehingga jika kekuatan = 0, maka hewan itu mati.
		Kesimpulannya: 
			- HERBIVORA dinyatakan mati jika: tidak sempat makan rumput (kekuatan = 0) 
				atau dimakan KARNIVORA.
			- Jika ada HERBIVORA yang berhasil sampai ke BENTENG TUJUAN, maka ia tidak akan pernah
				mati.
			- Yang pasti mati adalah KARNIVORA.
			- Yang tidak akan mati adalah KURA-KURA.
	
