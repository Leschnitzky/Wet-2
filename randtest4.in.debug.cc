void test() {
   int leader;
   int number_of_wins;
   void* DS = Init(24);
   AddStudent(DS,84,22,292);
   AddStudent(DS,59,17,277);
   AddStudent(DS,94,4,83);
   RemoveStudent(DS,5);
   AddStudent(DS,64,13,195);
   AddStudent(DS,19,19,180);
   TeamFight(DS,20,10,3);
   TeamFight(DS,15,1,4);
   AddStudent(DS,95,18,228); // 10
   GetStudentTeamLeader(DS,49,&leader);
   RemoveStudent(DS,34);
   AddStudent(DS,64,17,252);
   RemoveStudent(DS,48);
   TeamFight(DS,8,1,-1);
   AddStudent(DS,66,2,287);
   AddStudent(DS,93,24,291);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,75,3,84);
   GetStudentTeamLeader(DS,17,&leader); // 20
   TeamFight(DS,24,12,2);
   AddStudent(DS,33,6,266);
   GetNumOfWins(DS,5,&number_of_wins);
   GetStudentTeamLeader(DS,59,&leader);
   TeamFight(DS,22,23,2);
   AddStudent(DS,84,15,237);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,77,13,69);
   AddStudent(DS,89,21,212);
   JoinTeams(DS,20,22); // 30
   AddStudent(DS,28,8,205);
   TeamFight(DS,5,24,-1);
   GetStudentTeamLeader(DS,8,&leader);
   JoinTeams(DS,10,2);
   GetNumOfWins(DS,14,&number_of_wins);
   JoinTeams(DS,20,4);
   TeamFight(DS,8,15,3);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,-1,4,224);
   JoinTeams(DS,1,11); // 40
   RemoveStudent(DS,24);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,15,12,4);
   GetStudentTeamLeader(DS,48,&leader);
   TeamFight(DS,2,14,2);
   GetStudentTeamLeader(DS,15,&leader);
   AddStudent(DS,20,21,36);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,64,24,173);
   AddStudent(DS,65,3,88); // 50
   AddStudent(DS,25,17,263);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,21,7,0);
   TeamFight(DS,9,17,3);
   TeamFight(DS,20,11,4);
   TeamFight(DS,22,20,1);
   RemoveStudent(DS,41);
   GetStudentTeamLeader(DS,74,&leader);
   TeamFight(DS,22,24,4);
   AddStudent(DS,92,3,52); // 60
   RemoveStudent(DS,13);
   GetNumOfWins(DS,20,&number_of_wins);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,19,1,64);
   AddStudent(DS,80,5,135);
   TeamFight(DS,1,1,0);
   TeamFight(DS,12,20,3);
   JoinTeams(DS,5,11);
   AddStudent(DS,40,21,53);
   GetNumOfWins(DS,7,&number_of_wins); // 70
   TeamFight(DS,14,19,3);
   AddStudent(DS,57,9,190);
   AddStudent(DS,91,11,150);
   AddStudent(DS,17,15,50);
   JoinTeams(DS,17,17);
   JoinTeams(DS,10,1);
   TeamFight(DS,22,6,-1);
   RemoveStudent(DS,4);
   RemoveStudent(DS,65);
   TeamFight(DS,9,1,1); // 80
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   RemoveStudent(DS,41);
   AddStudent(DS,94,1,267);
   AddStudent(DS,8,5,58);
   AddStudent(DS,22,2,52);
   GetNumOfWins(DS,20,&number_of_wins);
   AddStudent(DS,14,24,230);
   TeamFight(DS,16,6,3);
   TeamFight(DS,11,7,7); // 90
   AddStudent(DS,12,12,56);
   GetNumOfWins(DS,21,&number_of_wins);
   AddStudent(DS,61,24,249);
   AddStudent(DS,20,17,24);
   AddStudent(DS,18,24,272);
   GetNumOfWins(DS,19,&number_of_wins);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,13,8,134);
   TeamFight(DS,15,21,6);
   GetStudentTeamLeader(DS,18,&leader); // 100
   TeamFight(DS,4,5,7);
   AddStudent(DS,15,16,129);
   AddStudent(DS,13,10,204);
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,41,&leader);
   AddStudent(DS,24,22,89);
   TeamFight(DS,9,7,1);
   AddStudent(DS,82,20,64);
   AddStudent(DS,48,15,135);
   AddStudent(DS,42,12,3); // 110
   GetStudentTeamLeader(DS,25,&leader);
   RemoveStudent(DS,78);
   TeamFight(DS,5,13,5);
   TeamFight(DS,15,6,8);
   TeamFight(DS,4,16,0);
   TeamFight(DS,1,22,1);
   JoinTeams(DS,10,16);
   GetStudentTeamLeader(DS,62,&leader);
   TeamFight(DS,2,23,2);
   GetStudentTeamLeader(DS,23,&leader); // 120
   AddStudent(DS,-1,16,175);
   AddStudent(DS,88,7,120);
   TeamFight(DS,3,9,4);
   AddStudent(DS,31,13,74);
   AddStudent(DS,5,8,225);
   TeamFight(DS,20,13,5);
   AddStudent(DS,6,21,67);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,22,8,8);
   TeamFight(DS,11,23,9); // 130
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   JoinTeams(DS,15,2);
   JoinTeams(DS,14,22);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,56,21,243);
   TeamFight(DS,2,23,3);
   TeamFight(DS,2,4,3);
   TeamFight(DS,23,18,7);
   RemoveStudent(DS,31); // 140
   AddStudent(DS,79,17,35);
   TeamFight(DS,14,16,0);
   TeamFight(DS,14,20,8);
   TeamFight(DS,22,8,0);
   TeamFight(DS,6,9,9);
   RemoveStudent(DS,69);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,1,14,6);
   AddStudent(DS,49,2,154);
   GetStudentTeamLeader(DS,39,&leader); // 150
   GetNumOfWins(DS,20,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   GetStudentTeamLeader(DS,22,&leader);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,8,10,118);
   AddStudent(DS,71,18,184);
   AddStudent(DS,93,14,90);
   AddStudent(DS,15,21,152);
   AddStudent(DS,82,10,33); // 160
   AddStudent(DS,13,18,26);
   JoinTeams(DS,22,12);
   GetNumOfWins(DS,7,&number_of_wins);
   RemoveStudent(DS,67);
   AddStudent(DS,5,23,285);
   AddStudent(DS,45,22,296);
   TeamFight(DS,6,14,1);
   AddStudent(DS,81,16,149);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,87,16,272); // 170
   GetStudentTeamLeader(DS,85,&leader);
   TeamFight(DS,12,9,-1);
   AddStudent(DS,52,2,71);
   TeamFight(DS,6,3,8);
   TeamFight(DS,21,10,5);
   RemoveStudent(DS,83);
   JoinTeams(DS,20,2);
   AddStudent(DS,7,5,147);
   JoinTeams(DS,22,21);
   GetStudentTeamLeader(DS,13,&leader); // 180
   AddStudent(DS,85,7,-1);
   RemoveStudent(DS,72);
   GetStudentTeamLeader(DS,70,&leader);
   JoinTeams(DS,8,10);
   TeamFight(DS,22,15,-1);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,19,5,8);
   RemoveStudent(DS,4);
   RemoveStudent(DS,62);
   AddStudent(DS,34,5,174); // 190
   AddStudent(DS,46,23,29);
   GetNumOfWins(DS,11,&number_of_wins);
   JoinTeams(DS,23,16);
   TeamFight(DS,24,8,1);
   AddStudent(DS,5,16,25);
   JoinTeams(DS,4,10);
   TeamFight(DS,2,17,7);
   AddStudent(DS,33,16,28);
   AddStudent(DS,30,17,21);
   GetStudentTeamLeader(DS,31,&leader); // 200
   GetNumOfWins(DS,20,&number_of_wins);
   TeamFight(DS,7,3,-1);
   RemoveStudent(DS,17);
   GetNumOfWins(DS,19,&number_of_wins);
   GetStudentTeamLeader(DS,23,&leader);
   RemoveStudent(DS,17);
   RemoveStudent(DS,20);
   TeamFight(DS,13,1,9);
   TeamFight(DS,21,6,9);
   AddStudent(DS,38,13,23); // 210
   TeamFight(DS,11,20,8);
   AddStudent(DS,9,11,222);
   GetStudentTeamLeader(DS,48,&leader);
   TeamFight(DS,8,18,9);
   RemoveStudent(DS,40);
   GetStudentTeamLeader(DS,70,&leader);
   AddStudent(DS,85,21,82);
   TeamFight(DS,22,4,5);
   TeamFight(DS,24,3,11);
   GetNumOfWins(DS,10,&number_of_wins); // 220
   TeamFight(DS,22,7,0);
   GetStudentTeamLeader(DS,30,&leader);
   TeamFight(DS,22,11,6);
   JoinTeams(DS,19,5);
   TeamFight(DS,10,12,2);
   AddStudent(DS,0,12,0);
   AddStudent(DS,72,2,7);
   RemoveStudent(DS,79);
   TeamFight(DS,12,2,12);
   TeamFight(DS,22,2,13); // 230
   GetStudentTeamLeader(DS,46,&leader);
   JoinTeams(DS,10,17);
   AddStudent(DS,22,16,215);
   GetNumOfWins(DS,17,&number_of_wins);
   RemoveStudent(DS,36);
   JoinTeams(DS,21,1);
   JoinTeams(DS,8,17);
   AddStudent(DS,43,8,292);
   RemoveStudent(DS,6);
   AddStudent(DS,2,10,180); // 240
   AddStudent(DS,30,16,212);
   GetStudentTeamLeader(DS,22,&leader);
   AddStudent(DS,85,5,169);
   GetStudentTeamLeader(DS,41,&leader);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,13,8,-1);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,17,18,2);
   GetNumOfWins(DS,19,&number_of_wins); // 250
   AddStudent(DS,42,3,159);
   AddStudent(DS,52,22,1);
   RemoveStudent(DS,90);
   GetStudentTeamLeader(DS,65,&leader);
   AddStudent(DS,12,20,96);
   JoinTeams(DS,17,1);
   AddStudent(DS,95,3,175);
   TeamFight(DS,2,1,4);
   AddStudent(DS,-1,3,296);
   TeamFight(DS,21,16,11); // 260
   AddStudent(DS,27,16,4);
   GetStudentTeamLeader(DS,56,&leader);
   RemoveStudent(DS,38);
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,19,6,233);
   TeamFight(DS,22,14,8);
   GetStudentTeamLeader(DS,35,&leader);
   TeamFight(DS,4,11,8);
   TeamFight(DS,21,6,4);
   TeamFight(DS,16,24,6); // 270
   AddStudent(DS,66,10,64);
   GetStudentTeamLeader(DS,6,&leader);
   AddStudent(DS,68,13,32);
   RemoveStudent(DS,8);
   AddStudent(DS,92,19,12);
   AddStudent(DS,36,20,237);
   GetNumOfWins(DS,22,&number_of_wins);
   GetStudentTeamLeader(DS,29,&leader);
   TeamFight(DS,24,20,3);
   TeamFight(DS,17,22,10); // 280
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,9,15,5);
   AddStudent(DS,78,3,141);
   TeamFight(DS,4,6,12);
   GetStudentTeamLeader(DS,59,&leader);
   RemoveStudent(DS,28);
   AddStudent(DS,8,11,88);
   GetStudentTeamLeader(DS,21,&leader);
   AddStudent(DS,26,20,83);
   RemoveStudent(DS,29); // 290
   AddStudent(DS,40,15,190);
   AddStudent(DS,24,8,107);
   TeamFight(DS,18,15,6);
   TeamFight(DS,7,16,6);
   RemoveStudent(DS,73);
   AddStudent(DS,46,16,90);
   RemoveStudent(DS,81);
   RemoveStudent(DS,33);
   RemoveStudent(DS,53);
   AddStudent(DS,2,17,90); // 300
   GetStudentTeamLeader(DS,2,&leader);
   JoinTeams(DS,7,2);
   GetNumOfWins(DS,10,&number_of_wins);
   GetNumOfWins(DS,15,&number_of_wins);
   GetStudentTeamLeader(DS,91,&leader);
   TeamFight(DS,18,9,14);
   AddStudent(DS,20,6,52);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,23,21,57);
   TeamFight(DS,23,15,12); // 310
   GetStudentTeamLeader(DS,14,&leader);
   AddStudent(DS,0,18,292);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,15,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   RemoveStudent(DS,71);
   TeamFight(DS,21,20,12);
   TeamFight(DS,2,24,6);
   AddStudent(DS,16,20,133);
   AddStudent(DS,37,8,98); // 320
   JoinTeams(DS,24,17);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,24,&number_of_wins);
   RemoveStudent(DS,30);
   GetStudentTeamLeader(DS,45,&leader);
   GetStudentTeamLeader(DS,22,&leader);
   AddStudent(DS,-1,9,232);
   GetStudentTeamLeader(DS,84,&leader);
   RemoveStudent(DS,37); // 330
   TeamFight(DS,1,7,1);
   GetStudentTeamLeader(DS,18,&leader);
   GetStudentTeamLeader(DS,15,&leader);
   TeamFight(DS,7,5,11);
   RemoveStudent(DS,6);
   AddStudent(DS,51,18,221);
   AddStudent(DS,14,19,53);
   AddStudent(DS,58,2,260);
   JoinTeams(DS,10,13);
   AddStudent(DS,0,7,205); // 340
   AddStudent(DS,40,24,88);
   AddStudent(DS,79,14,5);
   TeamFight(DS,8,8,11);
   RemoveStudent(DS,78);
   TeamFight(DS,17,11,13);
   TeamFight(DS,18,10,12);
   GetStudentTeamLeader(DS,27,&leader);
   GetStudentTeamLeader(DS,76,&leader);
   AddStudent(DS,3,20,13);
   RemoveStudent(DS,77); // 350
   GetStudentTeamLeader(DS,50,&leader);
   TeamFight(DS,21,22,-1);
   TeamFight(DS,4,23,0);
   TeamFight(DS,9,10,11);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,76,17,49);
   TeamFight(DS,15,8,5);
   TeamFight(DS,12,10,11);
   AddStudent(DS,31,5,30);
   TeamFight(DS,22,24,7); // 360
   AddStudent(DS,33,7,102);
   GetStudentTeamLeader(DS,56,&leader);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,1,18,0);
   RemoveStudent(DS,62);
   GetNumOfWins(DS,8,&number_of_wins);
   JoinTeams(DS,15,5);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,13,23,11);
   TeamFight(DS,19,3,8); // 370
   TeamFight(DS,9,3,10);
   TeamFight(DS,3,14,11);
   AddStudent(DS,91,19,96);
   GetNumOfWins(DS,11,&number_of_wins);
   GetStudentTeamLeader(DS,51,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,67,24,250);
   AddStudent(DS,95,16,296);
   JoinTeams(DS,22,7);
   JoinTeams(DS,13,23); // 380
   RemoveStudent(DS,55);
   TeamFight(DS,23,17,2);
   TeamFight(DS,15,4,11);
   AddStudent(DS,14,10,152);
   AddStudent(DS,10,4,163);
   GetStudentTeamLeader(DS,39,&leader);
   AddStudent(DS,59,22,259);
   AddStudent(DS,74,3,125);
   AddStudent(DS,78,10,154);
   AddStudent(DS,84,12,177); // 390
   TeamFight(DS,21,7,2);
   TeamFight(DS,3,1,6);
   GetNumOfWins(DS,20,&number_of_wins);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,7,11,9);
   AddStudent(DS,29,23,101);
   AddStudent(DS,95,24,191);
   AddStudent(DS,89,12,167);
   GetStudentTeamLeader(DS,42,&leader);
   TeamFight(DS,19,19,9); // 400
   AddStudent(DS,38,14,182);
   GetStudentTeamLeader(DS,77,&leader);
   JoinTeams(DS,15,4);
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,55,&leader);
   AddStudent(DS,-1,3,38);
   RemoveStudent(DS,36);
   TeamFight(DS,9,15,6);
   AddStudent(DS,21,16,141);
   JoinTeams(DS,20,6); // 410
   AddStudent(DS,41,4,170);
   GetStudentTeamLeader(DS,84,&leader);
   GetNumOfWins(DS,22,&number_of_wins);
   JoinTeams(DS,21,17);
   GetStudentTeamLeader(DS,56,&leader);
   RemoveStudent(DS,77);
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,91,20,19);
   GetStudentTeamLeader(DS,16,&leader); // 420
   TeamFight(DS,9,16,12);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,16,3,9);
   TeamFight(DS,22,16,9);
   TeamFight(DS,19,18,5);
   GetStudentTeamLeader(DS,53,&leader);
   GetStudentTeamLeader(DS,47,&leader);
   GetStudentTeamLeader(DS,-1,&leader);
   GetStudentTeamLeader(DS,1,&leader); // 430
   GetStudentTeamLeader(DS,43,&leader);
   TeamFight(DS,9,4,1);
   AddStudent(DS,68,17,23);
   JoinTeams(DS,2,2);
   TeamFight(DS,10,19,4);
   GetStudentTeamLeader(DS,67,&leader);
   GetStudentTeamLeader(DS,56,&leader);
   GetStudentTeamLeader(DS,77,&leader);
   GetStudentTeamLeader(DS,50,&leader);
   AddStudent(DS,48,14,196); // 440
   GetStudentTeamLeader(DS,90,&leader);
   JoinTeams(DS,5,6);
   AddStudent(DS,1,12,21);
   TeamFight(DS,4,23,12);
   TeamFight(DS,14,12,5);
   TeamFight(DS,7,10,14);
   GetNumOfWins(DS,18,&number_of_wins);
   RemoveStudent(DS,-1);
   AddStudent(DS,1,10,3);
   JoinTeams(DS,2,1); // 450
   RemoveStudent(DS,58);
   TeamFight(DS,22,20,-1);
   AddStudent(DS,69,21,1);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,8,17,23);
   RemoveStudent(DS,91);
   AddStudent(DS,75,7,0);
   RemoveStudent(DS,41);
   GetStudentTeamLeader(DS,10,&leader); // 460
   AddStudent(DS,29,5,193);
   JoinTeams(DS,1,11);
   TeamFight(DS,24,11,-1);
   TeamFight(DS,15,23,2);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,20,24,13);
   GetStudentTeamLeader(DS,78,&leader);
   AddStudent(DS,22,24,50);
   TeamFight(DS,24,24,10);
   TeamFight(DS,22,19,13); // 470
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,15,1,8);
   AddStudent(DS,84,3,103);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,23,23,14);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,23,4,-1);
   AddStudent(DS,33,5,280);
   AddStudent(DS,82,13,123);
   TeamFight(DS,11,16,12); // 480
   AddStudent(DS,94,18,196);
   GetStudentTeamLeader(DS,7,&leader);
   TeamFight(DS,9,24,1);
   GetNumOfWins(DS,12,&number_of_wins);
   JoinTeams(DS,5,6);
   TeamFight(DS,22,5,8);
   AddStudent(DS,49,2,204);
   TeamFight(DS,10,20,11);
   AddStudent(DS,74,13,47);
   GetNumOfWins(DS,15,&number_of_wins); // 490
   RemoveStudent(DS,3);
   AddStudent(DS,37,20,264);
   AddStudent(DS,12,22,9);
   GetNumOfWins(DS,20,&number_of_wins);
   AddStudent(DS,6,8,220);
   TeamFight(DS,24,19,9);
   GetNumOfWins(DS,7,&number_of_wins);
   RemoveStudent(DS,95);
   TeamFight(DS,2,4,4);
   GetStudentTeamLeader(DS,50,&leader); // 500
   RemoveStudent(DS,62);
   AddStudent(DS,17,3,68);
   AddStudent(DS,11,1,209);
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,16,11,1);
   AddStudent(DS,59,4,138);
   AddStudent(DS,51,16,164);
   TeamFight(DS,16,7,11);
   TeamFight(DS,24,5,1);
   GetNumOfWins(DS,1,&number_of_wins); // 510
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,79,24,234);
   AddStudent(DS,54,17,38);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,67,16,92);
   AddStudent(DS,67,12,14);
   AddStudent(DS,56,3,251);
   GetStudentTeamLeader(DS,26,&leader);
   AddStudent(DS,45,14,178);
   TeamFight(DS,20,3,8); // 520
   GetStudentTeamLeader(DS,31,&leader);
   RemoveStudent(DS,74);
   AddStudent(DS,16,6,297);
   AddStudent(DS,15,17,93);
   TeamFight(DS,7,20,11);
   AddStudent(DS,94,8,109);
   RemoveStudent(DS,55);
   RemoveStudent(DS,28);
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,12,18,2); // 530
   GetNumOfWins(DS,20,&number_of_wins);
   RemoveStudent(DS,75);
   RemoveStudent(DS,35);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,2,6,3);
   AddStudent(DS,13,15,216);
   GetNumOfWins(DS,21,&number_of_wins);
   TeamFight(DS,6,7,9);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,39,&leader); // 540
   TeamFight(DS,16,24,8);
   AddStudent(DS,91,14,179);
   AddStudent(DS,35,12,18);
   GetStudentTeamLeader(DS,11,&leader);
   TeamFight(DS,15,1,0);
   TeamFight(DS,5,21,11);
   AddStudent(DS,93,17,65);
   TeamFight(DS,23,16,0);
   AddStudent(DS,91,16,181);
   AddStudent(DS,-1,6,48); // 550
   RemoveStudent(DS,16);
   AddStudent(DS,34,17,263);
   GetStudentTeamLeader(DS,31,&leader);
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,18,10,14);
   TeamFight(DS,23,3,12);
   AddStudent(DS,29,5,111);
   TeamFight(DS,19,18,1);
   GetNumOfWins(DS,13,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins); // 560
   TeamFight(DS,23,11,5);
   GetNumOfWins(DS,14,&number_of_wins);
   GetStudentTeamLeader(DS,39,&leader);
   TeamFight(DS,9,9,6);
   GetNumOfWins(DS,14,&number_of_wins);
   RemoveStudent(DS,48);
   TeamFight(DS,21,7,5);
   GetStudentTeamLeader(DS,10,&leader);
   AddStudent(DS,36,7,183);
   RemoveStudent(DS,39); // 570
   TeamFight(DS,24,19,8);
   AddStudent(DS,18,21,288);
   TeamFight(DS,22,21,-1);
   RemoveStudent(DS,19);
   GetStudentTeamLeader(DS,17,&leader);
   AddStudent(DS,61,14,205);
   GetNumOfWins(DS,19,&number_of_wins);
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins); // 580
   TeamFight(DS,9,12,1);
   GetNumOfWins(DS,6,&number_of_wins);
   JoinTeams(DS,24,24);
   TeamFight(DS,19,10,11);
   GetStudentTeamLeader(DS,54,&leader);
   GetStudentTeamLeader(DS,50,&leader);
   AddStudent(DS,88,13,39);
   RemoveStudent(DS,14);
   TeamFight(DS,16,8,3);
   GetNumOfWins(DS,15,&number_of_wins); // 590
   AddStudent(DS,33,24,25);
   AddStudent(DS,26,23,48);
   RemoveStudent(DS,5);
   TeamFight(DS,7,9,12);
   AddStudent(DS,28,21,13);
   GetStudentTeamLeader(DS,16,&leader);
   TeamFight(DS,21,5,9);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,15,9,263);
   JoinTeams(DS,16,13); // 600
   TeamFight(DS,10,23,4);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,4,7,14);
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,12,6,6);
   TeamFight(DS,12,16,11);
   AddStudent(DS,30,7,0);
   RemoveStudent(DS,4);
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,20,21,5); // 610
   TeamFight(DS,20,6,-1);
   RemoveStudent(DS,77);
   TeamFight(DS,16,15,13);
   TeamFight(DS,21,16,9);
   GetStudentTeamLeader(DS,72,&leader);
   TeamFight(DS,9,20,-1);
   TeamFight(DS,5,19,3);
   AddStudent(DS,2,14,209);
   TeamFight(DS,16,14,11);
   AddStudent(DS,88,23,183); // 620
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,34,&leader);
   AddStudent(DS,90,24,292);
   AddStudent(DS,41,19,72);
   AddStudent(DS,85,16,81);
   GetStudentTeamLeader(DS,3,&leader);
   AddStudent(DS,38,13,174);
   AddStudent(DS,75,6,124);
   TeamFight(DS,1,9,8);
   GetNumOfWins(DS,7,&number_of_wins); // 630
   AddStudent(DS,86,6,254);
   TeamFight(DS,5,11,3);
   TeamFight(DS,23,24,6);
   TeamFight(DS,12,7,12);
   RemoveStudent(DS,71);
   GetStudentTeamLeader(DS,49,&leader);
   GetNumOfWins(DS,24,&number_of_wins);
   AddStudent(DS,63,24,-1);
   GetStudentTeamLeader(DS,69,&leader);
   GetStudentTeamLeader(DS,64,&leader); // 640
   RemoveStudent(DS,51);
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,17,19,11);
   AddStudent(DS,81,8,289);
   RemoveStudent(DS,58);
   TeamFight(DS,5,6,10);
   GetNumOfWins(DS,3,&number_of_wins);
   JoinTeams(DS,14,10);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,3,&number_of_wins); // 650
   RemoveStudent(DS,76);
   AddStudent(DS,28,3,268);
   GetNumOfWins(DS,24,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,48,14,218);
   GetStudentTeamLeader(DS,38,&leader);
   TeamFight(DS,4,24,9);
   GetStudentTeamLeader(DS,10,&leader);
   AddStudent(DS,87,13,276);
   GetNumOfWins(DS,21,&number_of_wins); // 660
   GetStudentTeamLeader(DS,84,&leader);
   AddStudent(DS,14,10,126);
   TeamFight(DS,14,22,0);
   GetStudentTeamLeader(DS,39,&leader);
   GetNumOfWins(DS,23,&number_of_wins);
   JoinTeams(DS,9,13);
   JoinTeams(DS,14,13);
   GetNumOfWins(DS,9,&number_of_wins);
   RemoveStudent(DS,56);
   GetNumOfWins(DS,14,&number_of_wins); // 670
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,10,5,69);
   AddStudent(DS,71,11,164);
   AddStudent(DS,70,23,173);
   TeamFight(DS,1,17,4);
   AddStudent(DS,51,15,251);
   JoinTeams(DS,22,6);
   TeamFight(DS,19,1,7);
   TeamFight(DS,23,1,9);
   GetStudentTeamLeader(DS,0,&leader); // 680
   TeamFight(DS,1,9,10);
   GetNumOfWins(DS,22,&number_of_wins);
   RemoveStudent(DS,49);
   JoinTeams(DS,9,10);
   TeamFight(DS,16,6,0);
   AddStudent(DS,64,21,74);
   GetStudentTeamLeader(DS,79,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,92,13,139);
   AddStudent(DS,41,23,59); // 690
   JoinTeams(DS,8,5);
   TeamFight(DS,2,7,6);
   RemoveStudent(DS,6);
   AddStudent(DS,90,22,75);
   TeamFight(DS,16,17,12);
   RemoveStudent(DS,39);
   TeamFight(DS,12,14,7);
   AddStudent(DS,7,15,233);
   AddStudent(DS,29,3,67);
   GetStudentTeamLeader(DS,80,&leader); // 700
   RemoveStudent(DS,1);
   TeamFight(DS,4,20,4);
   TeamFight(DS,4,14,2);
   GetStudentTeamLeader(DS,33,&leader);
   AddStudent(DS,41,13,76);
   TeamFight(DS,23,14,0);
   TeamFight(DS,14,6,2);
   TeamFight(DS,2,15,4);
   AddStudent(DS,1,19,66);
   TeamFight(DS,21,21,6); // 710
   GetStudentTeamLeader(DS,43,&leader);
   GetStudentTeamLeader(DS,55,&leader);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,22,24,6);
   RemoveStudent(DS,42);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,12,4,4);
   AddStudent(DS,82,5,297);
   GetStudentTeamLeader(DS,50,&leader);
   GetNumOfWins(DS,2,&number_of_wins); // 720
   JoinTeams(DS,21,3);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,18,8,4);
   AddStudent(DS,83,15,129);
   TeamFight(DS,13,10,14);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,18,21,2);
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,68,&leader);
   GetNumOfWins(DS,19,&number_of_wins); // 730
   AddStudent(DS,22,20,119);
   AddStudent(DS,33,17,2);
   TeamFight(DS,20,15,12);
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,31,&leader);
   AddStudent(DS,14,17,83);
   TeamFight(DS,7,7,12);
   AddStudent(DS,32,24,179);
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,12,5,11); // 740
   AddStudent(DS,10,3,113);
   RemoveStudent(DS,0);
   GetStudentTeamLeader(DS,64,&leader);
   TeamFight(DS,12,21,14);
   GetNumOfWins(DS,6,&number_of_wins);
   RemoveStudent(DS,4);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,21,16,3);
   AddStudent(DS,19,1,67);
   TeamFight(DS,5,2,5); // 750
   AddStudent(DS,92,8,231);
   TeamFight(DS,8,14,11);
   RemoveStudent(DS,89);
   GetStudentTeamLeader(DS,0,&leader);
   JoinTeams(DS,16,1);
   GetStudentTeamLeader(DS,11,&leader);
   TeamFight(DS,17,17,8);
   AddStudent(DS,34,1,129);
   AddStudent(DS,75,17,91);
   GetStudentTeamLeader(DS,71,&leader); // 760
   AddStudent(DS,22,20,272);
   GetStudentTeamLeader(DS,76,&leader);
   RemoveStudent(DS,51);
   RemoveStudent(DS,56);
   TeamFight(DS,2,11,7);
   AddStudent(DS,47,12,202);
   TeamFight(DS,15,11,0);
   GetStudentTeamLeader(DS,57,&leader);
   GetStudentTeamLeader(DS,46,&leader);
   GetStudentTeamLeader(DS,84,&leader); // 770
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,23,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,17,1,10);
   TeamFight(DS,14,19,9);
   GetNumOfWins(DS,24,&number_of_wins);
   TeamFight(DS,23,3,9);
   TeamFight(DS,16,4,-1);
   TeamFight(DS,8,7,10);
   GetNumOfWins(DS,7,&number_of_wins); // 780
   TeamFight(DS,12,9,-1);
   AddStudent(DS,75,23,281);
   GetNumOfWins(DS,5,&number_of_wins);
   RemoveStudent(DS,95);
   AddStudent(DS,61,3,107);
   AddStudent(DS,95,2,266);
   TeamFight(DS,3,17,5);
   AddStudent(DS,54,9,-1);
   AddStudent(DS,16,5,185);
   GetNumOfWins(DS,19,&number_of_wins); // 790
   AddStudent(DS,31,19,166);
   RemoveStudent(DS,7);
   TeamFight(DS,17,19,12);
   GetNumOfWins(DS,8,&number_of_wins);
   GetStudentTeamLeader(DS,82,&leader);
   GetStudentTeamLeader(DS,23,&leader);
   JoinTeams(DS,2,1);
   RemoveStudent(DS,22);
   AddStudent(DS,88,9,78);
   GetStudentTeamLeader(DS,82,&leader); // 800
   TeamFight(DS,13,13,5);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,23,15,1);
   RemoveStudent(DS,82);
   AddStudent(DS,47,3,194);
   RemoveStudent(DS,17);
   JoinTeams(DS,10,15);
   GetNumOfWins(DS,24,&number_of_wins);
   JoinTeams(DS,19,8);
   AddStudent(DS,27,5,245); // 810
   TeamFight(DS,6,19,10);
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,7,&leader);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,88,1,153);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins);
   RemoveStudent(DS,21);
   TeamFight(DS,4,6,8); // 820
   AddStudent(DS,82,6,297);
   AddStudent(DS,36,5,125);
   GetNumOfWins(DS,8,&number_of_wins);
   JoinTeams(DS,2,2);
   GetStudentTeamLeader(DS,26,&leader);
   TeamFight(DS,8,12,3);
   GetNumOfWins(DS,10,&number_of_wins);
   GetStudentTeamLeader(DS,35,&leader);
   TeamFight(DS,9,24,3);
   AddStudent(DS,70,16,71); // 830
   GetStudentTeamLeader(DS,25,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,60,&leader);
   TeamFight(DS,7,4,10);
   TeamFight(DS,10,19,-1);
   AddStudent(DS,69,11,22);
   TeamFight(DS,11,4,12);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,46,8,161);
   AddStudent(DS,9,18,87); // 840
   TeamFight(DS,23,22,9);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,67,21,22);
   AddStudent(DS,71,7,242);
   AddStudent(DS,1,7,187);
   AddStudent(DS,22,21,169);
   AddStudent(DS,59,13,115);
   JoinTeams(DS,2,24);
   GetNumOfWins(DS,10,&number_of_wins);
   GetStudentTeamLeader(DS,2,&leader); // 850
   TeamFight(DS,11,23,2);
   AddStudent(DS,39,24,46);
   AddStudent(DS,9,12,86);
   GetStudentTeamLeader(DS,21,&leader);
   TeamFight(DS,18,19,6);
   JoinTeams(DS,4,17);
   GetNumOfWins(DS,19,&number_of_wins);
   TeamFight(DS,19,19,9);
   RemoveStudent(DS,23);
   AddStudent(DS,58,2,261); // 860
   TeamFight(DS,19,10,3);
   JoinTeams(DS,18,13);
   AddStudent(DS,52,19,0);
   GetNumOfWins(DS,4,&number_of_wins);
   GetStudentTeamLeader(DS,61,&leader);
   AddStudent(DS,89,12,171);
   GetStudentTeamLeader(DS,36,&leader);
   JoinTeams(DS,1,21);
   GetStudentTeamLeader(DS,69,&leader);
   RemoveStudent(DS,60); // 870
   AddStudent(DS,92,8,143);
   GetStudentTeamLeader(DS,47,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,4,3,173);
   RemoveStudent(DS,28);
   RemoveStudent(DS,87);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,29,10,45);
   GetStudentTeamLeader(DS,91,&leader);
   TeamFight(DS,15,23,7); // 880
   TeamFight(DS,5,21,14);
   AddStudent(DS,70,18,117);
   TeamFight(DS,18,20,9);
   GetNumOfWins(DS,16,&number_of_wins);
   GetStudentTeamLeader(DS,7,&leader);
   GetNumOfWins(DS,23,&number_of_wins);
   GetStudentTeamLeader(DS,94,&leader);
   GetStudentTeamLeader(DS,84,&leader);
   RemoveStudent(DS,56);
   TeamFight(DS,4,9,10); // 890
   AddStudent(DS,51,12,149);
   TeamFight(DS,14,20,11);
   AddStudent(DS,43,18,193);
   RemoveStudent(DS,52);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,12,14,4);
   JoinTeams(DS,19,2);
   RemoveStudent(DS,50);
   AddStudent(DS,11,21,258);
   AddStudent(DS,67,9,63); // 900
   AddStudent(DS,28,24,293);
   GetStudentTeamLeader(DS,58,&leader);
   TeamFight(DS,17,24,8);
   RemoveStudent(DS,91);
   AddStudent(DS,26,21,100);
   AddStudent(DS,59,22,73);
   RemoveStudent(DS,21);
   RemoveStudent(DS,34);
   GetStudentTeamLeader(DS,89,&leader);
   TeamFight(DS,6,18,-1); // 910
   RemoveStudent(DS,76);
   AddStudent(DS,79,16,203);
   TeamFight(DS,23,10,11);
   AddStudent(DS,84,14,82);
   TeamFight(DS,3,11,1);
   TeamFight(DS,6,18,-1);
   GetStudentTeamLeader(DS,71,&leader);
   RemoveStudent(DS,46);
   AddStudent(DS,73,6,239);
   TeamFight(DS,8,9,12); // 920
   GetStudentTeamLeader(DS,31,&leader);
   GetStudentTeamLeader(DS,59,&leader);
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,85,&leader);
   AddStudent(DS,5,22,129);
   AddStudent(DS,87,6,257);
   TeamFight(DS,24,3,7);
   GetStudentTeamLeader(DS,50,&leader);
   AddStudent(DS,69,21,236);
   GetNumOfWins(DS,15,&number_of_wins); // 930
   TeamFight(DS,10,20,10);
   GetStudentTeamLeader(DS,40,&leader);
   TeamFight(DS,23,4,5);
   GetStudentTeamLeader(DS,59,&leader);
   GetStudentTeamLeader(DS,4,&leader);
   AddStudent(DS,58,22,175);
   AddStudent(DS,9,2,165);
   AddStudent(DS,26,20,185);
   TeamFight(DS,22,19,10);
   GetNumOfWins(DS,8,&number_of_wins); // 940
   GetStudentTeamLeader(DS,57,&leader);
   JoinTeams(DS,15,10);
   AddStudent(DS,56,1,132);
   RemoveStudent(DS,42);
   TeamFight(DS,8,9,4);
   TeamFight(DS,23,10,3);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,3,2,6);
   RemoveStudent(DS,30);
   RemoveStudent(DS,56); // 950
   GetStudentTeamLeader(DS,20,&leader);
   JoinTeams(DS,16,12);
   JoinTeams(DS,9,19);
   GetNumOfWins(DS,20,&number_of_wins);
   AddStudent(DS,12,6,259);
   AddStudent(DS,60,20,53);
   AddStudent(DS,23,22,125);
   AddStudent(DS,32,10,137);
   GetStudentTeamLeader(DS,22,&leader);
   GetNumOfWins(DS,16,&number_of_wins); // 960
   TeamFight(DS,22,2,2);
   GetStudentTeamLeader(DS,44,&leader);
   TeamFight(DS,22,11,16);
   TeamFight(DS,21,24,0);
   GetNumOfWins(DS,24,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,4,8,6);
   TeamFight(DS,20,22,15);
   GetNumOfWins(DS,23,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins); // 970
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,15,5,3);
   TeamFight(DS,3,16,10);
   AddStudent(DS,12,1,88);
   RemoveStudent(DS,45);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,17,16,11);
   AddStudent(DS,34,3,170);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,54,2,227); // 980
   GetNumOfWins(DS,14,&number_of_wins);
   RemoveStudent(DS,35);
   TeamFight(DS,12,20,12);
   TeamFight(DS,16,6,14);
   GetStudentTeamLeader(DS,42,&leader);
   AddStudent(DS,8,13,110);
   RemoveStudent(DS,15);
   TeamFight(DS,19,14,10);
   JoinTeams(DS,2,3);
   RemoveStudent(DS,44); // 990
   AddStudent(DS,49,15,148);
   RemoveStudent(DS,74);
   AddStudent(DS,63,15,81);
   GetStudentTeamLeader(DS,83,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   GetStudentTeamLeader(DS,4,&leader);
   TeamFight(DS,23,13,7);
   RemoveStudent(DS,91);
   AddStudent(DS,27,12,268);
   RemoveStudent(DS,63); // 1000
   TeamFight(DS,10,12,10);
   AddStudent(DS,71,15,233);
   AddStudent(DS,94,18,172);
   AddStudent(DS,93,19,184);
   JoinTeams(DS,15,22);
   RemoveStudent(DS,88);
   GetNumOfWins(DS,3,&number_of_wins);
   RemoveStudent(DS,35);
   RemoveStudent(DS,13);
   GetStudentTeamLeader(DS,81,&leader); // 1010
   TeamFight(DS,18,15,7);
   GetNumOfWins(DS,2,&number_of_wins);
   GetStudentTeamLeader(DS,48,&leader);
   TeamFight(DS,15,22,8);
   AddStudent(DS,49,9,95);
   GetNumOfWins(DS,10,&number_of_wins);
   RemoveStudent(DS,36);
   RemoveStudent(DS,86);
   TeamFight(DS,21,23,9);
   RemoveStudent(DS,39); // 1020
   AddStudent(DS,56,23,37);
   TeamFight(DS,6,20,8);
   GetNumOfWins(DS,4,&number_of_wins);
   RemoveStudent(DS,23);
   GetNumOfWins(DS,1,&number_of_wins);
   RemoveStudent(DS,26);
   TeamFight(DS,9,3,0);
   GetStudentTeamLeader(DS,86,&leader);
   TeamFight(DS,3,19,1);
   TeamFight(DS,20,10,0); // 1030
   RemoveStudent(DS,87);
   GetStudentTeamLeader(DS,52,&leader);
   GetStudentTeamLeader(DS,43,&leader);
   TeamFight(DS,22,21,8);
   TeamFight(DS,3,1,13);
   AddStudent(DS,46,2,72);
   TeamFight(DS,19,21,-1);
   RemoveStudent(DS,80);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,19,8,169); // 1040
   AddStudent(DS,50,17,69);
   TeamFight(DS,9,5,2);
   TeamFight(DS,13,10,2);
   GetStudentTeamLeader(DS,4,&leader);
   AddStudent(DS,94,18,204);
   TeamFight(DS,8,22,13);
   AddStudent(DS,85,9,274);
   RemoveStudent(DS,6);
   GetNumOfWins(DS,10,&number_of_wins);
   JoinTeams(DS,7,6); // 1050
   GetStudentTeamLeader(DS,42,&leader);
   AddStudent(DS,76,13,103);
   AddStudent(DS,56,13,77);
   TeamFight(DS,20,9,9);
   AddStudent(DS,73,17,171);
   JoinTeams(DS,23,4);
   TeamFight(DS,9,11,6);
   TeamFight(DS,19,2,9);
   RemoveStudent(DS,47);
   GetStudentTeamLeader(DS,15,&leader); // 1060
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,54,18,111);
   RemoveStudent(DS,75);
   JoinTeams(DS,20,4);
   TeamFight(DS,9,21,5);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,10,6,0);
   TeamFight(DS,10,20,14);
   RemoveStudent(DS,25);
   TeamFight(DS,3,1,0); // 1070
   GetNumOfWins(DS,10,&number_of_wins);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,80,20,252);
   GetStudentTeamLeader(DS,93,&leader);
   GetStudentTeamLeader(DS,64,&leader);
   GetStudentTeamLeader(DS,46,&leader);
   TeamFight(DS,24,8,-1);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,1,16,3); // 1080
   RemoveStudent(DS,24);
   AddStudent(DS,61,14,153);
   AddStudent(DS,67,2,54);
   TeamFight(DS,10,12,5);
   TeamFight(DS,16,15,14);
   TeamFight(DS,20,19,7);
   TeamFight(DS,22,24,6);
   GetStudentTeamLeader(DS,11,&leader);
   RemoveStudent(DS,56);
   GetNumOfWins(DS,1,&number_of_wins); // 1090
   TeamFight(DS,10,18,-1);
   AddStudent(DS,36,13,103);
   JoinTeams(DS,11,23);
   TeamFight(DS,1,24,11);
   GetStudentTeamLeader(DS,73,&leader);
   TeamFight(DS,5,20,13);
   JoinTeams(DS,9,15);
   TeamFight(DS,12,24,1);
   AddStudent(DS,3,17,57);
   GetNumOfWins(DS,9,&number_of_wins); // 1100
   TeamFight(DS,2,11,6);
   TeamFight(DS,8,9,12);
   TeamFight(DS,4,7,2);
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,11,10,8);
   GetStudentTeamLeader(DS,34,&leader);
   GetStudentTeamLeader(DS,6,&leader);
   AddStudent(DS,71,2,68);
   AddStudent(DS,-1,4,273);
   TeamFight(DS,21,6,14); // 1110
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,16,3,9);
   RemoveStudent(DS,24);
   AddStudent(DS,90,22,168);
   TeamFight(DS,2,23,6);
   GetStudentTeamLeader(DS,91,&leader);
   TeamFight(DS,18,3,14);
   AddStudent(DS,39,10,72);
   TeamFight(DS,11,13,9);
   TeamFight(DS,19,10,13); // 1120
   GetStudentTeamLeader(DS,42,&leader);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,17,22,4);
   GetStudentTeamLeader(DS,82,&leader);
   GetNumOfWins(DS,11,&number_of_wins);
   GetStudentTeamLeader(DS,85,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,93,4,149);
   AddStudent(DS,11,13,132);
   GetNumOfWins(DS,17,&number_of_wins); // 1130
   AddStudent(DS,17,17,194);
   GetNumOfWins(DS,21,&number_of_wins);
   TeamFight(DS,6,23,9);
   GetNumOfWins(DS,23,&number_of_wins);
   GetStudentTeamLeader(DS,69,&leader);
   AddStudent(DS,23,9,263);
   AddStudent(DS,73,15,130);
   AddStudent(DS,72,6,281);
   GetStudentTeamLeader(DS,64,&leader);
   AddStudent(DS,83,9,198); // 1140
   TeamFight(DS,22,16,6);
   AddStudent(DS,57,5,101);
   TeamFight(DS,21,23,12);
   AddStudent(DS,57,9,97);
   TeamFight(DS,14,13,1);
   AddStudent(DS,81,3,110);
   AddStudent(DS,84,14,124);
   AddStudent(DS,21,19,189);
   TeamFight(DS,4,10,1);
   RemoveStudent(DS,34); // 1150
   JoinTeams(DS,12,23);
   GetNumOfWins(DS,10,&number_of_wins);
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,24,3,8);
   JoinTeams(DS,7,5);
   JoinTeams(DS,10,1);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,14,13,10);
   GetStudentTeamLeader(DS,75,&leader);
   GetNumOfWins(DS,14,&number_of_wins); // 1160
   TeamFight(DS,23,13,14);
   RemoveStudent(DS,50);
   TeamFight(DS,17,2,11);
   AddStudent(DS,8,4,254);
   AddStudent(DS,30,12,299);
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,8,5,8);
   RemoveStudent(DS,31);
   AddStudent(DS,-1,8,150);
   AddStudent(DS,-1,14,131); // 1170
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,10,21,12);
   GetStudentTeamLeader(DS,46,&leader);
   TeamFight(DS,18,12,1);
   TeamFight(DS,5,14,4);
   TeamFight(DS,20,3,4);
   TeamFight(DS,20,5,7);
   AddStudent(DS,49,12,264);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,41,10,15); // 1180
   AddStudent(DS,94,4,73);
   AddStudent(DS,49,10,129);
   GetNumOfWins(DS,24,&number_of_wins);
   RemoveStudent(DS,3);
   RemoveStudent(DS,70);
   AddStudent(DS,8,14,227);
   TeamFight(DS,15,18,-1);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,84,2,250);
   AddStudent(DS,25,2,74); // 1190
   GetNumOfWins(DS,22,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,24,23,0);
   RemoveStudent(DS,33);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,17,20,13);
   GetStudentTeamLeader(DS,43,&leader);
   GetStudentTeamLeader(DS,31,&leader);
   RemoveStudent(DS,93);
   TeamFight(DS,16,20,5); // 1200
   TeamFight(DS,3,11,3);
   AddStudent(DS,44,20,7);
   TeamFight(DS,19,12,-1);
   GetNumOfWins(DS,19,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,79,&leader);
   AddStudent(DS,43,11,237);
   TeamFight(DS,16,16,9);
   AddStudent(DS,36,11,142);
   TeamFight(DS,7,6,5); // 1210
   GetNumOfWins(DS,24,&number_of_wins);
   AddStudent(DS,91,12,75);
   GetNumOfWins(DS,2,&number_of_wins);
   GetStudentTeamLeader(DS,9,&leader);
   GetStudentTeamLeader(DS,44,&leader);
   AddStudent(DS,25,22,138);
   GetNumOfWins(DS,9,&number_of_wins);
   JoinTeams(DS,15,22);
   RemoveStudent(DS,3);
   AddStudent(DS,77,20,193); // 1220
   TeamFight(DS,18,11,1);
   TeamFight(DS,12,11,10);
   GetStudentTeamLeader(DS,0,&leader);
   AddStudent(DS,90,7,231);
   RemoveStudent(DS,21);
   TeamFight(DS,20,6,4);
   AddStudent(DS,58,17,273);
   TeamFight(DS,9,3,11);
   JoinTeams(DS,17,23);
   AddStudent(DS,55,14,281); // 1230
   TeamFight(DS,19,5,12);
   GetStudentTeamLeader(DS,71,&leader);
   AddStudent(DS,30,19,222);
   AddStudent(DS,67,24,183);
   AddStudent(DS,40,4,192);
   GetStudentTeamLeader(DS,13,&leader);
   RemoveStudent(DS,5);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,3,&number_of_wins); // 1240
   GetNumOfWins(DS,11,&number_of_wins);
   GetStudentTeamLeader(DS,89,&leader);
   GetNumOfWins(DS,21,&number_of_wins);
   GetStudentTeamLeader(DS,55,&leader);
   AddStudent(DS,86,10,130);
   AddStudent(DS,55,23,120);
   AddStudent(DS,61,16,48);
   AddStudent(DS,91,21,87);
   RemoveStudent(DS,86);
   JoinTeams(DS,18,1); // 1250
   RemoveStudent(DS,38);
   AddStudent(DS,71,17,144);
   TeamFight(DS,16,21,10);
   TeamFight(DS,9,8,14);
   TeamFight(DS,13,13,4);
   GetNumOfWins(DS,21,&number_of_wins);
   TeamFight(DS,14,12,10);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,33,10,223);
   RemoveStudent(DS,65); // 1260
   GetStudentTeamLeader(DS,3,&leader);
   AddStudent(DS,76,8,105);
   TeamFight(DS,7,6,9);
   RemoveStudent(DS,82);
   AddStudent(DS,82,16,76);
   AddStudent(DS,29,4,213);
   RemoveStudent(DS,83);
   AddStudent(DS,23,14,134);
   AddStudent(DS,53,12,237);
   TeamFight(DS,6,7,3); // 1270
   AddStudent(DS,93,18,89);
   AddStudent(DS,64,20,234);
   AddStudent(DS,86,5,297);
   AddStudent(DS,27,1,164);
   AddStudent(DS,83,1,240);
   TeamFight(DS,10,13,0);
   TeamFight(DS,2,22,-1);
   AddStudent(DS,89,3,219);
   TeamFight(DS,7,14,2);
   AddStudent(DS,92,20,272); // 1280
   JoinTeams(DS,22,3);
   TeamFight(DS,23,5,6);
   TeamFight(DS,6,1,6);
   AddStudent(DS,71,21,9);
   GetNumOfWins(DS,24,&number_of_wins);
   TeamFight(DS,6,12,6);
   AddStudent(DS,58,6,201);
   RemoveStudent(DS,28);
   RemoveStudent(DS,32);
   TeamFight(DS,21,10,13); // 1290
   GetStudentTeamLeader(DS,22,&leader);
   TeamFight(DS,11,4,8);
   AddStudent(DS,47,23,135);
   TeamFight(DS,24,20,1);
   TeamFight(DS,22,9,11);
   RemoveStudent(DS,0);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,83,17,252);
   RemoveStudent(DS,48);
   RemoveStudent(DS,41); // 1300
   JoinTeams(DS,2,6);
   TeamFight(DS,16,6,8);
   AddStudent(DS,41,10,154);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,55,10,113);
   AddStudent(DS,16,22,297);
   RemoveStudent(DS,90);
   GetNumOfWins(DS,15,&number_of_wins);
   RemoveStudent(DS,40);
   AddStudent(DS,32,12,224); // 1310
   TeamFight(DS,24,23,4);
   JoinTeams(DS,9,16);
   JoinTeams(DS,12,1);
   GetStudentTeamLeader(DS,88,&leader);
   GetStudentTeamLeader(DS,71,&leader);
   AddStudent(DS,71,2,161);
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,14,10,9);
   JoinTeams(DS,10,20);
   JoinTeams(DS,14,12); // 1320
   RemoveStudent(DS,37);
   AddStudent(DS,11,20,179);
   GetStudentTeamLeader(DS,0,&leader);
   RemoveStudent(DS,82);
   AddStudent(DS,10,8,240);
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,11,&leader);
   JoinTeams(DS,9,18);
   TeamFight(DS,10,20,6); // 1330
   AddStudent(DS,89,1,213);
   AddStudent(DS,9,12,129);
   RemoveStudent(DS,64);
   RemoveStudent(DS,20);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   JoinTeams(DS,11,1);
   AddStudent(DS,78,4,99);
   RemoveStudent(DS,29);
   AddStudent(DS,10,4,72); // 1340
   GetNumOfWins(DS,22,&number_of_wins);
   RemoveStudent(DS,67);
   TeamFight(DS,16,23,6);
   RemoveStudent(DS,38);
   AddStudent(DS,80,21,264);
   TeamFight(DS,21,24,-1);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,20,12,221);
   TeamFight(DS,1,23,11);
   GetNumOfWins(DS,10,&number_of_wins); // 1350
   RemoveStudent(DS,45);
   TeamFight(DS,1,20,3);
   GetNumOfWins(DS,9,&number_of_wins);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,83,7,199);
   AddStudent(DS,39,5,284);
   RemoveStudent(DS,21);
   AddStudent(DS,84,5,197);
   TeamFight(DS,5,13,9);
   AddStudent(DS,6,16,25); // 1360
   JoinTeams(DS,19,9);
   AddStudent(DS,93,23,154);
   JoinTeams(DS,9,1);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,55,1,212);
   GetStudentTeamLeader(DS,61,&leader);
   RemoveStudent(DS,25);
   RemoveStudent(DS,61);
   GetStudentTeamLeader(DS,45,&leader);
   TeamFight(DS,23,13,6); // 1370
   AddStudent(DS,12,12,95);
   GetStudentTeamLeader(DS,15,&leader);
   GetNumOfWins(DS,20,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,16,&leader);
   AddStudent(DS,8,13,173);
   AddStudent(DS,0,18,32);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,24,11,14);
   GetNumOfWins(DS,3,&number_of_wins); // 1380
   AddStudent(DS,60,17,158);
   GetStudentTeamLeader(DS,18,&leader);
   GetStudentTeamLeader(DS,40,&leader);
   GetStudentTeamLeader(DS,11,&leader);
   JoinTeams(DS,9,2);
   RemoveStudent(DS,12);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,14,19,-1);
   AddStudent(DS,44,14,168);
   RemoveStudent(DS,72); // 1390
   GetStudentTeamLeader(DS,22,&leader);
   JoinTeams(DS,2,15);
   GetNumOfWins(DS,14,&number_of_wins);
   JoinTeams(DS,14,8);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,75,9,36);
   GetStudentTeamLeader(DS,94,&leader);
   AddStudent(DS,45,19,187);
   AddStudent(DS,19,16,217);
   TeamFight(DS,21,19,3); // 1400
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,61,&leader);
   JoinTeams(DS,7,2);
   TeamFight(DS,14,2,10);
   AddStudent(DS,2,13,278);
   AddStudent(DS,82,12,64);
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,64,&leader);
   TeamFight(DS,17,16,6);
   GetNumOfWins(DS,13,&number_of_wins); // 1410
   GetStudentTeamLeader(DS,60,&leader);
   GetStudentTeamLeader(DS,0,&leader);
   GetStudentTeamLeader(DS,63,&leader);
   GetStudentTeamLeader(DS,13,&leader);
   AddStudent(DS,21,14,214);
   AddStudent(DS,28,24,44);
   GetStudentTeamLeader(DS,71,&leader);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,14,15,3);
   GetNumOfWins(DS,13,&number_of_wins); // 1420
   RemoveStudent(DS,5);
   TeamFight(DS,19,13,5);
   GetStudentTeamLeader(DS,36,&leader);
   JoinTeams(DS,4,23);
   GetStudentTeamLeader(DS,35,&leader);
   TeamFight(DS,6,3,13);
   TeamFight(DS,7,21,3);
   GetNumOfWins(DS,21,&number_of_wins);
   TeamFight(DS,12,5,10);
   GetStudentTeamLeader(DS,0,&leader); // 1430
   GetStudentTeamLeader(DS,51,&leader);
   AddStudent(DS,16,11,259);
   GetNumOfWins(DS,21,&number_of_wins);
   TeamFight(DS,13,10,6);
   AddStudent(DS,83,7,192);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,19,11,13);
   JoinTeams(DS,19,6); // 1440
   AddStudent(DS,17,4,263);
   AddStudent(DS,-1,21,240);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,70,13,196);
   GetNumOfWins(DS,22,&number_of_wins);
   RemoveStudent(DS,63);
   AddStudent(DS,46,10,248);
   TeamFight(DS,24,19,12);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,4,4,6); // 1450
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,6,14,12);
   TeamFight(DS,19,18,12);
   TeamFight(DS,9,12,9);
   TeamFight(DS,4,15,7);
   AddStudent(DS,59,24,117);
   TeamFight(DS,8,5,1);
   AddStudent(DS,2,15,180);
   GetStudentTeamLeader(DS,79,&leader);
   GetStudentTeamLeader(DS,77,&leader); // 1460
   TeamFight(DS,19,3,2);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,73,3,247);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,86,&leader);
   AddStudent(DS,70,14,296);
   GetStudentTeamLeader(DS,66,&leader);
   TeamFight(DS,19,3,1);
   JoinTeams(DS,8,5); // 1470
   GetNumOfWins(DS,5,&number_of_wins);
   RemoveStudent(DS,69);
   AddStudent(DS,42,18,30);
   RemoveStudent(DS,43);
   RemoveStudent(DS,8);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,10,2,3);
   AddStudent(DS,47,17,175);
   GetStudentTeamLeader(DS,31,&leader);
   AddStudent(DS,39,8,115); // 1480
   TeamFight(DS,5,5,1);
   GetStudentTeamLeader(DS,22,&leader);
   TeamFight(DS,21,10,13);
   GetStudentTeamLeader(DS,35,&leader);
   RemoveStudent(DS,37);
   TeamFight(DS,20,13,13);
   AddStudent(DS,65,4,228);
   GetNumOfWins(DS,16,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,27,3,233); // 1490
   TeamFight(DS,12,7,12);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,89,9,68);
   TeamFight(DS,3,13,10);
   TeamFight(DS,10,2,10);
   TeamFight(DS,5,2,14);
   GetStudentTeamLeader(DS,17,&leader);
   AddStudent(DS,56,16,171);
   GetStudentTeamLeader(DS,42,&leader);
   GetStudentTeamLeader(DS,43,&leader); // 1500
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,6,17,0);
   GetStudentTeamLeader(DS,0,&leader);
   AddStudent(DS,32,4,151);
   JoinTeams(DS,14,15);
   RemoveStudent(DS,20);
   TeamFight(DS,21,6,9);
   TeamFight(DS,23,17,6);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,16,&leader); // 1510
   GetStudentTeamLeader(DS,93,&leader);
   GetNumOfWins(DS,5,&number_of_wins);
   RemoveStudent(DS,18);
   GetStudentTeamLeader(DS,53,&leader);
   TeamFight(DS,7,3,3);
   RemoveStudent(DS,11);
   TeamFight(DS,1,3,13);
   RemoveStudent(DS,92);
   AddStudent(DS,28,19,240);
   GetStudentTeamLeader(DS,69,&leader); // 1520
   TeamFight(DS,16,19,13);
   AddStudent(DS,62,7,121);
   AddStudent(DS,67,8,184);
   AddStudent(DS,35,15,18);
   RemoveStudent(DS,6);
   AddStudent(DS,34,20,220);
   AddStudent(DS,20,7,47);
   TeamFight(DS,3,9,13);
   GetNumOfWins(DS,11,&number_of_wins);
   JoinTeams(DS,13,21); // 1530
   TeamFight(DS,3,10,2);
   TeamFight(DS,23,4,2);
   JoinTeams(DS,7,2);
   AddStudent(DS,7,21,181);
   TeamFight(DS,17,5,11);
   JoinTeams(DS,13,19);
   RemoveStudent(DS,66);
   JoinTeams(DS,14,13);
   AddStudent(DS,65,5,252);
   AddStudent(DS,47,7,142); // 1540
   GetNumOfWins(DS,9,&number_of_wins);
   JoinTeams(DS,19,19);
   GetStudentTeamLeader(DS,48,&leader);
   TeamFight(DS,23,9,8);
   AddStudent(DS,55,20,55);
   JoinTeams(DS,15,10);
   TeamFight(DS,11,4,11);
   GetNumOfWins(DS,19,&number_of_wins);
   TeamFight(DS,1,7,11);
   GetStudentTeamLeader(DS,15,&leader); // 1550
   GetNumOfWins(DS,1,&number_of_wins);
   GetStudentTeamLeader(DS,25,&leader);
   GetNumOfWins(DS,23,&number_of_wins);
   GetStudentTeamLeader(DS,25,&leader);
   TeamFight(DS,20,22,0);
   GetNumOfWins(DS,9,&number_of_wins);
   JoinTeams(DS,8,15);
   TeamFight(DS,7,1,0);
   AddStudent(DS,1,22,43);
   GetStudentTeamLeader(DS,8,&leader); // 1560
   AddStudent(DS,11,21,162);
   AddStudent(DS,66,22,231);
   GetStudentTeamLeader(DS,42,&leader);
   GetNumOfWins(DS,20,&number_of_wins);
   GetStudentTeamLeader(DS,26,&leader);
   GetStudentTeamLeader(DS,27,&leader);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,79,20,120);
   TeamFight(DS,6,10,8);
   TeamFight(DS,11,19,12); // 1570
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,4,&leader);
   TeamFight(DS,1,1,0);
   AddStudent(DS,45,13,46);
   TeamFight(DS,8,11,8);
   AddStudent(DS,25,15,84);
   GetNumOfWins(DS,19,&number_of_wins);
   TeamFight(DS,18,9,10);
   JoinTeams(DS,1,9);
   TeamFight(DS,24,23,5); // 1580
   TeamFight(DS,23,10,6);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,21,16,13);
   RemoveStudent(DS,45);
   TeamFight(DS,22,19,3);
   JoinTeams(DS,20,11);
   RemoveStudent(DS,95);
   TeamFight(DS,10,20,6);
   GetStudentTeamLeader(DS,13,&leader);
   RemoveStudent(DS,10); // 1590
   TeamFight(DS,1,5,-1);
   GetNumOfWins(DS,16,&number_of_wins);
   RemoveStudent(DS,11);
   RemoveStudent(DS,12);
   AddStudent(DS,86,5,6);
   TeamFight(DS,11,20,9);
   AddStudent(DS,82,12,46);
   RemoveStudent(DS,25);
   AddStudent(DS,48,6,241);
   TeamFight(DS,2,5,5); // 1600
   AddStudent(DS,13,4,157);
   JoinTeams(DS,19,18);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,58,9,241);
   AddStudent(DS,6,11,164);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,27,16,272);
   AddStudent(DS,55,24,53);
   GetStudentTeamLeader(DS,11,&leader); // 1610
   GetStudentTeamLeader(DS,86,&leader);
   AddStudent(DS,70,2,291);
   TeamFight(DS,10,24,4);
   AddStudent(DS,50,19,135);
   RemoveStudent(DS,48);
   TeamFight(DS,6,3,8);
   TeamFight(DS,6,23,5);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,12,15,-1);
   TeamFight(DS,16,10,9); // 1620
   GetStudentTeamLeader(DS,3,&leader);
   TeamFight(DS,5,2,10);
   AddStudent(DS,81,9,163);
   TeamFight(DS,5,8,6);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,11,15,-1);
   RemoveStudent(DS,56);
   TeamFight(DS,23,8,5);
   TeamFight(DS,11,17,3);
   AddStudent(DS,78,24,76); // 1630
   GetStudentTeamLeader(DS,-1,&leader);
   TeamFight(DS,8,2,11);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,15,10,8);
   TeamFight(DS,8,2,11);
   TeamFight(DS,4,8,1);
   AddStudent(DS,24,11,294);
   GetStudentTeamLeader(DS,60,&leader);
   AddStudent(DS,23,12,227);
   AddStudent(DS,17,18,213); // 1640
   AddStudent(DS,59,12,96);
   GetStudentTeamLeader(DS,65,&leader);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,19,1,5);
   AddStudent(DS,75,8,251);
   TeamFight(DS,10,17,5);
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,19,&number_of_wins);
   TeamFight(DS,18,11,7);
   GetNumOfWins(DS,5,&number_of_wins); // 1650
   TeamFight(DS,6,13,12);
   TeamFight(DS,20,22,13);
   JoinTeams(DS,16,2);
   AddStudent(DS,47,18,72);
   RemoveStudent(DS,84);
   AddStudent(DS,46,12,4);
   GetStudentTeamLeader(DS,69,&leader);
   AddStudent(DS,79,20,214);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,57,11,231); // 1660
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,13,9,4);
   TeamFight(DS,6,14,7);
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,1,22,14);
   RemoveStudent(DS,5);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,21,&number_of_wins);
   AddStudent(DS,93,22,-1); // 1670
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,17,15,11);
   TeamFight(DS,12,14,-1);
   TeamFight(DS,5,4,2);
   GetNumOfWins(DS,13,&number_of_wins);
   RemoveStudent(DS,2);
   TeamFight(DS,18,9,12);
   GetStudentTeamLeader(DS,60,&leader);
   JoinTeams(DS,13,8);
   RemoveStudent(DS,18); // 1680
   TeamFight(DS,18,21,13);
   TeamFight(DS,4,10,14);
   TeamFight(DS,20,10,12);
   AddStudent(DS,37,10,296);
   AddStudent(DS,21,20,220);
   TeamFight(DS,5,1,6);
   AddStudent(DS,47,23,137);
   GetNumOfWins(DS,24,&number_of_wins);
   AddStudent(DS,9,8,286);
   GetNumOfWins(DS,4,&number_of_wins); // 1690
   AddStudent(DS,27,3,262);
   TeamFight(DS,13,13,11);
   GetNumOfWins(DS,6,&number_of_wins);
   RemoveStudent(DS,2);
   TeamFight(DS,2,4,-1);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,32,4,107);
   RemoveStudent(DS,21);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,7,1,7); // 1700
   AddStudent(DS,21,13,256);
   TeamFight(DS,18,18,9);
   TeamFight(DS,12,13,10);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,23,24,6);
   RemoveStudent(DS,52);
   TeamFight(DS,19,7,8);
   GetNumOfWins(DS,16,&number_of_wins);
   RemoveStudent(DS,78);
   GetNumOfWins(DS,19,&number_of_wins); // 1710
   AddStudent(DS,31,23,242);
   JoinTeams(DS,24,13);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,58,&leader);
   TeamFight(DS,18,12,2);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,50,14,17);
   JoinTeams(DS,1,19);
   AddStudent(DS,48,15,111);
   TeamFight(DS,22,6,5); // 1720
   AddStudent(DS,17,16,113);
   TeamFight(DS,24,4,2);
   RemoveStudent(DS,29);
   GetStudentTeamLeader(DS,82,&leader);
   TeamFight(DS,20,14,10);
   AddStudent(DS,3,1,201);
   TeamFight(DS,12,16,4);
   AddStudent(DS,43,18,101);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins); // 1730
   TeamFight(DS,20,19,10);
   AddStudent(DS,95,6,228);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,18,5,2);
   AddStudent(DS,1,16,88);
   GetStudentTeamLeader(DS,74,&leader);
   GetStudentTeamLeader(DS,93,&leader);
   TeamFight(DS,4,11,1);
   GetNumOfWins(DS,9,&number_of_wins);
   GetNumOfWins(DS,19,&number_of_wins); // 1740
   RemoveStudent(DS,61);
   TeamFight(DS,20,13,7);
   AddStudent(DS,67,6,270);
   TeamFight(DS,16,22,2);
   GetStudentTeamLeader(DS,45,&leader);
   AddStudent(DS,28,10,50);
   RemoveStudent(DS,69);
   AddStudent(DS,1,3,189);
   GetStudentTeamLeader(DS,73,&leader);
   GetStudentTeamLeader(DS,43,&leader); // 1750
   TeamFight(DS,9,21,10);
   AddStudent(DS,90,9,232);
   AddStudent(DS,93,15,244);
   AddStudent(DS,85,14,62);
   TeamFight(DS,1,1,9);
   AddStudent(DS,28,6,275);
   AddStudent(DS,74,13,139);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,37,12,107);
   JoinTeams(DS,5,6); // 1760
   RemoveStudent(DS,9);
   AddStudent(DS,3,6,276);
   TeamFight(DS,17,9,9);
   AddStudent(DS,58,12,5);
   GetStudentTeamLeader(DS,17,&leader);
   AddStudent(DS,66,3,160);
   GetStudentTeamLeader(DS,55,&leader);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,70,15,99);
   JoinTeams(DS,7,10); // 1770
   GetStudentTeamLeader(DS,52,&leader);
   TeamFight(DS,24,19,14);
   AddStudent(DS,87,23,294);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,57,16,195);
   TeamFight(DS,13,2,11);
   GetNumOfWins(DS,7,&number_of_wins);
   RemoveStudent(DS,42);
   TeamFight(DS,1,5,12);
   TeamFight(DS,21,20,11); // 1780
   AddStudent(DS,95,16,240);
   TeamFight(DS,20,5,10);
   JoinTeams(DS,3,18);
   TeamFight(DS,6,4,1);
   GetStudentTeamLeader(DS,43,&leader);
   AddStudent(DS,31,14,102);
   TeamFight(DS,4,21,13);
   AddStudent(DS,80,23,40);
   JoinTeams(DS,15,22);
   GetStudentTeamLeader(DS,18,&leader); // 1790
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,52,1,9);
   AddStudent(DS,26,21,2);
   TeamFight(DS,7,9,1);
   GetStudentTeamLeader(DS,76,&leader);
   AddStudent(DS,27,9,117);
   GetStudentTeamLeader(DS,30,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,6,7,4);
   TeamFight(DS,3,3,7); // 1800
   GetStudentTeamLeader(DS,30,&leader);
   GetStudentTeamLeader(DS,6,&leader);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,20,24,4);
   TeamFight(DS,10,1,8);
   AddStudent(DS,65,14,146);
   TeamFight(DS,13,21,6);
   JoinTeams(DS,15,3);
   JoinTeams(DS,17,18);
   GetNumOfWins(DS,22,&number_of_wins); // 1810
   AddStudent(DS,23,4,32);
   RemoveStudent(DS,78);
   RemoveStudent(DS,62);
   GetStudentTeamLeader(DS,65,&leader);
   TeamFight(DS,8,1,11);
   RemoveStudent(DS,20);
   GetStudentTeamLeader(DS,15,&leader);
   AddStudent(DS,31,23,265);
   GetStudentTeamLeader(DS,25,&leader);
   GetStudentTeamLeader(DS,48,&leader); // 1820
   RemoveStudent(DS,9);
   GetStudentTeamLeader(DS,10,&leader);
   RemoveStudent(DS,6);
   RemoveStudent(DS,61);
   GetStudentTeamLeader(DS,48,&leader);
   AddStudent(DS,34,19,45);
   AddStudent(DS,29,2,109);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,88,14,121);
   GetStudentTeamLeader(DS,38,&leader); // 1830
   AddStudent(DS,51,20,19);
   AddStudent(DS,46,18,290);
   TeamFight(DS,5,2,8);
   RemoveStudent(DS,74);
   AddStudent(DS,12,4,270);
   GetStudentTeamLeader(DS,89,&leader);
   TeamFight(DS,1,21,1);
   AddStudent(DS,19,20,122);
   RemoveStudent(DS,76);
   GetStudentTeamLeader(DS,57,&leader); // 1840
   TeamFight(DS,3,14,7);
   TeamFight(DS,13,24,14);
   TeamFight(DS,21,11,14);
   GetStudentTeamLeader(DS,89,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,3,&leader);
   GetStudentTeamLeader(DS,0,&leader);
   TeamFight(DS,3,4,13);
   TeamFight(DS,15,1,11);
   GetNumOfWins(DS,1,&number_of_wins); // 1850
   GetNumOfWins(DS,9,&number_of_wins);
   RemoveStudent(DS,38);
   AddStudent(DS,66,2,105);
   GetNumOfWins(DS,22,&number_of_wins);
   GetStudentTeamLeader(DS,17,&leader);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,50,12,97);
   AddStudent(DS,86,17,14); // 1860
   RemoveStudent(DS,10);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,10,3,243);
   TeamFight(DS,7,7,9);
   RemoveStudent(DS,82);
   RemoveStudent(DS,81);
   JoinTeams(DS,18,15);
   TeamFight(DS,4,11,12);
   GetNumOfWins(DS,12,&number_of_wins);
   GetStudentTeamLeader(DS,42,&leader); // 1870
   GetNumOfWins(DS,19,&number_of_wins);
   TeamFight(DS,5,23,13);
   AddStudent(DS,65,10,209);
   AddStudent(DS,94,21,92);
   GetStudentTeamLeader(DS,46,&leader);
   AddStudent(DS,53,15,29);
   JoinTeams(DS,16,23);
   AddStudent(DS,28,16,153);
   GetStudentTeamLeader(DS,16,&leader);
   TeamFight(DS,13,11,7); // 1880
   GetStudentTeamLeader(DS,69,&leader);
   JoinTeams(DS,7,3);
   TeamFight(DS,4,14,0);
   TeamFight(DS,5,12,14);
   TeamFight(DS,22,16,13);
   TeamFight(DS,5,1,6);
   GetStudentTeamLeader(DS,23,&leader);
   GetStudentTeamLeader(DS,54,&leader);
   GetNumOfWins(DS,17,&number_of_wins);
   RemoveStudent(DS,79); // 1890
   GetStudentTeamLeader(DS,65,&leader);
   RemoveStudent(DS,63);
   AddStudent(DS,77,4,298);
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,50,&leader);
   AddStudent(DS,54,11,225);
   AddStudent(DS,39,14,176);
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,19,7,6);
   GetStudentTeamLeader(DS,10,&leader); // 1900
   RemoveStudent(DS,40);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,11,6,12);
   RemoveStudent(DS,45);
   TeamFight(DS,24,17,11);
   AddStudent(DS,11,17,225);
   TeamFight(DS,17,6,-1);
   TeamFight(DS,4,16,5);
   GetNumOfWins(DS,19,&number_of_wins);
   GetStudentTeamLeader(DS,6,&leader); // 1910
   AddStudent(DS,24,15,236);
   GetStudentTeamLeader(DS,0,&leader);
   GetStudentTeamLeader(DS,13,&leader);
   GetNumOfWins(DS,4,&number_of_wins);
   GetStudentTeamLeader(DS,22,&leader);
   RemoveStudent(DS,94);
   JoinTeams(DS,8,22);
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,91,&leader);
   GetStudentTeamLeader(DS,27,&leader); // 1920
   AddStudent(DS,-1,8,64);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,11,17,8);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,5,15,210);
   GetStudentTeamLeader(DS,33,&leader);
   RemoveStudent(DS,4);
   TeamFight(DS,10,22,8);
   AddStudent(DS,43,2,87);
   AddStudent(DS,72,5,282); // 1930
   RemoveStudent(DS,34);
   RemoveStudent(DS,63);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,23,8,148);
   AddStudent(DS,14,5,42);
   GetStudentTeamLeader(DS,85,&leader);
   AddStudent(DS,5,17,8);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,24,12,-1);
   AddStudent(DS,24,13,159); // 1940
   GetNumOfWins(DS,16,&number_of_wins);
   RemoveStudent(DS,23);
   TeamFight(DS,6,8,8);
   JoinTeams(DS,9,24);
   JoinTeams(DS,11,3);
   RemoveStudent(DS,83);
   TeamFight(DS,8,15,0);
   GetStudentTeamLeader(DS,72,&leader);
   RemoveStudent(DS,56);
   TeamFight(DS,19,16,11); // 1950
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,83,20,243);
   JoinTeams(DS,1,11);
   TeamFight(DS,21,5,2);
   AddStudent(DS,93,16,63);
   GetStudentTeamLeader(DS,77,&leader);
   JoinTeams(DS,22,12);
   GetStudentTeamLeader(DS,70,&leader);
   AddStudent(DS,85,18,222);
   GetStudentTeamLeader(DS,50,&leader); // 1960
   AddStudent(DS,61,22,4);
   GetStudentTeamLeader(DS,89,&leader);
   GetNumOfWins(DS,15,&number_of_wins);
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,17,17,12);
   TeamFight(DS,9,16,13);
   TeamFight(DS,12,4,6);
   JoinTeams(DS,17,1);
   RemoveStudent(DS,46);
   TeamFight(DS,14,20,6); // 1970
   TeamFight(DS,23,13,4);
   AddStudent(DS,46,2,37);
   RemoveStudent(DS,13);
   AddStudent(DS,46,12,264);
   AddStudent(DS,68,12,113);
   JoinTeams(DS,2,2);
   GetStudentTeamLeader(DS,83,&leader);
   GetStudentTeamLeader(DS,64,&leader);
   TeamFight(DS,19,21,2);
   JoinTeams(DS,11,16); // 1980
   GetNumOfWins(DS,14,&number_of_wins);
   JoinTeams(DS,1,15);
   TeamFight(DS,8,3,5);
   AddStudent(DS,77,12,167);
   RemoveStudent(DS,45);
   GetStudentTeamLeader(DS,56,&leader);
   GetStudentTeamLeader(DS,82,&leader);
   TeamFight(DS,13,17,13);
   TeamFight(DS,1,9,10);
   RemoveStudent(DS,49); // 1990
   TeamFight(DS,1,4,9);
   GetNumOfWins(DS,16,&number_of_wins);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,29,20,165);
   TeamFight(DS,4,10,10);
   AddStudent(DS,22,14,161);
   AddStudent(DS,90,17,243);
   TeamFight(DS,6,13,8);
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,84,&leader); // 2000
   RemoveStudent(DS,72);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,0,1,168);
   RemoveStudent(DS,33);
   RemoveStudent(DS,24);
   AddStudent(DS,27,3,254);
   AddStudent(DS,7,5,247);
   GetStudentTeamLeader(DS,1,&leader);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,48,13,189); // 2010
   TeamFight(DS,23,15,2);
   TeamFight(DS,6,21,-1);
   TeamFight(DS,9,11,9);
   GetStudentTeamLeader(DS,92,&leader);
   AddStudent(DS,12,5,192);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,63,3,141);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,4,2,60);
   TeamFight(DS,5,15,2); // 2020
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins);
   RemoveStudent(DS,14);
   AddStudent(DS,55,6,263);
   JoinTeams(DS,3,22);
   AddStudent(DS,76,1,135);
   GetStudentTeamLeader(DS,76,&leader);
   GetStudentTeamLeader(DS,7,&leader);
   JoinTeams(DS,21,18);
   TeamFight(DS,5,9,2); // 2030
   TeamFight(DS,20,3,-1);
   AddStudent(DS,45,6,62);
   AddStudent(DS,12,22,259);
   AddStudent(DS,74,16,116);
   TeamFight(DS,10,21,10);
   RemoveStudent(DS,42);
   AddStudent(DS,87,2,30);
   GetNumOfWins(DS,19,&number_of_wins);
   RemoveStudent(DS,23);
   AddStudent(DS,46,7,184); // 2040
   RemoveStudent(DS,46);
   AddStudent(DS,88,3,17);
   GetStudentTeamLeader(DS,80,&leader);
   GetStudentTeamLeader(DS,76,&leader);
   AddStudent(DS,47,20,19);
   GetNumOfWins(DS,11,&number_of_wins);
   RemoveStudent(DS,61);
   AddStudent(DS,62,17,217);
   AddStudent(DS,46,19,77);
   JoinTeams(DS,11,8); // 2050
   AddStudent(DS,85,6,39);
   AddStudent(DS,32,20,82);
   AddStudent(DS,10,14,23);
   AddStudent(DS,22,24,148);
   AddStudent(DS,5,5,181);
   AddStudent(DS,14,17,15);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,9,19,6);
   GetNumOfWins(DS,1,&number_of_wins);
   RemoveStudent(DS,22); // 2060
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,10,10,0);
   AddStudent(DS,77,22,10);
   GetStudentTeamLeader(DS,47,&leader);
   TeamFight(DS,8,10,12);
   GetStudentTeamLeader(DS,7,&leader);
   RemoveStudent(DS,43);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,32,23,223);
   GetNumOfWins(DS,7,&number_of_wins); // 2070
   TeamFight(DS,13,14,12);
   GetStudentTeamLeader(DS,94,&leader);
   AddStudent(DS,11,18,17);
   AddStudent(DS,72,2,129);
   TeamFight(DS,22,12,-1);
   TeamFight(DS,17,4,4);
   AddStudent(DS,39,8,289);
   AddStudent(DS,26,11,201);
   AddStudent(DS,26,22,116);
   AddStudent(DS,5,21,76); // 2080
   GetStudentTeamLeader(DS,83,&leader);
   AddStudent(DS,79,19,10);
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,7,3,0);
   TeamFight(DS,11,19,14);
   GetNumOfWins(DS,2,&number_of_wins);
   JoinTeams(DS,12,23);
   GetNumOfWins(DS,21,&number_of_wins);
   RemoveStudent(DS,62); // 2090
   GetStudentTeamLeader(DS,5,&leader);
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,54,11,219);
   AddStudent(DS,63,17,290);
   AddStudent(DS,5,6,143);
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,78,&leader);
   RemoveStudent(DS,51);
   GetStudentTeamLeader(DS,33,&leader);
   RemoveStudent(DS,3); // 2100
   AddStudent(DS,50,18,220);
   GetNumOfWins(DS,5,&number_of_wins);
   RemoveStudent(DS,13);
   AddStudent(DS,68,21,154);
   RemoveStudent(DS,78);
   AddStudent(DS,71,18,83);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,50,8,123);
   TeamFight(DS,11,4,9);
   TeamFight(DS,9,3,13); // 2110
   GetStudentTeamLeader(DS,73,&leader);
   AddStudent(DS,45,15,56);
   RemoveStudent(DS,44);
   TeamFight(DS,11,3,3);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,16,10,12);
   AddStudent(DS,43,10,94);
   GetNumOfWins(DS,6,&number_of_wins);
   JoinTeams(DS,22,8);
   GetNumOfWins(DS,13,&number_of_wins); // 2120
   GetStudentTeamLeader(DS,18,&leader);
   AddStudent(DS,62,12,215);
   GetNumOfWins(DS,2,&number_of_wins);
   GetStudentTeamLeader(DS,56,&leader);
   TeamFight(DS,12,12,1);
   JoinTeams(DS,4,13);
   AddStudent(DS,53,16,248);
   GetNumOfWins(DS,20,&number_of_wins);
   RemoveStudent(DS,22);
   JoinTeams(DS,2,3); // 2130
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,9,10,1);
   AddStudent(DS,93,2,97);
   GetStudentTeamLeader(DS,46,&leader);
   GetNumOfWins(DS,19,&number_of_wins);
   AddStudent(DS,73,12,174);
   AddStudent(DS,63,13,6);
   RemoveStudent(DS,37);
   AddStudent(DS,65,13,38);
   AddStudent(DS,44,7,9); // 2140
   AddStudent(DS,31,5,153);
   JoinTeams(DS,1,12);
   GetStudentTeamLeader(DS,80,&leader);
   AddStudent(DS,95,12,290);
   RemoveStudent(DS,34);
   JoinTeams(DS,10,8);
   JoinTeams(DS,4,8);
   AddStudent(DS,61,1,5);
   RemoveStudent(DS,47);
   RemoveStudent(DS,61); // 2150
   GetStudentTeamLeader(DS,37,&leader);
   RemoveStudent(DS,90);
   AddStudent(DS,4,3,195);
   GetNumOfWins(DS,2,&number_of_wins);
   JoinTeams(DS,4,11);
   JoinTeams(DS,19,2);
   TeamFight(DS,21,10,14);
   AddStudent(DS,2,18,91);
   GetStudentTeamLeader(DS,85,&leader);
   AddStudent(DS,10,13,96); // 2160
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,1,8,8);
   TeamFight(DS,12,17,4);
   AddStudent(DS,95,18,181);
   RemoveStudent(DS,66);
   JoinTeams(DS,12,7);
   AddStudent(DS,90,6,156);
   RemoveStudent(DS,4);
   AddStudent(DS,95,13,79);
   RemoveStudent(DS,2); // 2170
   GetStudentTeamLeader(DS,16,&leader);
   TeamFight(DS,14,11,14);
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,10,6,7);
   TeamFight(DS,12,17,4);
   GetNumOfWins(DS,10,&number_of_wins);
   GetStudentTeamLeader(DS,9,&leader);
   TeamFight(DS,24,5,14);
   GetNumOfWins(DS,19,&number_of_wins);
   JoinTeams(DS,23,17); // 2180
   AddStudent(DS,21,17,275);
   TeamFight(DS,12,11,3);
   TeamFight(DS,14,21,8);
   AddStudent(DS,84,5,83);
   TeamFight(DS,18,19,13);
   TeamFight(DS,4,12,13);
   RemoveStudent(DS,18);
   TeamFight(DS,17,9,1);
   TeamFight(DS,21,22,11);
   GetStudentTeamLeader(DS,17,&leader); // 2190
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,80,&leader);
   TeamFight(DS,18,16,6);
   GetNumOfWins(DS,13,&number_of_wins);
   GetNumOfWins(DS,24,&number_of_wins);
   AddStudent(DS,28,4,138);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,24,14,4);
   AddStudent(DS,9,22,251);
   AddStudent(DS,56,19,188); // 2200
   AddStudent(DS,26,12,24);
   AddStudent(DS,86,21,262);
   AddStudent(DS,26,21,143);
   AddStudent(DS,28,22,135);
   TeamFight(DS,9,5,0);
   AddStudent(DS,55,13,288);
   AddStudent(DS,72,12,85);
   GetStudentTeamLeader(DS,76,&leader);
   GetNumOfWins(DS,20,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins); // 2210
   TeamFight(DS,6,11,10);
   AddStudent(DS,67,3,235);
   JoinTeams(DS,15,18);
   GetStudentTeamLeader(DS,39,&leader);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,9,23,13);
   AddStudent(DS,41,22,254);
   RemoveStudent(DS,87);
   GetStudentTeamLeader(DS,72,&leader);
   TeamFight(DS,6,22,9); // 2220
   AddStudent(DS,64,18,65);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,19,6,6);
   AddStudent(DS,68,23,280);
   GetStudentTeamLeader(DS,42,&leader);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,20,4,132);
   GetStudentTeamLeader(DS,48,&leader);
   AddStudent(DS,40,18,12);
   GetStudentTeamLeader(DS,11,&leader); // 2230
   AddStudent(DS,45,5,259);
   GetStudentTeamLeader(DS,55,&leader);
   GetStudentTeamLeader(DS,7,&leader);
   TeamFight(DS,7,21,14);
   GetStudentTeamLeader(DS,61,&leader);
   GetStudentTeamLeader(DS,28,&leader);
   RemoveStudent(DS,38);
   RemoveStudent(DS,11);
   TeamFight(DS,21,13,5);
   TeamFight(DS,9,15,11); // 2240
   RemoveStudent(DS,17);
   JoinTeams(DS,3,9);
   TeamFight(DS,17,24,7);
   RemoveStudent(DS,23);
   AddStudent(DS,25,4,274);
   TeamFight(DS,8,15,7);
   JoinTeams(DS,14,13);
   GetStudentTeamLeader(DS,92,&leader);
   TeamFight(DS,21,13,10);
   GetNumOfWins(DS,9,&number_of_wins); // 2250
   TeamFight(DS,20,19,12);
   TeamFight(DS,11,17,7);
   AddStudent(DS,27,20,142);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,2,16,1);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,11,1,1);
   TeamFight(DS,5,7,6);
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,4,19,8); // 2260
   AddStudent(DS,50,16,192);
   TeamFight(DS,5,9,9);
   JoinTeams(DS,18,8);
   JoinTeams(DS,18,4);
   GetNumOfWins(DS,12,&number_of_wins);
   JoinTeams(DS,6,24);
   AddStudent(DS,81,19,151);
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,12,&leader);
   RemoveStudent(DS,24); // 2270
   GetNumOfWins(DS,2,&number_of_wins);
   GetStudentTeamLeader(DS,75,&leader);
   AddStudent(DS,69,21,120);
   RemoveStudent(DS,11);
   AddStudent(DS,40,13,121);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,7,23,249);
   JoinTeams(DS,4,11);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,75,&leader); // 2280
   AddStudent(DS,77,3,86);
   TeamFight(DS,4,5,7);
   RemoveStudent(DS,18);
   RemoveStudent(DS,22);
   AddStudent(DS,44,12,44);
   RemoveStudent(DS,75);
   TeamFight(DS,2,19,7);
   AddStudent(DS,20,22,183);
   JoinTeams(DS,24,23);
   TeamFight(DS,16,14,5); // 2290
   TeamFight(DS,9,8,9);
   AddStudent(DS,56,20,62);
   AddStudent(DS,77,12,141);
   TeamFight(DS,4,11,6);
   AddStudent(DS,79,2,130);
   RemoveStudent(DS,36);
   GetStudentTeamLeader(DS,23,&leader);
   AddStudent(DS,47,7,4);
   TeamFight(DS,10,17,3);
   AddStudent(DS,32,13,109); // 2300
   TeamFight(DS,8,6,13);
   GetNumOfWins(DS,19,&number_of_wins);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,21,23,8);
   AddStudent(DS,77,21,54);
   RemoveStudent(DS,70);
   GetStudentTeamLeader(DS,67,&leader);
   RemoveStudent(DS,2);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,-1,24,186); // 2310
   TeamFight(DS,23,10,13);
   AddStudent(DS,78,19,248);
   AddStudent(DS,9,14,159);
   TeamFight(DS,4,1,3);
   RemoveStudent(DS,-1);
   GetStudentTeamLeader(DS,39,&leader);
   TeamFight(DS,17,22,11);
   GetNumOfWins(DS,20,&number_of_wins);
   AddStudent(DS,2,10,169);
   AddStudent(DS,31,11,85); // 2320
   RemoveStudent(DS,69);
   RemoveStudent(DS,65);
   JoinTeams(DS,15,17);
   RemoveStudent(DS,13);
   AddStudent(DS,7,20,160);
   AddStudent(DS,68,21,94);
   GetStudentTeamLeader(DS,7,&leader);
   AddStudent(DS,7,8,76);
   JoinTeams(DS,9,19);
   AddStudent(DS,59,2,105); // 2330
   TeamFight(DS,14,17,10);
   RemoveStudent(DS,53);
   TeamFight(DS,3,9,14);
   GetNumOfWins(DS,14,&number_of_wins);
   JoinTeams(DS,3,22);
   AddStudent(DS,61,10,274);
   GetStudentTeamLeader(DS,31,&leader);
   TeamFight(DS,16,13,11);
   TeamFight(DS,9,12,3);
   TeamFight(DS,4,17,9); // 2340
   AddStudent(DS,29,6,166);
   JoinTeams(DS,9,12);
   GetStudentTeamLeader(DS,15,&leader);
   GetStudentTeamLeader(DS,81,&leader);
   RemoveStudent(DS,83);
   AddStudent(DS,80,20,167);
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,22,&leader);
   GetStudentTeamLeader(DS,5,&leader);
   RemoveStudent(DS,71); // 2350
   GetStudentTeamLeader(DS,23,&leader);
   GetStudentTeamLeader(DS,74,&leader);
   RemoveStudent(DS,71);
   GetStudentTeamLeader(DS,45,&leader);
   TeamFight(DS,13,19,13);
   TeamFight(DS,21,10,0);
   GetStudentTeamLeader(DS,3,&leader);
   AddStudent(DS,71,17,17);
   TeamFight(DS,14,22,13);
   AddStudent(DS,86,22,188); // 2360
   AddStudent(DS,11,8,250);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,39,1,205);
   TeamFight(DS,11,3,10);
   AddStudent(DS,44,22,267);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,78,&leader);
   TeamFight(DS,22,21,9);
   RemoveStudent(DS,87);
   JoinTeams(DS,11,2); // 2370
   RemoveStudent(DS,85);
   TeamFight(DS,8,5,14);
   GetStudentTeamLeader(DS,68,&leader);
   GetStudentTeamLeader(DS,60,&leader);
   AddStudent(DS,5,14,108);
   GetNumOfWins(DS,22,&number_of_wins);
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,4,&leader);
   GetStudentTeamLeader(DS,13,&leader);
   TeamFight(DS,8,22,8); // 2380
   TeamFight(DS,12,6,12);
   TeamFight(DS,22,8,7);
   AddStudent(DS,43,20,59);
   TeamFight(DS,9,14,12);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,11,20,0);
   AddStudent(DS,51,9,208);
   TeamFight(DS,5,19,10);
   GetNumOfWins(DS,5,&number_of_wins); // 2390
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,68,&leader);
   JoinTeams(DS,4,2);
   GetNumOfWins(DS,13,&number_of_wins);
   JoinTeams(DS,8,12);
   TeamFight(DS,23,19,4);
   TeamFight(DS,22,6,12);
   RemoveStudent(DS,78);
   AddStudent(DS,32,14,205);
   AddStudent(DS,53,9,119); // 2400
   TeamFight(DS,16,10,5);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,3,10,8);
   JoinTeams(DS,22,2);
   AddStudent(DS,9,10,256);
   AddStudent(DS,71,15,0);
   AddStudent(DS,73,1,231);
   TeamFight(DS,20,1,7);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,24,7,5); // 2410
   GetStudentTeamLeader(DS,13,&leader);
   GetStudentTeamLeader(DS,38,&leader);
   GetStudentTeamLeader(DS,91,&leader);
   GetStudentTeamLeader(DS,27,&leader);
   GetStudentTeamLeader(DS,59,&leader);
   RemoveStudent(DS,83);
   AddStudent(DS,92,6,75);
   AddStudent(DS,23,6,41);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,71,13,160); // 2420
   AddStudent(DS,4,20,92);
   GetStudentTeamLeader(DS,66,&leader);
   TeamFight(DS,18,11,3);
   TeamFight(DS,8,7,14);
   GetNumOfWins(DS,7,&number_of_wins);
   RemoveStudent(DS,21);
   TeamFight(DS,9,5,0);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,23,21,12); // 2430
   GetStudentTeamLeader(DS,91,&leader);
   TeamFight(DS,23,5,14);
   GetStudentTeamLeader(DS,72,&leader);
   TeamFight(DS,3,16,14);
   AddStudent(DS,14,11,204);
   RemoveStudent(DS,69);
   TeamFight(DS,6,20,5);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,52,11,78);
   GetNumOfWins(DS,15,&number_of_wins); // 2440
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,87,13,16);
   AddStudent(DS,33,2,79);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,47,3,97);
   JoinTeams(DS,15,22);
   GetStudentTeamLeader(DS,41,&leader);
   GetStudentTeamLeader(DS,26,&leader);
   RemoveStudent(DS,24);
   AddStudent(DS,34,24,66); // 2450
   RemoveStudent(DS,86);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,3,11,2);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,74,10,81);
   RemoveStudent(DS,9);
   AddStudent(DS,82,6,253);
   TeamFight(DS,21,19,6);
   RemoveStudent(DS,18);
   AddStudent(DS,56,6,48); // 2460
   AddStudent(DS,25,16,95);
   GetStudentTeamLeader(DS,46,&leader);
   AddStudent(DS,17,16,114);
   AddStudent(DS,-1,16,27);
   AddStudent(DS,93,16,67);
   AddStudent(DS,39,16,32);
   AddStudent(DS,61,12,43);
   AddStudent(DS,92,12,278);
   TeamFight(DS,14,10,9);
   GetNumOfWins(DS,3,&number_of_wins); // 2470
   AddStudent(DS,35,12,5);
   RemoveStudent(DS,66);
   GetStudentTeamLeader(DS,5,&leader);
   RemoveStudent(DS,4);
   TeamFight(DS,6,16,9);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,22,7,151);
   RemoveStudent(DS,82);
   TeamFight(DS,7,23,4);
   RemoveStudent(DS,29); // 2480
   AddStudent(DS,7,19,36);
   GetStudentTeamLeader(DS,1,&leader);
   RemoveStudent(DS,73);
   TeamFight(DS,1,13,7);
   TeamFight(DS,6,11,12);
   TeamFight(DS,7,9,6);
   TeamFight(DS,2,1,8);
   GetNumOfWins(DS,5,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,53,6,187); // 2490
   RemoveStudent(DS,44);
   AddStudent(DS,66,4,171);
   GetStudentTeamLeader(DS,27,&leader);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,9,12,13);
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,21,&number_of_wins);
   RemoveStudent(DS,79);
   AddStudent(DS,49,3,201);
   AddStudent(DS,50,21,165); // 2500
   RemoveStudent(DS,14);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,85,16,237);
   AddStudent(DS,-1,1,73);
   RemoveStudent(DS,42);
   TeamFight(DS,12,9,14);
   AddStudent(DS,61,5,162);
   TeamFight(DS,21,23,3);
   TeamFight(DS,13,8,6);
   AddStudent(DS,69,4,101); // 2510
   JoinTeams(DS,11,8);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,8,4,174);
   GetNumOfWins(DS,16,&number_of_wins);
   GetStudentTeamLeader(DS,74,&leader);
   JoinTeams(DS,21,16);
   TeamFight(DS,12,1,7);
   AddStudent(DS,90,6,249);
   AddStudent(DS,82,11,54); // 2520
   GetNumOfWins(DS,14,&number_of_wins);
   GetStudentTeamLeader(DS,36,&leader);
   GetStudentTeamLeader(DS,84,&leader);
   RemoveStudent(DS,16);
   TeamFight(DS,21,17,13);
   AddStudent(DS,42,21,14);
   AddStudent(DS,46,17,17);
   TeamFight(DS,15,13,10);
   GetStudentTeamLeader(DS,41,&leader);
   TeamFight(DS,4,24,7); // 2530
   TeamFight(DS,1,2,2);
   RemoveStudent(DS,47);
   GetStudentTeamLeader(DS,41,&leader);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,20,13,9);
   AddStudent(DS,40,19,221);
   TeamFight(DS,15,4,0);
   AddStudent(DS,61,23,60);
   AddStudent(DS,4,7,138);
   GetNumOfWins(DS,13,&number_of_wins); // 2540
   AddStudent(DS,80,14,53);
   GetStudentTeamLeader(DS,45,&leader);
   RemoveStudent(DS,73);
   AddStudent(DS,4,17,82);
   TeamFight(DS,12,22,11);
   AddStudent(DS,87,16,103);
   TeamFight(DS,10,16,12);
   RemoveStudent(DS,85);
   AddStudent(DS,71,8,88);
   GetNumOfWins(DS,13,&number_of_wins); // 2550
   GetStudentTeamLeader(DS,55,&leader);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,32,&leader);
   AddStudent(DS,85,5,61);
   GetStudentTeamLeader(DS,2,&leader);
   JoinTeams(DS,24,13);
   JoinTeams(DS,3,11);
   TeamFight(DS,1,20,0);
   AddStudent(DS,44,8,295);
   AddStudent(DS,64,22,62); // 2560
   AddStudent(DS,82,10,195);
   TeamFight(DS,17,7,-1);
   AddStudent(DS,14,7,217);
   TeamFight(DS,9,11,8);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,21,4,6);
   GetStudentTeamLeader(DS,68,&leader);
   RemoveStudent(DS,42);
   AddStudent(DS,75,17,182);
   TeamFight(DS,4,19,7); // 2570
   TeamFight(DS,13,24,12);
   TeamFight(DS,17,5,4);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,4,2,8);
   GetStudentTeamLeader(DS,40,&leader);
   AddStudent(DS,51,15,92);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,82,4,117);
   RemoveStudent(DS,94);
   GetNumOfWins(DS,2,&number_of_wins); // 2580
   TeamFight(DS,21,2,5);
   AddStudent(DS,7,21,168);
   RemoveStudent(DS,29);
   RemoveStudent(DS,57);
   GetNumOfWins(DS,20,&number_of_wins);
   GetStudentTeamLeader(DS,16,&leader);
   AddStudent(DS,11,12,257);
   AddStudent(DS,1,17,97);
   JoinTeams(DS,7,7);
   TeamFight(DS,17,18,-1); // 2590
   RemoveStudent(DS,35);
   GetNumOfWins(DS,1,&number_of_wins);
   RemoveStudent(DS,26);
   RemoveStudent(DS,72);
   RemoveStudent(DS,41);
   GetStudentTeamLeader(DS,41,&leader);
   RemoveStudent(DS,51);
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,52,&leader); // 2600
   TeamFight(DS,8,5,7);
   AddStudent(DS,24,10,216);
   GetStudentTeamLeader(DS,75,&leader);
   AddStudent(DS,15,15,53);
   TeamFight(DS,20,20,6);
   AddStudent(DS,56,7,299);
   RemoveStudent(DS,58);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,3,12,5);
   TeamFight(DS,13,1,7); // 2610
   AddStudent(DS,13,4,183);
   TeamFight(DS,24,20,10);
   AddStudent(DS,25,17,228);
   TeamFight(DS,14,1,14);
   GetNumOfWins(DS,24,&number_of_wins);
   RemoveStudent(DS,33);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,37,1,267);
   TeamFight(DS,10,20,1);
   GetNumOfWins(DS,20,&number_of_wins); // 2620
   GetStudentTeamLeader(DS,85,&leader);
   AddStudent(DS,27,23,69);
   AddStudent(DS,6,12,98);
   GetStudentTeamLeader(DS,4,&leader);
   GetStudentTeamLeader(DS,39,&leader);
   AddStudent(DS,13,24,19);
   JoinTeams(DS,13,3);
   GetStudentTeamLeader(DS,1,&leader);
   GetNumOfWins(DS,2,&number_of_wins);
   GetStudentTeamLeader(DS,45,&leader); // 2630
   GetStudentTeamLeader(DS,71,&leader);
   GetStudentTeamLeader(DS,3,&leader);
   GetNumOfWins(DS,22,&number_of_wins);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,1,1,12);
   AddStudent(DS,26,15,186);
   RemoveStudent(DS,87);
   AddStudent(DS,65,19,9);
   AddStudent(DS,65,23,115);
   GetNumOfWins(DS,12,&number_of_wins); // 2640
   AddStudent(DS,55,2,298);
   AddStudent(DS,46,24,173);
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,28,&leader);
   AddStudent(DS,77,19,171);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,20,23,8);
   GetNumOfWins(DS,21,&number_of_wins);
   RemoveStudent(DS,30);
   AddStudent(DS,24,4,47); // 2650
   AddStudent(DS,75,2,235);
   GetStudentTeamLeader(DS,70,&leader);
   RemoveStudent(DS,57);
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,12,10,4);
   TeamFight(DS,12,17,10);
   AddStudent(DS,84,12,91);
   TeamFight(DS,19,13,14);
   TeamFight(DS,4,7,10);
   TeamFight(DS,9,3,11); // 2660
   TeamFight(DS,20,20,11);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,89,5,100);
   TeamFight(DS,20,7,-1);
   RemoveStudent(DS,78);
   TeamFight(DS,17,18,13);
   TeamFight(DS,5,3,12);
   TeamFight(DS,12,5,1);
   RemoveStudent(DS,60);
   GetNumOfWins(DS,4,&number_of_wins); // 2670
   TeamFight(DS,8,14,9);
   JoinTeams(DS,22,7);
   TeamFight(DS,21,11,1);
   AddStudent(DS,80,4,217);
   GetNumOfWins(DS,4,&number_of_wins);
   RemoveStudent(DS,48);
   TeamFight(DS,7,19,1);
   RemoveStudent(DS,13);
   GetStudentTeamLeader(DS,69,&leader);
   GetNumOfWins(DS,8,&number_of_wins); // 2680
   AddStudent(DS,81,13,65);
   GetNumOfWins(DS,16,&number_of_wins);
   JoinTeams(DS,7,13);
   TeamFight(DS,24,1,10);
   AddStudent(DS,34,5,132);
   AddStudent(DS,64,8,197);
   RemoveStudent(DS,88);
   AddStudent(DS,69,8,212);
   TeamFight(DS,19,15,9);
   TeamFight(DS,16,4,1); // 2690
   AddStudent(DS,52,7,9);
   AddStudent(DS,30,13,281);
   GetStudentTeamLeader(DS,67,&leader);
   AddStudent(DS,87,11,260);
   JoinTeams(DS,5,11);
   AddStudent(DS,33,22,154);
   AddStudent(DS,23,15,191);
   AddStudent(DS,12,7,39);
   GetNumOfWins(DS,23,&number_of_wins);
   JoinTeams(DS,22,9); // 2700
   TeamFight(DS,22,10,2);
   AddStudent(DS,47,8,143);
   TeamFight(DS,11,1,8);
   AddStudent(DS,91,22,285);
   AddStudent(DS,26,24,266);
   AddStudent(DS,31,9,261);
   GetStudentTeamLeader(DS,91,&leader);
   AddStudent(DS,84,6,224);
   TeamFight(DS,21,11,8);
   TeamFight(DS,16,9,6); // 2710
   RemoveStudent(DS,62);
   JoinTeams(DS,5,7);
   TeamFight(DS,17,13,12);
   AddStudent(DS,54,24,138);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,5,21,3);
   RemoveStudent(DS,7);
   AddStudent(DS,43,23,270); // 2720
   RemoveStudent(DS,90);
   TeamFight(DS,22,11,11);
   TeamFight(DS,19,2,-1);
   AddStudent(DS,80,7,256);
   GetStudentTeamLeader(DS,86,&leader);
   GetStudentTeamLeader(DS,77,&leader);
   TeamFight(DS,16,3,6);
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,95,&leader);
   GetStudentTeamLeader(DS,22,&leader); // 2730
   AddStudent(DS,5,8,255);
   AddStudent(DS,34,23,98);
   AddStudent(DS,74,18,3);
   GetStudentTeamLeader(DS,11,&leader);
   GetStudentTeamLeader(DS,74,&leader);
   TeamFight(DS,19,9,12);
   JoinTeams(DS,16,5);
   TeamFight(DS,9,1,11);
   AddStudent(DS,46,18,252);
   GetNumOfWins(DS,8,&number_of_wins); // 2740
   TeamFight(DS,20,12,-1);
   TeamFight(DS,7,9,3);
   TeamFight(DS,7,12,3);
   GetNumOfWins(DS,9,&number_of_wins);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,13,21,3);
   TeamFight(DS,5,14,11);
   TeamFight(DS,2,23,7);
   TeamFight(DS,11,6,5);
   TeamFight(DS,23,14,0); // 2750
   AddStudent(DS,11,22,36);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,9,20,2);
   AddStudent(DS,64,17,292);
   GetStudentTeamLeader(DS,30,&leader);
   GetStudentTeamLeader(DS,0,&leader);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,23,15,12);
   GetStudentTeamLeader(DS,50,&leader);
   TeamFight(DS,19,12,12); // 2760
   AddStudent(DS,45,20,209);
   TeamFight(DS,24,3,5);
   TeamFight(DS,12,9,6);
   TeamFight(DS,2,14,12);
   AddStudent(DS,42,17,180);
   RemoveStudent(DS,71);
   TeamFight(DS,4,2,14);
   AddStudent(DS,53,8,92);
   TeamFight(DS,18,17,5);
   AddStudent(DS,44,15,143); // 2770
   TeamFight(DS,17,21,1);
   AddStudent(DS,44,19,99);
   TeamFight(DS,15,7,5);
   GetStudentTeamLeader(DS,66,&leader);
   AddStudent(DS,32,12,236);
   TeamFight(DS,23,16,14);
   RemoveStudent(DS,70);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,14,22,10);
   TeamFight(DS,17,16,2); // 2780
   GetStudentTeamLeader(DS,52,&leader);
   TeamFight(DS,15,7,9);
   AddStudent(DS,64,14,284);
   TeamFight(DS,21,6,14);
   TeamFight(DS,22,13,14);
   AddStudent(DS,36,10,73);
   GetNumOfWins(DS,10,&number_of_wins);
   GetStudentTeamLeader(DS,4,&leader);
   AddStudent(DS,69,7,37);
   AddStudent(DS,54,13,2); // 2790
   TeamFight(DS,9,1,4);
   AddStudent(DS,0,7,274);
   TeamFight(DS,24,23,8);
   TeamFight(DS,3,19,9);
   GetStudentTeamLeader(DS,83,&leader);
   GetStudentTeamLeader(DS,32,&leader);
   GetStudentTeamLeader(DS,40,&leader);
   GetNumOfWins(DS,18,&number_of_wins);
   JoinTeams(DS,5,15);
   JoinTeams(DS,13,5); // 2800
   TeamFight(DS,21,9,3);
   TeamFight(DS,24,23,2);
   JoinTeams(DS,3,20);
   GetStudentTeamLeader(DS,59,&leader);
   GetStudentTeamLeader(DS,39,&leader);
   AddStudent(DS,69,14,280);
   TeamFight(DS,17,5,-1);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,1,6,10);
   AddStudent(DS,50,16,98); // 2810
   AddStudent(DS,78,3,261);
   AddStudent(DS,90,16,87);
   GetStudentTeamLeader(DS,48,&leader);
   GetNumOfWins(DS,15,&number_of_wins);
   RemoveStudent(DS,27);
   RemoveStudent(DS,86);
   JoinTeams(DS,24,14);
   AddStudent(DS,28,15,295);
   TeamFight(DS,10,24,9);
   GetStudentTeamLeader(DS,30,&leader); // 2820
   GetNumOfWins(DS,15,&number_of_wins);
   RemoveStudent(DS,45);
   AddStudent(DS,2,13,235);
   TeamFight(DS,5,19,3);
   TeamFight(DS,18,19,13);
   AddStudent(DS,34,8,297);
   GetStudentTeamLeader(DS,63,&leader);
   TeamFight(DS,7,17,0);
   GetNumOfWins(DS,14,&number_of_wins);
   RemoveStudent(DS,73); // 2830
   GetStudentTeamLeader(DS,70,&leader);
   GetStudentTeamLeader(DS,85,&leader);
   TeamFight(DS,2,19,1);
   GetStudentTeamLeader(DS,71,&leader);
   GetNumOfWins(DS,14,&number_of_wins);
   GetStudentTeamLeader(DS,30,&leader);
   RemoveStudent(DS,50);
   TeamFight(DS,6,15,5);
   JoinTeams(DS,8,11);
   GetNumOfWins(DS,7,&number_of_wins); // 2840
   GetStudentTeamLeader(DS,79,&leader);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins);
   GetStudentTeamLeader(DS,5,&leader);
   AddStudent(DS,25,19,255);
   AddStudent(DS,30,4,154);
   AddStudent(DS,51,14,166);
   RemoveStudent(DS,61);
   GetNumOfWins(DS,14,&number_of_wins); // 2850
   TeamFight(DS,11,1,13);
   TeamFight(DS,10,9,11);
   TeamFight(DS,22,10,14);
   GetNumOfWins(DS,1,&number_of_wins);
   GetStudentTeamLeader(DS,34,&leader);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,64,&leader);
   RemoveStudent(DS,16);
   RemoveStudent(DS,24); // 2860
   GetNumOfWins(DS,21,&number_of_wins);
   RemoveStudent(DS,47);
   GetNumOfWins(DS,7,&number_of_wins);
   RemoveStudent(DS,2);
   AddStudent(DS,44,13,281);
   TeamFight(DS,17,9,12);
   TeamFight(DS,7,11,9);
   GetNumOfWins(DS,10,&number_of_wins);
   RemoveStudent(DS,56);
   GetNumOfWins(DS,22,&number_of_wins); // 2870
   TeamFight(DS,24,20,12);
   AddStudent(DS,39,21,268);
   GetNumOfWins(DS,24,&number_of_wins);
   AddStudent(DS,64,8,200);
   AddStudent(DS,36,18,234);
   JoinTeams(DS,23,6);
   JoinTeams(DS,19,12);
   TeamFight(DS,9,6,-1);
   AddStudent(DS,62,13,182);
   TeamFight(DS,23,4,-1); // 2880
   TeamFight(DS,22,8,11);
   AddStudent(DS,56,21,206);
   RemoveStudent(DS,46);
   TeamFight(DS,8,23,12);
   GetStudentTeamLeader(DS,6,&leader);
   TeamFight(DS,12,10,11);
   AddStudent(DS,28,8,97);
   TeamFight(DS,7,12,4);
   TeamFight(DS,6,10,0);
   GetStudentTeamLeader(DS,94,&leader); // 2890
   GetStudentTeamLeader(DS,85,&leader);
   AddStudent(DS,7,19,3);
   AddStudent(DS,94,13,111);
   RemoveStudent(DS,28);
   TeamFight(DS,8,8,9);
   TeamFight(DS,14,6,1);
   AddStudent(DS,32,11,286);
   AddStudent(DS,16,9,167);
   AddStudent(DS,8,7,208);
   TeamFight(DS,13,24,13); // 2900
   RemoveStudent(DS,22);
   TeamFight(DS,5,1,2);
   RemoveStudent(DS,0);
   AddStudent(DS,80,14,202);
   AddStudent(DS,83,5,50);
   GetStudentTeamLeader(DS,52,&leader);
   TeamFight(DS,23,6,8);
   AddStudent(DS,41,12,46);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins); // 2910
   AddStudent(DS,94,4,212);
   TeamFight(DS,4,7,1);
   AddStudent(DS,44,6,178);
   RemoveStudent(DS,92);
   TeamFight(DS,2,21,3);
   AddStudent(DS,14,8,153);
   AddStudent(DS,86,11,7);
   TeamFight(DS,3,9,1);
   TeamFight(DS,20,1,5);
   JoinTeams(DS,1,15); // 2920
   JoinTeams(DS,5,16);
   AddStudent(DS,29,24,82);
   TeamFight(DS,17,20,10);
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,6,19,3);
   TeamFight(DS,3,16,0);
   GetStudentTeamLeader(DS,81,&leader);
   GetNumOfWins(DS,5,&number_of_wins);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,81,4,24); // 2930
   GetStudentTeamLeader(DS,24,&leader);
   AddStudent(DS,30,15,249);
   TeamFight(DS,12,3,14);
   TeamFight(DS,23,11,1);
   RemoveStudent(DS,0);
   GetNumOfWins(DS,16,&number_of_wins);
   GetStudentTeamLeader(DS,9,&leader);
   AddStudent(DS,20,19,245);
   TeamFight(DS,19,15,2);
   RemoveStudent(DS,85); // 2940
   GetStudentTeamLeader(DS,64,&leader);
   GetStudentTeamLeader(DS,41,&leader);
   JoinTeams(DS,11,7);
   TeamFight(DS,14,17,1);
   RemoveStudent(DS,24);
   TeamFight(DS,24,4,2);
   AddStudent(DS,93,15,11);
   AddStudent(DS,21,21,221);
   GetStudentTeamLeader(DS,33,&leader);
   JoinTeams(DS,8,7); // 2950
   TeamFight(DS,17,7,3);
   AddStudent(DS,18,13,204);
   AddStudent(DS,22,6,271);
   AddStudent(DS,43,16,270);
   JoinTeams(DS,5,2);
   TeamFight(DS,24,3,5);
   AddStudent(DS,26,1,167);
   AddStudent(DS,1,6,242);
   GetStudentTeamLeader(DS,45,&leader);
   GetStudentTeamLeader(DS,94,&leader); // 2960
   GetStudentTeamLeader(DS,16,&leader);
   AddStudent(DS,25,19,40);
   AddStudent(DS,35,1,51);
   RemoveStudent(DS,14);
   TeamFight(DS,17,24,5);
   GetNumOfWins(DS,5,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   RemoveStudent(DS,59);
   RemoveStudent(DS,81);
   TeamFight(DS,12,21,10); // 2970
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,7,9,8);
   GetNumOfWins(DS,21,&number_of_wins);
   JoinTeams(DS,1,12);
   AddStudent(DS,8,4,232);
   GetNumOfWins(DS,19,&number_of_wins);
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,90,18,186);
   RemoveStudent(DS,19);
   TeamFight(DS,17,4,11); // 2980
   TeamFight(DS,14,16,11);
   GetNumOfWins(DS,11,&number_of_wins);
   RemoveStudent(DS,84);
   AddStudent(DS,49,3,24);
   TeamFight(DS,9,6,7);
   TeamFight(DS,3,23,-1);
   TeamFight(DS,7,11,3);
   RemoveStudent(DS,84);
   GetStudentTeamLeader(DS,36,&leader);
   TeamFight(DS,24,1,13); // 2990
   GetStudentTeamLeader(DS,39,&leader);
   RemoveStudent(DS,27);
   GetStudentTeamLeader(DS,65,&leader);
   GetStudentTeamLeader(DS,95,&leader);
   TeamFight(DS,12,20,7);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,15,1,-1);
   AddStudent(DS,78,11,150);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,1,6,8); // 3000
   AddStudent(DS,91,16,264);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,47,17,136);
   TeamFight(DS,23,9,10);
   RemoveStudent(DS,95);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,8,7,0);
   TeamFight(DS,15,12,-1);
   GetStudentTeamLeader(DS,93,&leader);
   JoinTeams(DS,4,18); // 3010
   JoinTeams(DS,3,2);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,4,12,8);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,28,23,36);
   RemoveStudent(DS,60);
   AddStudent(DS,20,10,105);
   AddStudent(DS,39,9,270);
   TeamFight(DS,14,10,13);
   GetStudentTeamLeader(DS,69,&leader); // 3020
   TeamFight(DS,5,14,9);
   AddStudent(DS,84,4,106);
   TeamFight(DS,23,1,9);
   JoinTeams(DS,10,10);
   AddStudent(DS,36,9,126);
   AddStudent(DS,8,17,77);
   TeamFight(DS,3,24,2);
   JoinTeams(DS,21,13);
   TeamFight(DS,13,20,-1);
   TeamFight(DS,18,17,8); // 3030
   TeamFight(DS,18,24,5);
   GetStudentTeamLeader(DS,3,&leader);
   GetStudentTeamLeader(DS,86,&leader);
   GetStudentTeamLeader(DS,64,&leader);
   JoinTeams(DS,4,22);
   TeamFight(DS,8,13,1);
   GetStudentTeamLeader(DS,88,&leader);
   TeamFight(DS,17,8,9);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,9,11,7); // 3040
   RemoveStudent(DS,19);
   TeamFight(DS,14,18,1);
   TeamFight(DS,19,16,9);
   AddStudent(DS,64,2,10);
   AddStudent(DS,93,20,182);
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,14,12,10);
   AddStudent(DS,77,10,36);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins); // 3050
   TeamFight(DS,15,8,8);
   TeamFight(DS,16,2,8);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,53,5,54);
   TeamFight(DS,2,20,9);
   AddStudent(DS,85,19,190);
   TeamFight(DS,17,19,-1);
   GetStudentTeamLeader(DS,27,&leader);
   AddStudent(DS,50,15,29);
   TeamFight(DS,22,8,4); // 3060
   TeamFight(DS,15,13,8);
   AddStudent(DS,74,15,141);
   TeamFight(DS,13,13,-1);
   GetStudentTeamLeader(DS,61,&leader);
   TeamFight(DS,11,18,2);
   RemoveStudent(DS,20);
   GetStudentTeamLeader(DS,44,&leader);
   TeamFight(DS,4,10,-1);
   AddStudent(DS,85,19,257);
   TeamFight(DS,10,19,0); // 3070
   TeamFight(DS,18,9,7);
   AddStudent(DS,11,12,263);
   GetNumOfWins(DS,24,&number_of_wins);
   RemoveStudent(DS,12);
   AddStudent(DS,24,24,38);
   AddStudent(DS,0,23,48);
   GetStudentTeamLeader(DS,9,&leader);
   TeamFight(DS,2,12,3);
   GetNumOfWins(DS,21,&number_of_wins);
   GetStudentTeamLeader(DS,37,&leader); // 3080
   TeamFight(DS,4,23,-1);
   RemoveStudent(DS,36);
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,53,&leader);
   TeamFight(DS,10,2,-1);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,24,7,14);
   RemoveStudent(DS,85);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,14,15,4); // 3090
   TeamFight(DS,9,11,12);
   AddStudent(DS,53,10,183);
   AddStudent(DS,1,19,218);
   AddStudent(DS,91,11,71);
   AddStudent(DS,55,2,241);
   TeamFight(DS,19,11,11);
   GetNumOfWins(DS,19,&number_of_wins);
   AddStudent(DS,9,18,241);
   AddStudent(DS,20,5,151);
   AddStudent(DS,76,5,3); // 3100
   AddStudent(DS,83,3,264);
   RemoveStudent(DS,8);
   GetStudentTeamLeader(DS,93,&leader);
   TeamFight(DS,13,1,0);
   GetStudentTeamLeader(DS,93,&leader);
   RemoveStudent(DS,59);
   AddStudent(DS,67,10,51);
   AddStudent(DS,55,21,143);
   GetStudentTeamLeader(DS,34,&leader);
   TeamFight(DS,2,19,1); // 3110
   TeamFight(DS,22,20,0);
   AddStudent(DS,12,8,160);
   GetStudentTeamLeader(DS,27,&leader);
   RemoveStudent(DS,4);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,42,16,231);
   RemoveStudent(DS,49);
   GetStudentTeamLeader(DS,75,&leader);
   AddStudent(DS,31,12,268);
   AddStudent(DS,56,18,256); // 3120
   RemoveStudent(DS,68);
   GetNumOfWins(DS,13,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,25,20,208);
   RemoveStudent(DS,49);
   TeamFight(DS,1,1,13);
   RemoveStudent(DS,77);
   AddStudent(DS,48,2,297);
   TeamFight(DS,5,10,3);
   AddStudent(DS,65,8,12); // 3130
   TeamFight(DS,2,14,14);
   GetStudentTeamLeader(DS,86,&leader);
   RemoveStudent(DS,73);
   TeamFight(DS,17,8,14);
   AddStudent(DS,73,17,147);
   TeamFight(DS,23,20,5);
   AddStudent(DS,14,19,17);
   TeamFight(DS,5,8,6);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins); // 3140
   GetStudentTeamLeader(DS,66,&leader);
   AddStudent(DS,61,18,8);
   GetStudentTeamLeader(DS,52,&leader);
   AddStudent(DS,70,14,293);
   AddStudent(DS,5,16,77);
   GetStudentTeamLeader(DS,90,&leader);
   GetStudentTeamLeader(DS,16,&leader);
   AddStudent(DS,42,7,152);
   AddStudent(DS,71,9,128);
   GetStudentTeamLeader(DS,15,&leader); // 3150
   GetStudentTeamLeader(DS,73,&leader);
   AddStudent(DS,22,11,3);
   AddStudent(DS,82,21,183);
   TeamFight(DS,13,7,0);
   AddStudent(DS,49,23,158);
   GetNumOfWins(DS,20,&number_of_wins);
   JoinTeams(DS,12,16);
   GetNumOfWins(DS,19,&number_of_wins);
   TeamFight(DS,13,12,13);
   TeamFight(DS,2,4,3); // 3160
   TeamFight(DS,2,16,4);
   RemoveStudent(DS,25);
   GetStudentTeamLeader(DS,42,&leader);
   TeamFight(DS,22,1,6);
   AddStudent(DS,79,19,234);
   TeamFight(DS,5,16,12);
   GetStudentTeamLeader(DS,40,&leader);
   AddStudent(DS,2,1,3);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,59,5,206); // 3170
   RemoveStudent(DS,43);
   RemoveStudent(DS,11);
   GetStudentTeamLeader(DS,52,&leader);
   AddStudent(DS,65,17,207);
   TeamFight(DS,7,14,1);
   GetNumOfWins(DS,17,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,48,&leader);
   RemoveStudent(DS,15);
   GetStudentTeamLeader(DS,28,&leader); // 3180
   TeamFight(DS,20,3,-1);
   RemoveStudent(DS,17);
   AddStudent(DS,5,22,35);
   TeamFight(DS,3,23,7);
   RemoveStudent(DS,6);
   TeamFight(DS,9,4,14);
   AddStudent(DS,22,3,93);
   TeamFight(DS,21,23,2);
   TeamFight(DS,10,11,10);
   GetNumOfWins(DS,21,&number_of_wins); // 3190
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,5,14,4);
   GetNumOfWins(DS,20,&number_of_wins);
   AddStudent(DS,8,1,53);
   GetStudentTeamLeader(DS,42,&leader);
   TeamFight(DS,14,19,12);
   AddStudent(DS,51,17,94);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,13,1,211);
   RemoveStudent(DS,37); // 3200
   TeamFight(DS,11,3,7);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,24,22,166);
   TeamFight(DS,10,15,0);
   RemoveStudent(DS,55);
   AddStudent(DS,-1,5,18);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,1,19,228);
   AddStudent(DS,5,22,54);
   RemoveStudent(DS,8); // 3210
   AddStudent(DS,6,3,149);
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,21,&number_of_wins);
   JoinTeams(DS,15,18);
   AddStudent(DS,22,5,268);
   TeamFight(DS,4,24,7);
   JoinTeams(DS,11,8);
   AddStudent(DS,57,7,152);
   GetStudentTeamLeader(DS,40,&leader);
   TeamFight(DS,13,1,9); // 3220
   TeamFight(DS,15,1,10);
   GetNumOfWins(DS,23,&number_of_wins);
   JoinTeams(DS,15,2);
   GetStudentTeamLeader(DS,22,&leader);
   JoinTeams(DS,9,21);
   TeamFight(DS,22,22,0);
   AddStudent(DS,84,15,219);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,12,15,4);
   GetNumOfWins(DS,18,&number_of_wins); // 3230
   AddStudent(DS,54,9,298);
   TeamFight(DS,23,10,1);
   TeamFight(DS,13,14,13);
   TeamFight(DS,24,12,8);
   GetNumOfWins(DS,13,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   RemoveStudent(DS,63);
   GetNumOfWins(DS,22,&number_of_wins);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,28,8,176); // 3240
   AddStudent(DS,41,1,176);
   GetStudentTeamLeader(DS,44,&leader);
   TeamFight(DS,9,3,4);
   GetStudentTeamLeader(DS,91,&leader);
   TeamFight(DS,4,17,-1);
   RemoveStudent(DS,64);
   TeamFight(DS,11,18,3);
   GetNumOfWins(DS,11,&number_of_wins);
   GetStudentTeamLeader(DS,88,&leader);
   GetNumOfWins(DS,14,&number_of_wins); // 3250
   AddStudent(DS,61,7,60);
   GetNumOfWins(DS,21,&number_of_wins);
   JoinTeams(DS,1,16);
   AddStudent(DS,24,17,21);
   TeamFight(DS,17,19,13);
   AddStudent(DS,68,15,214);
   AddStudent(DS,78,23,5);
   GetStudentTeamLeader(DS,12,&leader);
   AddStudent(DS,6,12,12);
   GetNumOfWins(DS,16,&number_of_wins); // 3260
   TeamFight(DS,3,13,3);
   RemoveStudent(DS,49);
   GetStudentTeamLeader(DS,84,&leader);
   RemoveStudent(DS,87);
   AddStudent(DS,35,20,299);
   AddStudent(DS,70,10,83);
   TeamFight(DS,18,4,8);
   AddStudent(DS,29,11,230);
   AddStudent(DS,28,9,41);
   GetNumOfWins(DS,6,&number_of_wins); // 3270
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,4,8,2);
   AddStudent(DS,91,17,269);
   AddStudent(DS,79,2,112);
   GetStudentTeamLeader(DS,17,&leader);
   TeamFight(DS,19,12,7);
   AddStudent(DS,22,2,170);
   AddStudent(DS,37,18,41);
   GetStudentTeamLeader(DS,62,&leader);
   TeamFight(DS,19,23,12); // 3280
   RemoveStudent(DS,71);
   RemoveStudent(DS,64);
   AddStudent(DS,38,9,131);
   AddStudent(DS,79,20,280);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,0,&leader);
   GetNumOfWins(DS,22,&number_of_wins);
   RemoveStudent(DS,20); // 3290
   GetStudentTeamLeader(DS,80,&leader);
   RemoveStudent(DS,23);
   GetStudentTeamLeader(DS,65,&leader);
   TeamFight(DS,22,21,-1);
   RemoveStudent(DS,44);
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,4,4,10);
   GetStudentTeamLeader(DS,58,&leader);
   AddStudent(DS,73,20,214);
   GetStudentTeamLeader(DS,45,&leader); // 3300
   GetNumOfWins(DS,1,&number_of_wins);
   GetStudentTeamLeader(DS,94,&leader);
   TeamFight(DS,20,18,11);
   TeamFight(DS,10,14,2);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,55,20,6);
   TeamFight(DS,13,22,9);
   TeamFight(DS,13,4,6);
   GetStudentTeamLeader(DS,0,&leader);
   GetNumOfWins(DS,5,&number_of_wins); // 3310
   GetStudentTeamLeader(DS,72,&leader);
   JoinTeams(DS,3,19);
   GetNumOfWins(DS,24,&number_of_wins);
   AddStudent(DS,46,7,280);
   JoinTeams(DS,10,24);
   GetNumOfWins(DS,23,&number_of_wins);
   RemoveStudent(DS,11);
   TeamFight(DS,17,16,6);
   TeamFight(DS,7,7,5);
   AddStudent(DS,45,23,255); // 3320
   TeamFight(DS,2,1,10);
   AddStudent(DS,73,15,26);
   GetStudentTeamLeader(DS,0,&leader);
   AddStudent(DS,23,10,122);
   GetStudentTeamLeader(DS,38,&leader);
   AddStudent(DS,91,1,176);
   GetStudentTeamLeader(DS,26,&leader);
   TeamFight(DS,10,2,6);
   AddStudent(DS,38,1,173);
   GetNumOfWins(DS,18,&number_of_wins); // 3330
   JoinTeams(DS,16,4);
   GetStudentTeamLeader(DS,83,&leader);
   AddStudent(DS,94,6,121);
   GetStudentTeamLeader(DS,52,&leader);
   AddStudent(DS,27,16,269);
   AddStudent(DS,35,8,182);
   AddStudent(DS,33,7,104);
   AddStudent(DS,81,22,258);
   TeamFight(DS,5,19,1);
   JoinTeams(DS,7,17); // 3340
   TeamFight(DS,3,15,12);
   TeamFight(DS,12,15,3);
   RemoveStudent(DS,44);
   GetStudentTeamLeader(DS,76,&leader);
   TeamFight(DS,14,15,12);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,12,12,5);
   TeamFight(DS,5,20,6);
   RemoveStudent(DS,52);
   AddStudent(DS,90,3,111); // 3350
   AddStudent(DS,78,19,156);
   AddStudent(DS,52,23,45);
   AddStudent(DS,56,21,163);
   AddStudent(DS,32,10,186);
   RemoveStudent(DS,29);
   TeamFight(DS,17,10,-1);
   GetStudentTeamLeader(DS,67,&leader);
   AddStudent(DS,57,7,140);
   AddStudent(DS,72,24,158);
   GetStudentTeamLeader(DS,21,&leader); // 3360
   AddStudent(DS,35,15,240);
   RemoveStudent(DS,5);
   AddStudent(DS,15,24,81);
   JoinTeams(DS,1,19);
   GetNumOfWins(DS,3,&number_of_wins);
   RemoveStudent(DS,79);
   GetStudentTeamLeader(DS,58,&leader);
   GetStudentTeamLeader(DS,87,&leader);
   AddStudent(DS,6,22,236);
   RemoveStudent(DS,82); // 3370
   AddStudent(DS,35,15,37);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,13,&number_of_wins);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,21,9,3);
   RemoveStudent(DS,83);
   TeamFight(DS,2,3,3);
   AddStudent(DS,82,18,171);
   TeamFight(DS,5,17,10);
   TeamFight(DS,21,8,-1); // 3380
   TeamFight(DS,6,5,7);
   RemoveStudent(DS,1);
   JoinTeams(DS,12,13);
   TeamFight(DS,17,11,4);
   GetStudentTeamLeader(DS,79,&leader);
   JoinTeams(DS,18,15);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,26,11,55);
   JoinTeams(DS,11,19);
   TeamFight(DS,20,2,6); // 3390
   TeamFight(DS,11,8,7);
   AddStudent(DS,60,6,207);
   TeamFight(DS,21,12,12);
   TeamFight(DS,22,22,10);
   GetStudentTeamLeader(DS,24,&leader);
   GetStudentTeamLeader(DS,79,&leader);
   AddStudent(DS,13,14,160);
   GetStudentTeamLeader(DS,89,&leader);
   GetStudentTeamLeader(DS,76,&leader);
   GetNumOfWins(DS,20,&number_of_wins); // 3400
   AddStudent(DS,29,20,210);
   AddStudent(DS,81,6,131);
   GetStudentTeamLeader(DS,53,&leader);
   JoinTeams(DS,12,3);
   AddStudent(DS,46,10,255);
   AddStudent(DS,23,11,181);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,21,15,10);
   TeamFight(DS,6,5,13);
   GetNumOfWins(DS,23,&number_of_wins); // 3410
   GetStudentTeamLeader(DS,17,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   RemoveStudent(DS,45);
   RemoveStudent(DS,92);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,84,16,236);
   RemoveStudent(DS,70);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,8,1,34);
   AddStudent(DS,16,4,131); // 3420
   GetNumOfWins(DS,15,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   RemoveStudent(DS,23);
   AddStudent(DS,17,12,138);
   RemoveStudent(DS,28);
   AddStudent(DS,58,11,112);
   TeamFight(DS,11,4,10);
   GetStudentTeamLeader(DS,87,&leader);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,2,7,4); // 3430
   GetStudentTeamLeader(DS,42,&leader);
   TeamFight(DS,23,13,11);
   AddStudent(DS,32,9,245);
   AddStudent(DS,72,9,115);
   AddStudent(DS,1,12,55);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,6,7,10);
   JoinTeams(DS,4,21);
   AddStudent(DS,74,18,202);
   TeamFight(DS,5,3,14); // 3440
   GetStudentTeamLeader(DS,52,&leader);
   AddStudent(DS,84,8,138);
   RemoveStudent(DS,41);
   JoinTeams(DS,2,15);
   TeamFight(DS,23,18,13);
   TeamFight(DS,20,13,6);
   RemoveStudent(DS,12);
   TeamFight(DS,2,19,11);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,24,12,3); // 3450
   AddStudent(DS,27,19,287);
   TeamFight(DS,8,5,8);
   TeamFight(DS,22,7,3);
   TeamFight(DS,8,8,-1);
   TeamFight(DS,18,20,13);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,12,13,-1);
   TeamFight(DS,5,22,3);
   TeamFight(DS,18,18,0);
   AddStudent(DS,39,1,218); // 3460
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,14,14,2);
   TeamFight(DS,19,20,10);
   JoinTeams(DS,8,6);
   TeamFight(DS,15,21,7);
   GetStudentTeamLeader(DS,11,&leader);
   AddStudent(DS,67,11,131);
   AddStudent(DS,94,5,269);
   TeamFight(DS,22,23,12); // 3470
   TeamFight(DS,23,14,13);
   RemoveStudent(DS,35);
   JoinTeams(DS,19,9);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,34,8,189);
   RemoveStudent(DS,66);
   RemoveStudent(DS,41);
   GetNumOfWins(DS,4,&number_of_wins);
   GetStudentTeamLeader(DS,-1,&leader);
   TeamFight(DS,5,8,13); // 3480
   AddStudent(DS,10,21,8);
   RemoveStudent(DS,51);
   TeamFight(DS,17,9,10);
   RemoveStudent(DS,61);
   GetNumOfWins(DS,11,&number_of_wins);
   RemoveStudent(DS,36);
   AddStudent(DS,66,20,263);
   AddStudent(DS,95,5,14);
   GetNumOfWins(DS,20,&number_of_wins);
   TeamFight(DS,10,10,13); // 3490
   GetStudentTeamLeader(DS,40,&leader);
   GetStudentTeamLeader(DS,87,&leader);
   RemoveStudent(DS,4);
   AddStudent(DS,12,5,18);
   AddStudent(DS,24,19,141);
   RemoveStudent(DS,82);
   RemoveStudent(DS,0);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,15,12,87);
   JoinTeams(DS,6,7); // 3500
   AddStudent(DS,58,7,145);
   TeamFight(DS,17,16,1);
   GetNumOfWins(DS,16,&number_of_wins);
   JoinTeams(DS,1,23);
   TeamFight(DS,12,16,12);
   AddStudent(DS,27,16,210);
   RemoveStudent(DS,42);
   JoinTeams(DS,5,20);
   JoinTeams(DS,18,6);
   AddStudent(DS,88,22,22); // 3510
   TeamFight(DS,12,18,11);
   AddStudent(DS,32,6,254);
   TeamFight(DS,15,11,11);
   JoinTeams(DS,13,2);
   TeamFight(DS,12,20,0);
   GetStudentTeamLeader(DS,71,&leader);
   TeamFight(DS,22,16,9);
   RemoveStudent(DS,73);
   TeamFight(DS,12,8,4);
   TeamFight(DS,17,18,1); // 3520
   AddStudent(DS,78,6,290);
   AddStudent(DS,65,13,254);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,64,11,167);
   JoinTeams(DS,22,1);
   RemoveStudent(DS,16);
   TeamFight(DS,16,1,8);
   AddStudent(DS,33,20,111);
   GetStudentTeamLeader(DS,45,&leader);
   AddStudent(DS,91,21,169); // 3530
   TeamFight(DS,15,1,10);
   RemoveStudent(DS,94);
   AddStudent(DS,66,10,198);
   AddStudent(DS,18,24,275);
   TeamFight(DS,6,11,11);
   TeamFight(DS,15,7,12);
   TeamFight(DS,14,7,14);
   RemoveStudent(DS,24);
   TeamFight(DS,12,19,12);
   TeamFight(DS,23,24,9); // 3540
   AddStudent(DS,59,11,216);
   GetNumOfWins(DS,15,&number_of_wins);
   GetStudentTeamLeader(DS,49,&leader);
   AddStudent(DS,5,20,72);
   TeamFight(DS,16,12,3);
   TeamFight(DS,17,2,8);
   JoinTeams(DS,17,8);
   AddStudent(DS,32,3,207);
   JoinTeams(DS,1,7);
   TeamFight(DS,1,3,4); // 3550
   RemoveStudent(DS,77);
   AddStudent(DS,16,21,278);
   AddStudent(DS,1,5,103);
   JoinTeams(DS,21,9);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,10,1,260);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,12,9,8);
   RemoveStudent(DS,70);
   AddStudent(DS,56,21,163); // 3560
   TeamFight(DS,17,3,4);
   AddStudent(DS,26,12,280);
   TeamFight(DS,12,9,10);
   AddStudent(DS,24,17,27);
   TeamFight(DS,4,22,4);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,78,14,35);
   GetStudentTeamLeader(DS,17,&leader);
   TeamFight(DS,9,6,6);
   AddStudent(DS,89,24,212); // 3570
   GetNumOfWins(DS,20,&number_of_wins);
   AddStudent(DS,11,22,221);
   TeamFight(DS,19,1,-1);
   GetNumOfWins(DS,8,&number_of_wins);
   RemoveStudent(DS,82);
   GetStudentTeamLeader(DS,81,&leader);
   JoinTeams(DS,7,6);
   RemoveStudent(DS,27);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,92,13,197); // 3580
   GetStudentTeamLeader(DS,22,&leader);
   TeamFight(DS,8,22,-1);
   AddStudent(DS,81,23,208);
   TeamFight(DS,17,6,6);
   AddStudent(DS,93,19,282);
   RemoveStudent(DS,74);
   AddStudent(DS,71,18,9);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,23,3,10);
   GetStudentTeamLeader(DS,72,&leader); // 3590
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,33,6,234);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,8,5,3);
   AddStudent(DS,11,6,46);
   GetNumOfWins(DS,23,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,37,23,54);
   AddStudent(DS,67,7,112);
   GetNumOfWins(DS,17,&number_of_wins); // 3600
   TeamFight(DS,17,16,14);
   RemoveStudent(DS,29);
   RemoveStudent(DS,45);
   JoinTeams(DS,14,4);
   GetStudentTeamLeader(DS,76,&leader);
   GetStudentTeamLeader(DS,65,&leader);
   RemoveStudent(DS,34);
   AddStudent(DS,17,24,11);
   AddStudent(DS,26,23,7);
   AddStudent(DS,12,20,42); // 3610
   AddStudent(DS,95,23,117);
   TeamFight(DS,12,2,7);
   AddStudent(DS,57,6,225);
   RemoveStudent(DS,58);
   RemoveStudent(DS,92);
   JoinTeams(DS,4,10);
   TeamFight(DS,24,3,5);
   TeamFight(DS,15,10,10);
   GetStudentTeamLeader(DS,89,&leader);
   GetNumOfWins(DS,23,&number_of_wins); // 3620
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,8,14,13);
   GetStudentTeamLeader(DS,52,&leader);
   TeamFight(DS,24,19,11);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,14,9,12);
   GetNumOfWins(DS,21,&number_of_wins);
   AddStudent(DS,24,15,296);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,22,7,205); // 3630
   RemoveStudent(DS,1);
   TeamFight(DS,21,5,8);
   TeamFight(DS,22,5,13);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,-1,19,39);
   GetStudentTeamLeader(DS,77,&leader);
   AddStudent(DS,81,3,247);
   GetStudentTeamLeader(DS,39,&leader);
   RemoveStudent(DS,95);
   AddStudent(DS,74,23,44); // 3640
   GetStudentTeamLeader(DS,67,&leader);
   GetStudentTeamLeader(DS,94,&leader);
   TeamFight(DS,6,24,2);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,79,13,250);
   AddStudent(DS,48,15,46);
   GetStudentTeamLeader(DS,45,&leader);
   AddStudent(DS,22,23,132);
   TeamFight(DS,8,14,3);
   TeamFight(DS,7,3,1); // 3650
   AddStudent(DS,47,3,233);
   TeamFight(DS,10,2,9);
   TeamFight(DS,17,9,-1);
   TeamFight(DS,3,10,11);
   GetStudentTeamLeader(DS,22,&leader);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,25,5,190);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,11,11,1);
   TeamFight(DS,2,6,12); // 3660
   AddStudent(DS,92,4,259);
   RemoveStudent(DS,89);
   JoinTeams(DS,19,15);
   GetStudentTeamLeader(DS,25,&leader);
   AddStudent(DS,82,3,238);
   RemoveStudent(DS,-1);
   TeamFight(DS,19,18,7);
   GetNumOfWins(DS,8,&number_of_wins);
   JoinTeams(DS,17,15);
   RemoveStudent(DS,24); // 3670
   AddStudent(DS,72,4,71);
   AddStudent(DS,65,17,232);
   AddStudent(DS,73,24,66);
   AddStudent(DS,11,7,15);
   TeamFight(DS,17,9,6);
   TeamFight(DS,19,24,0);
   TeamFight(DS,1,2,3);
   JoinTeams(DS,7,12);
   RemoveStudent(DS,38);
   JoinTeams(DS,6,4); // 3680
   AddStudent(DS,93,8,39);
   GetStudentTeamLeader(DS,55,&leader);
   GetStudentTeamLeader(DS,78,&leader);
   AddStudent(DS,70,14,121);
   GetStudentTeamLeader(DS,40,&leader);
   AddStudent(DS,42,20,212);
   TeamFight(DS,10,1,3);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,19,16,14);
   AddStudent(DS,8,7,74); // 3690
   AddStudent(DS,33,5,30);
   RemoveStudent(DS,59);
   JoinTeams(DS,18,14);
   AddStudent(DS,55,11,284);
   GetNumOfWins(DS,21,&number_of_wins);
   AddStudent(DS,43,12,4);
   RemoveStudent(DS,76);
   AddStudent(DS,66,9,204);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,20,12,12); // 3700
   GetNumOfWins(DS,10,&number_of_wins);
   GetNumOfWins(DS,3,&number_of_wins);
   JoinTeams(DS,2,10);
   AddStudent(DS,25,17,157);
   AddStudent(DS,14,21,23);
   AddStudent(DS,41,18,21);
   AddStudent(DS,58,21,176);
   RemoveStudent(DS,81);
   RemoveStudent(DS,51);
   AddStudent(DS,30,4,13); // 3710
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,28,12,187);
   RemoveStudent(DS,78);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,3,18,0);
   AddStudent(DS,63,19,207);
   TeamFight(DS,19,1,9);
   RemoveStudent(DS,8);
   RemoveStudent(DS,78);
   GetNumOfWins(DS,23,&number_of_wins); // 3720
   GetStudentTeamLeader(DS,73,&leader);
   GetStudentTeamLeader(DS,27,&leader);
   AddStudent(DS,29,8,229);
   GetNumOfWins(DS,21,&number_of_wins);
   JoinTeams(DS,14,4);
   TeamFight(DS,18,4,12);
   TeamFight(DS,8,16,4);
   TeamFight(DS,15,3,-1);
   AddStudent(DS,95,4,93);
   GetNumOfWins(DS,14,&number_of_wins); // 3730
   AddStudent(DS,22,7,179);
   AddStudent(DS,67,5,66);
   TeamFight(DS,24,6,11);
   GetStudentTeamLeader(DS,55,&leader);
   GetStudentTeamLeader(DS,67,&leader);
   GetNumOfWins(DS,15,&number_of_wins);
   RemoveStudent(DS,14);
   AddStudent(DS,58,16,148);
   AddStudent(DS,35,20,164);
   TeamFight(DS,18,4,0); // 3740
   RemoveStudent(DS,94);
   AddStudent(DS,89,13,105);
   RemoveStudent(DS,89);
   TeamFight(DS,2,21,0);
   TeamFight(DS,6,4,12);
   RemoveStudent(DS,50);
   GetNumOfWins(DS,20,&number_of_wins);
   TeamFight(DS,19,2,0);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,75,15,69); // 3750
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,16,2,-1);
   GetStudentTeamLeader(DS,86,&leader);
   RemoveStudent(DS,55);
   TeamFight(DS,4,18,2);
   GetStudentTeamLeader(DS,64,&leader);
   TeamFight(DS,18,20,1);
   GetNumOfWins(DS,9,&number_of_wins);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,22,16,74); // 3760
   TeamFight(DS,10,19,5);
   TeamFight(DS,18,15,3);
   GetStudentTeamLeader(DS,45,&leader);
   GetNumOfWins(DS,19,&number_of_wins);
   AddStudent(DS,23,5,205);
   GetStudentTeamLeader(DS,62,&leader);
   AddStudent(DS,71,9,188);
   GetStudentTeamLeader(DS,85,&leader);
   GetStudentTeamLeader(DS,58,&leader);
   TeamFight(DS,24,21,10); // 3770
   GetStudentTeamLeader(DS,72,&leader);
   GetStudentTeamLeader(DS,7,&leader);
   AddStudent(DS,5,24,173);
   GetStudentTeamLeader(DS,0,&leader);
   AddStudent(DS,33,9,37);
   AddStudent(DS,41,2,187);
   GetStudentTeamLeader(DS,63,&leader);
   AddStudent(DS,7,3,25);
   AddStudent(DS,17,10,194);
   TeamFight(DS,24,21,8); // 3780
   JoinTeams(DS,6,17);
   RemoveStudent(DS,55);
   TeamFight(DS,8,21,6);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,28,20,255);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,32,24,255);
   AddStudent(DS,49,18,270);
   TeamFight(DS,6,18,-1);
   GetStudentTeamLeader(DS,77,&leader); // 3790
   TeamFight(DS,3,22,9);
   TeamFight(DS,23,4,12);
   TeamFight(DS,13,17,1);
   TeamFight(DS,22,10,10);
   GetStudentTeamLeader(DS,81,&leader);
   TeamFight(DS,22,4,9);
   JoinTeams(DS,5,19);
   TeamFight(DS,10,1,14);
   TeamFight(DS,19,17,6);
   GetNumOfWins(DS,5,&number_of_wins); // 3800
   AddStudent(DS,45,12,207);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,74,19,167);
   GetStudentTeamLeader(DS,29,&leader);
   TeamFight(DS,13,17,2);
   RemoveStudent(DS,2);
   AddStudent(DS,68,18,128);
   JoinTeams(DS,21,15);
   RemoveStudent(DS,57);
   GetStudentTeamLeader(DS,87,&leader); // 3810
   GetStudentTeamLeader(DS,87,&leader);
   GetStudentTeamLeader(DS,70,&leader);
   TeamFight(DS,15,3,2);
   TeamFight(DS,3,24,5);
   GetNumOfWins(DS,17,&number_of_wins);
   GetNumOfWins(DS,15,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   RemoveStudent(DS,84);
   TeamFight(DS,11,17,13);
   TeamFight(DS,11,21,11); // 3820
   GetStudentTeamLeader(DS,88,&leader);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,1,14,3);
   TeamFight(DS,17,12,7);
   AddStudent(DS,42,7,220);
   AddStudent(DS,0,24,214);
   GetNumOfWins(DS,5,&number_of_wins);
   GetNumOfWins(DS,19,&number_of_wins);
   GetStudentTeamLeader(DS,20,&leader);
   TeamFight(DS,11,16,5); // 3830
   AddStudent(DS,32,18,162);
   GetNumOfWins(DS,5,&number_of_wins);
   GetNumOfWins(DS,20,&number_of_wins);
   RemoveStudent(DS,9);
   TeamFight(DS,18,14,12);
   RemoveStudent(DS,88);
   TeamFight(DS,5,17,14);
   TeamFight(DS,11,14,10);
   RemoveStudent(DS,66);
   GetStudentTeamLeader(DS,87,&leader); // 3840
   AddStudent(DS,33,13,65);
   GetNumOfWins(DS,24,&number_of_wins);
   AddStudent(DS,4,3,0);
   GetNumOfWins(DS,16,&number_of_wins);
   GetStudentTeamLeader(DS,61,&leader);
   GetStudentTeamLeader(DS,56,&leader);
   RemoveStudent(DS,42);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,38,&leader); // 3850
   TeamFight(DS,1,20,8);
   TeamFight(DS,20,1,9);
   AddStudent(DS,38,22,164);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,3,4,7);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,18,21,127);
   RemoveStudent(DS,35); // 3860
   AddStudent(DS,28,21,185);
   JoinTeams(DS,1,7);
   TeamFight(DS,22,8,9);
   JoinTeams(DS,20,15);
   AddStudent(DS,28,5,48);
   AddStudent(DS,11,20,280);
   AddStudent(DS,57,18,93);
   AddStudent(DS,15,10,30);
   RemoveStudent(DS,73);
   AddStudent(DS,0,15,52); // 3870
   TeamFight(DS,10,24,4);
   TeamFight(DS,15,5,2);
   AddStudent(DS,50,9,243);
   AddStudent(DS,46,20,26);
   GetStudentTeamLeader(DS,64,&leader);
   AddStudent(DS,3,23,144);
   GetStudentTeamLeader(DS,12,&leader);
   GetStudentTeamLeader(DS,54,&leader);
   TeamFight(DS,11,8,4);
   GetNumOfWins(DS,21,&number_of_wins); // 3880
   TeamFight(DS,23,18,2);
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,24,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,20,2,-1);
   JoinTeams(DS,10,18);
   AddStudent(DS,29,14,200);
   GetStudentTeamLeader(DS,59,&leader);
   GetStudentTeamLeader(DS,77,&leader);
   TeamFight(DS,14,2,9); // 3890
   AddStudent(DS,27,1,260);
   AddStudent(DS,31,14,289);
   TeamFight(DS,3,4,0);
   TeamFight(DS,15,10,0);
   TeamFight(DS,12,3,6);
   AddStudent(DS,74,24,233);
   GetStudentTeamLeader(DS,36,&leader);
   AddStudent(DS,80,18,77);
   TeamFight(DS,21,24,10);
   RemoveStudent(DS,22); // 3900
   GetStudentTeamLeader(DS,6,&leader);
   TeamFight(DS,12,24,1);
   GetStudentTeamLeader(DS,16,&leader);
   AddStudent(DS,1,3,95);
   JoinTeams(DS,10,16);
   GetNumOfWins(DS,24,&number_of_wins);
   JoinTeams(DS,19,21);
   GetNumOfWins(DS,20,&number_of_wins);
   AddStudent(DS,49,12,119);
   JoinTeams(DS,6,12); // 3910
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,11,18,9);
   TeamFight(DS,15,5,5);
   TeamFight(DS,5,10,5);
   TeamFight(DS,20,20,9);
   AddStudent(DS,49,21,17);
   AddStudent(DS,70,18,109);
   AddStudent(DS,94,4,287);
   TeamFight(DS,23,23,9);
   AddStudent(DS,38,1,41); // 3920
   GetStudentTeamLeader(DS,65,&leader);
   AddStudent(DS,82,6,212);
   GetStudentTeamLeader(DS,2,&leader);
   TeamFight(DS,17,3,6);
   GetNumOfWins(DS,14,&number_of_wins);
   GetStudentTeamLeader(DS,78,&leader);
   TeamFight(DS,24,1,11);
   AddStudent(DS,16,21,248);
   AddStudent(DS,36,1,268);
   TeamFight(DS,3,19,12); // 3930
   TeamFight(DS,16,21,3);
   TeamFight(DS,15,8,13);
   RemoveStudent(DS,85);
   AddStudent(DS,38,15,190);
   JoinTeams(DS,24,19);
   RemoveStudent(DS,54);
   AddStudent(DS,52,5,271);
   JoinTeams(DS,13,2);
   RemoveStudent(DS,66);
   AddStudent(DS,93,10,32); // 3940
   TeamFight(DS,3,15,-1);
   AddStudent(DS,48,5,57);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,14,17,6);
   AddStudent(DS,94,3,84);
   AddStudent(DS,1,5,63);
   AddStudent(DS,31,3,168);
   GetStudentTeamLeader(DS,25,&leader);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,15,1,0); // 3950
   RemoveStudent(DS,59);
   TeamFight(DS,2,11,8);
   GetStudentTeamLeader(DS,25,&leader);
   TeamFight(DS,23,20,13);
   GetStudentTeamLeader(DS,42,&leader);
   GetStudentTeamLeader(DS,5,&leader);
   TeamFight(DS,1,8,0);
   RemoveStudent(DS,40);
   JoinTeams(DS,21,8);
   AddStudent(DS,53,10,171); // 3960
   TeamFight(DS,18,22,3);
   GetNumOfWins(DS,19,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,15,&number_of_wins);
   GetStudentTeamLeader(DS,60,&leader);
   RemoveStudent(DS,72);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,9,15,33);
   AddStudent(DS,26,14,23);
   GetStudentTeamLeader(DS,41,&leader); // 3970
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,23,17,7);
   TeamFight(DS,18,8,1);
   TeamFight(DS,7,9,13);
   AddStudent(DS,85,20,77);
   RemoveStudent(DS,38);
   GetStudentTeamLeader(DS,11,&leader);
   GetStudentTeamLeader(DS,93,&leader);
   AddStudent(DS,62,5,14);
   GetNumOfWins(DS,2,&number_of_wins); // 3980
   AddStudent(DS,86,13,33);
   TeamFight(DS,9,11,0);
   RemoveStudent(DS,70);
   GetStudentTeamLeader(DS,37,&leader);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,23,&number_of_wins);
   GetNumOfWins(DS,19,&number_of_wins);
   TeamFight(DS,6,6,11);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,4,19,12); // 3990
   AddStudent(DS,39,14,140);
   GetStudentTeamLeader(DS,36,&leader);
   AddStudent(DS,4,12,119);
   GetStudentTeamLeader(DS,10,&leader);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,1,10,2);
   GetStudentTeamLeader(DS,17,&leader);
   TeamFight(DS,18,2,12);
   AddStudent(DS,34,19,129);
   TeamFight(DS,24,13,12); // 4000
   RemoveStudent(DS,21);
   GetStudentTeamLeader(DS,49,&leader);
   RemoveStudent(DS,89);
   AddStudent(DS,3,17,253);
   TeamFight(DS,8,16,5);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,32,6,120);
   RemoveStudent(DS,21);
   TeamFight(DS,1,7,12);
   AddStudent(DS,40,6,255); // 4010
   TeamFight(DS,22,3,2);
   TeamFight(DS,21,6,-1);
   AddStudent(DS,58,15,206);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,0,12,43);
   TeamFight(DS,21,22,13);
   AddStudent(DS,31,8,240);
   AddStudent(DS,95,5,17);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,14,22,154); // 4020
   AddStudent(DS,71,12,196);
   GetStudentTeamLeader(DS,68,&leader);
   RemoveStudent(DS,10);
   AddStudent(DS,61,3,273);
   AddStudent(DS,48,21,8);
   JoinTeams(DS,10,11);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,11,23,10);
   GetStudentTeamLeader(DS,50,&leader);
   GetStudentTeamLeader(DS,58,&leader); // 4030
   GetStudentTeamLeader(DS,63,&leader);
   TeamFight(DS,13,14,1);
   GetStudentTeamLeader(DS,68,&leader);
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,5,1,265);
   TeamFight(DS,10,17,-1);
   AddStudent(DS,-1,1,64);
   AddStudent(DS,59,16,171);
   AddStudent(DS,-1,20,272);
   AddStudent(DS,92,18,111); // 4040
   AddStudent(DS,86,2,266);
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,5,11,6);
   AddStudent(DS,65,15,201);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,72,4,195);
   GetStudentTeamLeader(DS,70,&leader);
   TeamFight(DS,19,10,7);
   RemoveStudent(DS,59); // 4050
   GetStudentTeamLeader(DS,22,&leader);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,34,16,130);
   GetStudentTeamLeader(DS,30,&leader);
   TeamFight(DS,18,3,14);
   JoinTeams(DS,7,10);
   RemoveStudent(DS,20);
   GetStudentTeamLeader(DS,9,&leader);
   AddStudent(DS,76,20,43);
   JoinTeams(DS,14,8); // 4060
   RemoveStudent(DS,16);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,2,19,10);
   GetStudentTeamLeader(DS,30,&leader);
   GetStudentTeamLeader(DS,51,&leader);
   GetStudentTeamLeader(DS,92,&leader);
   AddStudent(DS,7,5,77);
   GetStudentTeamLeader(DS,49,&leader);
   AddStudent(DS,56,7,127);
   RemoveStudent(DS,25); // 4070
   AddStudent(DS,11,13,279);
   GetNumOfWins(DS,20,&number_of_wins);
   AddStudent(DS,77,13,208);
   AddStudent(DS,85,14,165);
   GetStudentTeamLeader(DS,62,&leader);
   GetStudentTeamLeader(DS,72,&leader);
   GetStudentTeamLeader(DS,82,&leader);
   TeamFight(DS,9,21,11);
   TeamFight(DS,3,4,14);
   GetNumOfWins(DS,16,&number_of_wins); // 4080
   GetNumOfWins(DS,2,&number_of_wins);
   GetStudentTeamLeader(DS,4,&leader);
   AddStudent(DS,6,23,253);
   RemoveStudent(DS,72);
   GetStudentTeamLeader(DS,23,&leader);
   GetStudentTeamLeader(DS,56,&leader);
   AddStudent(DS,70,1,168);
   TeamFight(DS,15,20,2);
   TeamFight(DS,20,15,0);
   TeamFight(DS,16,22,4); // 4090
   GetStudentTeamLeader(DS,39,&leader);
   RemoveStudent(DS,27);
   GetNumOfWins(DS,23,&number_of_wins);
   TeamFight(DS,18,1,11);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,22,&number_of_wins);
   GetStudentTeamLeader(DS,22,&leader);
   AddStudent(DS,20,2,194);
   RemoveStudent(DS,21);
   AddStudent(DS,11,7,74); // 4100
   GetStudentTeamLeader(DS,93,&leader);
   GetNumOfWins(DS,22,&number_of_wins);
   GetStudentTeamLeader(DS,5,&leader);
   JoinTeams(DS,20,5);
   TeamFight(DS,10,10,0);
   TeamFight(DS,5,1,6);
   AddStudent(DS,23,23,229);
   TeamFight(DS,4,10,1);
   AddStudent(DS,27,11,226);
   AddStudent(DS,75,5,210); // 4110
   TeamFight(DS,17,20,9);
   GetStudentTeamLeader(DS,12,&leader);
   RemoveStudent(DS,95);
   JoinTeams(DS,9,9);
   GetStudentTeamLeader(DS,63,&leader);
   AddStudent(DS,75,6,72);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,56,20,113);
   AddStudent(DS,62,1,36);
   GetStudentTeamLeader(DS,39,&leader); // 4120
   GetStudentTeamLeader(DS,53,&leader);
   RemoveStudent(DS,10);
   RemoveStudent(DS,71);
   RemoveStudent(DS,13);
   TeamFight(DS,12,11,4);
   GetStudentTeamLeader(DS,10,&leader);
   RemoveStudent(DS,2);
   GetStudentTeamLeader(DS,33,&leader);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,60,24,167); // 4130
   TeamFight(DS,19,9,12);
   AddStudent(DS,68,10,17);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,37,4,28);
   AddStudent(DS,85,5,25);
   GetNumOfWins(DS,16,&number_of_wins);
   GetStudentTeamLeader(DS,23,&leader);
   TeamFight(DS,1,19,11);
   TeamFight(DS,14,15,5);
   GetStudentTeamLeader(DS,50,&leader); // 4140
   GetStudentTeamLeader(DS,7,&leader);
   GetStudentTeamLeader(DS,27,&leader);
   GetStudentTeamLeader(DS,25,&leader);
   GetStudentTeamLeader(DS,55,&leader);
   GetStudentTeamLeader(DS,66,&leader);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,20,9,1);
   AddStudent(DS,53,14,68);
   RemoveStudent(DS,11);
   AddStudent(DS,43,12,288); // 4150
   JoinTeams(DS,17,19);
   AddStudent(DS,45,12,235);
   GetStudentTeamLeader(DS,70,&leader);
   AddStudent(DS,84,13,53);
   AddStudent(DS,69,23,103);
   AddStudent(DS,92,20,162);
   RemoveStudent(DS,1);
   GetStudentTeamLeader(DS,48,&leader);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,21,8,14); // 4160
   AddStudent(DS,95,7,250);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,53,13,72);
   GetNumOfWins(DS,24,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins);
   TeamFight(DS,18,4,11);
   GetStudentTeamLeader(DS,77,&leader);
   JoinTeams(DS,21,19);
   AddStudent(DS,63,10,48);
   GetNumOfWins(DS,15,&number_of_wins); // 4170
   TeamFight(DS,3,21,4);
   GetNumOfWins(DS,24,&number_of_wins);
   GetStudentTeamLeader(DS,8,&leader);
   RemoveStudent(DS,87);
   GetNumOfWins(DS,2,&number_of_wins);
   JoinTeams(DS,9,10);
   TeamFight(DS,5,13,-1);
   GetStudentTeamLeader(DS,78,&leader);
   AddStudent(DS,42,12,271);
   TeamFight(DS,24,4,11); // 4180
   GetNumOfWins(DS,14,&number_of_wins);
   GetStudentTeamLeader(DS,14,&leader);
   GetStudentTeamLeader(DS,4,&leader);
   TeamFight(DS,10,14,8);
   RemoveStudent(DS,85);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,40,24,0);
   JoinTeams(DS,8,20);
   TeamFight(DS,5,9,-1);
   GetNumOfWins(DS,21,&number_of_wins); // 4190
   RemoveStudent(DS,62);
   TeamFight(DS,21,3,8);
   AddStudent(DS,86,19,187);
   GetNumOfWins(DS,23,&number_of_wins);
   GetNumOfWins(DS,13,&number_of_wins);
   JoinTeams(DS,2,21);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,49,6,159);
   AddStudent(DS,73,3,186);
   GetStudentTeamLeader(DS,94,&leader); // 4200
   AddStudent(DS,74,10,175);
   RemoveStudent(DS,59);
   GetNumOfWins(DS,9,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins);
   RemoveStudent(DS,13);
   TeamFight(DS,14,2,7);
   TeamFight(DS,14,14,8);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,20,&number_of_wins);
   TeamFight(DS,9,11,2); // 4210
   AddStudent(DS,68,4,160);
   GetStudentTeamLeader(DS,11,&leader);
   TeamFight(DS,5,19,3);
   TeamFight(DS,4,6,9);
   GetStudentTeamLeader(DS,78,&leader);
   TeamFight(DS,5,12,-1);
   TeamFight(DS,9,4,0);
   RemoveStudent(DS,75);
   GetStudentTeamLeader(DS,4,&leader);
   TeamFight(DS,7,11,8); // 4220
   TeamFight(DS,15,3,4);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,90,5,80);
   AddStudent(DS,74,18,35);
   AddStudent(DS,47,19,120);
   AddStudent(DS,23,5,101);
   TeamFight(DS,7,10,14);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,58,8,138);
   AddStudent(DS,32,24,126); // 4230
   AddStudent(DS,90,8,230);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,24,&number_of_wins);
   AddStudent(DS,13,19,221);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,7,16,59);
   TeamFight(DS,19,22,0);
   AddStudent(DS,23,7,167);
   AddStudent(DS,28,12,185);
   AddStudent(DS,68,21,215); // 4240
   RemoveStudent(DS,50);
   AddStudent(DS,72,8,13);
   GetStudentTeamLeader(DS,5,&leader);
   TeamFight(DS,19,12,5);
   TeamFight(DS,14,12,9);
   GetNumOfWins(DS,4,&number_of_wins);
   RemoveStudent(DS,47);
   AddStudent(DS,74,24,85);
   GetNumOfWins(DS,13,&number_of_wins);
   GetNumOfWins(DS,3,&number_of_wins); // 4250
   RemoveStudent(DS,43);
   GetStudentTeamLeader(DS,18,&leader);
   JoinTeams(DS,11,12);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,71,10,7);
   TeamFight(DS,18,8,1);
   AddStudent(DS,94,10,243);
   AddStudent(DS,5,15,252);
   RemoveStudent(DS,80);
   AddStudent(DS,20,12,28); // 4260
   TeamFight(DS,12,6,12);
   JoinTeams(DS,24,5);
   AddStudent(DS,13,16,132);
   AddStudent(DS,3,18,173);
   AddStudent(DS,37,1,117);
   RemoveStudent(DS,81);
   GetStudentTeamLeader(DS,81,&leader);
   GetStudentTeamLeader(DS,6,&leader);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,13,8,4); // 4270
   TeamFight(DS,4,17,10);
   AddStudent(DS,49,18,70);
   AddStudent(DS,23,24,236);
   AddStudent(DS,60,12,281);
   GetNumOfWins(DS,15,&number_of_wins);
   RemoveStudent(DS,76);
   TeamFight(DS,23,11,3);
   AddStudent(DS,41,20,113);
   TeamFight(DS,18,11,11);
   GetNumOfWins(DS,5,&number_of_wins); // 4280
   AddStudent(DS,41,2,283);
   GetStudentTeamLeader(DS,28,&leader);
   TeamFight(DS,17,8,3);
   TeamFight(DS,15,22,4);
   GetStudentTeamLeader(DS,20,&leader);
   TeamFight(DS,23,23,1);
   RemoveStudent(DS,51);
   RemoveStudent(DS,64);
   GetStudentTeamLeader(DS,24,&leader);
   AddStudent(DS,8,17,221); // 4290
   RemoveStudent(DS,7);
   AddStudent(DS,30,10,210);
   AddStudent(DS,39,10,7);
   AddStudent(DS,81,7,4);
   TeamFight(DS,17,24,2);
   TeamFight(DS,21,8,12);
   GetStudentTeamLeader(DS,88,&leader);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,9,18,101);
   GetNumOfWins(DS,4,&number_of_wins); // 4300
   AddStudent(DS,48,18,160);
   TeamFight(DS,22,11,6);
   GetNumOfWins(DS,12,&number_of_wins);
   GetStudentTeamLeader(DS,-1,&leader);
   GetStudentTeamLeader(DS,26,&leader);
   RemoveStudent(DS,8);
   AddStudent(DS,79,17,91);
   GetStudentTeamLeader(DS,53,&leader);
   GetStudentTeamLeader(DS,4,&leader);
   AddStudent(DS,14,5,41); // 4310
   GetNumOfWins(DS,24,&number_of_wins);
   GetStudentTeamLeader(DS,80,&leader);
   GetNumOfWins(DS,20,&number_of_wins);
   TeamFight(DS,20,5,0);
   GetStudentTeamLeader(DS,73,&leader);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,5,1,180);
   AddStudent(DS,32,15,266);
   TeamFight(DS,1,4,9);
   GetStudentTeamLeader(DS,20,&leader); // 4320
   AddStudent(DS,89,6,-1);
   GetNumOfWins(DS,12,&number_of_wins);
   JoinTeams(DS,19,14);
   TeamFight(DS,15,5,6);
   AddStudent(DS,10,8,37);
   AddStudent(DS,41,23,141);
   TeamFight(DS,23,11,0);
   TeamFight(DS,16,17,7);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,43,18,215); // 4330
   AddStudent(DS,80,13,212);
   GetNumOfWins(DS,17,&number_of_wins);
   JoinTeams(DS,3,13);
   AddStudent(DS,54,3,159);
   JoinTeams(DS,21,3);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,2,17,8);
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,3,5,84); // 4340
   RemoveStudent(DS,35);
   RemoveStudent(DS,0);
   GetNumOfWins(DS,15,&number_of_wins);
   RemoveStudent(DS,61);
   TeamFight(DS,17,6,6);
   TeamFight(DS,20,15,8);
   GetStudentTeamLeader(DS,15,&leader);
   GetStudentTeamLeader(DS,91,&leader);
   RemoveStudent(DS,82);
   GetStudentTeamLeader(DS,26,&leader); // 4350
   TeamFight(DS,2,6,1);
   TeamFight(DS,18,10,11);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,3,7,9);
   RemoveStudent(DS,49);
   GetNumOfWins(DS,8,&number_of_wins);
   JoinTeams(DS,5,7);
   TeamFight(DS,4,13,7);
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins); // 4360
   AddStudent(DS,37,1,239);
   TeamFight(DS,17,16,-1);
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,12,&leader);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,2,24,2);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,2,2,0);
   GetNumOfWins(DS,19,&number_of_wins);
   JoinTeams(DS,13,19); // 4370
   AddStudent(DS,72,1,100);
   AddStudent(DS,11,20,100);
   TeamFight(DS,12,24,9);
   RemoveStudent(DS,82);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   JoinTeams(DS,13,21);
   GetStudentTeamLeader(DS,18,&leader);
   TeamFight(DS,19,23,11);
   TeamFight(DS,7,13,5); // 4380
   RemoveStudent(DS,-1);
   JoinTeams(DS,1,6);
   TeamFight(DS,22,13,1);
   RemoveStudent(DS,38);
   RemoveStudent(DS,87);
   JoinTeams(DS,2,12);
   JoinTeams(DS,6,23);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,13,9,7);
   GetStudentTeamLeader(DS,76,&leader); // 4390
   GetStudentTeamLeader(DS,19,&leader);
   GetNumOfWins(DS,20,&number_of_wins);
   AddStudent(DS,13,8,234);
   JoinTeams(DS,20,4);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,83,&leader);
   RemoveStudent(DS,37);
   AddStudent(DS,37,13,137);
   GetStudentTeamLeader(DS,13,&leader);
   AddStudent(DS,7,15,297); // 4400
   AddStudent(DS,20,15,266);
   AddStudent(DS,67,3,104);
   AddStudent(DS,94,6,83);
   TeamFight(DS,9,3,13);
   GetNumOfWins(DS,10,&number_of_wins);
   JoinTeams(DS,14,4);
   GetNumOfWins(DS,21,&number_of_wins);
   AddStudent(DS,83,10,217);
   GetStudentTeamLeader(DS,56,&leader);
   TeamFight(DS,19,16,13); // 4410
   AddStudent(DS,6,3,19);
   GetNumOfWins(DS,16,&number_of_wins);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,20,2,1);
   RemoveStudent(DS,80);
   GetNumOfWins(DS,7,&number_of_wins);
   RemoveStudent(DS,7);
   AddStudent(DS,10,15,204);
   AddStudent(DS,43,6,84);
   TeamFight(DS,24,6,10); // 4420
   AddStudent(DS,57,21,21);
   TeamFight(DS,24,24,-1);
   AddStudent(DS,68,19,227);
   AddStudent(DS,21,22,195);
   AddStudent(DS,53,3,176);
   GetStudentTeamLeader(DS,19,&leader);
   AddStudent(DS,92,14,62);
   TeamFight(DS,20,6,11);
   GetNumOfWins(DS,15,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins); // 4430
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,9,18,11);
   AddStudent(DS,10,6,121);
   GetStudentTeamLeader(DS,89,&leader);
   TeamFight(DS,5,10,7);
   RemoveStudent(DS,41);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,83,11,209);
   AddStudent(DS,-1,14,130);
   TeamFight(DS,11,14,12); // 4440
   AddStudent(DS,24,19,100);
   TeamFight(DS,6,24,9);
   AddStudent(DS,1,9,132);
   JoinTeams(DS,23,22);
   AddStudent(DS,88,18,176);
   AddStudent(DS,45,6,279);
   GetStudentTeamLeader(DS,88,&leader);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,24,19,14);
   GetNumOfWins(DS,8,&number_of_wins); // 4450
   TeamFight(DS,9,2,0);
   GetStudentTeamLeader(DS,58,&leader);
   JoinTeams(DS,16,21);
   TeamFight(DS,12,2,8);
   JoinTeams(DS,3,7);
   AddStudent(DS,37,22,31);
   TeamFight(DS,7,6,8);
   AddStudent(DS,46,14,201);
   AddStudent(DS,18,15,200);
   TeamFight(DS,16,3,9); // 4460
   GetStudentTeamLeader(DS,-1,&leader);
   AddStudent(DS,69,22,41);
   TeamFight(DS,15,24,5);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,16,19,-1);
   AddStudent(DS,81,14,77);
   GetStudentTeamLeader(DS,10,&leader);
   AddStudent(DS,50,20,262);
   AddStudent(DS,66,11,89);
   AddStudent(DS,27,24,205); // 4470
   GetNumOfWins(DS,19,&number_of_wins);
   RemoveStudent(DS,83);
   TeamFight(DS,1,4,6);
   TeamFight(DS,10,10,13);
   GetStudentTeamLeader(DS,89,&leader);
   TeamFight(DS,17,1,11);
   TeamFight(DS,1,5,10);
   AddStudent(DS,72,6,97);
   TeamFight(DS,21,7,2);
   JoinTeams(DS,19,20); // 4480
   RemoveStudent(DS,59);
   GetStudentTeamLeader(DS,32,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,3,9,1);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,68,16,184);
   TeamFight(DS,23,5,2);
   RemoveStudent(DS,1);
   AddStudent(DS,34,3,165);
   RemoveStudent(DS,92); // 4490
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,16,3,-1);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,10,15,3);
   TeamFight(DS,7,18,4);
   TeamFight(DS,3,21,14);
   TeamFight(DS,1,21,1);
   TeamFight(DS,23,22,7);
   AddStudent(DS,57,23,47); // 4500
   AddStudent(DS,43,19,294);
   RemoveStudent(DS,47);
   AddStudent(DS,13,1,147);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,24,8,14);
   AddStudent(DS,43,12,230);
   RemoveStudent(DS,51);
   GetStudentTeamLeader(DS,50,&leader);
   TeamFight(DS,7,5,1);
   RemoveStudent(DS,92); // 4510
   AddStudent(DS,13,11,193);
   RemoveStudent(DS,69);
   GetNumOfWins(DS,4,&number_of_wins);
   GetStudentTeamLeader(DS,12,&leader);
   TeamFight(DS,14,19,11);
   GetStudentTeamLeader(DS,79,&leader);
   RemoveStudent(DS,41);
   TeamFight(DS,6,11,8);
   RemoveStudent(DS,68);
   TeamFight(DS,2,3,3); // 4520
   AddStudent(DS,42,19,73);
   GetStudentTeamLeader(DS,54,&leader);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,63,12,7);
   TeamFight(DS,6,3,13);
   RemoveStudent(DS,10);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,78,10,185);
   GetStudentTeamLeader(DS,94,&leader);
   RemoveStudent(DS,95); // 4530
   AddStudent(DS,62,6,205);
   TeamFight(DS,20,21,7);
   GetNumOfWins(DS,15,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins);
   JoinTeams(DS,24,7);
   AddStudent(DS,56,1,218);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,11,23,-1);
   TeamFight(DS,13,20,2);
   GetNumOfWins(DS,14,&number_of_wins); // 4540
   AddStudent(DS,61,6,87);
   TeamFight(DS,17,24,6);
   GetStudentTeamLeader(DS,52,&leader);
   AddStudent(DS,86,22,41);
   GetNumOfWins(DS,23,&number_of_wins);
   GetStudentTeamLeader(DS,92,&leader);
   GetStudentTeamLeader(DS,76,&leader);
   TeamFight(DS,12,9,11);
   AddStudent(DS,43,20,162);
   GetStudentTeamLeader(DS,32,&leader); // 4550
   AddStudent(DS,18,21,170);
   AddStudent(DS,68,15,127);
   GetStudentTeamLeader(DS,49,&leader);
   RemoveStudent(DS,63);
   RemoveStudent(DS,2);
   TeamFight(DS,24,13,14);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,2,16,14);
   TeamFight(DS,10,2,10);
   GetStudentTeamLeader(DS,12,&leader); // 4560
   TeamFight(DS,24,8,9);
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,74,13,90);
   AddStudent(DS,34,17,192);
   GetStudentTeamLeader(DS,27,&leader);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,22,1,4);
   JoinTeams(DS,8,5);
   GetStudentTeamLeader(DS,-1,&leader); // 4570
   RemoveStudent(DS,76);
   AddStudent(DS,45,16,231);
   GetNumOfWins(DS,24,&number_of_wins);
   TeamFight(DS,8,20,3);
   AddStudent(DS,59,23,68);
   AddStudent(DS,16,9,129);
   GetStudentTeamLeader(DS,7,&leader);
   JoinTeams(DS,8,24);
   AddStudent(DS,55,7,222);
   GetNumOfWins(DS,9,&number_of_wins); // 4580
   GetStudentTeamLeader(DS,71,&leader);
   TeamFight(DS,10,20,9);
   AddStudent(DS,19,14,57);
   AddStudent(DS,63,7,195);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,91,4,255);
   TeamFight(DS,8,4,2);
   AddStudent(DS,57,5,17);
   GetNumOfWins(DS,4,&number_of_wins);
   RemoveStudent(DS,49); // 4590
   RemoveStudent(DS,64);
   GetNumOfWins(DS,24,&number_of_wins);
   TeamFight(DS,23,10,-1);
   GetStudentTeamLeader(DS,75,&leader);
   GetNumOfWins(DS,1,&number_of_wins);
   GetStudentTeamLeader(DS,27,&leader);
   AddStudent(DS,69,20,98);
   TeamFight(DS,8,23,2);
   TeamFight(DS,11,10,9);
   JoinTeams(DS,12,9); // 4600
   GetStudentTeamLeader(DS,13,&leader);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,21,23,197);
   GetNumOfWins(DS,7,&number_of_wins);
   JoinTeams(DS,1,23);
   AddStudent(DS,85,6,252);
   TeamFight(DS,9,5,9);
   TeamFight(DS,5,5,3);
   TeamFight(DS,1,9,9);
   GetStudentTeamLeader(DS,54,&leader); // 4610
   TeamFight(DS,7,11,4);
   RemoveStudent(DS,50);
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,5,24,61);
   TeamFight(DS,1,8,7);
   GetStudentTeamLeader(DS,16,&leader);
   TeamFight(DS,17,1,11);
   JoinTeams(DS,14,8);
   RemoveStudent(DS,73); // 4620
   GetStudentTeamLeader(DS,88,&leader);
   GetNumOfWins(DS,19,&number_of_wins);
   TeamFight(DS,18,19,2);
   AddStudent(DS,80,7,154);
   AddStudent(DS,83,5,248);
   TeamFight(DS,4,15,12);
   AddStudent(DS,83,18,207);
   AddStudent(DS,42,8,289);
   TeamFight(DS,20,11,7);
   JoinTeams(DS,14,15); // 4630
   AddStudent(DS,94,13,282);
   GetStudentTeamLeader(DS,50,&leader);
   AddStudent(DS,64,16,112);
   JoinTeams(DS,9,14);
   TeamFight(DS,3,22,15);
   AddStudent(DS,27,16,48);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,78,12,194);
   JoinTeams(DS,21,18);
   TeamFight(DS,6,2,3); // 4640
   GetNumOfWins(DS,19,&number_of_wins);
   GetStudentTeamLeader(DS,37,&leader);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,14,16,10);
   GetStudentTeamLeader(DS,27,&leader);
   TeamFight(DS,4,21,4);
   AddStudent(DS,14,5,115);
   GetStudentTeamLeader(DS,5,&leader);
   AddStudent(DS,74,18,153);
   GetNumOfWins(DS,11,&number_of_wins); // 4650
   GetStudentTeamLeader(DS,61,&leader);
   GetNumOfWins(DS,19,&number_of_wins);
   JoinTeams(DS,7,21);
   TeamFight(DS,9,19,-1);
   GetStudentTeamLeader(DS,56,&leader);
   TeamFight(DS,23,4,13);
   RemoveStudent(DS,70);
   AddStudent(DS,12,10,159);
   TeamFight(DS,18,1,7);
   GetNumOfWins(DS,11,&number_of_wins); // 4660
   TeamFight(DS,8,3,4);
   TeamFight(DS,22,9,1);
   GetStudentTeamLeader(DS,40,&leader);
   AddStudent(DS,65,12,189);
   GetStudentTeamLeader(DS,52,&leader);
   AddStudent(DS,33,1,184);
   GetStudentTeamLeader(DS,87,&leader);
   GetStudentTeamLeader(DS,57,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,64,12,132); // 4670
   AddStudent(DS,39,9,230);
   AddStudent(DS,37,12,213);
   GetNumOfWins(DS,20,&number_of_wins);
   GetNumOfWins(DS,4,&number_of_wins);
   GetStudentTeamLeader(DS,92,&leader);
   GetStudentTeamLeader(DS,82,&leader);
   TeamFight(DS,17,11,7);
   GetStudentTeamLeader(DS,15,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins); // 4680
   RemoveStudent(DS,9);
   GetStudentTeamLeader(DS,11,&leader);
   JoinTeams(DS,11,13);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,52,11,230);
   RemoveStudent(DS,2);
   RemoveStudent(DS,78);
   AddStudent(DS,74,24,15);
   TeamFight(DS,16,11,13);
   GetStudentTeamLeader(DS,43,&leader); // 4690
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,6,2,15);
   GetStudentTeamLeader(DS,76,&leader);
   AddStudent(DS,71,18,263);
   GetNumOfWins(DS,24,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,13,7,12);
   GetStudentTeamLeader(DS,20,&leader);
   TeamFight(DS,18,4,-1);
   AddStudent(DS,-1,12,158); // 4700
   TeamFight(DS,6,8,12);
   AddStudent(DS,73,10,7);
   RemoveStudent(DS,2);
   AddStudent(DS,75,5,144);
   TeamFight(DS,6,22,1);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,72,14,62);
   AddStudent(DS,3,12,291);
   TeamFight(DS,5,20,9);
   AddStudent(DS,87,12,220); // 4710
   TeamFight(DS,20,5,7);
   RemoveStudent(DS,51);
   GetNumOfWins(DS,22,&number_of_wins);
   TeamFight(DS,20,10,15);
   RemoveStudent(DS,19);
   AddStudent(DS,70,17,281);
   AddStudent(DS,80,14,109);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,38,&leader); // 4720
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,13,20,23);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,4,16,54);
   AddStudent(DS,93,7,269);
   TeamFight(DS,9,14,-1);
   TeamFight(DS,15,6,-1);
   AddStudent(DS,82,5,253);
   AddStudent(DS,34,13,205);
   GetNumOfWins(DS,14,&number_of_wins); // 4730
   AddStudent(DS,59,4,162);
   AddStudent(DS,22,5,1);
   JoinTeams(DS,22,7);
   AddStudent(DS,41,4,256);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,10,20,-1);
   TeamFight(DS,22,4,4);
   RemoveStudent(DS,62);
   TeamFight(DS,12,20,1);
   TeamFight(DS,19,10,19); // 4740
   AddStudent(DS,80,18,104);
   AddStudent(DS,79,14,17);
   AddStudent(DS,31,17,110);
   TeamFight(DS,22,1,14);
   RemoveStudent(DS,17);
   JoinTeams(DS,14,7);
   AddStudent(DS,8,16,29);
   AddStudent(DS,79,9,89);
   TeamFight(DS,14,4,17);
   AddStudent(DS,52,21,138); // 4750
   GetNumOfWins(DS,22,&number_of_wins);
   AddStudent(DS,84,3,239);
   TeamFight(DS,18,1,9);
   AddStudent(DS,28,21,195);
   TeamFight(DS,20,17,19);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,76,7,45);
   TeamFight(DS,5,1,5);
   TeamFight(DS,22,20,0);
   TeamFight(DS,4,23,3); // 4760
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,5,4,19);
   AddStudent(DS,7,8,70);
   AddStudent(DS,4,8,14);
   AddStudent(DS,86,17,6);
   AddStudent(DS,10,8,104);
   JoinTeams(DS,16,18);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,2,24,5);
   JoinTeams(DS,3,17); // 4770
   JoinTeams(DS,18,1);
   GetStudentTeamLeader(DS,48,&leader);
   GetNumOfWins(DS,19,&number_of_wins);
   AddStudent(DS,13,20,261);
   AddStudent(DS,48,14,265);
   AddStudent(DS,6,11,114);
   GetStudentTeamLeader(DS,50,&leader);
   TeamFight(DS,7,2,5);
   GetNumOfWins(DS,20,&number_of_wins);
   JoinTeams(DS,10,5); // 4780
   RemoveStudent(DS,16);
   TeamFight(DS,8,11,14);
   JoinTeams(DS,9,4);
   TeamFight(DS,3,16,3);
   JoinTeams(DS,6,8);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,35,14,274);
   TeamFight(DS,10,12,18);
   TeamFight(DS,21,1,3);
   RemoveStudent(DS,16); // 4790
   AddStudent(DS,79,4,249);
   AddStudent(DS,20,20,91);
   GetStudentTeamLeader(DS,89,&leader);
   GetStudentTeamLeader(DS,48,&leader);
   RemoveStudent(DS,86);
   AddStudent(DS,67,6,168);
   AddStudent(DS,29,9,225);
   AddStudent(DS,74,3,85);
   TeamFight(DS,9,18,1);
   TeamFight(DS,22,17,11); // 4800
   AddStudent(DS,13,22,1);
   AddStudent(DS,3,22,230);
   JoinTeams(DS,19,19);
   GetNumOfWins(DS,20,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins);
   RemoveStudent(DS,39);
   AddStudent(DS,35,7,235);
   TeamFight(DS,16,14,13);
   AddStudent(DS,9,23,132);
   TeamFight(DS,5,3,3); // 4810
   TeamFight(DS,1,15,1);
   TeamFight(DS,2,8,19);
   GetNumOfWins(DS,13,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,12,23,3);
   RemoveStudent(DS,84);
   TeamFight(DS,10,13,14);
   GetNumOfWins(DS,22,&number_of_wins);
   RemoveStudent(DS,50); // 4820
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,95,&leader);
   GetStudentTeamLeader(DS,78,&leader);
   AddStudent(DS,85,24,291);
   AddStudent(DS,51,3,133);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,65,&leader);
   TeamFight(DS,15,7,7);
   AddStudent(DS,33,2,170);
   GetStudentTeamLeader(DS,49,&leader); // 4830
   RemoveStudent(DS,38);
   TeamFight(DS,9,8,18);
   GetNumOfWins(DS,13,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   GetStudentTeamLeader(DS,85,&leader);
   TeamFight(DS,6,23,13);
   GetNumOfWins(DS,21,&number_of_wins);
   AddStudent(DS,40,14,26);
   AddStudent(DS,46,17,199);
   TeamFight(DS,11,23,14); // 4840
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,20,16,14);
   AddStudent(DS,92,15,27);
   GetNumOfWins(DS,21,&number_of_wins);
   AddStudent(DS,61,13,263);
   RemoveStudent(DS,74);
   AddStudent(DS,28,20,203);
   AddStudent(DS,57,24,180);
   GetStudentTeamLeader(DS,49,&leader);
   AddStudent(DS,70,15,249); // 4850
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,12,20,114);
   RemoveStudent(DS,77);
   JoinTeams(DS,4,3);
   GetNumOfWins(DS,23,&number_of_wins);
   AddStudent(DS,37,20,118);
   AddStudent(DS,57,12,44);
   GetStudentTeamLeader(DS,54,&leader);
   GetStudentTeamLeader(DS,77,&leader);
   RemoveStudent(DS,11); // 4860
   TeamFight(DS,21,18,0);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,22,1,14);
   GetNumOfWins(DS,5,&number_of_wins);
   RemoveStudent(DS,51);
   GetNumOfWins(DS,1,&number_of_wins);
   GetStudentTeamLeader(DS,45,&leader);
   AddStudent(DS,64,6,102);
   RemoveStudent(DS,50);
   AddStudent(DS,9,3,144); // 4870
   GetStudentTeamLeader(DS,62,&leader);
   TeamFight(DS,9,3,4);
   TeamFight(DS,24,22,1);
   TeamFight(DS,15,2,11);
   JoinTeams(DS,22,24);
   JoinTeams(DS,15,4);
   TeamFight(DS,21,13,11);
   AddStudent(DS,95,11,30);
   AddStudent(DS,6,16,22);
   TeamFight(DS,22,17,3); // 4880
   TeamFight(DS,23,5,16);
   AddStudent(DS,-1,21,16);
   TeamFight(DS,14,17,0);
   JoinTeams(DS,17,13);
   TeamFight(DS,3,13,12);
   TeamFight(DS,18,3,9);
   AddStudent(DS,77,9,8);
   AddStudent(DS,8,7,163);
   GetStudentTeamLeader(DS,82,&leader);
   GetStudentTeamLeader(DS,58,&leader); // 4890
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,79,17,57);
   GetStudentTeamLeader(DS,12,&leader);
   JoinTeams(DS,8,13);
   GetNumOfWins(DS,23,&number_of_wins);
   JoinTeams(DS,11,14);
   RemoveStudent(DS,36);
   AddStudent(DS,10,5,78);
   GetStudentTeamLeader(DS,4,&leader);
   GetStudentTeamLeader(DS,19,&leader); // 4900
   GetStudentTeamLeader(DS,95,&leader);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,10,3,296);
   TeamFight(DS,8,8,1);
   AddStudent(DS,66,1,186);
   GetStudentTeamLeader(DS,63,&leader);
   AddStudent(DS,34,3,148);
   AddStudent(DS,48,7,265);
   AddStudent(DS,46,4,19);
   TeamFight(DS,15,24,19); // 4910
   GetStudentTeamLeader(DS,36,&leader);
   TeamFight(DS,20,18,19);
   TeamFight(DS,10,6,7);
   AddStudent(DS,64,17,225);
   GetNumOfWins(DS,22,&number_of_wins);
   RemoveStudent(DS,88);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,3,10,207);
   TeamFight(DS,23,6,8);
   TeamFight(DS,19,6,1); // 4920
   AddStudent(DS,63,5,259);
   TeamFight(DS,15,4,8);
   GetStudentTeamLeader(DS,10,&leader);
   TeamFight(DS,3,17,14);
   TeamFight(DS,1,17,2);
   GetStudentTeamLeader(DS,24,&leader);
   GetNumOfWins(DS,5,&number_of_wins);
   RemoveStudent(DS,61);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,5,20,254); // 4930
   AddStudent(DS,48,1,190);
   TeamFight(DS,7,17,11);
   AddStudent(DS,6,11,221);
   AddStudent(DS,34,20,271);
   RemoveStudent(DS,26);
   RemoveStudent(DS,69);
   TeamFight(DS,5,9,2);
   GetNumOfWins(DS,17,&number_of_wins);
   RemoveStudent(DS,86);
   AddStudent(DS,94,22,26); // 4940
   AddStudent(DS,48,15,122);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,10,&leader);
   TeamFight(DS,10,21,13);
   GetStudentTeamLeader(DS,33,&leader);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,64,3,277);
   AddStudent(DS,28,15,95);
   RemoveStudent(DS,64);
   TeamFight(DS,5,23,12); // 4950
   TeamFight(DS,21,4,10);
   AddStudent(DS,11,8,258);
   TeamFight(DS,9,1,5);
   GetNumOfWins(DS,21,&number_of_wins);
   GetNumOfWins(DS,15,&number_of_wins);
   GetStudentTeamLeader(DS,59,&leader);
   JoinTeams(DS,4,17);
   GetNumOfWins(DS,11,&number_of_wins);
   JoinTeams(DS,20,6);
   GetNumOfWins(DS,15,&number_of_wins); // 4960
   GetStudentTeamLeader(DS,25,&leader);
   TeamFight(DS,20,12,13);
   GetNumOfWins(DS,16,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,57,6,152);
   AddStudent(DS,62,17,246);
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,24,20,0);
   GetStudentTeamLeader(DS,32,&leader);
   JoinTeams(DS,2,21); // 4970
   GetStudentTeamLeader(DS,79,&leader);
   JoinTeams(DS,24,7);
   TeamFight(DS,24,14,7);
   AddStudent(DS,45,9,25);
   AddStudent(DS,91,13,205);
   TeamFight(DS,19,12,6);
   TeamFight(DS,20,2,0);
   GetNumOfWins(DS,23,&number_of_wins);
   JoinTeams(DS,22,10);
   JoinTeams(DS,18,2); // 4980
   RemoveStudent(DS,2);
   TeamFight(DS,14,16,2);
   RemoveStudent(DS,56);
   RemoveStudent(DS,86);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,59,21,216);
   AddStudent(DS,33,7,193);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,92,19,264);
   AddStudent(DS,11,20,30); // 4990
   RemoveStudent(DS,54);
   TeamFight(DS,18,22,3);
   AddStudent(DS,43,16,134);
   GetStudentTeamLeader(DS,71,&leader);
   JoinTeams(DS,5,13);
   TeamFight(DS,3,10,3);
   TeamFight(DS,21,9,10);
   AddStudent(DS,39,3,143);
   AddStudent(DS,40,8,186);
   AddStudent(DS,88,19,187); // 5000
   GetNumOfWins(DS,15,&number_of_wins);
   Quit(&DS);
}
