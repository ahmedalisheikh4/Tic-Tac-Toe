#include <stdio.h>
#include<conio.h>
#include <ctype.h>
//#include<dos.h>
#include<stdlib.h>
#include <time.h>

char slot[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char menu[4][20] = {"Play" , "Credits" , "Instructions", "Exit"};
char menu1[2][20] = {"1Player" , "2Player"};
int checkwin();
void board();
char head();
int a,b;
char response;
int flag = 0;


int main()
{
	srand(time(NULL));
	system("color 1E");
    int player = 1, i, j, choice;
    char mark;
    //printf("Press any key to continue...");
	//getch();
	a:
	b=0;
	start:
    do
    {
    	
    	system("cls");
    	
    	printf("%c",head());
    	
    	for (i = 0 ; i < 4 ; i++)
    	{
    		if (b == i)
    		{
    			printf("\n\n\n\n\t\t\t\t\t\t-->");
    			printf("%s\n\n",menu[i]);
			}
			else
			{
				printf("\n\n\n\n\t\t\t\t\t\t%s\n\n",menu[i]);
			}
    		
		}
		a = getch();
		if (a==80 && b<4)
		{
			
			b++; //down key
		}
		else if (a==72 && b>0)
		{
			b--; //up key on menu
		}
	}
	while (a != 13);  //enter ka acsii code
	if (b==1)
	{
		system("cls");
		
		printf("%c",head());	
		printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tMADE BY:\n\n\n\n \t\t\t\t\tAhmed Ali      (21K-3212)\n\n\n");
		getch();
		goto a;
	}
	else if (b==2)
	{
		system("cls");
		
		printf("%c",head());
		printf("\n\n\n\n\n\n\t\t\t\t\t RULES FOR TIC-TAC-TOE\n\n\n\n\n");
		printf("1. The game is played on a grid that's 3 squares by 3 squares.\n\n\n");
		printf("2. You are X, your friend (or the computer in this case) is O. Players take turns putting their marks in empty squares.\n\n\n");
		printf("3. The first player to get 3 of her marks in a row (up, down, across, or diagonally) is the winner.\n\n\n");
		printf("4. When all 9 squares are full, the game is over. If no player has 3 marks in a row, the game ends in a tie.\n\n\n");
		getch();
		goto a;
	}
	else if (b==3)
	{
		exit(0);
	}
	
		b = 0;
		do
    {
    	
    	system("cls");
    	
    	printf("%c",head());
	for (i = 0 ; i < 2 ; i++)
    	{
    		if (b == i)
    		{
    			printf("\n\n\n\n\t\t\t\t\t\t-->");
    			printf("%s\n\n",menu1[i]);
			}
			else
			{
				printf("\n\n\n\n\t\t\t\t\t\t%s\n\n",menu1[i]);
			}
    		
		}
		a = getch();
		if (a==80 && b<2)
		{
			
			b++; //down key
		}
		else if (a==72 && b>0)
		{
			b--; //up key on menu
		}
	}
	while (a != 13);
	
	
	switch(b)
	{
		case 0:
			for (int i = 1 ; i < 10 ; i++)
	{
		slot[i] = 48 + i;
	}
	do
    {
    	system("cls");
	    board();
	    player = (player % 2) ? 1 : 2;
		switch(player)
		{
			
			case 1:
				
			
			    mark =  'X';
			
			    do 
				{
					printf("\nPlayer %d, enter a number:  ", player);
			    scanf("%d", &choice);
				    if (choice == 1 && slot[1] == '1')
				    {
				        slot[1] = mark;
						flag = 1;
					}
				            
				    else if (choice == 2 && slot[2] == '2')
				    {
				        slot[2] = mark;
						flag = 1;
					}
				            
				    else if (choice == 3 && slot[3] == '3')
				    {
				        slot[3] = mark;
				        flag = 1;
					}
				            
			        else if (choice == 4 && slot[4] == '4')
			        {
				        slot[4] = mark;
				        flag = 1;
				 	}
					        
				    else if (choice == 5 && slot[5] == '5')
				    {
					    slot[5] = mark;
				        flag = 1;
				 	}
					        
				    else if (choice == 6 && slot[6] == '6')
				    {
					    slot[6] = mark;
				        flag = 1;
				 	}
					        
				    else if (choice == 7 && slot[7] == '7')
				    {
					    slot[7] = mark;
				        flag = 1;
				 	}
					        
				    else if (choice == 8 && slot[8] == '8')
				    {
					    slot[8] = mark;
				        flag = 1;
				 	}
				 	
				    else if (choice == 9 && slot[9] == '9')
				    
					{
					   slot[9] = mark;  
						flag = 1;  
					}
					
					
					if (flag == 0)
					{
						printf("Invalid Move!");
					}
				}
				while (flag == 0);
				flag = 0;
			    j = checkwin();
			    break;
			case 2:
				mark =  'O';
			
				do 
				{
					choice = rand() % 10;
				    if (choice == 1 && slot[1] == '1')
				    {
				        slot[1] = mark;
						flag = 1;
					}
				            
				    else if (choice == 2 && slot[2] == '2')
				    {
				        slot[2] = mark;
						flag = 1;
					}
				            
				    else if (choice == 3 && slot[3] == '3')
				    {
				        slot[3] = mark;
				        flag = 1;
					}
				            
			        else if (choice == 4 && slot[4] == '4')
			        {
				        slot[4] = mark;
				        flag = 1;
				 	}
					        
				    else if (choice == 5 && slot[5] == '5')
				    {
					    slot[5] = mark;
				        flag = 1;
				 	}
					        
				    else if (choice == 6 && slot[6] == '6')
				    {
					    slot[6] = mark;
				        flag = 1;
				 	}
					        
				    else if (choice == 7 && slot[7] == '7')
				    {
					    slot[7] = mark;
				        flag = 1;
				 	}
					        
				    else if (choice == 8 && slot[8] == '8')
				    {
					    slot[8] = mark;
				        flag = 1;
				 	}
				 	
				    else if (choice == 9 && slot[9] == '9')
				    
					{
					   slot[9] = mark;  
						flag = 1;  
					}
				}
				while (flag == 0);
				flag = 0;
				 j = checkwin();
				 break;
		}
	
	    player++;
	    
	}while (j ==  - 1);
	break;
	case 1:
		for (int i = 1 ; i < 10 ; i++)
	{
		slot[i] = 48 + i;
	}
	do
    {
    	system("cls");
	    board();
	    player = (player % 2) ? 1 : 2;
	
	    printf("\nPlayer %d, enter a number:  ", player);
	    scanf("%d", &choice);
	
	    mark = (player == 1) ? 'X' : 'O';
	
	    if (choice == 1 && slot[1] == '1')
	        slot[1] = mark;
	            
	    else if (choice == 2 && slot[2] == '2')
	        slot[2] = mark;
	            
	    else if (choice == 3 && slot[3] == '3')
	        slot[3] = mark;
	            
        else if (choice == 4 && slot[4] == '4')
	        slot[4] = mark;
	            
	    else if (choice == 5 && slot[5] == '5')
	        slot[5] = mark;
	            
	    else if (choice == 6 && slot[6] == '6')
	        slot[6] = mark;
	            
	    else if (choice == 7 && slot[7] == '7')
	        slot[7] = mark;
	            
	    else if (choice == 8 && slot[8] == '8')
	        slot[8] = mark;
	            
	    else if (choice == 9 && slot[9] == '9')
	        slot[9] = mark;
	            
	    else
	    {
	        printf("Invalid move ");
	
	        player--;
	        getch();
	    }
	    j = checkwin();
	
	    player++;
	    
	}while (j ==  - 1);
	}
	
    
    
    board();
    char win[3][10] = {"", "Player 1" , "Computer"};
    char win2[3][10] = {"", "Player 1" , "Player 2"};
    if(b == 0)
    {
    	if (j == 1)
        printf("==>\a%s win ", win[--player]);
    else
        printf("==>\aGame draw");
	}
	else if (b == 1)
	{
		if (j == 1)
        printf("==>\a%s win ", win2[--player]);
    else
        printf("==>\aGame draw");
	}

    getch();
    
    
    printf("\n\nDo you want to continue < Y / N> ");
    scanf("%c");
    scanf("%c", &response);
    response = toupper(response);
    
    
    switch(response)
    {
    	case 'Y':
    		goto start;
    	
		case 'N':
		printf("\n\n\t\t\t***  Thanks for playing!  ***");	
	}
    
    return 0;
}

//	***********************************************
//	*										      *
//	*		FUNCTION TO RETURN GAME STATUS  	  *
//	*		1 FOR GAME IS OVER WITH RESULT		  *
//	*		-1 FOR GAME IS IN PROGRESS			  *
//	*		O GAME IS OVER AND NO RESULT	  *
//	*											  *
//	***********************************************

int checkwin()
{
    if (slot[1] == slot[2] && slot[2] == slot[3])
        return 1;
        
    else if (slot[4] == slot[5] && slot[5] == slot[6])
        return 1;
        
    else if (slot[7] == slot[8] && slot[8] == slot[9])
        return 1;
        
    else if (slot[1] == slot[4] && slot[4] == slot[7])
        return 1;
        
    else if (slot[2] == slot[5] && slot[5] == slot[8])
        return 1;
        
    else if (slot[3] == slot[6] && slot[6] == slot[9])
        return 1;
        
    else if (slot[1] == slot[5] && slot[5] == slot[9])
        return 1;
        
    else if (slot[3] == slot[5] && slot[5] == slot[7])
        return 1;
        
    else if (slot[1] != '1' && slot[2] != '2' && slot[3] != '3' &&
        slot[4] != '4' && slot[5] != '5' && slot[6] != '6' && slot[7] 
        != '7' && slot[8] != '8' && slot[9] != '9')

        return 0;
    else
        return  - 1;
}


//	***********************************************************************
//	*		FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK		  *
//	***********************************************************************

char head()
{
	printf("\t$$$$$$$$ $$$              $$$$$$$$$                      $$$$$$$$$ \n");
	printf("\t$__$$__| $__|             $__$$  __|                     $__$$  __| \n\n");
	printf("\t $$ |   $$$  $$$$$$$$       $$ | $$$$$$$   $$$$$$$$        $$ | $$$$$$$   $$$$$$$ \n");
	printf("\t $$ |   $$ |$$  _____|      $$ | $____$$$ $$  _____|       $$ |$$  __$$$ $$  __$$$ \n");
	printf("\t $$ |   $$ |$$ /            $$ | $$$$$$$ |$$ /             $$ |$$ /  $$ |$$$$$$$$ | \n");
	printf("\t $$ |   $$ |$$ |            $$ |$$  __$$ |$$ |             $$ |$$ |  $$ |$$   ____| \n");
	printf("\t $$ |   $$ |$$$$$$$$$       $$ |$$$$$$$$ |$$$$$$$$$        $$ |$$$$$$$  |$$$$$$$$$  \n");
	printf("\t $__|   $__| $_______|      $__| $_______| $_______|       $__| $______/  $_______| \n");
	
}
void board()
{
    system("cls");
    
	printf("%c",head());
    

    printf("\n\n\n\n\nPlayer 1 (X)  --  Player 2 (O)\n\n\n");

	printf("\t     |     |     \n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n", slot[1], slot[2], slot[3]);

    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");

    printf("\t  %c  |  %c  |  %c \n", slot[4], slot[5], slot[6]);

    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");

    printf("\t  %c  |  %c  |  %c \n", slot[7], slot[8], slot[9]);

	printf("\t     |     |     \n");
    printf("\t     |     |     \n\n");
}

// *******************************************************************
// *						END OF PROJECT							 *
// *******************************************************************
