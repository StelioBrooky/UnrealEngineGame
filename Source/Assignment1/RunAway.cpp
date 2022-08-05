// Fill out your copyright notice in the Description page of Project Settings.


#include "RunAway.h"


//calculate the distance between the player and the enemy
	float URunAway::CalculateDistanceStelio(AActor* Player, AActor* Enemy)
{
	FVector PlayerLocation = Player->GetActorLocation();
	FVector EnemyLocation = Enemy->GetActorLocation();
	float Distance = FVector::Dist(PlayerLocation, EnemyLocation);
	return Distance;
	
}
	
	//Function for when the calculated distance greater or equal to 5 times the length of the enemy, the enemy runs away
	void URunAway::RunAwayStelio(AActor* Player, AActor* Enemy)
		{
		float Distance = URunAway::CalculateDistanceStelio(Player, Enemy);
			if (Distance >= Enemy->GetActorScale().X * 5)
			{
				Enemy->SetActorRotation(FRotator(0.0f, 180.0f, 0.0f));
			}
		}

	float URunAway::BaskingStelio(float energy)
	{
		float Basking = energy;
		//if energy is less than or equal to 200, the return energy - 3
		if (Basking <= 200)
		{
			Basking = Basking + 3;
		}
	return Basking;
	}