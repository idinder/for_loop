/* For loop in C

for loop adalah control structure/struktur kawalan yang membolehkan anda 
membuat loop yang akan meng-execute code dalam body loop sebanyak beberapa kali yang anda tetapkan.

syntax untuk for loop :
 
 for (permulaan ungkapan; syarat ungkapan; kemaskini ungkapan) { 
 
 (code)
 
}

permulaan ungkapan : memberi nilai permulaan kepada pembolehubah atau variable.

syarat ungkapan : menilai boolean value sama ada true/false apabila variable diuji dengan syarat yang anda tetapkan.
                  Jika variable lepas syarat dan memberi nilai true, code dalam body for loop akan dilaksanakan
                  dan kemudian kemaskini ungkapan akan dilaksanakan juga. For Loop akan berhenti jika syarat yang anda 
				  tetapkan tidak dilepasi oleh variable dan akan memberi nilai false.
				  (maksudnya selagi nilai adalah true, loop akan sentiasa berjalan sehingga nilai berubah jadi false)
				  
kemaskini ungkapan : menukar nilai pembolehubah/variable dalam for loop. Proses ini akan berlaku selepas
code dalam body loop selesai diexecute atau dilaksanakan.

*/

// CONTOH FOR LOOP
#include <stdio.h>
int main (){
	
	int i;
	
	for (i = 1; i < 5; i++){ // i diberi nilai awal 1. kemudian syarat yang diberi adalah i kurang dari 5 (1,2,3,4). kemudian i akan dikemaskini dengan increment 1 digit setiap kali loop (i++)
		
		printf("Hello World!\n");  // "Hello World" akan di paparkan sebanyak 4 kali kerana syarat i < 5; .
		
	}
	
	// contoh lain yang lebih hebat :
	
	int q;
	
	for (q = 1; q < 10; q++){ // 
		
		printf("%d\n", q); // nombor q akan dipaparkan kemudian kemaskini q++ berlaku dan akan menambah 1 nilai kepada q setiap kali loop dilaksanakan.
		                   // output nya adalah 1,2,3,4,5,6,7,8,9.
		                   //                  (kerana syarat yang diletakkan adalah q < 9;)
	}
	
	// KENA INGAT! Loop akan berlaku selagi nilai boolean dalam for loop adalah TRUE/1.
	// jika nilai boolean berubah kpd false/0, loop akan berakhir.
	
	// contoh yang lebih dasyat :
	// cara nak paparkan nombor ganjil sahaja dibawah 100.
	
	int y;
	
	for (y = 1; y < 100; y += 2){ // y += 2 sama maksud dengan y = y + 2.
		
		printf("%d ", y);
	}
	
	return 0;
}



