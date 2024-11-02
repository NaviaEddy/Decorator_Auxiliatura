// Fill out your copyright notice in the Description page of Project Settings.


#include "DisparadorDecorator.h"

// Sets default values
ADisparadorDecorator::ADisparadorDecorator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADisparadorDecorator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADisparadorDecorator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADisparadorDecorator::Empezar()
{
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Turquoise, FString::Printf(TEXT("Ahora tiene 2 capas")));
}

FString ADisparadorDecorator::Estado()
{
	estado = "Estado disparador";
	return Super::Estado() + estado;
}

FString ADisparadorDecorator::ObtenerAtributos()
{
	atributos = "Puede disparar";
	return Super::ObtenerAtributos() + atributos;
}

float ADisparadorDecorator::Duracion()
{
	return Super::Duracion() + 3.f;
}

