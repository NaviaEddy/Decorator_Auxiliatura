// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once
#include "IJugador.h"
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Decorator_PatternGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class DECORATOR_PATTERN_API ADecorator_PatternGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public:
	ADecorator_PatternGameModeBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	IIJugador* Jugador;
	
};
