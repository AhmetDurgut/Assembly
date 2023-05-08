// Ahmet DURGUT 02210201509 Normal Öðretim

  # include <stdio.h>
  # include <string.h>
  # include <stdint.h>

uint8_t RAM[256];
uint8_t AX, BX, CX, DX;
int kontrol;
uint8_t n = 0, a = 0;

int hrkKontrol(char harf[]) {
  if (harf[kontrol] == 'H' && harf[kontrol + 1] == 'R' && harf[kontrol + 2] == 'K') {
    kontrol += 3;
    if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = a;

      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = RAM[a];
        kontrol++;
      }

    } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;
      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = AX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = a;

      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }

        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = RAM[a];
        kontrol++;
      }

    } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;
      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = BX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = RAM[a];
        kontrol++;
      }

    } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;
      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = CX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = RAM[a];
        kontrol++;
      }
    }
  }
}

int topKontrol(char harf[]) {
  if (harf[kontrol] == 'T' && harf[kontrol + 1] == 'O' && harf[kontrol + 2] == 'P') {
    kontrol += 3;

    if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;
      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX + AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX + BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX + CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX + DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX + a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX + RAM[a];
        kontrol++;
      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX += RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX += RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX += RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX += RAM[a];
        }
      }

    } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX + AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX + BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX + CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX + DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX + a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX + RAM[a];
        kontrol++;
      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX += RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX += RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX += RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX += RAM[a];
        }
      }

    } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX + AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX + BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX + CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX + DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX + a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX + RAM[a];
        kontrol++;
      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX += RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX += RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX += RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX += RAM[a];
        }
      }

    } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX + AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX + BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX + CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX + DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX + a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX + RAM[a];
        kontrol++;
      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX += RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX += RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX += RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX += RAM[a];
        }
      }
    }

  }
}

int cikKontrol(char harf[]) {
  if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'I' && harf[kontrol + 2] == 'K') {
    kontrol += 3;

    if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX - AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX - BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX - CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX - DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX - a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX - RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX -= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX -= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX -= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX -= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX - AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX - BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX - CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX - DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX - a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX - RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX -= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX -= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX -= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX -= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX - AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX - BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX - CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX - DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX - a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX - RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX -= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX -= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX -= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX -= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX - AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX - BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX - CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX - DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX - a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX - RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX -= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX -= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX -= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX -= RAM[a];
        }
      }
    }
  }
}

int crpKontrol(char harf[]) {
  if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'R' && harf[kontrol + 2] == 'P') {
    kontrol += 3;

    if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX * AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX * BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX * CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX * DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX * a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX * RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX *= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX *= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX *= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX *= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX * AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX * BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX * CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX * DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX * a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX * RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX *= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX *= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX *= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX *= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX * AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX * BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX * CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX * DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX * a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX * RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX *= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX *= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX *= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX *= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX * AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX * BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX * CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX * DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX * a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX * RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX *= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX *= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX *= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX *= RAM[a];
        }
      }
    }
  }
}

int bolKontrol(char harf[]) {
  if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'O' && harf[kontrol + 2] == 'L') {
    kontrol += 3;

    if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = AX % AX;
        AX = AX / AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = AX % BX;
        AX = AX / BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = AX % CX;
        AX = AX / CX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = AX % a;
        AX = AX / a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = AX % RAM[a];
        AX = AX / RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          DX = AX % RAM[a];
          AX /= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          DX = BX % RAM[a];
          BX /= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          DX = CX % RAM[a];
          CX /= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = BX % AX;
        BX = BX / AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = BX % BX;
        BX = BX / BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = BX % CX;
        BX = BX / CX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = BX % a;
        BX = BX / a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = BX % RAM[a];
        BX = BX / RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          DX = AX % RAM[a];
          AX /= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          DX = BX % RAM[a];
          BX /= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          DX = AX % RAM[a];
          CX /= RAM[a];
        }
      }
      
    } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
    kontrol += 3;

    if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
      kontrol += 2;
      DX = CX % AX;
      CX = CX / AX;
    } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
      kontrol += 2;
      DX = CX % BX;
      CX = CX / BX;
    } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
      kontrol += 2;
      DX = CX % CX;
      CX = CX / CX;
    } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

      while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
        kontrol++;
        n++;
      }
      if (n == 3) {
        a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
      } else if (n == 2) {
        a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
      } else if (n == 1) {
        a = ((harf[kontrol - 1] - 48) * 1);
      }
      DX = CX % a;
      CX = CX / a;
    } else if (harf[kontrol] == '[') {
      kontrol++;
      while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
        kontrol++;
        n++;
      }
      if (n == 3) {
        a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
      } else if (n == 2) {
        a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
      } else if (n == 1) {
        a = ((harf[kontrol - 1] - 48) * 1);
      }
      DX = CX % RAM[a];
      CX = CX / RAM[a];
      kontrol++;

    } else if (harf[kontrol] == '[') {
      if (harf[kontrol] == 'A') {
        kontrol += 2;
        DX = AX % RAM[a];
        AX /= RAM[a];
      } else if (harf[kontrol] == 'B') {
        kontrol += 2;
        DX = BX % RAM[a];
        BX /= RAM[a];
      } else if (harf[kontrol] == 'C') {
        kontrol += 2;
        DX = CX % RAM[a];
        CX /= RAM[a];
      }
    }
  }

  }

}



int veKontrol(char harf[]) {
  if (harf[kontrol] == 'V' && harf[kontrol + 1] == 'E') {
    kontrol += 2;

    if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX & AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX & BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX & CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX & DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX & a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX & RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX &= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX &= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX &= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX &= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX & AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX & BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX & CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX & DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX & a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX & RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX &= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX &= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX &= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX &= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX & AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX & BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX & CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX & DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX & a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX & RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX &= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX &= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX &= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX &= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX & AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX & BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX & CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX & DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX & a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX & RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX &= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX &= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX &= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX &= RAM[a];
        }
      }
    }
  }
}

int veyaKontrol(char harf[]) {
  if (harf[kontrol] == 'V' && harf[kontrol + 1] == 'E' && harf[kontrol + 2] == 'Y' && harf[kontrol + 3] == 'A') {
    kontrol += 4;

    if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX | AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX | BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX | CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        AX = AX | DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX | a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        AX = AX | RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX |= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX |= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX |= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX |= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX | AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX | BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX | CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        BX = BX | DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX | a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        BX = BX | RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX |= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX |= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX |= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX |= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX | AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX | BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX | CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        CX = CX | DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX | a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        CX = CX | RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX |= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX |= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX |= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX |= RAM[a];
        }
      }

    } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X' && harf[kontrol + 2] == ',') {
      kontrol += 3;

      if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX | AX;
      } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX | BX;
      } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX | CX;
      } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
        kontrol += 2;
        DX = DX | DX;
      } else if (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {

        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX | a;
      } else if (harf[kontrol] == '[') {
        kontrol++;
        while (harf[kontrol] == '0' || harf[kontrol] == '1' || harf[kontrol] == '2' || harf[kontrol] == '3' || harf[kontrol] == '4' || harf[kontrol] == '5' || harf[kontrol] == '6' || harf[kontrol] == '7' || harf[kontrol] == '8' || harf[kontrol] == '9') {
          kontrol++;
          n++;
        }
        if (n == 3) {
          a = ((harf[kontrol - 3] - 48) * 100) + ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 2) {
          a = ((harf[kontrol - 2] - 48) * 10) + ((harf[kontrol - 1] - 48) * 1);
        } else if (n == 1) {
          a = ((harf[kontrol - 1] - 48) * 1);
        }
        DX = DX | RAM[a];
        kontrol++;

      } else if (harf[kontrol] == '[') {
        if (harf[kontrol] == 'A') {
          kontrol += 2;
          AX |= RAM[a];
        } else if (harf[kontrol] == 'B') {
          kontrol += 2;
          BX |= RAM[a];
        } else if (harf[kontrol] == 'C') {
          kontrol += 2;
          CX |= RAM[a];
        } else if (harf[kontrol] == 'D') {
          kontrol += 2;
          DX |= RAM[a];
        }
      }
    }
  }
}

int degKontrol(char harf[]) {
  if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'E' && harf[kontrol + 2] == 'G') {
    kontrol += 3;
    if (harf[kontrol] == 'A' && harf[kontrol + 1] == 'X') {
      kontrol += 2;
      AX = ~AX;
    } else if (harf[kontrol] == 'B' && harf[kontrol + 1] == 'X') {
      kontrol += 2;
      BX = ~BX;
    } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'X') {
      kontrol += 2;
      CX = ~CX;
    } else if (harf[kontrol] == 'D' && harf[kontrol + 1] == 'X') {
      kontrol += 2;
      DX = ~DX;
    }
  }
}

int kont(char harf[]) {
  if (harf[kontrol] == 'H') {
    hrkKontrol(harf);
    n = 0;
  } else if (harf[kontrol] == 'T') {
    topKontrol(harf);
    n = 0;
  } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'R') {
    crpKontrol(harf);
    n = 0;
  } else if (harf[kontrol] == 'C' && harf[kontrol + 1] == 'I') {
    cikKontrol(harf);
    n = 0;
  } else if (harf[kontrol] == 'B') {
    bolKontrol(harf);
    n = 0;
  } else if (harf[kontrol] == 'D') {
    degKontrol(harf);
    n = 0;
  } else if (harf[kontrol] == 'V' && harf[kontrol + 1] == 'E' && harf[kontrol + 2] == 'Y') {
    veyaKontrol(harf);
    n = 0;
  } else if (harf[kontrol] == 'V' && harf[kontrol + 1] == 'E') {
    veKontrol(harf);
    n = 0;
  }
}

int main() {
  char harf[400], isim[30], tmp;
  int i, k, kontrol2;
  FILE * fp;
  printf("Dosya adini giriniz: ");
  scanf("%s", & isim);
  fp = fopen(isim, "r");

  if (fp != NULL) {
    tmp = fgetc(fp);
    harf[0] = tmp;
    while (tmp != EOF) {
      tmp = fgetc(fp);
      harf[i] = tmp;
      i++;
    }
  } else {
    printf("Dosya ismini kontrol edin ve tekrar girin.");
  }
  int boyut = strlen(harf);

  //bosluk enter silme
  for (i = 0; i < boyut; i++) {
    if (harf[i] == 32) {
      for (k = i; k < boyut; k++) {
        harf[k] = harf[k + 1];
      }
      boyut = boyut - 1;
    }
    if (harf[i] == 10) {
      kontrol2++;
      for (k = i; k < boyut; k++) {
        harf[k] = harf[k + 1];
      }
      boyut = boyut - 1;
    }
  }
  boyut = boyut - 4;
  for (i = 0; i < 256; i++) {
    RAM[i] = 1;
  }



  for (i = 0; i <= kontrol2; i++) {
    kont(harf);
  }

  printf("AX:%u \n", AX);
  printf("BX:%u \n", BX);
  printf("CX:%u \n", CX);
  printf("DX:%u \n", DX);

  fclose(fp);
}
