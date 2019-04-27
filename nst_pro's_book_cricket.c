#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<dos.h>
#include<time.h>
#include<graphics.h>
main_menu();
instructions();
play();
toss_report();
int main()
{
int a,option;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
main_menu();
printf("Enter option\n");
scanf("%d",&option);
switch(option)
{
case 1:
cleardevice();
play();
break;
case 2:
cleardevice();
instructions();
cleardevice();
main();
break;
case 3:
exit(0);
break;
default:
printf("Wrong Input");
}
getch();
return 0;
}

main_menu()
{
outtextxy(220,100,"NSTPro's Book Cricket");
rectangle(250,150,360,180);    //PLAY button
setfillstyle(9,4);
floodfill(251,151,WHITE);
outtextxy(285,160,"PLAY");
rectangle(250,220,360,250);   //INSTRUCTIONS button
setfillstyle(9,2);
floodfill(251,221,WHITE);
outtextxy(260,230,"INSTRUCTIONS");
rectangle(250,290,360,320);   //EXIT button
setfillstyle(9,1);
floodfill(251,291,WHITE);
outtextxy(290,300,"EXIT");
outtextxy(270,350,"MAIN MENU");
setcolor(YELLOW);
outtextxy(220,400,"Press Enter to continue");
setcolor(WHITE);
getch();
return 0;
}
instructions()
{
printf("INSTRUCTIONS/RULES\n");
printf("\n1) Press Enter key to play each ball\n");
printf("2) Mode of runs: 1,2,3,4,5,6\n");b
printf("3) 0 run is equal to one wicket\n");
printf("4) 1 over, 2 overs, 3 overs match\n");
printf("5) The team which scores more runs is the winner\n");
printf("6) The match results in a tie if both the teams score equal runs\n");
printf("7) Use '_'instead of spacebar to type team/captain/venue name.\n");
setcolor(YELLOW);
outtextxy(150,400,"Press Enter to go back to Main Menu");
setcolor(WHITE);
getch();
return 0;
}

play()
{
int over1=1, over2=1, test=0;
int check=0;
int m,n,a,p; char team1[30],team2[30],capt1[50],capt2[50],venue[30],b[100];
int num1,num2,i,j,k,l,run1=0,wicket1=0,run2=0,wicket2=0;
printf("Enter your team name\n");
scanf("%s",team1);
printf("Enter your team captain name\n");
scanf("%s",capt1);
printf("\nEnter your opponent team name\n");
scanf("%s",team2);
printf("Enter opponent team captain name\n");
scanf("%s",capt2);
printf("\nEnter venue\n");
scanf("%s",venue);
printf("\nChoose over\n1 over\n2 overs\n3 overs\n\n");
scanf("%d",&a);

if(a<1||a>3)
 {
printf("Wrong input for overs\n");
 }
else
 {
printf("\n%s vs %s",team1,team2);
printf("\n%s Stadium",venue);
printf("\n%d over match\nDECIDED!",a);
printf("\n\nPress Enter to continue");
 }
getch();
cleardevice();
setcolor(YELLOW);
outtextxy(250,20,"TOSS REPORT");
setcolor(12);
sprintf(b,"Hello and warm welcome, this is NSTPro present at the %s Stadium for the",venue);
outtextxy(0,60,b);
sprintf(b,"%d over exhibition match between %s and %s.",a,team1,team2);
outtextxy(0,80,b);
sprintf(b,"We have %s captain, %s and %s captain, %s alongside us.",team1,capt1,team2,capt2);
outtextxy(0,100,b);
outtextxy(0,120,"It's the toss time between the two sides!");
setcolor(WHITE);
outtextxy(0,150,"1.Heads");
outtextxy(0,160,"2.Tails");
outtextxy(0,190,"Make your call!");
scanf("%d",&m);
if(m==1)
 {
setcolor(12);
sprintf(b,"Heads is the call and it is Heads! So it's %s who have won the toss!",team1);
outtextxy(0,220,b);
setcolor(WHITE);
outtextxy(0,250,"Choose option");
outtextxy(0,270,"1.Bat");
outtextxy(0,280,"2.Bowl");
 }
if(m==2)
 {
setcolor(12);
sprintf(b,"Tails is the call and it is Tails! So it's %s who have won the toss!",team1);
outtextxy(0,220,b);
setcolor(WHITE);
outtextxy(0,250,"Choose option");
outtextxy(0,270,"1.Bat");
outtextxy(0,280,"2.Bowl");
 }
scanf("%d",&p);
cleardevice();
setcolor(YELLOW);
outtextxy(250,20,"TOSS REPORT");
setcolor(WHITE);
if(p==1)
{
setcolor(12);
sprintf(b,"%s: Looks like a good pitch to bat on. The ball will come nicely on the bat.",capt1);
outtextxy(0,50,b);
sprintf(b,"Also it's a quick outfield here at the %s ground, so we will be looking to",venue);
outtextxy(0,70,b);
outtextxy(0,90,"set up a good target for them and hopefully defend it.");
setcolor(WHITE);
sprintf(b,"NSTPro: Thanks %s, good luck! Now we have %s captain, %s.",capt1,team2,capt2);
outtextxy(0,120,b);
setcolor(12);
sprintf(b,"%s: Well we would have bat first as well but the toss is not in our",capt2);
outtextxy(0,150,b);
outtextxy(0,170,"hands. We will be looking to restrict them to as low score as possible.");
outtextxy(0,190,"We have a good top order and so will chase the score with positive mindset.");
setcolor(WHITE);
sprintf(b,"NSTPro: Thank you %s. So here's the news from the centre, it's %s",capt2,team1);
outtextxy(0,220,b);
outtextxy(0,240,"who have won the toss and have elected to bat first.");
check++;
}
if(p==2)
{
setcolor(12);
sprintf(b,"%s: Quite overcast conditions today. The ball will swing a lot in the initial",capt1);
outtextxy(0,50,b);
sprintf(b,"overs. %s is known for swinging the ball. The dew factor will play a huge",venue);
outtextxy(0,70,b);
outtextxy(0,90,"role later in the 2nd Innings. So we will restrict them to low score and chase it.");
setcolor(WHITE);
sprintf(b,"NSTPro: Thanks %s. Now we have %s captain, %s.",capt1,team2,capt2);
outtextxy(0,120,b);
setcolor(12);
sprintf(b,"%s: We were looking to bat first anyways. The sun is not out there today.",capt2);
outtextxy(0,150,b);
outtextxy(0,170,"We are playing an extra batsman today. It's necessary to keep the scoreboard");
outtextxy(0,190,"ticking. Will try to post a good target in front of them today. I think the");
outtextxy(0,210,"spinners will get help in the 2nd Innings, so we are happy to bat first.");
setcolor(WHITE);
sprintf(b,"NSTPro: Thank you %s. So here's the news from the centre, it's %s",capt2,team1);
outtextxy(0,240,b);
outtextxy(0,260,"who have won the toss and have elected to bowl first.");
}
getch();
cleardevice();
clrscr();
setfillstyle(1,BLACK);
floodfill(10,10,WHITE);
if(a==1)
{
n=6;
}
if(a==2)
{
n=12;
}
if(a==3)
{
n=18;
}
for(j=0;j<n;j++)
{
clrscr();
setfillstyle(1,BLACK);
floodfill(10,10,WHITE);
rectangle(460,20,600,45);  //STAR SPORTS channel
setfillstyle(1,RED);
floodfill(461,21,WHITE);
setcolor(WHITE);
outtextxy(480,30,"STAR SPORTS");
outtextxy(520,50,"LIVE");
setcolor(WHITE);
randomize();
for(i=1;i<=1;i++)
{
num1=(rand()% (6 - 0+1)+0);
if(num1==0)
 {
wicket1++;
 }
else
 {
run1+=num1;
 }
if(p==1)
 {
printf("\n\nScore: 1st Innings\n\n  %s: %d/%d\t %s won the toss\n",team1,run1,wicket1,team1);
 }
if(p==2)
 {
printf("\n\nScore: 1st Innings\n\n  %s: %d/%d\t %s won the toss\n",team2,run1,wicket1,team1);
 }
if(wicket1==10)
 {
 printf("Game Over! \n You Lose.\n");
 return 0;
 }
}
 printf("\  Overs: %d.%d\t\t LIVE from %s\n",test,over1,venue);
 over1++;
 if(over1==6)
 {
 over1=0;
 test++;
 }

 rectangle(0,60,400,100);   //scorecard
if(num1==0)
 {
setcolor(YELLOW);
outtextxy(0,120,"Bowled'em! Knocks him over.");
 }
else if(num1==1)
 {
setcolor(YELLOW);
outtextxy(0,120,"Taps it towards mid-off for a single.");
 }
else if(num1==2)
 {
setcolor(YELLOW);
outtextxy(0,120,"Good shot. Plays it through extra covers for two runs.");
 }
else if(num1==2)
 {
setcolor(YELLOW);
outtextxy(0,120,"That's a very good shot. It's a slow outfield and the ball");
outtextxy(0,130,"just stops before reaching the boundary. 3 runs taken");
 }
else if(num1==4)
 {
setcolor(YELLOW);
outtextxy(0,120,"Hooks it away! One bounce over the rope for a boundary.");
 }
else if(num1==5)
 {
setcolor(YELLOW);
outtextxy(0,120,"Oh this is very unfortunate! The ball hits the wicketkeeper's");
outtextxy(0,130,"helmet. 5 bonus runs for the batting side.");
 }
else if(num1==6)
 {
setcolor(YELLOW);
outtextxy(0,120,"Slogs it over mid-on for a huge six!");
 }
setcolor(WHITE);
getch();
printf("\n\n\n\nPress Enter to play the next ball");
getch();
 }
if(p==1)
 {
printf("\n\n Total\n %s: %d/%d",team1,run1,wicket1);
printf("\n %s need %d runs to win from %d over",team2,run1+1,a);
 }
if(p==2)
 {
printf("\n\n Total\n %s: %d/%d",team2,run1,wicket1);
printf("\n %s need %d runs to win from %d over",team1,run1+1,a);
 }
getch();
cleardevice();
clrscr();
setfillstyle(1,BLACK);
floodfill(10,10,WHITE);
if(a==1)
 {
n=6;
 }
if(a==2)
 {
n=12;
 }
if(a==3)
 {
n=18;
 }
test=0;
for(k=0;k<n;k++)
{
clrscr();
setfillstyle(1,BLACK);
floodfill(10,10,WHITE);
rectangle(460,20,600,45);   //STAR SPORTS channel
setfillstyle(1,RED);
floodfill(461,21,WHITE);
setcolor(WHITE);
outtextxy(480,30,"STAR SPORTS");
outtextxy(520,50,"LIVE");
setcolor(WHITE);
randomize();
for(l=1;l<=1;l++)
{
num2=(rand()%(6-0+1)+0);
if(num2==0)
{
wicket2++;
}
else
{
run2+=num2;
}
if(wicket2==10)
 {
 printf("You Lose!");
 getch();
 return 0;
 }
if(p==1)
{
printf("\n\nScore: 2nd Innings\n\n  %s: %d/%d\t %s won the toss\n",team2,run2,wicket2,team1);
}
if(p==2)
 {
printf("\n\nScore: 2nd Innings\n\n  %s: %d/%d\t %s won the toss\n",team1,run2,wicket2,team1);
 }

if(check==1)
 {
 }
}
 printf("\  Overs: %d.%d\t\t LIVE from %s\n",test,over2,venue);
 over2++;
 if(over2==6)
 {
 over2=0;
 test++;
 }
rectangle(0,60,400,100);    //scorecard
if(num2==0)
{
setcolor(YELLOW);
outtextxy(0,120,"In the air and gone! What a brilliant catch by the fielder!");
}
else if(num2==1)
{
setcolor(YELLOW);
outtextxy(0,120,"Driven away towards the cover regions for a single.");
}
else if(num2==2)
{
setcolor(YELLOW);
outtextxy(0,120,"Nicely flicked! Should get a couple of runs easily.");
}
else if(num2==2)
{
setcolor(YELLOW);
outtextxy(0,120,"Oh that's smashed away! The fielder just dives to save a boundary.");
outtextxy(0,130,"The batsmen come back for 3.");
}
else if(num2==4)
{
setcolor(YELLOW);
outtextxy(0,120,"Magnificent shot! Cuts it over point for a four. The chase is on fire!");
}
else if(num2==5)
{
setcolor(YELLOW);
outtextxy(0,120,"Oh my goodness! Poor fielding. Overthrow and four extra runs.");
}
else if(num2==6)
{
setcolor(YELLOW);
outtextxy(0,120,"That's a glorious hit down the ground for a maximum!");
}
setcolor(WHITE);
printf("\n\n\n\nPress Enter to play the next ball");
getch();
}
if (run2>run1)
{
if(p==1)
{
printf("\n\n%s won the match by %d wickets",team2,10-wicket2);
}
if(p==2)
{
printf("\n\n%s won the match by %d wickets",team1,10-wicket2);
}
}
else if(run1>run2)
{
if(p==1)
{
printf("\n\n\n%s won the match by %d runs",team1,run1-run2);
}
if(p==2)
{
printf("\n\n\n%s won the match by %d runs",team2,run1-run2);
}
}
else
{
printf("\n\nMatch tied!");
}
setcolor(RED);
outtextxy(150,330,"Thank you for playing NSTPro's Book Cricket!");
setcolor(YELLOW);
outtextxy(250,350,"Press Enter to play again");
setcolor(WHITE);
getch();
cleardevice();
main();
return 0;
}
