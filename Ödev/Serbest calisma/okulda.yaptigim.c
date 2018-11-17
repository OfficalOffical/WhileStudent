#include <stdio.h>

void TwoAngle(){
	printf("\n     *     \n    * *\n   *   *\n  *     *");
}

void DrawCircle(){
	printf ("    ***\n   *   *\n    ***");		
}

void Flat(){
	printf("\n *********");
}

void WallOfHouse(){
	printf("\n *       *");
	printf("\n *       *");
	printf("\n *       *");
	printf("\n *       *");
}





int main(){
	
	DrawCircle();
	TwoAngle();	
	Flat();
	TwoAngle();
	TwoAngle();
	Flat();
	WallOfHouse();
	Flat(); 
		
	return 0;
}



 

