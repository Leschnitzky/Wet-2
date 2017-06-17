void test() {
   int leader;
   int number_of_wins;
   void* DS = Init(16);
   TeamFight(DS,6,10,1);
   AddStudent(DS,0,4,70);
   TeamFight(DS,11,4,-1);
   RemoveStudent(DS,55);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,1,15,0);
   AddStudent(DS,28,10,30);
   GetNumOfWins(DS,8,&number_of_wins);
   RemoveStudent(DS,4); // 10
   AddStudent(DS,30,9,25);
   AddStudent(DS,46,6,14);
   TeamFight(DS,8,16,1);
   AddStudent(DS,23,15,14);
   AddStudent(DS,22,13,14);
   GetStudentTeamLeader(DS,2,&leader);
   RemoveStudent(DS,39);
   AddStudent(DS,8,11,96);
   AddStudent(DS,12,6,37);
   TeamFight(DS,4,4,3); // 20
   JoinTeams(DS,9,2);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,1,&number_of_wins);
   RemoveStudent(DS,11);
   GetStudentTeamLeader(DS,40,&leader);
   TeamFight(DS,16,10,1);
   TeamFight(DS,9,9,-1);
   RemoveStudent(DS,16);
   GetNumOfWins(DS,3,&number_of_wins);
   RemoveStudent(DS,52); // 30
   AddStudent(DS,9,3,84);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,18,5,74);
   JoinTeams(DS,16,7);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,22,7,61);
   GetStudentTeamLeader(DS,5,&leader);
   AddStudent(DS,25,1,19);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,39,5,51); // 40
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,47,14,58);
   TeamFight(DS,14,3,2);
   JoinTeams(DS,8,3);
   GetStudentTeamLeader(DS,34,&leader);
   GetNumOfWins(DS,10,&number_of_wins);
   RemoveStudent(DS,45);
   JoinTeams(DS,7,8);
   AddStudent(DS,21,12,65);
   GetNumOfWins(DS,6,&number_of_wins); // 50
   AddStudent(DS,50,6,128);
   TeamFight(DS,12,15,0);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,15,6,2);
   AddStudent(DS,4,6,21);
   TeamFight(DS,7,6,4);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,11,13,65);
   TeamFight(DS,4,3,9); // 60
   RemoveStudent(DS,45);
   TeamFight(DS,6,5,5);
   JoinTeams(DS,7,3);
   GetStudentTeamLeader(DS,0,&leader);
   GetStudentTeamLeader(DS,51,&leader);
   GetStudentTeamLeader(DS,2,&leader);
   TeamFight(DS,7,16,2);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,15,7,-1);
   TeamFight(DS,4,16,1); // 70
   AddStudent(DS,13,4,61);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,1,12,5);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,7,13,1);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,10,7,2);
   GetStudentTeamLeader(DS,59,&leader);
   GetNumOfWins(DS,5,&number_of_wins); // 80
   RemoveStudent(DS,43);
   AddStudent(DS,12,10,15);
   TeamFight(DS,2,2,8);
   AddStudent(DS,54,6,106);
   AddStudent(DS,51,2,105);
   AddStudent(DS,63,7,8);
   GetStudentTeamLeader(DS,25,&leader);
   RemoveStudent(DS,63);
   JoinTeams(DS,16,8);
   RemoveStudent(DS,61); // 90
   TeamFight(DS,6,11,-1);
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,44,&leader);
   TeamFight(DS,6,4,9);
   AddStudent(DS,44,13,113);
   GetStudentTeamLeader(DS,17,&leader);
   AddStudent(DS,6,16,91);
   TeamFight(DS,12,12,2);
   AddStudent(DS,46,3,23);
   AddStudent(DS,8,10,129); // 100
   GetNumOfWins(DS,12,&number_of_wins);
   GetStudentTeamLeader(DS,60,&leader);
   GetStudentTeamLeader(DS,52,&leader);
   AddStudent(DS,2,10,74);
   TeamFight(DS,2,5,6);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,52,16,25);
   TeamFight(DS,12,8,6);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,45,4,113); // 110
   JoinTeams(DS,16,10);
   GetNumOfWins(DS,2,&number_of_wins);
   JoinTeams(DS,3,14);
   GetStudentTeamLeader(DS,57,&leader);
   AddStudent(DS,9,2,99);
   GetStudentTeamLeader(DS,18,&leader);
   GetStudentTeamLeader(DS,18,&leader);
   RemoveStudent(DS,48);
   RemoveStudent(DS,61);
   AddStudent(DS,36,7,31); // 120
   RemoveStudent(DS,4);
   RemoveStudent(DS,63);
   AddStudent(DS,25,11,24);
   AddStudent(DS,21,2,42);
   AddStudent(DS,39,14,22);
   AddStudent(DS,8,13,0);
   AddStudent(DS,45,12,8);
   RemoveStudent(DS,0);
   TeamFight(DS,1,10,1);
   AddStudent(DS,17,15,0); // 130
   JoinTeams(DS,8,12);
   AddStudent(DS,2,7,17);
   GetNumOfWins(DS,11,&number_of_wins);
   GetStudentTeamLeader(DS,56,&leader);
   AddStudent(DS,4,4,84);
   GetStudentTeamLeader(DS,23,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,2,9,4);
   TeamFight(DS,9,13,7);
   GetNumOfWins(DS,15,&number_of_wins); // 140
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,3,2,84);
   AddStudent(DS,8,8,82);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,-1,5,135);
   GetStudentTeamLeader(DS,51,&leader);
   GetStudentTeamLeader(DS,56,&leader);
   AddStudent(DS,9,13,24);
   GetNumOfWins(DS,14,&number_of_wins);
   TeamFight(DS,13,6,8); // 150
   TeamFight(DS,7,4,4);
   AddStudent(DS,30,2,74);
   AddStudent(DS,20,2,63);
   RemoveStudent(DS,29);
   GetStudentTeamLeader(DS,46,&leader);
   TeamFight(DS,5,12,4);
   AddStudent(DS,47,6,103);
   TeamFight(DS,4,4,0);
   GetStudentTeamLeader(DS,18,&leader);
   JoinTeams(DS,15,6); // 160
   GetStudentTeamLeader(DS,18,&leader);
   TeamFight(DS,9,5,1);
   AddStudent(DS,22,5,79);
   AddStudent(DS,26,10,120);
   TeamFight(DS,10,5,-1);
   TeamFight(DS,13,12,7);
   AddStudent(DS,50,15,6);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,1,7,70);
   TeamFight(DS,14,7,5); // 170
   TeamFight(DS,16,14,1);
   AddStudent(DS,4,2,49);
   TeamFight(DS,10,15,0);
   RemoveStudent(DS,61);
   RemoveStudent(DS,27);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,4,&number_of_wins);
   RemoveStudent(DS,26);
   JoinTeams(DS,8,9);
   TeamFight(DS,16,14,7); // 180
   TeamFight(DS,6,12,0);
   TeamFight(DS,13,9,0);
   AddStudent(DS,27,4,89);
   JoinTeams(DS,10,8);
   AddStudent(DS,53,9,60);
   RemoveStudent(DS,23);
   AddStudent(DS,18,14,54);
   AddStudent(DS,34,10,42);
   RemoveStudent(DS,10);
   TeamFight(DS,11,10,1); // 190
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,15,1,6);
   JoinTeams(DS,12,2);
   AddStudent(DS,39,8,114);
   AddStudent(DS,59,7,129);
   RemoveStudent(DS,45);
   TeamFight(DS,15,10,6);
   AddStudent(DS,0,6,113);
   GetNumOfWins(DS,15,&number_of_wins);
   RemoveStudent(DS,18); // 200
   TeamFight(DS,7,2,8);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,12,2,3);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,9,10,6);
   TeamFight(DS,16,10,5);
   TeamFight(DS,10,13,7);
   GetStudentTeamLeader(DS,54,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,21,4,51); // 210
   TeamFight(DS,10,10,5);
   AddStudent(DS,58,2,96);
   AddStudent(DS,63,4,99);
   AddStudent(DS,26,13,3);
   GetStudentTeamLeader(DS,46,&leader);
   AddStudent(DS,10,10,105);
   AddStudent(DS,53,11,37);
   JoinTeams(DS,7,5);
   AddStudent(DS,15,6,66);
   TeamFight(DS,11,7,6); // 220
   AddStudent(DS,28,16,64);
   JoinTeams(DS,13,11);
   AddStudent(DS,48,16,122);
   TeamFight(DS,15,8,14);
   JoinTeams(DS,8,3);
   JoinTeams(DS,15,6);
   RemoveStudent(DS,-1);
   GetStudentTeamLeader(DS,52,&leader);
   GetNumOfWins(DS,1,&number_of_wins);
   JoinTeams(DS,11,6); // 230
   GetStudentTeamLeader(DS,44,&leader);
   AddStudent(DS,4,4,107);
   TeamFight(DS,1,4,12);
   GetNumOfWins(DS,14,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,-1,9,31);
   GetStudentTeamLeader(DS,11,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,8,10,32); // 240
   TeamFight(DS,12,13,3);
   RemoveStudent(DS,51);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,53,14,121);
   RemoveStudent(DS,16);
   RemoveStudent(DS,47);
   AddStudent(DS,14,4,92);
   GetStudentTeamLeader(DS,16,&leader);
   TeamFight(DS,16,13,10);
   TeamFight(DS,10,9,2); // 250
   GetStudentTeamLeader(DS,23,&leader);
   AddStudent(DS,9,8,77);
   RemoveStudent(DS,12);
   RemoveStudent(DS,2);
   TeamFight(DS,14,6,3);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,5,5,14);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,19,10,108);
   RemoveStudent(DS,34); // 260
   RemoveStudent(DS,58);
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,12,4,5);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,14,8,0);
   TeamFight(DS,5,14,5);
   RemoveStudent(DS,-1);
   AddStudent(DS,52,2,4);
   TeamFight(DS,14,6,3);
   GetNumOfWins(DS,6,&number_of_wins); // 270
   AddStudent(DS,26,16,59);
   TeamFight(DS,16,12,1);
   TeamFight(DS,1,10,0);
   RemoveStudent(DS,31);
   AddStudent(DS,7,2,62);
   JoinTeams(DS,2,15);
   AddStudent(DS,16,15,34);
   TeamFight(DS,6,10,10);
   TeamFight(DS,14,3,8);
   TeamFight(DS,5,11,9); // 280
   JoinTeams(DS,5,9);
   TeamFight(DS,10,7,14);
   TeamFight(DS,6,4,7);
   AddStudent(DS,62,5,116);
   GetNumOfWins(DS,15,&number_of_wins);
   AddStudent(DS,52,8,117);
   TeamFight(DS,14,14,-1);
   TeamFight(DS,3,7,12);
   TeamFight(DS,11,14,12);
   AddStudent(DS,54,10,108); // 290
   TeamFight(DS,3,14,4);
   RemoveStudent(DS,41);
   RemoveStudent(DS,17);
   AddStudent(DS,63,3,10);
   TeamFight(DS,14,5,2);
   GetStudentTeamLeader(DS,33,&leader);
   TeamFight(DS,10,14,2);
   AddStudent(DS,19,3,79);
   AddStudent(DS,39,11,81);
   GetNumOfWins(DS,7,&number_of_wins); // 300
   AddStudent(DS,35,12,37);
   AddStudent(DS,16,6,70);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,33,2,33);
   JoinTeams(DS,8,5);
   AddStudent(DS,23,10,120);
   AddStudent(DS,45,11,28);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,-1,6,89); // 310
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,9,8,4);
   GetNumOfWins(DS,12,&number_of_wins);
   GetStudentTeamLeader(DS,45,&leader);
   JoinTeams(DS,13,2);
   TeamFight(DS,15,14,-1);
   RemoveStudent(DS,8);
   TeamFight(DS,7,12,1);
   GetNumOfWins(DS,11,&number_of_wins);
   GetStudentTeamLeader(DS,0,&leader); // 320
   TeamFight(DS,9,16,14);
   TeamFight(DS,14,7,12);
   AddStudent(DS,40,14,22);
   JoinTeams(DS,10,12);
   AddStudent(DS,56,13,33);
   AddStudent(DS,38,15,16);
   AddStudent(DS,45,9,130);
   AddStudent(DS,35,10,20);
   RemoveStudent(DS,54);
   AddStudent(DS,3,3,32); // 330
   RemoveStudent(DS,58);
   TeamFight(DS,1,11,14);
   GetStudentTeamLeader(DS,31,&leader);
   AddStudent(DS,26,3,119);
   AddStudent(DS,40,4,130);
   AddStudent(DS,34,15,92);
   GetStudentTeamLeader(DS,55,&leader);
   GetStudentTeamLeader(DS,3,&leader);
   TeamFight(DS,5,11,0);
   GetNumOfWins(DS,15,&number_of_wins); // 340
   AddStudent(DS,50,3,42);
   GetStudentTeamLeader(DS,23,&leader);
   JoinTeams(DS,2,9);
   GetStudentTeamLeader(DS,41,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,6,10,8);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,27,2,64);
   TeamFight(DS,9,7,0);
   JoinTeams(DS,1,5); // 350
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,39,11,125);
   RemoveStudent(DS,60);
   AddStudent(DS,38,5,129);
   RemoveStudent(DS,46);
   GetStudentTeamLeader(DS,24,&leader);
   TeamFight(DS,12,5,0);
   AddStudent(DS,43,6,39);
   RemoveStudent(DS,57);
   AddStudent(DS,26,7,131); // 360
   RemoveStudent(DS,3);
   TeamFight(DS,10,10,12);
   RemoveStudent(DS,30);
   TeamFight(DS,6,5,3);
   AddStudent(DS,26,14,130);
   JoinTeams(DS,3,5);
   GetNumOfWins(DS,8,&number_of_wins);
   AddStudent(DS,2,7,78);
   GetStudentTeamLeader(DS,2,&leader);
   TeamFight(DS,2,5,0); // 370
   RemoveStudent(DS,18);
   RemoveStudent(DS,36);
   AddStudent(DS,16,4,27);
   AddStudent(DS,41,3,130);
   AddStudent(DS,26,9,57);
   AddStudent(DS,43,16,52);
   RemoveStudent(DS,4);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,26,13,67);
   TeamFight(DS,2,5,7); // 380
   GetStudentTeamLeader(DS,12,&leader);
   GetNumOfWins(DS,13,&number_of_wins);
   RemoveStudent(DS,52);
   GetStudentTeamLeader(DS,35,&leader);
   TeamFight(DS,9,7,13);
   AddStudent(DS,1,4,78);
   GetStudentTeamLeader(DS,45,&leader);
   JoinTeams(DS,10,15);
   GetStudentTeamLeader(DS,26,&leader);
   AddStudent(DS,62,8,63); // 390
   RemoveStudent(DS,21);
   GetNumOfWins(DS,16,&number_of_wins);
   RemoveStudent(DS,28);
   AddStudent(DS,17,15,74);
   JoinTeams(DS,2,13);
   TeamFight(DS,8,5,10);
   GetStudentTeamLeader(DS,46,&leader);
   AddStudent(DS,59,16,47);
   AddStudent(DS,18,13,78);
   GetNumOfWins(DS,9,&number_of_wins); // 400
   AddStudent(DS,50,3,122);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,35,8,91);
   TeamFight(DS,16,9,10);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,56,5,99);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,10,1,-1);
   AddStudent(DS,49,16,21); // 410
   TeamFight(DS,14,7,11);
   AddStudent(DS,22,2,86);
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   AddStudent(DS,33,8,55);
   GetStudentTeamLeader(DS,24,&leader);
   GetNumOfWins(DS,16,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins);
   GetStudentTeamLeader(DS,8,&leader);
   AddStudent(DS,30,10,102); // 420
   AddStudent(DS,3,12,32);
   JoinTeams(DS,16,16);
   AddStudent(DS,49,4,132);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,6,6,14);
   TeamFight(DS,10,16,10);
   GetStudentTeamLeader(DS,1,&leader);
   JoinTeams(DS,2,11);
   GetNumOfWins(DS,8,&number_of_wins); // 430
   AddStudent(DS,39,5,117);
   AddStudent(DS,3,4,7);
   AddStudent(DS,39,15,40);
   RemoveStudent(DS,10);
   AddStudent(DS,4,3,128);
   TeamFight(DS,5,5,12);
   GetStudentTeamLeader(DS,12,&leader);
   GetNumOfWins(DS,14,&number_of_wins);
   GetStudentTeamLeader(DS,19,&leader);
   AddStudent(DS,55,4,26); // 440
   JoinTeams(DS,12,6);
   TeamFight(DS,5,2,-1);
   GetNumOfWins(DS,15,&number_of_wins);
   TeamFight(DS,13,6,-1);
   TeamFight(DS,1,3,5);
   AddStudent(DS,17,12,48);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,11,8,-1);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins); // 450
   TeamFight(DS,13,16,0);
   AddStudent(DS,4,3,88);
   TeamFight(DS,11,10,8);
   GetStudentTeamLeader(DS,11,&leader);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,13,&number_of_wins);
   AddStudent(DS,58,12,2);
   AddStudent(DS,61,3,61);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,52,1,88); // 460
   GetStudentTeamLeader(DS,59,&leader);
   AddStudent(DS,30,12,96);
   TeamFight(DS,10,14,0);
   GetStudentTeamLeader(DS,-1,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   JoinTeams(DS,1,4);
   AddStudent(DS,31,15,53);
   GetNumOfWins(DS,14,&number_of_wins);
   GetStudentTeamLeader(DS,63,&leader);
   TeamFight(DS,10,6,3); // 470
   GetNumOfWins(DS,1,&number_of_wins);
   RemoveStudent(DS,63);
   RemoveStudent(DS,10);
   GetNumOfWins(DS,16,&number_of_wins);
   TeamFight(DS,5,2,2);
   RemoveStudent(DS,20);
   AddStudent(DS,28,5,36);
   AddStudent(DS,0,16,2);
   TeamFight(DS,13,1,7);
   GetNumOfWins(DS,1,&number_of_wins); // 480
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,10,3,14);
   AddStudent(DS,42,15,43);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,29,16,124);
   TeamFight(DS,7,11,12);
   GetStudentTeamLeader(DS,19,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,12,16,66);
   GetNumOfWins(DS,2,&number_of_wins); // 490
   TeamFight(DS,7,13,6);
   AddStudent(DS,48,10,45);
   GetNumOfWins(DS,3,&number_of_wins);
   RemoveStudent(DS,51);
   JoinTeams(DS,3,6);
   GetStudentTeamLeader(DS,60,&leader);
   RemoveStudent(DS,56);
   TeamFight(DS,16,2,13);
   TeamFight(DS,15,10,14);
   TeamFight(DS,8,8,2); // 500
   AddStudent(DS,62,9,95);
   Quit(&DS);
}
