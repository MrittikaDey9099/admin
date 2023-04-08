
#include<iostream>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
using namespace std;

int main()
{
    int n;
    int gd=DETECT,gm;
    int i,x,y;
    cout<<"1. Doraemon"<<endl;
    cout<<"2. Flower"<<endl;
    cout<<"3. Home garden"<<endl;
    cout<<"4. Night sky"<<endl;
    cout<<"5. Moon & Star"<<endl;
    cout<<"6. Animation flower"<<endl;
    while(1)
    {
        cout<<"Select the option: ";
        cin>>n;

        if(n==1)
        {
            initgraph(&gd,&gm,"");

            line(53,20,53,40);
            line(53,20,60,35);
            line(70,20,60,35);
            line(70,20,70,40);
            line(75,20,75,40);
            arc(80,25,80,90,5);
            line(75,27,85,36);
            line(93,20,93,40);
            line(90,20,96,20);
            line(90,40,96,40);
            line(100,20,115,20);
            line(107,20,107,40);
            line(120,20,134,20);
            line(128,20,128,40);
            line(120,20,134,20);
            line(142,20,142,40);
            line(138,20,146,20);
            line(138,40,146,40);
            line(152,20,152,40);
            line(152,30,160,20);
            line(152,30,160,40);
            line(170,20,165,40);
            line(170,20,178,40);
            line(167,30,176,30);

            line(190,20,190,40);
            arc(195,25,200,500,5);
            line(190,27,200,36);
            line(190,20,190,40);
            line(210,20,205,40);
            line(210,20,215,40);
            line(208,32,211,32);
            line(220,20,220,40);
            line(220,20,233,40);
            line(233,20,233,40);
            line(242,20,242,40);
            line(239,20,245,20);
            line(239,40,245,40);
            line(255,20,255,40);


            arc(256,32,270,90,12);
            line(275,20,275,40);
            line(275,20,284,20);
            line(275,30,284,30);
            line(275,40,284,40);
            line(290,20,295,32);
            line(295,32,300,20);
            line(295,32,295,40);




            arc(52,101,75,279,12);//c
            //s
            arc(65,96,40,260,7);
            arc(63,107,220,95,6);
            //E
            line(77,90,77,110);
            line(77,90,87,90);
            line(77,110,87,110);
            line(77,100,84,100);
            //2
            arc(94,97,270,90,7);
            line(94,104,98,112);
            //0
            ellipse(112,102,0,360,7,11);
            ellipse(129,102,0,360,7,11);
            //1
            line(142,92,142,112);
            ellipse(154,102,0,360,7,11);//0
            line(165,92,165,112);//1
            circle(175,96,5);
            arc(172,102,270,90,11);//9
            ellipse(193,102,0,360,7,11);//0



            circle(208,96,5);
            arc(205,102,270,90,11);
            circle(222,96,5);
            arc(219,102,270,90,11);

            setcolor(WHITE);
            setfillstyle(SOLID_FILL,WHITE);
            ellipse(290,200,0,360,19,30);
            ellipse(330,200,0,360,19,30);

            floodfill(290,200,WHITE);
            floodfill(330,200,WHITE);

            setcolor(BLACK);

            setfillstyle(SOLID_FILL,BLACK);
            fillellipse(295,210,5,10);
            fillellipse(325,210,5,10);

            floodfill(295,200,BLACK);
            floodfill(325,200,BLACK);

            //nose

            setcolor(WHITE);
            setfillstyle(SOLID_FILL,RED);
            circle(309,235,9);
            floodfill(309,235,BLACK);

            //mouth and lips

            line(309,245,309,300);
            arc(309,253,200,340,50);
            arc(309,345,200,340,50);
            line(295,249,260,235);
            line(295,257,260,257);
            line(295,264,260,274);


            line(324,249,360,235);
            line(324,257,360,257);
            line(324,264,360,274);


            //face
            setcolor(WHITE);
            ellipse(270,275,90,220,33,80);
            ellipse(350,275,320,90,33,80);
            ellipse(310,255,310,230,80,120);


            //bell

            setcolor(WHITE);
            setfillstyle(SOLID_FILL,RED);

            line(295,249,260,235);
            line(295,257,260,257);
            line(295,264,260,274);


            line(324,249,360,235);
            line(250,345,369,345);
            line(250,355,369,355);
            line(250,345,250,355);
            line(369,345,369,355);
            floodfill(255,350,WHITE);

            //ring

            setcolor(WHITE);
            setfillstyle(SOLID_FILL,YELLOW);
            circle(305,360,10);
            floodfill(305,360,WHITE);


            getch();
            closegraph();
        }
        else if(n==2)
        {
            initgraph(&gd,&gm,"");




            line(53,20,53,40);
            line(53,20,60,35);
            line(70,20,60,35);
            line(70,20,70,40);
            line(75,20,75,40);
            arc(80,25,80,90,5);
            line(75,27,85,36);
            line(93,20,93,40);
            line(90,20,96,20);
            line(90,40,96,40);
            line(100,20,115,20);
            line(107,20,107,40);
            line(120,20,134,20);
            line(128,20,128,40);
            line(120,20,134,20);
            line(142,20,142,40);
            line(138,20,146,20);
            line(138,40,146,40);
            line(152,20,152,40);
            line(152,30,160,20);
            line(152,30,160,40);
            line(170,20,165,40);
            line(170,20,178,40);
            line(167,30,176,30);

            line(190,20,190,40);
            arc(195,25,200,500,5);
            line(190,27,200,36);
            line(190,20,190,40);
            line(210,20,205,40);
            line(210,20,215,40);
            line(208,32,211,32);
            line(220,20,220,40);
            line(220,20,233,40);
            line(233,20,233,40);
            line(242,20,242,40);
            line(239,20,245,20);
            line(239,40,245,40);
            line(255,20,255,40);


            arc(256,32,270,90,12);
            line(275,20,275,40);
            line(275,20,284,20);
            line(275,30,284,30);
            line(275,40,284,40);
            line(290,20,295,32);
            line(295,32,300,20);
            line(295,32,295,40);




            arc(52,101,75,279,12);//c
            //s
            arc(65,96,40,260,7);
            arc(63,107,220,95,6);
            //E
            line(77,90,77,110);
            line(77,90,87,90);
            line(77,110,87,110);
            line(77,100,84,100);
            //2
            arc(94,97,270,90,7);
            line(94,104,98,112);
            //0
            ellipse(112,102,0,360,7,11);
            ellipse(129,102,0,360,7,11);
            //1
            line(142,92,142,112);
            ellipse(154,102,0,360,7,11);//0
            line(165,92,165,112);//1
            circle(175,96,5);
            arc(172,102,270,90,11);//9
            ellipse(193,102,0,360,7,11);//0



            circle(208,96,5);
            arc(205,102,270,90,11);
            circle(222,96,5);
            arc(219,102,270,90,11);

            x=319;

            y=239;



            for(i=0; i<=99; i+=4)



            {

                setcolor(i);



//up

                circle(319,219-i,20+i);



//down

                circle(319,259+i,20+i);



//left

                circle(299-i,239,20+i);



//right

                circle(339+i,239,20+i);



                delay(10);

            }



            getch();

            closegraph();
        }
        else if(n==3)
        {
            initgraph(&gd,&gm,"");





            //house

            line(150,50,200,100);
            line(150,50,80,120);
            line(80,120,100,120);
            line(150,50,350,50);
            line(350,50,400,100);
            line(100,100,100,200);
            line(100,200,200,200);
            line(200,100,200,200);
            line(400,200,400,100);
            line(200,200,400,200);
            line(200,100,400,100);
            rectangle(135,135,175,175);
            rectangle(245,125,320,195);
            line(320,130,305,140);
            line(305,140,305,200);
            line(250,130,265,140);
            line(265,140,265,200);
            line(100,200,90,210);
            line(90,210,190,210);
            line(190,210,200,200);
            line(190,210,410,210);
            line(400,200,410,210);


            //house colour
            setfillstyle(8,2);
            floodfill(131,131,WHITE);
            setfillstyle(11,7);
            floodfill(101,101,WHITE);
            setfillstyle(1,12);
            floodfill(163,55,WHITE);

            setfillstyle(1,12);
            floodfill(81,119,WHITE);

            setfillstyle(3,10);
            floodfill(251,121,WHITE);

            setfillstyle(1,6);
            floodfill(150,205,WHITE);

            setfillstyle(1,6);
            floodfill(250,205,WHITE);

            setfillstyle(5,12);
            floodfill(310,145,WHITE);

            setfillstyle(5,12);
            floodfill(260,145,WHITE);


//tree

            line(505,130,505,200);
            line(532,130,532,200);
            line(505,200,531,200);
            line(480,130,560,130);
            line(480,130,500,100);
            line(500,100,480,100);
            line(480,100,500,70);
            line(500,70,480,70);
            line(480,70,520,40);
            line(560,130,540,100);
            line(540,100,560,100);
            line(560,100,540,70);
            line(540,70,560,70);
            line(560,70,520,40);




            setfillstyle(1,6);
            floodfill(506,131,WHITE);
            setfillstyle(1,2);
            floodfill(501,101,WHITE);


//mountain

            line(100,180,0,180);
            line(400,180,505,180);
            line(532,180,639,180);
            line(100,150,50,110);
            line(50,110,0,150);
            line(400,150,450,110);
            line(450,110,505,150);
            line(532,150,590,110);
            line(590,110,639,150);

            setfillstyle(1,8);
            floodfill(50,150,WHITE);
            setfillstyle(1,8);
            floodfill(401,150,WHITE);
            setfillstyle(1,8);
            floodfill(535,150,WHITE);
            setfillstyle(1,9);



//sky

            floodfill(0,0,WHITE);
            setfillstyle(1,9);
            floodfill(504,148,WHITE);
            setfillstyle(1,9);

            floodfill(535,132,WHITE);


//pond

            ellipse(550,300,0,360,80,50);
            setfillstyle(1,3);
            floodfill(550,300,WHITE);


//sun

            circle(70,50,40);
            setfillstyle(1,14);
            floodfill(71,51,WHITE);

//grass colour

            setfillstyle(1,2);
            floodfill(20,230,WHITE);
            setfillstyle(1,2);
            floodfill(350,230,WHITE);


            getch();
            closegraph();
        }
        else if(n==4)
        {
            initgraph(&gd,&gm," ");



            line(53,20,53,40);
            line(53,20,60,35);
            line(70,20,60,35);
            line(70,20,70,40);
            line(75,20,75,40);
            arc(80,25,80,90,5);
            line(75,27,85,36);
            line(93,20,93,40);
            line(90,20,96,20);
            line(90,40,96,40);
            line(100,20,115,20);
            line(107,20,107,40);
            line(120,20,134,20);
            line(128,20,128,40);
            line(120,20,134,20);
            line(142,20,142,40);
            line(138,20,146,20);
            line(138,40,146,40);
            line(152,20,152,40);
            line(152,30,160,20);
            line(152,30,160,40);
            line(170,20,165,40);
            line(170,20,178,40);
            line(167,30,176,30);

            line(190,20,190,40);
            arc(195,25,200,500,5);
            line(190,27,200,36);
            line(190,20,190,40);
            line(210,20,205,40);
            line(210,20,215,40);
            line(208,32,211,32);
            line(220,20,220,40);
            line(220,20,233,40);
            line(233,20,233,40);
            line(242,20,242,40);
            line(239,20,245,20);
            line(239,40,245,40);
            line(255,20,255,40);


            arc(256,32,270,90,12);
            line(275,20,275,40);
            line(275,20,284,20);
            line(275,30,284,30);
            line(275,40,284,40);
            line(290,20,295,32);
            line(295,32,300,20);
            line(295,32,295,40);




            arc(52,101,75,279,12);//c
            //s
            arc(65,96,40,260,7);
            arc(63,107,220,95,6);
            //E
            line(77,90,77,110);
            line(77,90,87,90);
            line(77,110,87,110);
            line(77,100,84,100);
            //2
            arc(94,97,270,90,7);
            line(94,104,98,112);
            //0
            ellipse(112,102,0,360,7,11);
            ellipse(129,102,0,360,7,11);
            //1
            line(142,92,142,112);
            ellipse(154,102,0,360,7,11);//0
            line(165,92,165,112);//1
            circle(175,96,5);
            arc(172,102,270,90,11);//9
            ellipse(193,102,0,360,7,11);//0

            circle(208,96,5);
            arc(205,102,270,90,11);
            circle(222,96,5);
            arc(219,102,270,90,11);



            for(int i=0; i<600; i++)
            {
                circle(100,197,13);

                line(100,210,100,260);//body

                line(100,220,90,240);//hand
                line(100,210,110,240);//hand
                line(100,260,90,300);
                line(100,260,110,300);


                line(0,300,639,300);

            }









//background

            outtextxy(450,60,".");

            outtextxy(480,50,"'");

            outtextxy(410,199,"'");

            outtextxy(450,290,"'");

            outtextxy(440,190,".");

            outtextxy(400,260,"'");

            outtextxy(580,250,"'");

            outtextxy(410,199,"'");

            outtextxy(550,340,".");

            outtextxy(640,190,"'");

            outtextxy(200,40,"'");

            outtextxy(230,10,".");

            outtextxy(550,99,"'");

//outtextxy(100,50,"'");

            outtextxy(400,100,".");



//moon

            setfillstyle(SOLID_FILL,15);

            circle(320,90,40);

            floodfill(300,90,15);



            outtextxy(450,60,"'");

            outtextxy(480,50,".");

            outtextxy(410,199,"'");
            outtextxy(450,290,"'");

            outtextxy(440,190,"'");

            outtextxy(400,260,"'");

            outtextxy(580,250,".");

            outtextxy(110,299,"'");

            outtextxy(550,340,"'");

            outtextxy(640,190,"'");

            outtextxy(200,40,"'");

            outtextxy(230,10,".");

            outtextxy(550,99,"'");

            outtextxy(100,50,"'");

            outtextxy(400,100,"'");

            outtextxy(150,60,".");

            outtextxy(280,50,"'");

            outtextxy(310,199,"'");

            outtextxy(50,290,"'");

            outtextxy(120,190,"'");

//outtextxy(100,260,"'");

            outtextxy(280,250,"'");

            outtextxy(30,199,"'");

            outtextxy(250,240,"'");

            outtextxy(340,190,".");
            getch();
            closegraph();
        }
        else if(n==5)
        {
            initgraph(&gd, &gm, "");



            line(53,20,53,40);
            line(53,20,60,35);
            line(70,20,60,35);
            line(70,20,70,40);
            line(75,20,75,40);
            arc(80,25,80,90,5);
            line(75,27,85,36);
            line(93,20,93,40);
            line(90,20,96,20);
            line(90,40,96,40);
            line(100,20,115,20);
            line(107,20,107,40);
            line(120,20,134,20);
            line(128,20,128,40);
            line(120,20,134,20);
            line(142,20,142,40);
            line(138,20,146,20);
            line(138,40,146,40);
            line(152,20,152,40);
            line(152,30,160,20);
            line(152,30,160,40);
            line(170,20,165,40);
            line(170,20,178,40);
            line(167,30,176,30);

            line(190,20,190,40);
            arc(195,25,200,500,5);
            line(190,27,200,36);
            line(190,20,190,40);
            line(210,20,205,40);
            line(210,20,215,40);
            line(208,32,211,32);
            line(220,20,220,40);
            line(220,20,233,40);
            line(233,20,233,40);
            line(242,20,242,40);
            line(239,20,245,20);
            line(239,40,245,40);
            line(255,20,255,40);


            arc(256,32,270,90,12);
            line(275,20,275,40);
            line(275,20,284,20);
            line(275,30,284,30);
            line(275,40,284,40);
            line(290,20,295,32);
            line(295,32,300,20);
            line(295,32,295,40);




            arc(52,101,75,279,12);//c
            //s
            arc(65,96,40,260,7);
            arc(63,107,220,95,6);
            //E
            line(77,90,77,110);
            line(77,90,87,90);
            line(77,110,87,110);
            line(77,100,84,100);
            //2
            arc(94,97,270,90,7);
            line(94,104,98,112);
            //0
            ellipse(112,102,0,360,7,11);
            ellipse(129,102,0,360,7,11);
            //1
            line(142,92,142,112);
            ellipse(154,102,0,360,7,11);//0
            line(165,92,165,112);//1
            circle(175,96,5);
            arc(172,102,270,90,11);//9
            ellipse(193,102,0,360,7,11);//0



            circle(208,96,5);
            arc(205,102,270,90,11);
            circle(222,96,5);
            arc(219,102,270,90,11);

            arc(300,300,80,320,100);
            arc(300,300,130,270,70);
            line(250,250,317,200);
            line(300,370,375,366);



            line(350,300,450,300);
            line(350,300,400,250);
            line(400,320,350,265);
            line(400,250,450,300);
            line(350,265,445,265);
            line(445,265,400,320);


            //line(100,50,150,100);
            // line(100,50,50,100);
            // line(150,100,50,100);
            //line(150,65,50,65);
            //line(100,120,150,65);
            //line(100,120,50,65);



            line(300,50,250,100);
            line(300,50,350,100);
            line(250,100,350,100);
            line(250,65,350,65);
            line(300,120,250,65);
            line(300,120,350,65);


            getch();
            closegraph();
        }
        else if(n==6)
        {
            int gd=DETECT, gm,x,y,color,angle=0;
            struct arccoordstype a,b;
            initgraph(&gd,&gm,"");
            delay(2000);

            while(angle<=360)
            {
                setcolor(BLACK);
                arc(getmaxx()/2,getmaxy()/2,angle,angle+2,100);
                setcolor(RED);
                getarccoords(&a);
                circle(a.xstart,a.ystart,25);
                setcolor(BLACK);
                arc(getmaxx()/2,getmaxy()/2,angle,angle+2,150);
                getarccoords(&a);
                setcolor(GREEN);
                circle(a.xstart,a.ystart,25);
                angle = angle+5;
                delay(50);
            }
            getch();
            closegraph();
        }
        else
        {
            cout<<"Invalid. Please try again."<<endl;
        }
    }
}
