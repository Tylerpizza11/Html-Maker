#include <string.h>
#include <stdio.h> 
#include <stdlib.h>
#include <3ds.h>



int main()
{ 
gfxInitDefault();
//gfxSet3D(true); //Uncomment if using stereoscopic 3D
consoleInit(GFX_TOP, NULL); //Change this line to consoleInit(GFX_BOTTOM, NULL) if using the bottom screen.
printf("THE HTML MAKER!: V 0.0.1\n\nWelcome to the html maker\n\n\nLoad = L\n\nSave = R\n\nchoose one");




	// Main loop
	while (aptMainLoop())
	{
		gspWaitForVBlank();
		hidScanInput();



		u32 kDown = hidKeysDown();
		
			
		if(kDown & KEY_R)
            {
                gfxExit();
                gfxInitDefault();
				consoleInit(GFX_TOP, NULL);
				sleep(1);
                printf("THE HTML MAKER!: V 0.0.1\n\nDone.\n");
				sleep(4);








               FILE * fpointer = fopen("sdmc:/index.html", "w");

               fprintf(fpointer, "<!DOCTYPE html> //This is made by the Html maker.\n<html>\n<head>\n<title>My first title!</title>\n</head>\n<body>\n<h1>My First Heading</h1>\n<p>My first paragraph.</p>\n</body>\n</html>");

                     fclose(fpointer);
					 break;
                           } else {
                           if(kDown & KEY_L){
							gfxExit();
                            gfxInitDefault();
							consoleInit(GFX_TOP, NULL);
							sleep(3);
                            printf("THE HTML MAKER!: V 0.0.1\n\nLoading");
                            sleep(1);
                            printf(".");
                            sleep(1);
                            printf(".");
                            sleep(1);
                            printf(".");
                            sleep(1);
							gfxExit();
                            gfxInitDefault();
							consoleInit(GFX_TOP, NULL);
							sleep(1);
                            printf("THE HTML MAKER!: V 0.0.1\n\nLoading");
                            sleep(3);
                            printf(".");
                            sleep(1);
                            printf(".");
                            sleep(1);
                            printf(".");
                            sleep(1);

                            char line[255];
                            FILE * fpointer = fopen("sdmc:/index.html", "r");

                            fgets(line, 255, fpointer);

                            gfxExit();
                            gfxInitDefault();
							consoleInit(GFX_TOP, NULL);
							sleep(3);
                            printf("THE HTML MAKER!: V 0.0.1\n\n");
                            printf(line, "\n");


                            fgets(line, 255, fpointer);
                            printf(line, "\n");



                            fgets(line, 255, fpointer);
                            printf(line, "\n");


                            fgets(line, 255, fpointer);
                            printf(line, "\n");


                            fgets(line, 255, fpointer);
                            printf(line, "\n");



                            fgets(line, 255, fpointer);
                            printf(line, "\n");



                            fgets(line, 255, fpointer);
                            printf(line, "\n");



                            fgets(line, 255, fpointer);
                            printf(line, "\n");


                            fgets(line, 255, fpointer);
                            printf(line, "\n");



                            fgets(line, 255, fpointer);
                            printf(line, "\n\n");
                            sleep(2);
                            printf(" \n");
							sleep(5);
							break;



                            fclose(fpointer);

                           }
                           }
		
		
	if (kDown & KEY_START)
			break; //Break in order to return to hbmenu

		// Flush and swap frame-buffers
		gfxFlushBuffers();
		gfxSwapBuffers();
	

     
     
     }
	 gfxExit();
	 return 0;
}  