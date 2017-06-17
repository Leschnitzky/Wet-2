void test() {
   int leader;
   int number_of_wins;
   void* DS = Init(14);
   RemoveStudent(DS,33);
   GetStudentTeamLeader(DS,34,&leader);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,10,1,-1);
   AddStudent(DS,44,10,45);
   AddStudent(DS,11,4,45);
   GetStudentTeamLeader(DS,8,&leader);
   RemoveStudent(DS,16);
   GetStudentTeamLeader(DS,43,&leader); // 10
   GetStudentTeamLeader(DS,10,&leader);
   GetStudentTeamLeader(DS,22,&leader);
   AddStudent(DS,47,10,8);
   GetStudentTeamLeader(DS,36,&leader);
   AddStudent(DS,44,11,70);
   TeamFight(DS,14,1,1);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,6,8,51);
   RemoveStudent(DS,5);
   GetNumOfWins(DS,5,&number_of_wins); // 20
   AddStudent(DS,9,8,85);
   TeamFight(DS,7,7,0);
   TeamFight(DS,11,5,3);
   GetNumOfWins(DS,7,&number_of_wins);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,52,9,8);
   TeamFight(DS,10,11,4);
   GetStudentTeamLeader(DS,19,&leader);
   GetStudentTeamLeader(DS,0,&leader); // 30
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,42,4,103);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,11,3,2);
   JoinTeams(DS,11,13);
   GetNumOfWins(DS,9,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,5,6,0);
   GetNumOfWins(DS,4,&number_of_wins);
   GetStudentTeamLeader(DS,45,&leader); // 40
   GetNumOfWins(DS,9,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   GetStudentTeamLeader(DS,35,&leader);
   AddStudent(DS,10,12,91);
   GetNumOfWins(DS,9,&number_of_wins);
   TeamFight(DS,7,5,3);
   AddStudent(DS,39,1,3);
   AddStudent(DS,16,8,63);
   GetStudentTeamLeader(DS,16,&leader);
   GetNumOfWins(DS,13,&number_of_wins); // 50
   RemoveStudent(DS,45);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,2,&number_of_wins);
   TeamFight(DS,9,12,-1);
   AddStudent(DS,54,2,25);
   TeamFight(DS,5,13,0);
   AddStudent(DS,7,3,2);
   TeamFight(DS,11,5,3);
   AddStudent(DS,44,3,25);
   AddStudent(DS,21,7,49); // 60
   JoinTeams(DS,7,2);
   AddStudent(DS,7,3,91);
   TeamFight(DS,9,1,-1);
   AddStudent(DS,48,10,68);
   GetStudentTeamLeader(DS,13,&leader);
   AddStudent(DS,16,14,73);
   AddStudent(DS,28,13,91);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,7,7,-1);
   JoinTeams(DS,10,3); // 70
   RemoveStudent(DS,24);
   RemoveStudent(DS,16);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,4,7,3);
   RemoveStudent(DS,16);
   AddStudent(DS,13,8,81);
   GetStudentTeamLeader(DS,48,&leader);
   AddStudent(DS,7,14,44);
   GetStudentTeamLeader(DS,29,&leader);
   GetNumOfWins(DS,12,&number_of_wins); // 80
   RemoveStudent(DS,12);
   RemoveStudent(DS,2);
   AddStudent(DS,35,8,94);
   GetStudentTeamLeader(DS,30,&leader);
   AddStudent(DS,5,10,68);
   AddStudent(DS,2,13,7);
   TeamFight(DS,8,2,7);
   AddStudent(DS,3,3,78);
   AddStudent(DS,44,12,10);
   AddStudent(DS,25,6,31); // 90
   TeamFight(DS,5,6,7);
   GetStudentTeamLeader(DS,27,&leader);
   AddStudent(DS,14,11,67);
   TeamFight(DS,9,4,1);
   AddStudent(DS,41,2,8);
   TeamFight(DS,1,8,0);
   AddStudent(DS,36,2,40);
   AddStudent(DS,54,3,48);
   TeamFight(DS,11,4,3);
   AddStudent(DS,2,11,103); // 100
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,33,9,81);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,10,2,6);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,4,13,7);
   GetStudentTeamLeader(DS,53,&leader);
   TeamFight(DS,13,10,6);
   JoinTeams(DS,2,14);
   JoinTeams(DS,6,11); // 110
   GetStudentTeamLeader(DS,25,&leader);
   TeamFight(DS,6,13,7);
   AddStudent(DS,14,5,19);
   JoinTeams(DS,12,4);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,44,13,76);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,14,&number_of_wins);
   AddStudent(DS,50,7,3);
   TeamFight(DS,12,5,4); // 120
   AddStudent(DS,4,3,82);
   JoinTeams(DS,10,3);
   AddStudent(DS,19,2,59);
   JoinTeams(DS,10,3);
   JoinTeams(DS,10,1);
   AddStudent(DS,20,9,19);
   AddStudent(DS,39,14,26);
   TeamFight(DS,7,8,-1);
   TeamFight(DS,5,7,6);
   RemoveStudent(DS,45); // 130
   TeamFight(DS,9,1,2);
   TeamFight(DS,11,8,3);
   GetNumOfWins(DS,6,&number_of_wins);
   GetStudentTeamLeader(DS,17,&leader);
   AddStudent(DS,46,8,58);
   TeamFight(DS,7,9,1);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,12,10,1);
   GetStudentTeamLeader(DS,54,&leader); // 140
   GetStudentTeamLeader(DS,34,&leader);
   AddStudent(DS,49,10,60);
   AddStudent(DS,46,12,1);
   TeamFight(DS,13,5,1);
   RemoveStudent(DS,-1);
   TeamFight(DS,13,10,2);
   TeamFight(DS,6,8,13);
   AddStudent(DS,42,13,9);
   JoinTeams(DS,2,3);
   RemoveStudent(DS,32); // 150
   AddStudent(DS,16,10,18);
   TeamFight(DS,7,13,5);
   GetStudentTeamLeader(DS,37,&leader);
   TeamFight(DS,1,4,2);
   AddStudent(DS,25,10,91);
   JoinTeams(DS,4,11);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,31,5,60);
   GetStudentTeamLeader(DS,41,&leader);
   AddStudent(DS,22,9,63); // 160
   TeamFight(DS,2,7,5);
   AddStudent(DS,32,4,101);
   TeamFight(DS,7,1,12);
   GetNumOfWins(DS,12,&number_of_wins);
   AddStudent(DS,19,14,77);
   TeamFight(DS,11,6,7);
   RemoveStudent(DS,20);
   AddStudent(DS,48,14,0);
   AddStudent(DS,38,8,84);
   RemoveStudent(DS,40); // 170
   TeamFight(DS,9,13,14);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,22,9,104);
   GetNumOfWins(DS,1,&number_of_wins);
   RemoveStudent(DS,4);
   TeamFight(DS,12,4,5);
   JoinTeams(DS,12,9);
   GetStudentTeamLeader(DS,40,&leader);
   JoinTeams(DS,7,2);
   AddStudent(DS,53,5,26); // 180
   AddStudent(DS,-1,2,103);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,11,13,14);
   RemoveStudent(DS,4);
   GetStudentTeamLeader(DS,28,&leader);
   TeamFight(DS,14,7,4);
   AddStudent(DS,0,12,1);
   AddStudent(DS,41,4,7);
   AddStudent(DS,36,3,48); // 190
   JoinTeams(DS,3,1);
   JoinTeams(DS,10,5);
   TeamFight(DS,5,1,2);
   GetNumOfWins(DS,11,&number_of_wins);
   RemoveStudent(DS,5);
   TeamFight(DS,12,10,4);
   GetNumOfWins(DS,6,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   GetStudentTeamLeader(DS,33,&leader);
   TeamFight(DS,8,2,3); // 200
   AddStudent(DS,13,7,69);
   RemoveStudent(DS,34);
   AddStudent(DS,51,14,39);
   TeamFight(DS,1,9,2);
   AddStudent(DS,1,14,27);
   RemoveStudent(DS,2);
   AddStudent(DS,52,4,36);
   GetNumOfWins(DS,12,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   AddStudent(DS,34,14,22); // 210
   TeamFight(DS,2,9,10);
   GetNumOfWins(DS,1,&number_of_wins);
   AddStudent(DS,36,7,33);
   TeamFight(DS,4,14,3);
   TeamFight(DS,7,9,10);
   AddStudent(DS,22,13,22);
   TeamFight(DS,11,13,7);
   JoinTeams(DS,12,14);
   GetStudentTeamLeader(DS,26,&leader);
   RemoveStudent(DS,36); // 220
   GetStudentTeamLeader(DS,10,&leader);
   RemoveStudent(DS,20);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,11,1,-1);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,14,7,39);
   AddStudent(DS,9,3,46);
   GetNumOfWins(DS,7,&number_of_wins);
   TeamFight(DS,13,5,-1);
   GetStudentTeamLeader(DS,1,&leader); // 230
   TeamFight(DS,3,7,7);
   JoinTeams(DS,14,10);
   TeamFight(DS,3,5,9);
   RemoveStudent(DS,30);
   TeamFight(DS,9,13,-1);
   GetStudentTeamLeader(DS,33,&leader);
   RemoveStudent(DS,52);
   GetNumOfWins(DS,12,&number_of_wins);
   RemoveStudent(DS,32);
   TeamFight(DS,14,6,11); // 240
   AddStudent(DS,38,9,100);
   JoinTeams(DS,2,4);
   AddStudent(DS,50,14,42);
   AddStudent(DS,13,2,28);
   AddStudent(DS,37,5,65);
   AddStudent(DS,24,8,13);
   GetNumOfWins(DS,13,&number_of_wins);
   TeamFight(DS,7,7,11);
   GetStudentTeamLeader(DS,45,&leader);
   RemoveStudent(DS,35); // 250
   TeamFight(DS,11,3,11);
   Quit(&DS);
}
