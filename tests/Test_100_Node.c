#include <stdio.h>
#include "salmalloc.h"



ssize_t testList() 
{
 		sNode *temp = copy_list();
		ssize_t count = 0;
       		while(temp != NULL) {
       			ssize_t *compare = temp->memSegment + sizeof(smem_blk_seg);
        		printf("value at this location is: %zd.\n", *compare);
			if (*compare != count) {
				printf("Test failed at count %zd when compare was %zd.\n", count, *compare);
       				return FALSE;
       			}
       			temp = (sNode*)temp->next;
        		count++;
       		}
       		return TRUE;
}



int main()
{
	ssize_t *a0, *a1, *a2, *a3, *a4, *a5, *a6, *a7, *a8, *a9, *a10, *a11, *a12, *a13, *a14, *a15, *a16, *a17, *a18, *a19, *a20, *a21, *a22, *a23, *a24, *a25, *a26, *a27, *a28, *a29, *a30, *a31, *a32, *a33, *a34, *a35, *a36, *a37, *a38, *a39, *a40, *a41, *a42, *a43, *a44, *a45, *a46, *a47, *a48, *a49, *a50, *a51, *a52, *a53, *a54, *a55, *a56, *a57, *a58, *a59, *a60, *a61, *a62, *a63, *a64, *a65, *a66, *a67, *a68, *a69, *a70, *a71, *a72, *a73, *a74, *a75, *a76, *a77, *a78, *a79, *a80, *a81, *a82, *a83, *a84, *a85, *a86, *a87, *a88, *a89, *a90, *a91, *a92, *a93, *a94, *a95, *a96, *a97, *a98, *a99, *a100;


	a0 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a0 = 0;

	a1 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a1 = 1;

	a2 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a2 = 2;

	a3 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a3 = 3;

	a4 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a4 = 4;

	a5 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a5 = 5;

	a6 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a6 = 6;

	a7 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a7 = 7;

	a8 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a8 = 8;

	a9 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a9 = 9;

	a10 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a10 = 10;

	a11 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a11 = 11;

	a12 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a12 = 12;

	a13 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a13 = 13;

	a14 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a14 = 14;

	a15 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a15 = 15;

	a16 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a16 = 16;

	a17 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a17 = 17;

	a18 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a18 = 18;

	a19 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a19 = 19;

	a20 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a20 = 20;

	a21 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a21 = 21;

	a22 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a22 = 22;

	a23 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a23 = 23;

	a24 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a24 = 24;

	a25 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a25 = 25;

	a26 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a26 = 26;

	a27 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a27 = 27;

	a28 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a28 = 28;

	a29 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a29 = 29;

	a30 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a30 = 30;

	a31 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a31 = 31;

	a32 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a32 = 32;

	a33 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a33 = 33;

	a34 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a34 = 34;

	a35 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a35 = 35;

	a36 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a36 = 36;

	a37 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a37 = 37;

	a38 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a38 = 38;

	a39 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a39 = 39;

	a40 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a40 = 40;

	a41 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a41 = 41;

	a42 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a42 = 42;

	a43 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a43 = 43;

	a44 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a44 = 44;

	a45 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a45 = 45;

	a46 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a46 = 46;

	a47 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a47 = 47;

	a48 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a48 = 48;

	a49 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a49 = 49;

	a50 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a50 = 50;

	a51 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a51 = 51;

	a52 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a52 = 52;

	a53 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a53 = 53;

	a54 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a54 = 54;

	a55 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a55 = 55;

	a56 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a56 = 56;

	a57 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a57 = 57;

	a58 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a58 = 58;

	a59 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a59 = 59;

	a60 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a60 = 60;

	a61 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a61 = 61;

	a62 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a62 = 62;

	a63 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a63 = 63;

	a64 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a64 = 64;

	a65 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a65 = 65;

	a66 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a66 = 66;

	a67 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a67 = 67;

	a68 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a68 = 68;

	a69 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a69 = 69;

	a70 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a70 = 70;

	a71 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a71 = 71;

	a72 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a72 = 72;

	a73 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a73 = 73;

	a74 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a74 = 74;

	a75 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a75 = 75;

	a76 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a76 = 76;

	a77 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a77 = 77;

	a78 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a78 = 78;

	a79 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a79 = 79;

	a80 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a80 = 80;

	a81 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a81 = 81;

	a82 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a82 = 82;

	a83 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a83 = 83;

	a84 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a84 = 84;

	a85 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a85 = 85;

	a86 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a86 = 86;

	a87 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a87 = 87;

	a88 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a88 = 88;

	a89 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a89 = 89;

	a90 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a90 = 90;

	a91 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a91 = 91;

	a92 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a92 = 92;

	a93 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a93 = 93;

	a94 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a94 = 94;

	a95 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a95 = 95;

	a96 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a96 = 96;

	a97 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a97 = 97;

	a98 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a98 = 98;

	a99 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a99 = 99;

	a100 =  (ssize_t *) salmalloc(sizeof(ssize_t));
	*a100 = 100;

	if (testList() != TRUE) {
		return FALSE;
	}

	printf("Test was successful.\n");

	return TRUE;

}


