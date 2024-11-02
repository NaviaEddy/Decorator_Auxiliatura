// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DecoradorBase.h"
#include "InvencibleDecorador.generated.h"

UCLASS()
class DECORATOR_PATTERN_API AInvencibleDecorador : public ADecoradorBase
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInvencibleDecorador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void Empezar() override;
	FString Estado() override;
	FString ObtenerAtributos() override;
	float Duracion() override;
};
