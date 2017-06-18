void test() {
   int leader;
   int number_of_wins;
   void* DS = Init(11);
   RemoveStudent(DS,21);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,20,4,15);
   TeamFight(DS,3,1,2);
   AddStudent(DS,28,8,33);
   JoinTeams(DS,7,10);
   AddStudent(DS,10,7,54);
   GetStudentTeamLeader(DS,25,&leader);
   TeamFight(DS,2,10,-1); // 10
   JoinTeams(DS,7,3);
   RemoveStudent(DS,10);
   AddStudent(DS,36,9,54);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,28,9,12);
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,39,&leader);
   GetStudentTeamLeader(DS,39,&leader);
   GetNumOfWins(DS,3,&number_of_wins);
   GetStudentTeamLeader(DS,27,&leader); // 20
   AddStudent(DS,37,2,51);
   RemoveStudent(DS,1);
   TeamFight(DS,10,3,3);
   JoinTeams(DS,10,7);
   TeamFight(DS,9,3,3);
   JoinTeams(DS,6,7);
   TeamFight(DS,7,7,0);
   GetStudentTeamLeader(DS,36,&leader);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,32,11,36); // 30
   GetStudentTeamLeader(DS,35,&leader);
   AddStudent(DS,32,7,37);
   TeamFight(DS,5,10,1);
   AddStudent(DS,6,2,50);
   GetNumOfWins(DS,8,&number_of_wins);
   GetNumOfWins(DS,6,&number_of_wins);
   TeamFight(DS,2,2,1);
   TeamFight(DS,4,2,3);
   TeamFight(DS,3,10,2);
   GetStudentTeamLeader(DS,-1,&leader); // 40
   TeamFight(DS,5,7,1);
   GetNumOfWins(DS,3,&number_of_wins);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,2,5,1);
   AddStudent(DS,5,3,32);
   RemoveStudent(DS,7);
   AddStudent(DS,9,11,15);
   AddStudent(DS,8,8,35);
   TeamFight(DS,9,11,0);
   AddStudent(DS,43,10,64); // 50
   RemoveStudent(DS,35);
   TeamFight(DS,3,4,-1);
   TeamFight(DS,8,3,2);
   GetNumOfWins(DS,1,&number_of_wins);
   TeamFight(DS,7,5,0);
   GetStudentTeamLeader(DS,5,&leader);
   RemoveStudent(DS,39);
   RemoveStudent(DS,34);
   AddStudent(DS,9,8,53);
   GetStudentTeamLeader(DS,3,&leader); // 60
   RemoveStudent(DS,41);
   AddStudent(DS,37,2,2);
   AddStudent(DS,35,5,-1);
   TeamFight(DS,5,5,2);
   AddStudent(DS,23,5,39);
   GetStudentTeamLeader(DS,-1,&leader);
   AddStudent(DS,4,1,47);
   GetNumOfWins(DS,4,&number_of_wins);
   GetNumOfWins(DS,7,&number_of_wins);
   AddStudent(DS,3,7,9); // 70
   GetNumOfWins(DS,8,&number_of_wins);
   TeamFight(DS,3,8,2);
   TeamFight(DS,6,7,6);
   AddStudent(DS,9,10,26);
   AddStudent(DS,30,6,5);
   RemoveStudent(DS,16);
   AddStudent(DS,36,3,7);
   GetNumOfWins(DS,6,&number_of_wins);
   AddStudent(DS,19,10,22);
   GetStudentTeamLeader(DS,27,&leader); // 80
   RemoveStudent(DS,22);
   TeamFight(DS,3,3,7);
   AddStudent(DS,25,11,23);
   GetNumOfWins(DS,5,&number_of_wins);
   AddStudent(DS,16,7,-1);
   TeamFight(DS,6,3,4);
   AddStudent(DS,27,11,3);
   RemoveStudent(DS,23);
   GetStudentTeamLeader(DS,41,&leader);
   AddStudent(DS,33,9,42); // 90
   AddStudent(DS,4,1,31);
   GetNumOfWins(DS,4,&number_of_wins);
   GetStudentTeamLeader(DS,39,&leader);
   AddStudent(DS,5,8,52);
   AddStudent(DS,32,7,42);
   GetNumOfWins(DS,3,&number_of_wins);
   RemoveStudent(DS,-1);
   GetNumOfWins(DS,11,&number_of_wins);
   TeamFight(DS,4,5,5);
   TeamFight(DS,1,8,1); // 100
   GetNumOfWins(DS,1,&number_of_wins);
   Quit(&DS);
}
