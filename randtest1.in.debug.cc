void test() {
   int leader;
   int number_of_wins;
   void* DS = Init(14);
   RemoveStudent(DS,19);
   RemoveStudent(DS,15);
   AddStudent(DS,17,1,100);
   TeamFight(DS,2,8,-1);
   GetNumOfWins(DS,3,&number_of_wins);
   JoinTeams(DS,10,5);
   GetStudentTeamLeader(DS,52,&leader);
   AddStudent(DS,29,2,5);
   TeamFight(DS,3,10,3); // 10
   AddStudent(DS,53,12,82);
   GetStudentTeamLeader(DS,48,&leader);
   AddStudent(DS,17,5,38);
   AddStudent(DS,4,2,102);
   AddStudent(DS,10,13,15);
   GetStudentTeamLeader(DS,33,&leader);
   RemoveStudent(DS,24);
   TeamFight(DS,9,6,0);
   RemoveStudent(DS,24);
   TeamFight(DS,10,9,4); // 20
   JoinTeams(DS,7,6);
   JoinTeams(DS,14,7);
   JoinTeams(DS,14,8);
   TeamFight(DS,2,6,1);
   AddStudent(DS,31,1,78);
   GetStudentTeamLeader(DS,19,&leader);
   AddStudent(DS,24,14,95);
   AddStudent(DS,17,1,33);
   TeamFight(DS,1,2,0);
   AddStudent(DS,14,5,81); // 30
   AddStudent(DS,28,4,77);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,5,1,33);
   TeamFight(DS,11,12,0);
   TeamFight(DS,8,14,-1);
   RemoveStudent(DS,35);
   RemoveStudent(DS,18);
   GetNumOfWins(DS,4,&number_of_wins);
   TeamFight(DS,2,14,2); // 40
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,20,&leader);
   TeamFight(DS,1,8,4);
   RemoveStudent(DS,6);
   AddStudent(DS,3,7,14);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,4,10,3);
   AddStudent(DS,21,13,80);
   AddStudent(DS,5,1,56);
   AddStudent(DS,49,6,46); // 50
   AddStudent(DS,2,7,26);
   AddStudent(DS,50,1,0);
   GetNumOfWins(DS,3,&number_of_wins);
   AddStudent(DS,41,9,54);
   AddStudent(DS,24,10,27);
   JoinTeams(DS,7,1);
   TeamFight(DS,2,2,0);
   TeamFight(DS,12,12,7);
   RemoveStudent(DS,42);
   AddStudent(DS,24,10,4); // 60
   RemoveStudent(DS,50);
   GetStudentTeamLeader(DS,23,&leader);
   RemoveStudent(DS,20);
   RemoveStudent(DS,4);
   TeamFight(DS,2,14,8);
   AddStudent(DS,3,14,85);
   GetStudentTeamLeader(DS,8,&leader);
   JoinTeams(DS,10,12);
   AddStudent(DS,46,9,51);
   AddStudent(DS,50,13,67); // 70
   TeamFight(DS,4,2,2);
   RemoveStudent(DS,10);
   GetStudentTeamLeader(DS,15,&leader);
   TeamFight(DS,12,4,6);
   TeamFight(DS,10,4,2);
   AddStudent(DS,55,5,52);
   TeamFight(DS,11,5,4);
   TeamFight(DS,13,14,0);
   GetNumOfWins(DS,5,&number_of_wins);
   GetStudentTeamLeader(DS,52,&leader); // 80
   RemoveStudent(DS,35);
   TeamFight(DS,7,3,4);
   AddStudent(DS,9,10,36);
   GetNumOfWins(DS,9,&number_of_wins);
   JoinTeams(DS,11,2);
   GetStudentTeamLeader(DS,25,&leader);
   JoinTeams(DS,1,5);
   JoinTeams(DS,1,2);
   RemoveStudent(DS,17);
   GetNumOfWins(DS,12,&number_of_wins); // 90
   GetStudentTeamLeader(DS,40,&leader);
   TeamFight(DS,11,2,8);
   RemoveStudent(DS,6);
   TeamFight(DS,14,6,8);
   GetStudentTeamLeader(DS,17,&leader);
   GetNumOfWins(DS,13,&number_of_wins);
   JoinTeams(DS,8,10);
   RemoveStudent(DS,23);
   AddStudent(DS,22,7,27);
   GetStudentTeamLeader(DS,46,&leader); // 100
   JoinTeams(DS,2,14);
   GetNumOfWins(DS,14,&number_of_wins);
   RemoveStudent(DS,29);
   JoinTeams(DS,12,13);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,10,6,4);
   GetStudentTeamLeader(DS,43,&leader);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,14,8,4);
   GetStudentTeamLeader(DS,15,&leader); // 110
   TeamFight(DS,8,10,5);
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,13,&leader);
   TeamFight(DS,12,10,3);
   RemoveStudent(DS,41);
   TeamFight(DS,12,3,8);
   TeamFight(DS,10,9,4);
   AddStudent(DS,30,11,2);
   AddStudent(DS,40,5,65);
   AddStudent(DS,50,3,7); // 120
   TeamFight(DS,3,14,5);
   AddStudent(DS,13,10,72);
   RemoveStudent(DS,48);
   GetStudentTeamLeader(DS,17,&leader);
   TeamFight(DS,14,10,2);
   RemoveStudent(DS,10);
   TeamFight(DS,3,14,8);
   TeamFight(DS,7,5,7);
   AddStudent(DS,54,2,25);
   TeamFight(DS,11,11,4); // 130
   AddStudent(DS,19,8,84);
   TeamFight(DS,2,4,-1);
   AddStudent(DS,10,4,85);
   RemoveStudent(DS,31);
   GetStudentTeamLeader(DS,23,&leader);
   RemoveStudent(DS,46);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,7,11,1);
   GetStudentTeamLeader(DS,43,&leader);
   TeamFight(DS,1,3,-1); // 140
   JoinTeams(DS,5,14);
   TeamFight(DS,2,2,8);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,9,14,-1);
   AddStudent(DS,1,1,37);
   GetStudentTeamLeader(DS,51,&leader);
   GetStudentTeamLeader(DS,39,&leader);
   TeamFight(DS,5,7,-1);
   TeamFight(DS,1,12,6);
   GetStudentTeamLeader(DS,34,&leader); // 150
   GetStudentTeamLeader(DS,5,&leader);
   TeamFight(DS,7,6,3);
   TeamFight(DS,4,7,-1);
   GetStudentTeamLeader(DS,3,&leader);
   TeamFight(DS,5,3,8);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,1,4,20);
   TeamFight(DS,9,5,6);
   TeamFight(DS,14,12,4);
   AddStudent(DS,11,13,89); // 160
   AddStudent(DS,49,8,37);
   GetStudentTeamLeader(DS,18,&leader);
   TeamFight(DS,5,3,6);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,8,14,0);
   GetStudentTeamLeader(DS,47,&leader);
   AddStudent(DS,19,7,14);
   JoinTeams(DS,8,12);
   TeamFight(DS,4,7,1);
   GetStudentTeamLeader(DS,-1,&leader); // 170
   RemoveStudent(DS,29);
   GetStudentTeamLeader(DS,15,&leader);
   TeamFight(DS,9,3,-1);
   AddStudent(DS,41,10,24);
   GetStudentTeamLeader(DS,22,&leader);
   GetStudentTeamLeader(DS,13,&leader);
   RemoveStudent(DS,54);
   GetStudentTeamLeader(DS,14,&leader);
   GetStudentTeamLeader(DS,14,&leader);
   RemoveStudent(DS,25); // 180
   GetNumOfWins(DS,11,&number_of_wins);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,10,9,16);
   GetStudentTeamLeader(DS,43,&leader);
   RemoveStudent(DS,20);
   GetStudentTeamLeader(DS,47,&leader);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,14,14,0);
   TeamFight(DS,13,4,6);
   AddStudent(DS,28,11,71); // 190
   AddStudent(DS,49,13,54);
   GetStudentTeamLeader(DS,27,&leader);
   RemoveStudent(DS,34);
   AddStudent(DS,38,6,72);
   AddStudent(DS,34,11,53);
   RemoveStudent(DS,43);
   GetNumOfWins(DS,8,&number_of_wins);
   GetStudentTeamLeader(DS,29,&leader);
   RemoveStudent(DS,16);
   GetStudentTeamLeader(DS,38,&leader); // 200
   AddStudent(DS,14,8,53);
   TeamFight(DS,5,13,2);
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,13,8,3);
   TeamFight(DS,14,11,9);
   RemoveStudent(DS,17);
   GetStudentTeamLeader(DS,32,&leader);
   TeamFight(DS,3,7,1);
   TeamFight(DS,3,7,3);
   JoinTeams(DS,5,1); // 210
   AddStudent(DS,45,8,31);
   AddStudent(DS,-1,7,41);
   JoinTeams(DS,8,3);
   TeamFight(DS,3,10,2);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,44,8,76);
   TeamFight(DS,8,7,-1);
   GetNumOfWins(DS,12,&number_of_wins);
   RemoveStudent(DS,33);
   AddStudent(DS,19,2,28); // 220
   RemoveStudent(DS,50);
   TeamFight(DS,6,14,2);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,14,10,5);
   RemoveStudent(DS,25);
   AddStudent(DS,37,1,61);
   TeamFight(DS,1,4,0);
   GetNumOfWins(DS,1,&number_of_wins);
   GetNumOfWins(DS,8,&number_of_wins); // 230
   AddStudent(DS,39,13,52);
   AddStudent(DS,38,8,87);
   GetStudentTeamLeader(DS,47,&leader);
   AddStudent(DS,12,10,17);
   TeamFight(DS,1,9,5);
   GetNumOfWins(DS,9,&number_of_wins);
   JoinTeams(DS,12,3);
   AddStudent(DS,13,10,65);
   RemoveStudent(DS,3);
   RemoveStudent(DS,36); // 240
   GetNumOfWins(DS,12,&number_of_wins);
   TeamFight(DS,2,4,6);
   AddStudent(DS,45,8,51);
   TeamFight(DS,6,3,0);
   GetStudentTeamLeader(DS,7,&leader);
   JoinTeams(DS,9,6);
   AddStudent(DS,6,6,75);
   TeamFight(DS,9,7,-1);
   RemoveStudent(DS,36);
   AddStudent(DS,28,1,99); // 250
   GetNumOfWins(DS,9,&number_of_wins);
   Quit(&DS);
}
