void test() {
   int leader;
   int number_of_wins;
   void* DS = Init(11);
   RemoveStudent(DS,1);
   RemoveStudent(DS,12);
   GetNumOfWins(DS,10,&number_of_wins);
   GetNumOfWins(DS,10,&number_of_wins);
   TeamFight(DS,10,1,3);
   RemoveStudent(DS,8);
   TeamFight(DS,1,7,1);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,3,1,4); // 10
   TeamFight(DS,2,1,1);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,7,5,48);
   JoinTeams(DS,7,4);
   TeamFight(DS,11,5,-1);
   GetStudentTeamLeader(DS,40,&leader);
   RemoveStudent(DS,15);
   TeamFight(DS,11,11,2);
   TeamFight(DS,8,10,-1);
   GetStudentTeamLeader(DS,28,&leader); // 20
   AddStudent(DS,36,8,61);
   TeamFight(DS,8,4,2);
   TeamFight(DS,3,10,-1);
   AddStudent(DS,40,5,3);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,2,9,56);
   TeamFight(DS,10,10,-1);
   GetNumOfWins(DS,9,&number_of_wins);
   AddStudent(DS,3,5,38);
   GetNumOfWins(DS,10,&number_of_wins); // 30
   TeamFight(DS,5,10,2);
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,5,1,0);
   RemoveStudent(DS,15);
   TeamFight(DS,10,3,0);
   AddStudent(DS,6,2,43);
   TeamFight(DS,9,11,-1);
   GetNumOfWins(DS,3,&number_of_wins);
   TeamFight(DS,6,3,1);
   AddStudent(DS,1,7,63); // 40
   AddStudent(DS,0,4,10);
   TeamFight(DS,1,5,4);
   TeamFight(DS,11,11,1);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,39,4,5);
   GetNumOfWins(DS,4,&number_of_wins);
   JoinTeams(DS,4,4);
   TeamFight(DS,5,10,2);
   GetNumOfWins(DS,7,&number_of_wins);
   RemoveStudent(DS,21); // 50
   TeamFight(DS,3,2,4);
   AddStudent(DS,3,5,48);
   GetNumOfWins(DS,8,&number_of_wins);
   RemoveStudent(DS,18);
   AddStudent(DS,41,3,23);
   RemoveStudent(DS,7);
   JoinTeams(DS,7,7);
   GetStudentTeamLeader(DS,13,&leader);
   TeamFight(DS,10,9,2);
   GetStudentTeamLeader(DS,23,&leader); // 60
   GetStudentTeamLeader(DS,7,&leader);
   AddStudent(DS,35,5,46);
   TeamFight(DS,7,1,-1);
   AddStudent(DS,27,3,18);
   GetNumOfWins(DS,10,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,6,9,22);
   TeamFight(DS,10,8,-1);
   GetStudentTeamLeader(DS,30,&leader);
   AddStudent(DS,33,5,15); // 70
   TeamFight(DS,5,5,9);
   AddStudent(DS,3,9,61);
   TeamFight(DS,1,9,4);
   TeamFight(DS,10,11,1);
   JoinTeams(DS,1,9);
   GetStudentTeamLeader(DS,33,&leader);
   AddStudent(DS,1,7,26);
   GetStudentTeamLeader(DS,16,&leader);
   GetStudentTeamLeader(DS,16,&leader);
   AddStudent(DS,19,5,65); // 80
   GetStudentTeamLeader(DS,13,&leader);
   TeamFight(DS,8,4,2);
   TeamFight(DS,1,5,8);
   GetNumOfWins(DS,4,&number_of_wins);
   AddStudent(DS,23,3,34);
   TeamFight(DS,1,5,2);
   AddStudent(DS,25,2,29);
   AddStudent(DS,43,3,24);
   TeamFight(DS,10,1,-1);
   AddStudent(DS,23,5,5); // 90
   AddStudent(DS,9,1,3);
   RemoveStudent(DS,21);
   AddStudent(DS,42,8,40);
   GetNumOfWins(DS,2,&number_of_wins);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,5,11,-1);
   AddStudent(DS,23,9,1);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,5,2,7);
   TeamFight(DS,3,8,1); // 100
   GetNumOfWins(DS,4,&number_of_wins);
   Quit(&DS);
}
