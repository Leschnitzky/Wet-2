void test() {
   int leader;
   int number_of_wins;
   void* DS = Init(18);
   TeamFight(DS,7,14,1);
   GetStudentTeamLeader(DS,12,&leader);
   TeamFight(DS,17,8,2);
   AddStudent(DS,64,12,151);
   AddStudent(DS,33,11,13);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,38,9,-1);
   JoinTeams(DS,13,15);
   GetNumOfWins(DS,14,&number_of_wins); // 10
   AddStudent(DS,69,3,113);
   AddStudent(DS,53,6,28);
   TeamFight(DS,15,8,2);
   AddStudent(DS,33,9,12);
   AddStudent(DS,21,8,93);
   AddStudent(DS,56,10,93);
   AddStudent(DS,27,5,56);
   AddStudent(DS,12,18,81);
   AddStudent(DS,37,15,113);
   TeamFight(DS,3,11,3); // 20
   AddStudent(DS,10,18,97);
   RemoveStudent(DS,-1);
   TeamFight(DS,16,12,4);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,4,1,4);
   AddStudent(DS,48,1,154);
   AddStudent(DS,52,1,2);
   JoinTeams(DS,2,12);
   RemoveStudent(DS,43);
   TeamFight(DS,2,13,2); // 30
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,13,6,2);
   TeamFight(DS,12,17,2);
   GetStudentTeamLeader(DS,7,&leader);
   AddStudent(DS,18,10,142);
   GetStudentTeamLeader(DS,21,&leader);
   GetNumOfWins(DS,9,&number_of_wins);
   GetNumOfWins(DS,13,&number_of_wins);
   RemoveStudent(DS,0);
   AddStudent(DS,54,7,160); // 40
   GetStudentTeamLeader(DS,11,&leader);
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,18,&leader);
   AddStudent(DS,66,12,129);
   TeamFight(DS,10,12,0);
   TeamFight(DS,8,14,1);
   TeamFight(DS,13,12,2);
   TeamFight(DS,10,14,-1);
   GetStudentTeamLeader(DS,59,&leader);
   TeamFight(DS,10,8,0); // 50
   AddStudent(DS,11,14,41);
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,18,9,0);
   GetStudentTeamLeader(DS,38,&leader);
   AddStudent(DS,70,8,92);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,5,&number_of_wins);
   RemoveStudent(DS,42);
   TeamFight(DS,7,8,-1);
   GetStudentTeamLeader(DS,68,&leader); // 60
   AddStudent(DS,1,9,1);
   AddStudent(DS,3,17,140);
   AddStudent(DS,68,5,64);
   AddStudent(DS,48,9,9);
   AddStudent(DS,67,6,108);
   AddStudent(DS,61,8,11);
   RemoveStudent(DS,23);
   GetNumOfWins(DS,15,&number_of_wins);
   GetStudentTeamLeader(DS,23,&leader);
   TeamFight(DS,10,11,4); // 70
   AddStudent(DS,48,11,3);
   GetStudentTeamLeader(DS,66,&leader);
   GetStudentTeamLeader(DS,40,&leader);
   TeamFight(DS,7,5,3);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,68,3,48);
   AddStudent(DS,10,11,101);
   AddStudent(DS,8,12,10);
   AddStudent(DS,18,11,163);
   JoinTeams(DS,17,5); // 80
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,5,1,9);
   TeamFight(DS,6,8,2);
   TeamFight(DS,10,17,4);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins);
   JoinTeams(DS,14,17);
   AddStudent(DS,0,16,30);
   RemoveStudent(DS,8);
   GetStudentTeamLeader(DS,16,&leader); // 90
   TeamFight(DS,18,3,-1);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,4,15,4);
   JoinTeams(DS,16,14);
   GetStudentTeamLeader(DS,8,&leader);
   GetStudentTeamLeader(DS,60,&leader);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,18,14,6);
   TeamFight(DS,3,14,0);
   TeamFight(DS,14,1,3); // 100
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,38,7,32);
   TeamFight(DS,4,1,7);
   AddStudent(DS,67,8,170);
   AddStudent(DS,66,9,138);
   GetNumOfWins(DS,3,&number_of_wins);
   JoinTeams(DS,17,14);
   GetStudentTeamLeader(DS,42,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,55,6,67); // 110
   AddStudent(DS,11,13,19);
   GetStudentTeamLeader(DS,29,&leader);
   AddStudent(DS,14,4,54);
   AddStudent(DS,56,11,123);
   GetNumOfWins(DS,2,&number_of_wins);
   RemoveStudent(DS,19);
   TeamFight(DS,12,4,0);
   GetStudentTeamLeader(DS,34,&leader);
   RemoveStudent(DS,55);
   AddStudent(DS,9,14,155); // 120
   AddStudent(DS,19,18,15);
   AddStudent(DS,8,7,28);
   TeamFight(DS,17,8,8);
   AddStudent(DS,30,2,43);
   GetStudentTeamLeader(DS,56,&leader);
   TeamFight(DS,16,12,4);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,48,7,41);
   GetStudentTeamLeader(DS,52,&leader);
   GetNumOfWins(DS,9,&number_of_wins); // 130
   GetStudentTeamLeader(DS,58,&leader);
   RemoveStudent(DS,24);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,12,9,3);
   AddStudent(DS,35,2,31);
   TeamFight(DS,8,10,3);
   GetStudentTeamLeader(DS,53,&leader);
   GetNumOfWins(DS,15,&number_of_wins);
   JoinTeams(DS,3,15);
   AddStudent(DS,8,15,135); // 140
   TeamFight(DS,8,12,8);
   AddStudent(DS,13,8,62);
   TeamFight(DS,9,3,0);
   GetNumOfWins(DS,18,&number_of_wins);
   RemoveStudent(DS,65);
   GetStudentTeamLeader(DS,65,&leader);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,15,&number_of_wins);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,10,14,4); // 150
   RemoveStudent(DS,15);
   GetStudentTeamLeader(DS,34,&leader);
   TeamFight(DS,6,15,0);
   TeamFight(DS,1,16,-1);
   GetStudentTeamLeader(DS,-1,&leader);
   GetStudentTeamLeader(DS,22,&leader);
   RemoveStudent(DS,45);
   AddStudent(DS,34,5,149);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,14,14,4); // 160
   GetNumOfWins(DS,4,&number_of_wins);
   JoinTeams(DS,16,6);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,4,15,159);
   JoinTeams(DS,2,4);
   TeamFight(DS,4,12,6);
   GetStudentTeamLeader(DS,68,&leader);
   JoinTeams(DS,14,4);
   GetStudentTeamLeader(DS,69,&leader);
   TeamFight(DS,7,13,2); // 170
   JoinTeams(DS,4,6);
   AddStudent(DS,14,16,7);
   AddStudent(DS,30,2,52);
   AddStudent(DS,58,15,7);
   AddStudent(DS,51,5,87);
   RemoveStudent(DS,9);
   AddStudent(DS,23,4,3);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,14,14,2);
   RemoveStudent(DS,69); // 180
   TeamFight(DS,10,15,8);
   RemoveStudent(DS,38);
   TeamFight(DS,11,15,6);
   GetStudentTeamLeader(DS,16,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,24,&leader);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,28,4,133);
   GetStudentTeamLeader(DS,39,&leader);
   AddStudent(DS,31,15,66); // 190
   AddStudent(DS,41,5,23);
   RemoveStudent(DS,53);
   AddStudent(DS,47,11,42);
   GetStudentTeamLeader(DS,41,&leader);
   TeamFight(DS,18,10,5);
   AddStudent(DS,34,15,112);
   GetNumOfWins(DS,4,&number_of_wins);
   GetStudentTeamLeader(DS,68,&leader);
   AddStudent(DS,2,7,34);
   JoinTeams(DS,1,3); // 200
   GetStudentTeamLeader(DS,30,&leader);
   AddStudent(DS,19,16,21);
   GetNumOfWins(DS,13,&number_of_wins);
   RemoveStudent(DS,26);
   GetNumOfWins(DS,2,&number_of_wins);
   RemoveStudent(DS,24);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,14,16,137);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,7,8,5); // 210
   TeamFight(DS,18,18,4);
   AddStudent(DS,1,10,34);
   GetStudentTeamLeader(DS,56,&leader);
   AddStudent(DS,39,18,79);
   AddStudent(DS,20,4,73);
   RemoveStudent(DS,11);
   GetStudentTeamLeader(DS,18,&leader);
   RemoveStudent(DS,22);
   TeamFight(DS,8,1,2);
   TeamFight(DS,13,9,10); // 220
   AddStudent(DS,36,4,47);
   GetStudentTeamLeader(DS,47,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,32,13,108);
   AddStudent(DS,0,6,82);
   JoinTeams(DS,18,9);
   AddStudent(DS,43,10,116);
   AddStudent(DS,3,17,74);
   GetStudentTeamLeader(DS,48,&leader);
   GetNumOfWins(DS,11,&number_of_wins); // 230
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,34,16,97);
   GetNumOfWins(DS,15,&number_of_wins);
   GetStudentTeamLeader(DS,33,&leader);
   AddStudent(DS,60,18,167);
   AddStudent(DS,55,12,156);
   RemoveStudent(DS,49);
   AddStudent(DS,2,16,129);
   AddStudent(DS,14,16,74);
   GetNumOfWins(DS,9,&number_of_wins); // 240
   AddStudent(DS,44,14,86);
   TeamFight(DS,3,13,2);
   TeamFight(DS,3,1,10);
   RemoveStudent(DS,60);
   TeamFight(DS,15,18,9);
   AddStudent(DS,44,15,130);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,11,10,0);
   RemoveStudent(DS,45);
   TeamFight(DS,9,10,4); // 250
   RemoveStudent(DS,0);
   TeamFight(DS,6,8,11);
   GetStudentTeamLeader(DS,14,&leader);
   TeamFight(DS,14,17,3);
   GetNumOfWins(DS,5,&number_of_wins);
   JoinTeams(DS,18,18);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,9,16,-1);
   GetStudentTeamLeader(DS,34,&leader);
   TeamFight(DS,4,15,12); // 260
   TeamFight(DS,4,18,12);
   TeamFight(DS,13,6,12);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,12,2,30);
   AddStudent(DS,53,3,41);
   TeamFight(DS,15,18,5);
   AddStudent(DS,71,4,54);
   RemoveStudent(DS,16);
   AddStudent(DS,42,8,96);
   AddStudent(DS,27,12,96); // 270
   RemoveStudent(DS,41);
   TeamFight(DS,3,14,12);
   AddStudent(DS,52,2,2);
   RemoveStudent(DS,4);
   RemoveStudent(DS,61);
   RemoveStudent(DS,20);
   JoinTeams(DS,10,3);
   TeamFight(DS,3,15,1);
   GetStudentTeamLeader(DS,42,&leader);
   AddStudent(DS,20,2,81); // 280
   GetStudentTeamLeader(DS,53,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,9,17,12);
   GetNumOfWins(DS,2,&number_of_wins);
   GetStudentTeamLeader(DS,7,&leader);
   TeamFight(DS,13,6,8);
   GetStudentTeamLeader(DS,40,&leader);
   TeamFight(DS,13,18,4);
   TeamFight(DS,2,18,5);
   GetStudentTeamLeader(DS,55,&leader); // 290
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,27,9,43);
   TeamFight(DS,18,7,14);
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,5,&leader);
   GetStudentTeamLeader(DS,66,&leader);
   AddStudent(DS,44,4,159);
   AddStudent(DS,26,11,47);
   GetStudentTeamLeader(DS,69,&leader);
   GetStudentTeamLeader(DS,69,&leader); // 300
   AddStudent(DS,53,4,16);
   JoinTeams(DS,13,7);
   TeamFight(DS,15,18,12);
   AddStudent(DS,71,5,-1);
   AddStudent(DS,10,13,120);
   TeamFight(DS,5,8,14);
   AddStudent(DS,58,8,169);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins); // 310
   GetStudentTeamLeader(DS,64,&leader);
   TeamFight(DS,16,16,10);
   AddStudent(DS,13,12,51);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,42,10,145);
   AddStudent(DS,44,18,62);
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,34,10,65);
   GetNumOfWins(DS,14,&number_of_wins);
   RemoveStudent(DS,9); // 320
   TeamFight(DS,3,14,3);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,62,14,14);
   GetStudentTeamLeader(DS,13,&leader);
   TeamFight(DS,9,18,-1);
   AddStudent(DS,16,4,142);
   AddStudent(DS,-1,3,4);
   GetStudentTeamLeader(DS,36,&leader);
   JoinTeams(DS,1,1);
   AddStudent(DS,37,13,1); // 330
   GetStudentTeamLeader(DS,31,&leader);
   TeamFight(DS,3,1,8);
   AddStudent(DS,1,5,92);
   AddStudent(DS,55,1,22);
   RemoveStudent(DS,20);
   GetNumOfWins(DS,1,&number_of_wins);
   RemoveStudent(DS,70);
   GetNumOfWins(DS,13,&number_of_wins);
   RemoveStudent(DS,19);
   JoinTeams(DS,10,14); // 340
   TeamFight(DS,2,10,4);
   AddStudent(DS,40,13,95);
   TeamFight(DS,16,6,1);
   AddStudent(DS,11,12,64);
   RemoveStudent(DS,58);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,30,&leader);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,15,9,2);
   GetStudentTeamLeader(DS,26,&leader); // 350
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,40,&leader);
   AddStudent(DS,68,17,129);
   GetNumOfWins(DS,3,&number_of_wins);
   JoinTeams(DS,11,11);
   TeamFight(DS,13,7,14);
   AddStudent(DS,44,1,76);
   RemoveStudent(DS,23);
   TeamFight(DS,2,9,8);
   GetStudentTeamLeader(DS,61,&leader); // 360
   AddStudent(DS,33,4,45);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,57,12,33);
   AddStudent(DS,60,16,101);
   TeamFight(DS,14,6,11);
   TeamFight(DS,11,13,0);
   GetStudentTeamLeader(DS,68,&leader);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,3,12,50);
   TeamFight(DS,2,10,6); // 370
   AddStudent(DS,37,10,128);
   TeamFight(DS,18,4,3);
   AddStudent(DS,35,6,132);
   RemoveStudent(DS,42);
   TeamFight(DS,12,8,14);
   TeamFight(DS,6,13,0);
   AddStudent(DS,57,4,144);
   AddStudent(DS,8,9,80);
   GetNumOfWins(DS,13,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins); // 380
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,12,16,5);
   TeamFight(DS,11,5,11);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,1,&number_of_wins);
   GetStudentTeamLeader(DS,65,&leader);
   TeamFight(DS,12,3,-1);
   TeamFight(DS,1,14,4); // 390
   TeamFight(DS,1,14,6);
   GetStudentTeamLeader(DS,31,&leader);
   GetStudentTeamLeader(DS,28,&leader);
   AddStudent(DS,33,9,68);
   AddStudent(DS,12,3,126);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,2,18,13);
   AddStudent(DS,60,9,26);
   TeamFight(DS,2,9,2);
   GetStudentTeamLeader(DS,2,&leader); // 400
   GetStudentTeamLeader(DS,38,&leader);
   GetNumOfWins(DS,17,&number_of_wins);
   RemoveStudent(DS,53);
   AddStudent(DS,42,5,70);
   GetStudentTeamLeader(DS,1,&leader);
   TeamFight(DS,2,9,13);
   TeamFight(DS,10,5,4);
   RemoveStudent(DS,17);
   TeamFight(DS,4,4,1);
   AddStudent(DS,15,9,111); // 410
   AddStudent(DS,53,15,152);
   AddStudent(DS,18,8,129);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,2,1,2);
   TeamFight(DS,4,9,-1);
   GetNumOfWins(DS,12,&number_of_wins);
   GetStudentTeamLeader(DS,34,&leader);
   AddStudent(DS,66,13,38);
   GetStudentTeamLeader(DS,25,&leader);
   GetNumOfWins(DS,9,&number_of_wins); // 420
   GetStudentTeamLeader(DS,28,&leader);
   TeamFight(DS,3,10,9);
   TeamFight(DS,4,4,0);
   RemoveStudent(DS,67);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,8,10,10);
   TeamFight(DS,8,17,1);
   TeamFight(DS,12,8,12); // 430
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,-1,&leader);
   AddStudent(DS,57,10,7);
   GetStudentTeamLeader(DS,45,&leader);
   AddStudent(DS,59,17,49);
   RemoveStudent(DS,11);
   RemoveStudent(DS,7);
   AddStudent(DS,19,3,11);
   AddStudent(DS,36,9,64);
   TeamFight(DS,6,15,0); // 440
   AddStudent(DS,35,15,127);
   AddStudent(DS,52,11,139);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,53,9,98);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,3,1,23);
   RemoveStudent(DS,32);
   JoinTeams(DS,5,10);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,3,&number_of_wins); // 450
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,16,18,14);
   TeamFight(DS,12,15,1);
   RemoveStudent(DS,25);
   TeamFight(DS,5,17,7);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,4,12,4);
   TeamFight(DS,15,18,8);
   GetStudentTeamLeader(DS,16,&leader);
   GetNumOfWins(DS,11,&number_of_wins); // 460
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,52,13,166);
   RemoveStudent(DS,35);
   TeamFight(DS,2,16,10);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,10,11,105);
   GetStudentTeamLeader(DS,68,&leader);
   RemoveStudent(DS,65);
   RemoveStudent(DS,61);
   GetStudentTeamLeader(DS,70,&leader); // 470
   RemoveStudent(DS,37);
   GetStudentTeamLeader(DS,2,&leader);
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,23,&leader);
   GetStudentTeamLeader(DS,20,&leader);
   GetStudentTeamLeader(DS,35,&leader);
   TeamFight(DS,12,14,2);
   AddStudent(DS,3,15,89);
   AddStudent(DS,55,17,147);
   RemoveStudent(DS,58); // 480
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,9,18,7);
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,41,2,69);
   AddStudent(DS,20,17,12);
   RemoveStudent(DS,29);
   AddStudent(DS,2,11,169);
   GetStudentTeamLeader(DS,51,&leader);
   GetStudentTeamLeader(DS,70,&leader); // 490
   TeamFight(DS,8,17,6);
   AddStudent(DS,34,12,107);
   TeamFight(DS,11,16,5);
   RemoveStudent(DS,56);
   RemoveStudent(DS,66);
   AddStudent(DS,4,14,8);
   RemoveStudent(DS,40);
   TeamFight(DS,18,17,-1);
   GetNumOfWins(DS,16,&number_of_wins);
   RemoveStudent(DS,19); // 500
   GetStudentTeamLeader(DS,67,&leader);
   GetStudentTeamLeader(DS,42,&leader);
   AddStudent(DS,30,18,158);
   GetStudentTeamLeader(DS,48,&leader);
   RemoveStudent(DS,60);
   RemoveStudent(DS,57);
   RemoveStudent(DS,6);
   TeamFight(DS,11,5,8);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,24,15,37); // 510
   GetStudentTeamLeader(DS,51,&leader);
   RemoveStudent(DS,24);
   TeamFight(DS,17,15,5);
   AddStudent(DS,64,17,124);
   GetStudentTeamLeader(DS,45,&leader);
   JoinTeams(DS,12,1);
   GetStudentTeamLeader(DS,49,&leader);
   AddStudent(DS,9,11,152);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,13,8,1); // 520
   RemoveStudent(DS,19);
   AddStudent(DS,40,1,96);
   TeamFight(DS,13,16,-1);
   JoinTeams(DS,10,5);
   AddStudent(DS,1,9,161);
   AddStudent(DS,9,7,38);
   TeamFight(DS,18,11,13);
   GetStudentTeamLeader(DS,49,&leader);
   TeamFight(DS,15,3,9);
   GetStudentTeamLeader(DS,17,&leader); // 530
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,64,8,112);
   AddStudent(DS,69,12,57);
   GetNumOfWins(DS,11,&number_of_wins);
   GetStudentTeamLeader(DS,64,&leader);
   RemoveStudent(DS,50);
   TeamFight(DS,3,5,2);
   AddStudent(DS,18,14,54);
   RemoveStudent(DS,26);
   GetNumOfWins(DS,6,&number_of_wins); // 540
   RemoveStudent(DS,53);
   TeamFight(DS,7,16,-1);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,12,2,119);
   RemoveStudent(DS,9);
   AddStudent(DS,2,13,21);
   AddStudent(DS,53,10,159);
   GetNumOfWins(DS,1,&number_of_wins);
   GetStudentTeamLeader(DS,31,&leader); // 550
   JoinTeams(DS,11,8);
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,34,&leader);
   TeamFight(DS,16,1,1);
   TeamFight(DS,16,7,2);
   TeamFight(DS,18,7,7);
   AddStudent(DS,62,10,166);
   RemoveStudent(DS,29);
   AddStudent(DS,70,16,1);
   RemoveStudent(DS,9); // 560
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,32,3,136);
   AddStudent(DS,33,11,155);
   GetNumOfWins(DS,17,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,1,18,-1);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,3,11,17);
   GetStudentTeamLeader(DS,60,&leader); // 570
   GetStudentTeamLeader(DS,33,&leader);
   GetNumOfWins(DS,3,&number_of_wins);
   RemoveStudent(DS,27);
   AddStudent(DS,15,13,161);
   GetStudentTeamLeader(DS,17,&leader);
   AddStudent(DS,35,5,29);
   RemoveStudent(DS,21);
   RemoveStudent(DS,47);
   AddStudent(DS,34,15,86);
   AddStudent(DS,15,3,133); // 580
   TeamFight(DS,14,11,13);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,66,3,61);
   GetStudentTeamLeader(DS,55,&leader);
   AddStudent(DS,44,2,142);
   TeamFight(DS,3,5,13);
   TeamFight(DS,18,12,13);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,1,3,1);
   AddStudent(DS,61,2,102); // 590
   AddStudent(DS,35,14,140);
   AddStudent(DS,7,7,18);
   GetStudentTeamLeader(DS,17,&leader);
   AddStudent(DS,29,5,156);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,60,13,81);
   GetNumOfWins(DS,11,&number_of_wins);
   RemoveStudent(DS,56);
   TeamFight(DS,15,4,8);
   AddStudent(DS,2,17,134); // 600
   GetNumOfWins(DS,3,&number_of_wins);
   JoinTeams(DS,7,7);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,15,8,-1);
   GetStudentTeamLeader(DS,23,&leader);
   TeamFight(DS,17,1,11);
   AddStudent(DS,45,12,142);
   AddStudent(DS,30,6,30);
   TeamFight(DS,18,12,-1);
   RemoveStudent(DS,9); // 610
   GetStudentTeamLeader(DS,31,&leader);
   AddStudent(DS,0,13,162);
   AddStudent(DS,38,12,140);
   GetStudentTeamLeader(DS,11,&leader);
   AddStudent(DS,5,18,7);
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,12,13,153);
   RemoveStudent(DS,6);
   GetStudentTeamLeader(DS,34,&leader);
   RemoveStudent(DS,54); // 620
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,12,16,11);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins);
   RemoveStudent(DS,59);
   TeamFight(DS,15,4,11);
   GetStudentTeamLeader(DS,57,&leader);
   TeamFight(DS,14,13,1);
   GetStudentTeamLeader(DS,36,&leader); // 630
   RemoveStudent(DS,34);
   TeamFight(DS,8,3,9);
   TeamFight(DS,14,18,5);
   AddStudent(DS,24,5,73);
   AddStudent(DS,4,13,165);
   AddStudent(DS,-1,14,48);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,17,5,13);
   AddStudent(DS,42,3,136);
   RemoveStudent(DS,11); // 640
   TeamFight(DS,2,9,4);
   RemoveStudent(DS,56);
   AddStudent(DS,64,1,68);
   RemoveStudent(DS,66);
   AddStudent(DS,36,11,66);
   AddStudent(DS,42,12,26);
   AddStudent(DS,63,2,127);
   AddStudent(DS,70,5,2);
   GetStudentTeamLeader(DS,35,&leader);
   RemoveStudent(DS,52); // 650
   GetStudentTeamLeader(DS,37,&leader);
   TeamFight(DS,2,14,1);
   AddStudent(DS,37,12,114);
   GetStudentTeamLeader(DS,59,&leader);
   AddStudent(DS,16,6,126);
   JoinTeams(DS,5,12);
   TeamFight(DS,2,4,0);
   TeamFight(DS,13,4,9);
   RemoveStudent(DS,9);
   GetStudentTeamLeader(DS,37,&leader); // 660
   AddStudent(DS,26,6,104);
   AddStudent(DS,60,16,63);
   AddStudent(DS,23,16,68);
   RemoveStudent(DS,64);
   RemoveStudent(DS,5);
   AddStudent(DS,9,16,156);
   GetStudentTeamLeader(DS,12,&leader);
   GetStudentTeamLeader(DS,2,&leader);
   GetNumOfWins(DS,4,&number_of_wins);
   JoinTeams(DS,4,5); // 670
   AddStudent(DS,11,4,161);
   RemoveStudent(DS,50);
   RemoveStudent(DS,66);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,2,13,13);
   RemoveStudent(DS,43);
   RemoveStudent(DS,70);
   GetStudentTeamLeader(DS,0,&leader);
   AddStudent(DS,52,11,112);
   AddStudent(DS,39,10,136); // 680
   RemoveStudent(DS,6);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,6,9,0);
   TeamFight(DS,9,12,2);
   JoinTeams(DS,8,12);
   GetNumOfWins(DS,3,&number_of_wins);
   JoinTeams(DS,6,16);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,22,12,69); // 690
   AddStudent(DS,9,15,19);
   TeamFight(DS,14,12,7);
   AddStudent(DS,15,8,17);
   GetNumOfWins(DS,14,&number_of_wins);
   RemoveStudent(DS,31);
   GetStudentTeamLeader(DS,11,&leader);
   AddStudent(DS,54,6,131);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,11,1,10);
   AddStudent(DS,57,17,87); // 700
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,2,2,2);
   JoinTeams(DS,1,12);
   TeamFight(DS,3,4,7);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,65,3,91);
   AddStudent(DS,25,10,35);
   AddStudent(DS,8,14,160);
   GetStudentTeamLeader(DS,46,&leader);
   TeamFight(DS,6,11,7); // 710
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,5,3,8);
   TeamFight(DS,13,2,1);
   TeamFight(DS,7,5,11);
   AddStudent(DS,37,6,105);
   TeamFight(DS,10,9,4);
   TeamFight(DS,14,16,4);
   TeamFight(DS,4,2,9);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,2,5,3); // 720
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,70,&leader);
   AddStudent(DS,2,13,110);
   AddStudent(DS,57,16,87);
   AddStudent(DS,18,6,1);
   AddStudent(DS,61,3,129);
   AddStudent(DS,60,5,137);
   JoinTeams(DS,1,2);
   TeamFight(DS,2,8,11);
   JoinTeams(DS,7,15); // 730
   TeamFight(DS,6,4,9);
   JoinTeams(DS,12,15);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins);
   RemoveStudent(DS,31);
   TeamFight(DS,8,6,11);
   TeamFight(DS,1,5,11);
   JoinTeams(DS,17,12);
   GetStudentTeamLeader(DS,21,&leader);
   GetNumOfWins(DS,15,&number_of_wins); // 740
   TeamFight(DS,8,7,5);
   AddStudent(DS,36,13,103);
   GetStudentTeamLeader(DS,47,&leader);
   RemoveStudent(DS,1);
   GetStudentTeamLeader(DS,66,&leader);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins);
   JoinTeams(DS,10,14);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,14,14,12); // 750
   GetStudentTeamLeader(DS,20,&leader);
   AddStudent(DS,2,4,92);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,6,17,151);
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,61,16,90);
   GetStudentTeamLeader(DS,16,&leader);
   AddStudent(DS,53,5,84);
   AddStudent(DS,57,5,94); // 760
   TeamFight(DS,9,3,4);
   GetStudentTeamLeader(DS,63,&leader);
   TeamFight(DS,12,4,6);
   GetStudentTeamLeader(DS,13,&leader);
   RemoveStudent(DS,35);
   TeamFight(DS,6,12,5);
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,66,&leader);
   GetStudentTeamLeader(DS,32,&leader);
   GetStudentTeamLeader(DS,20,&leader); // 770
   AddStudent(DS,21,1,34);
   TeamFight(DS,9,7,1);
   JoinTeams(DS,18,5);
   RemoveStudent(DS,44);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,14,6,74);
   TeamFight(DS,1,10,1);
   JoinTeams(DS,14,18);
   RemoveStudent(DS,71);
   TeamFight(DS,18,16,2); // 780
   TeamFight(DS,10,4,1);
   TeamFight(DS,16,11,4);
   RemoveStudent(DS,1);
   AddStudent(DS,40,16,132);
   AddStudent(DS,5,17,93);
   AddStudent(DS,27,5,161);
   GetStudentTeamLeader(DS,11,&leader);
   AddStudent(DS,59,2,8);
   TeamFight(DS,11,12,14);
   TeamFight(DS,11,1,11); // 790
   JoinTeams(DS,1,15);
   TeamFight(DS,9,6,2);
   GetStudentTeamLeader(DS,43,&leader);
   GetNumOfWins(DS,14,&number_of_wins);
   RemoveStudent(DS,18);
   AddStudent(DS,45,15,83);
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,56,3,61);
   TeamFight(DS,8,9,1);
   AddStudent(DS,25,5,138); // 800
   AddStudent(DS,1,11,147);
   GetStudentTeamLeader(DS,-1,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,33,11,133);
   AddStudent(DS,56,16,146);
   TeamFight(DS,15,9,8);
   GetStudentTeamLeader(DS,31,&leader);
   GetStudentTeamLeader(DS,25,&leader);
   JoinTeams(DS,2,16);
   GetStudentTeamLeader(DS,69,&leader); // 810
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,58,11,152);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,9,12,101);
   TeamFight(DS,9,12,11);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,36,11,15);
   RemoveStudent(DS,22);
   AddStudent(DS,4,12,40);
   TeamFight(DS,18,11,2); // 820
   AddStudent(DS,70,12,73);
   TeamFight(DS,13,18,12);
   TeamFight(DS,18,12,16);
   TeamFight(DS,3,11,18);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,71,10,136);
   AddStudent(DS,59,14,163);
   GetStudentTeamLeader(DS,41,&leader);
   TeamFight(DS,12,12,7);
   TeamFight(DS,5,8,6); // 830
   AddStudent(DS,0,13,41);
   TeamFight(DS,11,16,10);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,64,16,146);
   RemoveStudent(DS,69);
   GetStudentTeamLeader(DS,22,&leader);
   AddStudent(DS,57,4,24);
   AddStudent(DS,35,4,39);
   AddStudent(DS,7,16,130);
   AddStudent(DS,37,12,125); // 840
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,5,8,12);
   AddStudent(DS,-1,17,11);
   GetStudentTeamLeader(DS,41,&leader);
   TeamFight(DS,9,1,2);
   AddStudent(DS,55,16,94);
   GetNumOfWins(DS,18,&number_of_wins);
   RemoveStudent(DS,3);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,9,7,14); // 850
   TeamFight(DS,2,14,14);
   JoinTeams(DS,1,6);
   TeamFight(DS,11,6,17);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,70,9,16);
   AddStudent(DS,48,9,45);
   AddStudent(DS,66,10,37);
   GetNumOfWins(DS,18,&number_of_wins);
   RemoveStudent(DS,41);
   TeamFight(DS,4,9,2); // 860
   AddStudent(DS,67,13,42);
   GetStudentTeamLeader(DS,18,&leader);
   RemoveStudent(DS,51);
   TeamFight(DS,4,12,16);
   AddStudent(DS,29,5,128);
   RemoveStudent(DS,46);
   TeamFight(DS,3,1,17);
   AddStudent(DS,2,15,41);
   TeamFight(DS,14,1,6);
   GetNumOfWins(DS,12,&number_of_wins); // 870
   TeamFight(DS,2,17,6);
   GetStudentTeamLeader(DS,28,&leader);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,19,5,113);
   GetStudentTeamLeader(DS,6,&leader);
   RemoveStudent(DS,61);
   GetNumOfWins(DS,15,&number_of_wins);
   RemoveStudent(DS,68);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,54,16,37); // 880
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,62,1,90);
   AddStudent(DS,33,17,98);
   TeamFight(DS,13,5,11);
   AddStudent(DS,10,8,30);
   TeamFight(DS,12,12,8);
   GetStudentTeamLeader(DS,47,&leader);
   JoinTeams(DS,3,17);
   AddStudent(DS,39,8,121);
   AddStudent(DS,30,5,8); // 890
   AddStudent(DS,58,2,98);
   AddStudent(DS,28,9,168);
   AddStudent(DS,19,14,110);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,11,4,43);
   TeamFight(DS,17,1,14);
   GetStudentTeamLeader(DS,56,&leader);
   RemoveStudent(DS,16);
   AddStudent(DS,40,16,5);
   GetNumOfWins(DS,4,&number_of_wins); // 900
   GetStudentTeamLeader(DS,31,&leader);
   TeamFight(DS,11,4,-1);
   GetStudentTeamLeader(DS,35,&leader);
   AddStudent(DS,45,16,133);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,56,13,60);
   TeamFight(DS,14,6,2);
   TeamFight(DS,2,3,0);
   RemoveStudent(DS,29);
   TeamFight(DS,10,14,3); // 910
   AddStudent(DS,31,11,124);
   GetStudentTeamLeader(DS,41,&leader);
   AddStudent(DS,23,14,98);
   TeamFight(DS,7,10,11);
   TeamFight(DS,10,6,1);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,17,5,3);
   TeamFight(DS,16,17,6);
   AddStudent(DS,4,16,139);
   GetStudentTeamLeader(DS,51,&leader); // 920
   TeamFight(DS,16,12,9);
   TeamFight(DS,18,16,12);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,47,13,113);
   TeamFight(DS,7,4,9);
   GetNumOfWins(DS,16,&number_of_wins);
   GetStudentTeamLeader(DS,42,&leader);
   GetStudentTeamLeader(DS,49,&leader);
   AddStudent(DS,33,7,140);
   GetNumOfWins(DS,1,&number_of_wins); // 930
   GetStudentTeamLeader(DS,23,&leader);
   GetStudentTeamLeader(DS,69,&leader);
   TeamFight(DS,6,2,4);
   AddStudent(DS,2,5,13);
   AddStudent(DS,49,13,137);
   TeamFight(DS,7,16,-1);
   TeamFight(DS,8,2,13);
   TeamFight(DS,5,10,15);
   AddStudent(DS,44,9,133);
   RemoveStudent(DS,39); // 940
   TeamFight(DS,15,2,-1);
   RemoveStudent(DS,65);
   AddStudent(DS,29,16,100);
   GetNumOfWins(DS,4,&number_of_wins);
   RemoveStudent(DS,30);
   AddStudent(DS,42,1,107);
   GetStudentTeamLeader(DS,63,&leader);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,62,8,30);
   TeamFight(DS,10,5,10); // 950
   JoinTeams(DS,2,1);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,14,4,8);
   TeamFight(DS,1,9,14);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,4,10,10);
   TeamFight(DS,9,18,5);
   TeamFight(DS,15,10,0);
   AddStudent(DS,41,13,162);
   GetNumOfWins(DS,10,&number_of_wins); // 960
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,5,6,9);
   GetStudentTeamLeader(DS,62,&leader);
   RemoveStudent(DS,54);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,36,&leader);
   GetStudentTeamLeader(DS,35,&leader);
   AddStudent(DS,56,2,26);
   GetStudentTeamLeader(DS,37,&leader);
   AddStudent(DS,39,17,158); // 970
   GetStudentTeamLeader(DS,55,&leader);
   TeamFight(DS,1,8,4);
   RemoveStudent(DS,23);
   TeamFight(DS,8,8,10);
   TeamFight(DS,5,16,17);
   TeamFight(DS,17,1,14);
   AddStudent(DS,30,12,22);
   TeamFight(DS,6,5,11);
   TeamFight(DS,4,8,9);
   GetNumOfWins(DS,17,&number_of_wins); // 980
   AddStudent(DS,46,13,170);
   JoinTeams(DS,10,11);
   TeamFight(DS,16,8,17);
   GetStudentTeamLeader(DS,30,&leader);
   AddStudent(DS,41,4,157);
   AddStudent(DS,38,6,136);
   AddStudent(DS,53,4,33);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,9,18,93);
   AddStudent(DS,24,13,138); // 990
   GetStudentTeamLeader(DS,28,&leader);
   TeamFight(DS,1,13,13);
   GetStudentTeamLeader(DS,50,&leader);
   TeamFight(DS,12,3,13);
   AddStudent(DS,26,2,100);
   AddStudent(DS,21,8,105);
   RemoveStudent(DS,50);
   AddStudent(DS,69,12,136);
   AddStudent(DS,39,14,63);
   TeamFight(DS,16,11,13); // 1000
   GetNumOfWins(DS,13,&number_of_wins);
   Quit(&DS);
}
