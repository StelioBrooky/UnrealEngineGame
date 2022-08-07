


#include "RunAway.h"

	
	//Function for when the enemy distance is within 4 metres of the player, the enemy then randomly moves away
	void URunAway::RunAwayStelio(AActor* Player, AActor* Enemy, float Distance)
		{
			if (Distance <= 400)
			{
				//Set a random direction for the enemy to move in without the z axis
				FVector Direction = FVector(FMath::RandRange(-100, 100), FMath::RandRange(-100, 100), 0);
				
				Enemy->SetActorLocation(Enemy->GetActorLocation() + Direction);
			}
		}

	float URunAway::BaskingStelio(float energy)
	{
		float Basking = energy;
		//if energy is less than or equal to 200, then increase the players energy by 3 
		if (Basking <= 200)
		{
			Basking = Basking + 3;
		}
	return Basking;
	}
	