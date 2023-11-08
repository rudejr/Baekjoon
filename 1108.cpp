#include <stdio.h>
#define ROW 4
#define COL 8

int main() {

	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			if (i == 0) {
				if (j == 0) printf("\\");
				else if (j == COL - 3) printf("/");
				else if (j == COL - 2) printf("\\");
				else printf(" ");
			} else if (i == ROW - 3) {
				if (j == 1) printf(")");
				else if (j == COL - 4) printf("(");
				else if (j == COL - 2) printf("\'");
				else if (j == COL - 1) printf(")");
				else printf(" ");
			} else if (i == ROW - 2) {
				if (j == 0) printf("(");
				else if (j == COL - 5) printf("/");
				else if (j == COL - 2) printf(")");
				else printf(" ");
			} else if (i == ROW - 1) {
				if (j == 1) printf("\\");
				else if (j == 2) printf("(");
				else if (j > 2 && j < 5) printf("_");
				else if (j == COL - 3) printf(")");
				else if (j == COL - 2) printf("|");
				else printf(" ");
			} if (j == COL - 1) printf("\n");
		}
	}
	
	return 0;
}