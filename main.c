#include <stdio.h>
#include<stdlib.h>
#include<string.h>

 void ScreenWel();
 void Login();
 void frame();
 void admin();
 void mm1();
 void mm2();
 void mm3();
 void back();

  int fr,bsr,bdr,bfr,btr;

    struct Room

         {

		    int Rnum;
		    char Rtype[10];
		    char Cname[50];


		   };

    int main(){

	  	 ScreenWel();
	     Login();

         return 0;
    }


     void ScreenWel(){


		   printf("                       ::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::\n");
           printf("                       ::          @@                            @@          ::\n");
           printf("                       ::          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ::\n");
           printf("                       ::              @@                     @@             ::\n");
		   printf("                       ::              @@      WELCOME TO     @@             ::\n");
		   printf("                       ::              @@      SRM   HOTEL    @@             ::\n");
		   printf("                       ::              @@   MANAGEMENT SYSTEM @@             ::\n");
		   printf("                       ::              @@                     @@             ::\n");
		   printf("                       ::          @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@          ::\n");
		   printf("                       ::          @@                            @@          ::\n");
		   printf("                       ::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::\n");


      }


     void Login(){

		  fr=3;

	     	 int id ;
			 int pa;


     	      frame();

	     	     printf("                       ::  Please Enter your login information to the system ::\n");

				 frame();

				 printf("                       ::    ############################################    ::\n");
				 printf("                       ::    ##                                        ##    ::\n");
				 printf("                                     User id ");



				scanf("%d",&id)	;//taking User id
				printf("                       ::    ##                                        ##    ::\n");
		        printf("                                     Password   ");


			scanf("%d",&pa);//taking password

	            printf("                       ::    ##                                        ##    ::\n");
	            printf("                       ::    ############################################    ::\n");
	            printf("                       ::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::\n");

	         if(id==321 &&pa==123){

				   system("cls");
	          	  printf("\n                       ::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::\n                       ::                 Login successful                    ::\n                         -----------------------------------------------------\n");
	          	admin();//successful login menu

		    }
			                                                                                                                                                                                                                                                                                                                                             //\n
	      else{

			  	system("cls");
			  	printf("\n                       ::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::-::\n                       ::              Login unsuccessful  please  try again  ::\n                         -----------------------------------------------------\n");
			  	Login();//log again and again till log



		 }

	 }


	 void admin(){//main menu
	  int a;
		ScreenWel();
		//list of choises
		printf("                             please select your option\n\n                             1- See Avalabile Rooms\n\n                             2- Reserve a room\n\n                             3- Log off\n\n                             ");
	    scanf("%d",&a);	//taking mainmenu user input
		  switch(a){

			case 1:
				system("cls");
				ScreenWel();
				printf("\n                             See Avalabile Rooms\n                             ========================\n");
				mm1();
				break;
			 case 2:
				system("cls");
				ScreenWel();
				printf("\n                             Reserve a room\n                             =================      \n");
				mm2();
				break;
			  case 3:
				mm3();
				break;



			  default:
			  	    system("cls");
					printf("                             invalid input Please Try Again\n");
					admin();

		 }

	}

	 void mm1(){//main menu option 1

	 	int sr=10-bsr;//Currently single rooms available
	 	int dr=15-bdr;//Currently doubble rooms were available
	 	int tr=5-btr;//Currently tripple rooms were available
	 	int fr=3-bfr;//Currently Family rooms were available


	     printf("\n\n                             Available  single Rooms -%d\n\n                               *Price per 1 Night-Rs.7000\n\n                              Available double  rooms -%d\n\n                               *Price Per 1 Night-Rs.11000\n\n                             Avalble Triple rooms -%d\n\n                               *price per 1 Night-Rs.15000\n\n                              Available Family rooms -%d\n\n                               *price per 1 Night-Rs.20000\n\n ",sr,dr,tr,fr);

	   back();
	 }


	 void mm2(){//Main menu option 2

	 	int sr=10;
	 	int dr=15;//15 doubble rooms were available
	 	int tr=5;//5 tripple rooms were available
	 	int fr=2;//5 Family rooms were available
	 	int N,tot,q;//number of Rooms  ,number of nights,totol payment,quit to main menu
	 	int psr=7000;//single Room prise per night
	 	int pdr=11000;//Doubble Room prise per night
	 	int ptr=15000;//Tripple prise per night
	 	int pfr=20000;//Family Room prise per night
	 	int i=0;//for loop

	 		char SR[3]={"sr"};//SINGLE ROOM STORED VARIABLE
	 		char DR[3]={"dr"};//doubble ROOM STORED VARIABLE
	 		char TR[3]={"tr"};//tripple ROOM STORED VARIABLE
	 	    char FR[3]={"fr"};//Family ROOM STORED VARIABLE

		     struct Room room[35];

		    for(i=0;i<35;i++){

		 		printf("                             \nPlease Enter Type of Room  [sr-Single Room dr-Doubble Room tr-Tripple Room fr-Family Room]\n");
		 	    scanf("%s",room[i].Rtype);

	 	        if(strcmp(SR,room[i].Rtype)==0 && sr>0){

			 	    	printf("\n                             %d single rooms are avalbale\n\n",sr);
					    printf("                             How many rooms need\n                             ");


						 scanf("%d",&bsr);
						 for(i=0;i<(bsr);i++){

				              	printf("\n                             Enter Room Number\n                              ");
			 	                scanf("%d",&room[i].Rnum);

				         }

			            sr=sr-bsr;//reduding used rooms

			    }

			 	else if(strcmp(DR,room[i].Rtype)==0 && dr>0){

						  printf("\n                             %d Doubble rooms are avalbale\n\n",dr);
						  printf("                             How many rooms need\n                             ");
						  scanf("%d",&bdr);
						   for(i=0;i<bdr;i++){

				  	       printf("\n                             Enter Room Number\n                              ");
			 	           scanf("%d",&room[i].Rnum);

				  }
					      dr=dr-bdr;//reduding used rooms

			    }

				else if(strcmp(TR,room[i].Rtype)==0 &&tr>0){

						  printf("\n                             %d Tripple rooms are avalbale\n\n",tr);
						  printf("                             How many rooms need\n                             ");
						  scanf("%d",&btr);
						   for(i=0;i<btr;i++){

				  	       printf("\n                             Enter Room Number\n                              ");
			 	           scanf("%d",&room[i].Rnum);

				  }
					      tr=tr-btr;//reduding used rooms


				 }

		        else if(strcmp(FR,room[i].Rtype)==0 &&fr>0){

			 	    	printf("\n%d                          Family rooms are avalbale\n\n",fr);
					    printf("                             How many rooms need\n                             ");
				        scanf("%d",&bfr);
						    for(i=0;i<bfr;i++){

				            	printf("\n                             Enter Room Number\n                              ");
			 	                scanf("%d",&room[i].Rnum);

				            }
					       fr=fr-bfr;//reduding used rooms

			    }
			 	 else {

			 	 	 printf("\n                             All Rooms Are currently booked\n                             Press any key to continue or 1 - main menu                             ");
			 	 	 scanf("%d",&q);
					    if(q==1){

					  	 system("cls");
					  	 admin();

					    }

					    else{

					  	system("cls");
					  	mm2();
					  }
				  }




					 printf("\n                             Coustomer Name\n                             ");
					 scanf("%s",room[i].Cname);

					 printf("\n                             Enter number of Nighs\n                             ");
					 scanf("%d",&N);

						 tot=(psr+pdr+pfr+ptr)*(bfr+bsr+bdr+btr)*N;
						 //total cost=price of room*numberof rooms*Number of nights

						 printf("\n                             Total cost is RS %d",tot);

					 printf("\n                             Press-1 to main menu or num to next customer\n                             ");
				 	scanf("%d",&q);

			 	if(q==1){

			 		system("cls");
			 		admin();
				 }

				 else{
				 	system("cls");
				 	ScreenWel();
				 }


		    }



	   }







	 void mm3(){//exit

	 	int a;//input of main menu user selection

				printf("\n                             Are you sure you want to Log Off?\n                              1-yes    any num  continue\n                                ");
			    scanf("%d",&a);

				 if(a==1){
				   system("cls");
				     ScreenWel();
					 Login();
				 }
			    else{
			    	system("cls");
			    	admin();
				}

	 }
	 void frame(){//framing:    : funtion body

		 int i;

     	 for(i=0;i<fr;i++){
     	 	printf("                       ::                                                    ::\n");
		  }
     }

	   void back(){//back to main menu

	   	   int ba;//user input to back

		   	 printf("\n                   **Press 1 to back to the main menu*\n");
		   	 scanf("%d",&ba);

		   	 if(ba==1){
		   	 	system("cls");
		   	 	admin();
				}
			 else{
			 	printf("\n                   Wrong input check your input!!!!!!!!!!!!!\n");
			 	back();
			 }

	     }
