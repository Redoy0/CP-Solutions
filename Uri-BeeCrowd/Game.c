#include<stdio.h>
#include<stdlib.h> //required for system(), srand() and rand()
#include<time.h> //required for time()
#include <unistd.h> //required for sleep()

int main(){
    char name[30]; //variable for player name
    char *catname; //would be used to store category name depending on choice
    int a, option;
    float point;
    int flag[30]; //1D array of 30 elements to mark whether a question is already asked (to prevent repeatation)
    for (a=0;a<=30;a++) flag[a]=0; //all elements of array flag are initialized at 0
    FILE *records; //to store records in a file



    //First Page
    first:
    system("cls"); //to clear screen on Windows, replace with system("clear"); if on Unix-like system
    printf("                    / * / * WELCOME TO NEON QUIZ * \\ * \\\n\n\n");
    printf("Select an option: ");
    printf("\n1. Start\n2. Instructions\n3. Records\n4. Credits and Lisence\n5. Exit\n\nOption: ");
    opt:
    scanf("%d", &option);
    getchar();
    if (option==1) goto start;
    else if (option==2) goto instructions;
    else if (option==3) goto records;
    else if (option==4) goto credits;
    else if (option==5) goto end;
    else {
        printf("\nInvalid selection, try again: ");
        goto opt;
    }



    //Instructions Page
    instructions:
    system("cls"); //replace with system("clear"); if on Unix-like system
    printf("Instructions\n-------\n\n\n");
    printf("The rule is simple. First, enter your name and select a category. You will be given 5 MCQ questions from your desired category. Choose the best answer from the alternatives. For correct answer, you get 1 point. For wrong answer, half point is deducted. You can skip a question however, and no point will be deducted then. Good luck!\n");
    printf("\nHit enter to return to main menu\n");
    getchar();
    goto first;



    //Records Page
    records:
    system("cls"); //replace with system("clear"); if on Unix-like system
    char r;
    printf("Records\n-------\n\n\n");
    records=fopen("records.txt","r"); //opens records.txt file in read mode from program directory

    if(records==NULL){
        printf("Opps! Seems like no records so far..."); //will show if records.txt doesn't exist
    }

    else {
        r = fgetc(records);
        while(!feof(records)){ //loop goes upto the end of records
        printf("%c", r);
        r = fgetc(records);
    } //this will store charecters one by one from records file to r variable and then print on terminal
    }
    fclose(records);

    printf("\n\nHit enter to return to main menu\n");
    getchar();
    goto first;



    //Credits Page
    credits:
    system("clear"); //to clear screen on Unix-like systems, replace with system("cls"); on Windows
    printf("Credits\n-------\n\n\n");
    printf("Neon Quiz is made by-\nTahmid Hasan Muttaky.\nWebsite: https://neonbati.com\n\nYou can modify this, but my name and my website name must not be removed.\n");
    printf("\nHit enter to return to main menu\n");
    getchar();
    goto first;



    //Start Page
    start:
    point=0; //initializing point to 0;
    int count=1; //to count number of questions asked
    int ans, correct;
    int category;

    system("cls"); //replace with system("clear"); if on Unix-like system
    printf("Neon Quiz\n-------\n\n");

    printf("Enter Your Name: ");
    scanf("%[^\n]s", name);

    cat:
    printf("\nSelect a category: \n");
    printf("1. Islam\n2. Technology\n3. Science\n4. All category\n\nCategory: ");
    scanf("%d", &category);
    if (category>4||category<1){
        printf("\n\nInvalid catagory, please select correcly\n\n");
        goto cat;
    }

    //Category Name
    if(category==1) catname="Islam";
    else if(category==2) catname="Technology";
    else if(category==3) catname="Science";
    else if(category==4) catname="All";



    //Quiz Page
    quiz:
    while(count<=5){ //loop to be repeated till 5 questions are done

    srand(time(0)); //to vary generated random numbers each time
    if(category==1) a = rand()%10+1; //generates a random number between 1 to 10 and stores in variable a
    else if(category==2) a = rand()%10+11;
    else if(category==3) a = rand()%10+21;
    else if(category==4) a = rand()%30+1; //generates a random number between 1 to 30 and stores in variable a
    if (flag[a]==1) goto quiz; //question was already asked, so it would generate a new number
    else flag[a]=1; //to mark the question to be asked, so not repeated later

    system("cls"); //replace with system("clear"); if on Unix-like system
    printf("Question no: %d\n---------------\n", count);

    switch(a){ //question number would be the generated value of a

        //Islam
        case 1:
            printf("The word \"Islam\" means: ");
            printf("\n1. Submission\n2. Peace\n");
            correct=1; //correct answer for this question
            break;
        case 2:
            printf("Al Quran was reaveled in: ");
            printf("\n1. Shawwal\n2. Ramadan\n3. Safar\n4. Muharram\n");
            correct=2;
            break;
        case 3:
            printf("The direction Muslims pray is called: ");
            printf("\n1. West\n2. East\n3. Qibla\n");
            correct=3;
            break;
        case 4:
            printf("The first surah to reveal completely is: ");
            printf("\n1. Surah Al-Alaq\n2. Surah Al-Fatiha\n3. Surah Al-Ikhlas\n");
            correct=2;
            break;
        case 5:
            printf("Which year is The year of Grief?: \n");
            printf("\n1. 10th Year of Prophethood\n2. 10th Hijri\n");
            correct=1;
            break;
        case 6:
            printf("Which event is announced as Fathum Mubin in Al Quran?: \n");
            printf("\n1. The constitution of Madinah\n2. The conquest of Makkah\n3. The treaty of Hudaibiyah\n");
            correct=3;
            break;
        case 7:
            printf("Which verses of the Quran is its foundation?: \n");
            printf("\n1. Muhkam\n2. Mutashabihat\n");
            correct=1;
            break;
        case 8:
            printf("Madani Surah refers to-: \n");
            printf("\n1. Surhah that was reaveled in Madinah\n2. Surhah that was reaveled after Hijrat in Madinah\n");
            correct=2;
            break;
        case 9:
            printf("How many surah is in Al Quran?: \n");
            printf("\n1. 86\n2. 112\n3. 114\n4. 132\n");
            correct=3;
            break;
        case 10:
            printf("Who is the first Shaheed in Islam?\n");
            printf("\n1. Sumayyah bint Khabbat RA\n2. Haritha bin Suraqa RA\n3. Ubaydah ibn al-Harith RA\n");
            correct=1;
            break;

        //Tech
        case 11:
            printf("What is Python?\n");
            printf("\n1. A programming language\n2. World's first digital computer\n3. A web browser\n");
            correct=1;
            break;
        case 12:
            printf("There is an imposter among the programming languages, which one?\n");
            printf("\n1. Java\n2. C#\n3. PHP\n4. HTML\n");
            correct=4;
            break;
        case 13:
            printf("Which country is the origin of Tech Giant Samsung?\n");
            printf("\n1. China\n2. South Korea\n3. Somalia\n4. UK\n");
            correct=2;
            break;
        case 14:
            printf("What is the day of the End of Life (EoL) for Internet Explorar?\n");
            printf("\n1. 15 June 2020\n2. 15 June 2021\n3. 15 June 2022\n4. 15 June 2023\n");
            correct=3;
            break;
        case 15:
            printf("Wi-Fi stands for-\n");
            printf("\n1. Wireless Fidelity\n2. No full form\n");
            correct=2;
            break;
        case 16:
            printf("DuckDuckGo is a popular-\n");
            printf("\n1. Search Engine\n2. Web Browser\n");
            correct=1;
            break;
        case 17:
            printf("Which is the Kernel of Windows OS?\n");
            printf("\n1. UNIX\n2. XNU\n3. Linux\n4. NT\n");
            correct=4;
            break;
        case 18:
            printf("Which Linux distro is the oldest yet still active?\n");
            printf("\n1. Ubuntu\n2. Red Hat\n3. Slackware\n");
            correct=3;
            break;
        case 19:
            printf("Full form of SoC is-\n");
            printf("\n1. Silicon on a Card\n2. Silicon Oxide Chip\n3. System on a Chip\n");
            correct=3;
            break;
        case 20:
            printf("The most popular content management system (CMS) is-\n");
            printf("\n1. WordPress\n2. Joomla!\n3. Drupal\n4. Shopify\n");
            correct=1;
            break;

        //Science
        case 21:
            printf("Einstein was rewarded the Noble Prize for discovery of-\n");
            printf("\n1. Mass-energy equivalence\n2. The law of the photoelectric effect\n3. Theory of relativity\n");
            correct=2;
            break;
        case 22:
            printf("Which planet is the closest to Earth considering average distance?\n");
            printf("\n1. Mercury\n2. Venus\n3. Mars\n");
            correct=1;
            break;
        case 23:
            printf("What is the color of Neon light?\n");
            printf("\n1. Lime green\n2. Crimson\n3. Cramberry\n");
            correct=2;
            break;
        case 24:
            printf("What is the partial vapour pressure of water is required to achieve triple point?\n");
            printf("\n1. 1.625 kPa\n2. 611.657 Pa\n3. 0.5237 bar\n");
            correct=2;
            break;
        case 25:
            printf("The speed of light was first measured by-\n");
            printf("\n1. Galileo Galilei\n2. Isaac Beckman\n3. Ole Romer\n");
            correct=3;
            break;
        case 26:
            printf("Hippopotomonstrosesquippedaliophobia is-\n");
            printf("\n1. Fear of Hippopotemus\n2. Fear of Animals\n3. Fear of long words\n");
            correct=3;
            break;
        case 27:
            printf("Which is the first discovered virus?\n");
            printf("\n1. Tobacco mosaic virus\n2. Yellow fever virus\n3. Measles viruses \n");
            correct=1;
            break;
        case 28:
            printf("Farthest human made object in space is-\n");
            printf("\n1. Pioneer 10\n2. Voyager 2\n3. Voyager 1\n");
            correct=3;
            break;
        case 29:
            printf("Which of the following waves does not require medium to propagate?\n");
            printf("\n1. Transverse waves\n2. Sound waves\n3. Radio Waves\n");
            correct=3;
            break;
        case 30:
            printf("How many fundamental physical quantities exist?\n");
            printf("\n1. 1\n2. 7\n3. 14\n4. Infinity\n");
            correct=2;
            break;
        }



    //Correction Check
        printf("\nPress 5 to skip...\n\nAnswer: ");
        scanf("%d", &ans); //takes answer input from player
        if (ans==correct){ //matches given answer with correct one
            printf("Your answer is correct!\n");
            point++; //point increases by 1 for correct answer
        }
        else if (ans==5) printf("Question skipped, correct answer was: %d.\n", correct); //if skipped, no change of point
        else{
            printf("Opps! Wrong answer. Correct answer was: %d.\n", correct);
            point = point - 0.5;
        }
        count+=1;
        printf("Your Point: %.2f\n", point);
        sleep(1); //waits one second before next part
    }



    //Saving Record
    records=fopen("records.txt","a"); //opens records.txt file in appeand mode, will be created if doesn't exist
    if(records==NULL) printf("Error to create file"); //will show if permission or other issue happen
    fprintf(records,"Name: %s\t\tCategory: %s\t\tScore: %.2f\n---------------------------------\n", name, catname, point); //adds info to records
    fclose(records);



    //Game Details Screen
    system("cls"); //replace with system("clear"); if on Unix-like system
    printf("Game Over\n\nDetails\n-------\n\n\n");
    printf("Player: %s\nCategory: %s\nYour score: %.2f\n", name, catname, point);
    if(point<=2) printf("Better luck next time");
    else if (point<=4) printf("Not bad, Good try!");
    else if (point==5) printf("You got it all, Congrats!");
    printf("\n\nWhat would you like to do?\n1. Return to main menu\n2. Exit\n\nOption: ");
    scanf("%d", &option);
    getchar();
    if (option==1) goto first;
    else goto end;



    //Exit Page;
    end:
    printf("\nDo you really want to exit?\n1. Yes\n2. No\n\nOption: ");
    scanf("%d", &option);
    getchar();
    if (option==2) goto first;
    else return 0;
}
