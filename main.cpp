#include "add_nbo.h"

int main(int argc, char* argv[]) {
	
	if (argc != 3){
		printf("usage: %s <file1> <file2>\n", argv[0]);
		return 1;
	}

	uint8_t buffer1[4] = {0,};
	uint8_t buffer2[4] = {0,};

        FILE *fp1 = fopen(argv[1], "rb");
        FILE *fp2 = fopen(argv[2], "rb");
        
        fread(buffer1, sizeof(buffer1), 1, fp1);
        fread(buffer2, sizeof(buffer2), 1, fp2);
        
        fclose(fp1);
        fclose(fp2);
        
        int result = add_nbo(buffer1, buffer2);
	printf("%d\n", result);

	return 0;
        

}
