// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "IJugador.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DecoradorBase.generated.h"

UCLASS()
class DECORATOR_PATTERN_API ADecoradorBase : public AActor, public IIJugador
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADecoradorBase();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	FString estado;
	FString atributos;

private:
	IIJugador* Jugador;

public:
	void SetJugador(AActor* _Jugador);
	void Empezar() override;
	FString Estado() override;
	FString ObtenerAtributos() override;
	float Duracion() override;

};
