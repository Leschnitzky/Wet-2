void test() {
   int leader;
   int number_of_wins;
   void* DS = Init(18);
   TeamFight(DS,17,4,3);
   AddStudent(DS,66,10,170);
   JoinTeams(DS,8,16);
   TeamFight(DS,16,6,1);
   TeamFight(DS,1,4,3);
   RemoveStudent(DS,9);
   TeamFight(DS,7,4,-1);
   AddStudent(DS,25,16,114);
   GetStudentTeamLeader(DS,6,&leader); // 10
   AddStudent(DS,15,16,94);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,2,13,0);
   AddStudent(DS,49,3,151);
   AddStudent(DS,49,18,36);
   TeamFight(DS,3,4,2);
   TeamFight(DS,15,12,0);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,17,16,3);
   GetStudentTeamLeader(DS,68,&leader); // 20
   GetStudentTeamLeader(DS,61,&leader);
   GetNumOfWins(DS,2,&number_of_wins);
   RemoveStudent(DS,52);
   TeamFight(DS,13,8,0);
   JoinTeams(DS,15,3);
   AddStudent(DS,24,3,104);
   TeamFight(DS,9,13,3);
   RemoveStudent(DS,50);
   TeamFight(DS,16,17,2);
   GetNumOfWins(DS,5,&number_of_wins); // 30
   RemoveStudent(DS,27);
   RemoveStudent(DS,51);
   AddStudent(DS,38,12,13);
   AddStudent(DS,68,18,114);
   TeamFight(DS,3,15,4);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,67,7,32);
   AddStudent(DS,12,11,5);
   AddStudent(DS,24,16,124);
   RemoveStudent(DS,64); // 40
   AddStudent(DS,56,10,105);
   TeamFight(DS,16,6,0);
   AddStudent(DS,62,18,106);
   TeamFight(DS,12,18,0);
   AddStudent(DS,70,17,64);
   GetNumOfWins(DS,8,&number_of_wins);
   GetStudentTeamLeader(DS,0,&leader);
   TeamFight(DS,8,11,2);
   TeamFight(DS,1,1,3);
   AddStudent(DS,8,8,45); // 50
   AddStudent(DS,34,5,155);
   JoinTeams(DS,3,16);
   AddStudent(DS,46,18,123);
   AddStudent(DS,17,6,103);
   TeamFight(DS,14,6,3);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,5,8,-1);
   AddStudent(DS,10,13,169);
   GetNumOfWins(DS,9,&number_of_wins); // 60
   TeamFight(DS,5,11,0);
   TeamFight(DS,16,1,-1);
   RemoveStudent(DS,41);
   GetStudentTeamLeader(DS,67,&leader);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,71,15,91);
   TeamFight(DS,11,9,-1);
   TeamFight(DS,8,6,9);
   GetStudentTeamLeader(DS,12,&leader);
   AddStudent(DS,71,11,147); // 70
   RemoveStudent(DS,33);
   TeamFight(DS,15,1,4);
   TeamFight(DS,7,7,6);
   GetStudentTeamLeader(DS,45,&leader);
   GetStudentTeamLeader(DS,19,&leader);
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,47,&leader);
   AddStudent(DS,65,15,136);
   TeamFight(DS,4,3,1);
   AddStudent(DS,65,4,156); // 80
   GetStudentTeamLeader(DS,52,&leader);
   TeamFight(DS,16,11,9);
   RemoveStudent(DS,67);
   TeamFight(DS,17,9,3);
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,62,&leader);
   TeamFight(DS,7,3,5);
   TeamFight(DS,18,12,0);
   GetNumOfWins(DS,9,&number_of_wins);
   RemoveStudent(DS,4); // 90
   RemoveStudent(DS,0);
   GetStudentTeamLeader(DS,56,&leader);
   TeamFight(DS,11,11,0);
   AddStudent(DS,62,14,155);
   AddStudent(DS,38,2,19);
   AddStudent(DS,36,14,135);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,30,11,99);
   AddStudent(DS,31,16,150);
   TeamFight(DS,10,9,6); // 100
   JoinTeams(DS,15,3);
   RemoveStudent(DS,56);
   AddStudent(DS,67,11,11);
   AddStudent(DS,2,13,44);
   GetStudentTeamLeader(DS,5,&leader);
   RemoveStudent(DS,12);
   TeamFight(DS,12,6,1);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,14,8,1);
   AddStudent(DS,55,18,16); // 110
   GetStudentTeamLeader(DS,68,&leader);
   AddStudent(DS,66,1,115);
   GetNumOfWins(DS,18,&number_of_wins);
   RemoveStudent(DS,5);
   RemoveStudent(DS,51);
   AddStudent(DS,43,11,100);
   TeamFight(DS,16,10,8);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,19,1,27);
   RemoveStudent(DS,63); // 120
   RemoveStudent(DS,19);
   AddStudent(DS,65,16,11);
   GetStudentTeamLeader(DS,65,&leader);
   GetStudentTeamLeader(DS,2,&leader);
   RemoveStudent(DS,2);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,12,14,96);
   GetStudentTeamLeader(DS,4,&leader);
   TeamFight(DS,12,10,6);
   RemoveStudent(DS,12); // 130
   RemoveStudent(DS,56);
   AddStudent(DS,49,4,85);
   RemoveStudent(DS,26);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,9,14,6);
   AddStudent(DS,3,9,87);
   RemoveStudent(DS,65);
   GetStudentTeamLeader(DS,55,&leader);
   AddStudent(DS,20,12,156);
   AddStudent(DS,68,7,93); // 140
   AddStudent(DS,9,16,5);
   TeamFight(DS,6,7,5);
   JoinTeams(DS,10,6);
   GetNumOfWins(DS,3,&number_of_wins);
   RemoveStudent(DS,39);
   TeamFight(DS,14,18,4);
   AddStudent(DS,16,7,14);
   RemoveStudent(DS,13);
   GetStudentTeamLeader(DS,46,&leader);
   RemoveStudent(DS,17); // 150
   AddStudent(DS,59,8,65);
   RemoveStudent(DS,1);
   AddStudent(DS,7,16,74);
   AddStudent(DS,70,14,104);
   RemoveStudent(DS,16);
   TeamFight(DS,14,14,1);
   RemoveStudent(DS,21);
   GetStudentTeamLeader(DS,49,&leader);
   TeamFight(DS,6,17,5);
   RemoveStudent(DS,15); // 160
   GetNumOfWins(DS,18,&number_of_wins);
   RemoveStudent(DS,54);
   GetStudentTeamLeader(DS,7,&leader);
   AddStudent(DS,52,18,158);
   TeamFight(DS,13,12,8);
   AddStudent(DS,4,9,123);
   AddStudent(DS,54,11,1);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,3,13,25);
   RemoveStudent(DS,3); // 170
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,8,5,9);
   TeamFight(DS,14,5,7);
   TeamFight(DS,14,6,5);
   TeamFight(DS,12,11,8);
   GetStudentTeamLeader(DS,30,&leader);
   TeamFight(DS,2,3,0);
   JoinTeams(DS,16,3); // 180
   AddStudent(DS,3,13,48);
   TeamFight(DS,8,18,4);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,38,11,11);
   GetNumOfWins(DS,9,&number_of_wins);
   RemoveStudent(DS,8);
   RemoveStudent(DS,27);
   RemoveStudent(DS,57);
   TeamFight(DS,5,3,6); // 190
   GetStudentTeamLeader(DS,9,&leader);
   TeamFight(DS,4,8,6);
   AddStudent(DS,67,13,27);
   RemoveStudent(DS,66);
   AddStudent(DS,5,6,57);
   TeamFight(DS,3,6,4);
   TeamFight(DS,10,14,3);
   RemoveStudent(DS,5);
   AddStudent(DS,64,15,91);
   AddStudent(DS,54,14,152); // 200
   RemoveStudent(DS,8);
   TeamFight(DS,13,11,1);
   TeamFight(DS,6,9,8);
   RemoveStudent(DS,22);
   GetStudentTeamLeader(DS,6,&leader);
   GetNumOfWins(DS,8,&number_of_wins);
   GetStudentTeamLeader(DS,8,&leader);
   AddStudent(DS,47,12,169);
   GetStudentTeamLeader(DS,15,&leader);
   GetNumOfWins(DS,4,&number_of_wins); // 210
   AddStudent(DS,15,3,78);
   TeamFight(DS,18,17,2);
   RemoveStudent(DS,19);
   RemoveStudent(DS,5);
   GetStudentTeamLeader(DS,50,&leader);
   GetNumOfWins(DS,18,&number_of_wins);
   JoinTeams(DS,2,13);
   AddStudent(DS,21,5,146);
   GetStudentTeamLeader(DS,18,&leader);
   AddStudent(DS,31,17,159); // 220
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,8,4,97);
   GetStudentTeamLeader(DS,18,&leader);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,54,1,165);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,8,5,9);
   TeamFight(DS,4,6,2); // 230
   AddStudent(DS,37,9,23);
   AddStudent(DS,8,15,147);
   GetStudentTeamLeader(DS,37,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,21,15,155);
   TeamFight(DS,7,10,7);
   AddStudent(DS,47,6,36);
   AddStudent(DS,28,8,143);
   AddStudent(DS,47,6,88);
   RemoveStudent(DS,10); // 240
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,55,4,20);
   GetStudentTeamLeader(DS,60,&leader);
   RemoveStudent(DS,45);
   AddStudent(DS,61,17,127);
   GetStudentTeamLeader(DS,11,&leader);
   GetStudentTeamLeader(DS,9,&leader);
   TeamFight(DS,10,13,0);
   AddStudent(DS,35,18,164);
   AddStudent(DS,11,12,106); // 250
   AddStudent(DS,38,5,23);
   TeamFight(DS,16,3,0);
   JoinTeams(DS,15,18);
   TeamFight(DS,10,8,8);
   AddStudent(DS,40,8,134);
   AddStudent(DS,10,16,111);
   GetStudentTeamLeader(DS,24,&leader);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,37,15,164);
   JoinTeams(DS,17,15); // 260
   GetNumOfWins(DS,2,&number_of_wins);
   GetStudentTeamLeader(DS,33,&leader);
   TeamFight(DS,12,16,12);
   TeamFight(DS,8,17,7);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,5,13,50);
   TeamFight(DS,5,4,7);
   RemoveStudent(DS,51);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,18,18,5); // 270
   GetStudentTeamLeader(DS,9,&leader);
   AddStudent(DS,11,18,92);
   GetStudentTeamLeader(DS,62,&leader);
   GetStudentTeamLeader(DS,27,&leader);
   AddStudent(DS,17,16,130);
   AddStudent(DS,57,9,30);
   RemoveStudent(DS,20);
   RemoveStudent(DS,69);
   TeamFight(DS,12,13,4);
   GetNumOfWins(DS,13,&number_of_wins); // 280
   AddStudent(DS,38,14,162);
   AddStudent(DS,22,7,60);
   AddStudent(DS,28,17,84);
   TeamFight(DS,6,14,10);
   AddStudent(DS,24,15,145);
   GetStudentTeamLeader(DS,64,&leader);
   AddStudent(DS,34,16,68);
   TeamFight(DS,2,18,1);
   RemoveStudent(DS,14);
   TeamFight(DS,6,5,-1); // 290
   TeamFight(DS,10,17,2);
   TeamFight(DS,5,2,11);
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,23,&leader);
   GetStudentTeamLeader(DS,-1,&leader);
   GetStudentTeamLeader(DS,3,&leader);
   RemoveStudent(DS,7);
   AddStudent(DS,64,11,116);
   JoinTeams(DS,6,8);
   AddStudent(DS,53,10,38); // 300
   AddStudent(DS,29,4,148);
   RemoveStudent(DS,28);
   TeamFight(DS,5,10,11);
   GetStudentTeamLeader(DS,70,&leader);
   AddStudent(DS,23,12,7);
   TeamFight(DS,5,8,7);
   AddStudent(DS,60,4,-1);
   AddStudent(DS,35,15,109);
   RemoveStudent(DS,28);
   GetNumOfWins(DS,13,&number_of_wins); // 310
   AddStudent(DS,35,4,131);
   GetStudentTeamLeader(DS,62,&leader);
   AddStudent(DS,64,2,67);
   RemoveStudent(DS,11);
   RemoveStudent(DS,65);
   TeamFight(DS,9,4,5);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,56,12,114);
   JoinTeams(DS,4,18);
   GetNumOfWins(DS,11,&number_of_wins); // 320
   TeamFight(DS,1,11,9);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,5,11,75);
   AddStudent(DS,11,14,5);
   RemoveStudent(DS,17);
   GetNumOfWins(DS,11,&number_of_wins);
   RemoveStudent(DS,61);
   AddStudent(DS,46,8,91);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,14,1,8); // 330
   AddStudent(DS,61,7,47);
   GetStudentTeamLeader(DS,39,&leader);
   TeamFight(DS,18,18,12);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins);
   JoinTeams(DS,4,16);
   GetNumOfWins(DS,7,&number_of_wins);
   RemoveStudent(DS,65);
   GetStudentTeamLeader(DS,31,&leader); // 340
   TeamFight(DS,11,14,5);
   AddStudent(DS,23,2,13);
   TeamFight(DS,18,14,-1);
   GetNumOfWins(DS,6,&number_of_wins);
   RemoveStudent(DS,27);
   TeamFight(DS,9,4,5);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   AddStudent(DS,44,11,168); // 350
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,54,7,65);
   TeamFight(DS,1,6,10);
   AddStudent(DS,62,4,22);
   TeamFight(DS,7,6,10);
   AddStudent(DS,-1,13,86);
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,13,&leader);
   GetStudentTeamLeader(DS,32,&leader);
   GetStudentTeamLeader(DS,4,&leader); // 360
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,5,&number_of_wins);
   TeamFight(DS,9,1,3);
   TeamFight(DS,5,13,13);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,8,18,11);
   AddStudent(DS,19,18,25);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,14,8,1);
   TeamFight(DS,11,2,12); // 370
   AddStudent(DS,23,16,163);
   AddStudent(DS,19,1,87);
   AddStudent(DS,3,16,8);
   AddStudent(DS,24,17,129);
   RemoveStudent(DS,51);
   RemoveStudent(DS,10);
   RemoveStudent(DS,-1);
   AddStudent(DS,4,5,109);
   JoinTeams(DS,5,15);
   RemoveStudent(DS,55); // 380
   AddStudent(DS,45,18,16);
   RemoveStudent(DS,2);
   RemoveStudent(DS,0);
   GetNumOfWins(DS,2,&number_of_wins);
   JoinTeams(DS,10,18);
   GetStudentTeamLeader(DS,65,&leader);
   AddStudent(DS,66,12,81);
   TeamFight(DS,14,4,1);
   TeamFight(DS,14,14,8);
   GetStudentTeamLeader(DS,19,&leader); // 390
   GetNumOfWins(DS,14,&number_of_wins);
   RemoveStudent(DS,50);
   TeamFight(DS,2,10,2);
   RemoveStudent(DS,25);
   TeamFight(DS,16,4,1);
   RemoveStudent(DS,25);
   GetStudentTeamLeader(DS,38,&leader);
   TeamFight(DS,18,3,8);
   AddStudent(DS,68,9,78);
   RemoveStudent(DS,71); // 400
   AddStudent(DS,10,11,5);
   GetStudentTeamLeader(DS,5,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,12,&leader);
   AddStudent(DS,39,2,39);
   TeamFight(DS,8,5,10);
   GetStudentTeamLeader(DS,-1,&leader);
   TeamFight(DS,14,15,12); // 410
   RemoveStudent(DS,62);
   AddStudent(DS,46,11,105);
   AddStudent(DS,57,2,2);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins);
   TeamFight(DS,18,9,2);
   AddStudent(DS,44,2,132);
   TeamFight(DS,1,3,9);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,2,4,51); // 420
   AddStudent(DS,47,13,145);
   GetStudentTeamLeader(DS,52,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,9,17,9);
   TeamFight(DS,10,18,3);
   AddStudent(DS,19,9,118);
   TeamFight(DS,8,5,0);
   AddStudent(DS,45,11,126);
   TeamFight(DS,3,4,12);
   RemoveStudent(DS,8); // 430
   TeamFight(DS,13,10,13);
   TeamFight(DS,17,1,12);
   TeamFight(DS,16,13,2);
   TeamFight(DS,5,7,9);
   TeamFight(DS,1,2,10);
   GetStudentTeamLeader(DS,41,&leader);
   TeamFight(DS,11,18,11);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,16,13,0);
   AddStudent(DS,19,10,90); // 440
   TeamFight(DS,1,16,11);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,2,8,2);
   AddStudent(DS,10,16,125);
   RemoveStudent(DS,67);
   GetStudentTeamLeader(DS,36,&leader);
   GetStudentTeamLeader(DS,36,&leader);
   AddStudent(DS,42,4,127);
   TeamFight(DS,17,11,12); // 450
   AddStudent(DS,58,4,85);
   GetNumOfWins(DS,6,&number_of_wins);
   JoinTeams(DS,10,9);
   JoinTeams(DS,14,3);
   GetNumOfWins(DS,2,&number_of_wins);
   RemoveStudent(DS,31);
   TeamFight(DS,15,11,9);
   TeamFight(DS,1,4,0);
   GetStudentTeamLeader(DS,24,&leader);
   GetNumOfWins(DS,3,&number_of_wins); // 460
   RemoveStudent(DS,51);
   GetStudentTeamLeader(DS,-1,&leader);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,11,1,8);
   AddStudent(DS,66,18,158);
   GetStudentTeamLeader(DS,36,&leader);
   TeamFight(DS,17,16,13);
   AddStudent(DS,71,3,14);
   TeamFight(DS,9,10,13);
   GetNumOfWins(DS,11,&number_of_wins); // 470
   JoinTeams(DS,13,18);
   TeamFight(DS,1,5,6);
   AddStudent(DS,44,11,22);
   TeamFight(DS,5,12,12);
   TeamFight(DS,6,2,10);
   TeamFight(DS,5,15,5);
   AddStudent(DS,48,5,137);
   AddStudent(DS,7,9,112);
   TeamFight(DS,5,13,5);
   AddStudent(DS,31,6,98); // 480
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,18,6,13);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,16,4,126);
   JoinTeams(DS,18,1);
   AddStudent(DS,54,17,121);
   TeamFight(DS,10,14,0);
   GetNumOfWins(DS,17,&number_of_wins);
   RemoveStudent(DS,44);
   RemoveStudent(DS,9); // 490
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   RemoveStudent(DS,46);
   TeamFight(DS,13,12,7);
   GetStudentTeamLeader(DS,63,&leader);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,57,18,4);
   AddStudent(DS,12,3,50);
   RemoveStudent(DS,29); // 500
   AddStudent(DS,1,17,133);
   RemoveStudent(DS,60);
   AddStudent(DS,5,14,135);
   TeamFight(DS,18,11,10);
   AddStudent(DS,4,12,166);
   GetStudentTeamLeader(DS,51,&leader);
   AddStudent(DS,19,2,36);
   JoinTeams(DS,7,17);
   AddStudent(DS,20,1,10);
   GetNumOfWins(DS,6,&number_of_wins); // 510
   AddStudent(DS,37,15,98);
   TeamFight(DS,13,7,1);
   AddStudent(DS,60,5,-1);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,3,16,14);
   RemoveStudent(DS,33);
   JoinTeams(DS,15,12);
   TeamFight(DS,4,3,4);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,44,1,159); // 520
   AddStudent(DS,38,12,51);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,4,5,2);
   TeamFight(DS,7,17,0);
   RemoveStudent(DS,19);
   TeamFight(DS,5,5,14);
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,66,&leader);
   TeamFight(DS,14,5,11);
   GetStudentTeamLeader(DS,20,&leader); // 530
   AddStudent(DS,40,13,152);
   JoinTeams(DS,1,6);
   RemoveStudent(DS,47);
   TeamFight(DS,8,1,8);
   AddStudent(DS,62,5,35);
   GetNumOfWins(DS,6,&number_of_wins);
   JoinTeams(DS,14,17);
   TeamFight(DS,15,15,13);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,4,&number_of_wins); // 540
   GetNumOfWins(DS,12,&number_of_wins);
   GetStudentTeamLeader(DS,18,&leader);
   AddStudent(DS,71,16,26);
   AddStudent(DS,33,8,58);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,38,12,69);
   GetNumOfWins(DS,12,&number_of_wins);
   GetStudentTeamLeader(DS,25,&leader);
   GetStudentTeamLeader(DS,41,&leader);
   AddStudent(DS,35,14,86); // 550
   TeamFight(DS,7,10,0);
   TeamFight(DS,7,10,1);
   AddStudent(DS,67,3,42);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,15,16,2);
   AddStudent(DS,46,16,2);
   AddStudent(DS,14,3,163);
   TeamFight(DS,7,4,-1);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,13,9,0); // 560
   AddStudent(DS,28,3,109);
   TeamFight(DS,7,17,6);
   TeamFight(DS,14,15,13);
   AddStudent(DS,10,1,161);
   AddStudent(DS,18,10,129);
   TeamFight(DS,14,17,10);
   RemoveStudent(DS,69);
   TeamFight(DS,17,16,5);
   AddStudent(DS,27,13,118);
   JoinTeams(DS,18,3); // 570
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,2,&leader);
   TeamFight(DS,15,13,9);
   AddStudent(DS,41,1,-1);
   AddStudent(DS,63,9,33);
   GetNumOfWins(DS,17,&number_of_wins);
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,49,&leader);
   GetStudentTeamLeader(DS,60,&leader);
   AddStudent(DS,47,16,91); // 580
   TeamFight(DS,5,9,17);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,34,4,157);
   TeamFight(DS,16,15,15);
   AddStudent(DS,39,1,88);
   AddStudent(DS,47,10,51);
   TeamFight(DS,17,6,10);
   RemoveStudent(DS,8);
   TeamFight(DS,7,10,17);
   GetNumOfWins(DS,16,&number_of_wins); // 590
   AddStudent(DS,45,2,163);
   TeamFight(DS,9,2,8);
   GetStudentTeamLeader(DS,41,&leader);
   TeamFight(DS,10,1,11);
   TeamFight(DS,2,4,-1);
   GetStudentTeamLeader(DS,34,&leader);
   JoinTeams(DS,12,9);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,66,8,10);
   TeamFight(DS,18,6,2); // 600
   GetNumOfWins(DS,16,&number_of_wins);
   GetStudentTeamLeader(DS,25,&leader);
   RemoveStudent(DS,34);
   AddStudent(DS,22,5,30);
   AddStudent(DS,28,11,0);
   AddStudent(DS,19,13,57);
   AddStudent(DS,24,13,58);
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,3,15,19); // 610
   AddStudent(DS,2,2,53);
   AddStudent(DS,54,7,38);
   AddStudent(DS,47,3,46);
   AddStudent(DS,39,16,64);
   AddStudent(DS,31,1,76);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,25,16,72);
   TeamFight(DS,13,1,0);
   TeamFight(DS,10,9,9);
   RemoveStudent(DS,58); // 620
   TeamFight(DS,15,8,18);
   AddStudent(DS,11,17,25);
   GetStudentTeamLeader(DS,29,&leader);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,61,15,18);
   AddStudent(DS,60,13,76);
   JoinTeams(DS,17,6);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,18,10,19);
   GetStudentTeamLeader(DS,45,&leader); // 630
   TeamFight(DS,11,16,5);
   AddStudent(DS,66,15,170);
   TeamFight(DS,14,18,13);
   GetStudentTeamLeader(DS,18,&leader);
   AddStudent(DS,3,15,62);
   AddStudent(DS,15,7,153);
   TeamFight(DS,3,16,1);
   TeamFight(DS,4,8,0);
   TeamFight(DS,11,1,13);
   AddStudent(DS,27,18,70); // 640
   AddStudent(DS,66,9,42);
   AddStudent(DS,23,5,97);
   AddStudent(DS,33,14,0);
   RemoveStudent(DS,46);
   RemoveStudent(DS,53);
   AddStudent(DS,51,17,70);
   TeamFight(DS,10,13,19);
   AddStudent(DS,6,12,109);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,29,&leader); // 650
   TeamFight(DS,2,14,13);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,18,8,169);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,5,11,19);
   AddStudent(DS,33,1,106);
   GetNumOfWins(DS,17,&number_of_wins);
   AddStudent(DS,14,16,48);
   TeamFight(DS,16,4,7);
   AddStudent(DS,28,17,102); // 660
   AddStudent(DS,41,18,142);
   AddStudent(DS,8,3,105);
   TeamFight(DS,14,4,13);
   AddStudent(DS,21,4,60);
   AddStudent(DS,47,6,148);
   AddStudent(DS,5,3,52);
   TeamFight(DS,2,15,5);
   AddStudent(DS,10,3,144);
   AddStudent(DS,58,17,144);
   TeamFight(DS,1,2,18); // 670
   TeamFight(DS,12,8,12);
   AddStudent(DS,32,9,81);
   AddStudent(DS,27,6,1);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,36,8,114);
   TeamFight(DS,5,3,11);
   GetStudentTeamLeader(DS,38,&leader);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,15,&number_of_wins);
   JoinTeams(DS,5,9); // 680
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,59,&leader);
   RemoveStudent(DS,13);
   JoinTeams(DS,17,12);
   AddStudent(DS,53,16,22);
   GetStudentTeamLeader(DS,59,&leader);
   RemoveStudent(DS,46);
   GetStudentTeamLeader(DS,22,&leader);
   GetNumOfWins(DS,3,&number_of_wins);
   JoinTeams(DS,11,1); // 690
   AddStudent(DS,3,16,46);
   GetStudentTeamLeader(DS,43,&leader);
   AddStudent(DS,39,5,161);
   AddStudent(DS,17,1,95);
   TeamFight(DS,12,18,8);
   GetStudentTeamLeader(DS,12,&leader);
   GetStudentTeamLeader(DS,53,&leader);
   GetStudentTeamLeader(DS,4,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,8,1,4); // 700
   AddStudent(DS,58,18,136);
   AddStudent(DS,41,17,102);
   GetStudentTeamLeader(DS,66,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,24,&leader);
   AddStudent(DS,18,16,116);
   AddStudent(DS,67,5,121);
   RemoveStudent(DS,35);
   TeamFight(DS,12,4,0);
   GetNumOfWins(DS,5,&number_of_wins); // 710
   TeamFight(DS,9,4,15);
   GetStudentTeamLeader(DS,29,&leader);
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,24,15,72);
   GetStudentTeamLeader(DS,-1,&leader);
   JoinTeams(DS,18,16);
   GetStudentTeamLeader(DS,8,&leader);
   AddStudent(DS,23,2,138);
   GetStudentTeamLeader(DS,39,&leader); // 720
   GetNumOfWins(DS,14,&number_of_wins);
   GetStudentTeamLeader(DS,71,&leader);
   RemoveStudent(DS,12);
   GetStudentTeamLeader(DS,34,&leader);
   AddStudent(DS,16,5,35);
   GetNumOfWins(DS,16,&number_of_wins);
   RemoveStudent(DS,62);
   GetStudentTeamLeader(DS,60,&leader);
   TeamFight(DS,14,7,1);
   TeamFight(DS,6,6,13); // 730
   GetNumOfWins(DS,18,&number_of_wins);
   GetStudentTeamLeader(DS,63,&leader);
   TeamFight(DS,3,3,16);
   AddStudent(DS,35,5,76);
   AddStudent(DS,50,2,86);
   AddStudent(DS,48,3,30);
   JoinTeams(DS,18,2);
   AddStudent(DS,15,2,126);
   JoinTeams(DS,2,14);
   JoinTeams(DS,3,7); // 740
   GetStudentTeamLeader(DS,24,&leader);
   AddStudent(DS,12,10,54);
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins);
   JoinTeams(DS,4,16);
   TeamFight(DS,17,2,12);
   TeamFight(DS,3,3,12);
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins); // 750
   AddStudent(DS,-1,18,5);
   GetStudentTeamLeader(DS,59,&leader);
   TeamFight(DS,6,15,15);
   TeamFight(DS,1,14,18);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,49,3,156);
   TeamFight(DS,4,10,5);
   TeamFight(DS,4,1,7);
   TeamFight(DS,12,5,11);
   GetStudentTeamLeader(DS,-1,&leader); // 760
   TeamFight(DS,2,13,3);
   RemoveStudent(DS,14);
   TeamFight(DS,1,2,0);
   TeamFight(DS,18,11,8);
   GetStudentTeamLeader(DS,50,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   JoinTeams(DS,12,13);
   GetNumOfWins(DS,3,&number_of_wins);
   JoinTeams(DS,13,1);
   TeamFight(DS,7,7,19); // 770
   AddStudent(DS,16,16,59);
   TeamFight(DS,4,17,4);
   AddStudent(DS,24,3,11);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,2,2,105);
   AddStudent(DS,3,9,125);
   TeamFight(DS,2,16,-1);
   GetStudentTeamLeader(DS,65,&leader);
   GetNumOfWins(DS,18,&number_of_wins);
   RemoveStudent(DS,70); // 780
   GetStudentTeamLeader(DS,21,&leader);
   JoinTeams(DS,15,7);
   AddStudent(DS,49,14,48);
   JoinTeams(DS,6,11);
   GetStudentTeamLeader(DS,15,&leader);
   RemoveStudent(DS,44);
   JoinTeams(DS,2,7);
   RemoveStudent(DS,42);
   TeamFight(DS,12,18,18);
   GetStudentTeamLeader(DS,46,&leader); // 790
   GetNumOfWins(DS,16,&number_of_wins);
   GetStudentTeamLeader(DS,53,&leader);
   AddStudent(DS,59,18,121);
   AddStudent(DS,6,16,78);
   TeamFight(DS,11,11,4);
   GetNumOfWins(DS,17,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,24,7,95);
   TeamFight(DS,12,5,14);
   GetNumOfWins(DS,2,&number_of_wins); // 800
   AddStudent(DS,2,6,51);
   AddStudent(DS,59,13,13);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,21,13,100);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,13,2,7);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,16,15,144);
   JoinTeams(DS,7,8); // 810
   GetStudentTeamLeader(DS,50,&leader);
   RemoveStudent(DS,58);
   TeamFight(DS,13,4,-1);
   TeamFight(DS,11,6,9);
   RemoveStudent(DS,26);
   AddStudent(DS,58,2,16);
   JoinTeams(DS,3,5);
   AddStudent(DS,33,8,69);
   JoinTeams(DS,9,13);
   JoinTeams(DS,1,14); // 820
   JoinTeams(DS,12,8);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,17,&number_of_wins);
   RemoveStudent(DS,41);
   JoinTeams(DS,11,2);
   GetStudentTeamLeader(DS,67,&leader);
   GetStudentTeamLeader(DS,12,&leader);
   AddStudent(DS,50,14,33);
   TeamFight(DS,14,13,7);
   AddStudent(DS,39,1,165); // 830
   JoinTeams(DS,14,3);
   AddStudent(DS,33,6,80);
   AddStudent(DS,29,12,109);
   AddStudent(DS,50,7,144);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,14,16,85);
   RemoveStudent(DS,64);
   AddStudent(DS,17,12,62);
   TeamFight(DS,18,11,4);
   GetStudentTeamLeader(DS,22,&leader); // 840
   TeamFight(DS,11,3,0);
   TeamFight(DS,4,6,5);
   GetStudentTeamLeader(DS,57,&leader);
   TeamFight(DS,4,17,11);
   AddStudent(DS,40,14,90);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,11,3,19);
   AddStudent(DS,60,5,170);
   AddStudent(DS,39,13,148);
   GetNumOfWins(DS,16,&number_of_wins); // 850
   GetStudentTeamLeader(DS,22,&leader);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,68,7,134);
   AddStudent(DS,25,2,123);
   GetNumOfWins(DS,18,&number_of_wins);
   AddStudent(DS,57,4,88);
   JoinTeams(DS,18,13);
   GetStudentTeamLeader(DS,47,&leader);
   GetStudentTeamLeader(DS,34,&leader);
   GetNumOfWins(DS,14,&number_of_wins); // 860
   RemoveStudent(DS,52);
   TeamFight(DS,18,14,10);
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,0,&leader);
   JoinTeams(DS,15,16);
   AddStudent(DS,42,13,71);
   AddStudent(DS,67,7,165);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,61,&leader);
   TeamFight(DS,17,3,8); // 870
   RemoveStudent(DS,28);
   TeamFight(DS,10,9,18);
   TeamFight(DS,2,13,7);
   TeamFight(DS,10,16,0);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,6,17,4);
   TeamFight(DS,4,7,8);
   AddStudent(DS,15,13,66);
   JoinTeams(DS,9,5); // 880
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,43,12,33);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   RemoveStudent(DS,40);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,9,6,11);
   AddStudent(DS,30,3,3);
   TeamFight(DS,18,2,13); // 890
   JoinTeams(DS,7,5);
   RemoveStudent(DS,68);
   JoinTeams(DS,8,7);
   TeamFight(DS,6,18,8);
   TeamFight(DS,4,1,7);
   AddStudent(DS,16,8,39);
   TeamFight(DS,8,7,10);
   RemoveStudent(DS,47);
   GetStudentTeamLeader(DS,38,&leader);
   AddStudent(DS,50,14,73); // 900
   JoinTeams(DS,9,3);
   AddStudent(DS,43,11,62);
   GetNumOfWins(DS,8,&number_of_wins);
   RemoveStudent(DS,49);
   GetStudentTeamLeader(DS,53,&leader);
   GetStudentTeamLeader(DS,50,&leader);
   GetStudentTeamLeader(DS,3,&leader);
   TeamFight(DS,10,11,13);
   GetStudentTeamLeader(DS,33,&leader);
   RemoveStudent(DS,65); // 910
   AddStudent(DS,37,4,-1);
   AddStudent(DS,57,11,58);
   AddStudent(DS,23,16,158);
   AddStudent(DS,0,18,21);
   AddStudent(DS,30,17,71);
   RemoveStudent(DS,56);
   TeamFight(DS,17,11,13);
   GetNumOfWins(DS,9,&number_of_wins);
   GetStudentTeamLeader(DS,13,&leader);
   TeamFight(DS,18,5,1); // 920
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,-1,&leader);
   TeamFight(DS,8,5,11);
   GetStudentTeamLeader(DS,9,&leader);
   JoinTeams(DS,3,12);
   RemoveStudent(DS,28);
   AddStudent(DS,63,13,102);
   GetStudentTeamLeader(DS,23,&leader);
   GetNumOfWins(DS,2,&number_of_wins);
   AddStudent(DS,67,17,112); // 930
   GetStudentTeamLeader(DS,45,&leader);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,8,2,0);
   JoinTeams(DS,8,7);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,18,18,1);
   RemoveStudent(DS,16);
   AddStudent(DS,43,16,52);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,17,8,7); // 940
   RemoveStudent(DS,20);
   GetStudentTeamLeader(DS,23,&leader);
   RemoveStudent(DS,9);
   AddStudent(DS,47,8,77);
   GetNumOfWins(DS,18,&number_of_wins);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,47,15,21);
   GetStudentTeamLeader(DS,47,&leader);
   GetNumOfWins(DS,13,&number_of_wins);
   GetStudentTeamLeader(DS,3,&leader); // 950
   RemoveStudent(DS,49);
   TeamFight(DS,5,17,4);
   GetStudentTeamLeader(DS,64,&leader);
   RemoveStudent(DS,8);
   TeamFight(DS,9,5,14);
   TeamFight(DS,6,17,13);
   TeamFight(DS,2,6,9);
   TeamFight(DS,7,17,5);
   AddStudent(DS,23,1,84);
   GetNumOfWins(DS,10,&number_of_wins); // 960
   TeamFight(DS,14,17,1);
   RemoveStudent(DS,32);
   JoinTeams(DS,17,2);
   JoinTeams(DS,10,13);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,1,10,1);
   RemoveStudent(DS,2);
   TeamFight(DS,14,14,-1);
   TeamFight(DS,10,10,1);
   GetStudentTeamLeader(DS,39,&leader); // 970
   AddStudent(DS,31,17,4);
   AddStudent(DS,66,15,63);
   TeamFight(DS,4,16,12);
   TeamFight(DS,8,12,11);
   AddStudent(DS,40,1,42);
   RemoveStudent(DS,28);
   AddStudent(DS,56,13,138);
   GetStudentTeamLeader(DS,34,&leader);
   TeamFight(DS,4,5,3);
   JoinTeams(DS,5,2); // 980
   GetStudentTeamLeader(DS,55,&leader);
   JoinTeams(DS,5,13);
   TeamFight(DS,18,10,2);
   JoinTeams(DS,4,13);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,2,1,5);
   GetStudentTeamLeader(DS,57,&leader);
   AddStudent(DS,19,3,166);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,11,15,12); // 990
   RemoveStudent(DS,23);
   GetNumOfWins(DS,17,&number_of_wins);
   GetStudentTeamLeader(DS,38,&leader);
   GetStudentTeamLeader(DS,63,&leader);
   AddStudent(DS,51,4,17);
   AddStudent(DS,54,18,105);
   AddStudent(DS,5,11,127);
   TeamFight(DS,13,9,7);
   GetStudentTeamLeader(DS,33,&leader);
   RemoveStudent(DS,46); // 1000
   GetNumOfWins(DS,17,&number_of_wins);
   Quit(&DS);
}
