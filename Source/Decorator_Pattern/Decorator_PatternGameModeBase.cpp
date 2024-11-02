// Copyright Epic Games, Inc. All Rights Reserved.


#include "Decorator_PatternGameModeBase.h"
#include "Jugador.h"
#include "CorredorDecorador.h"
#include "DisparadorDecorator.h"
#include "InvencibleDecorador.h"

ADecorator_PatternGameModeBase::ADecorator_PatternGameModeBase()
{
}

void ADecorator_PatternGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	//Engendramos al jugador principal
	AJugador* JugadorPrincipal = GetWorld()->SpawnActor<AJugador>(AJugador::StaticClass());

	//Engendramos un decorador para correr en el jugador principal
	ACorredorDecorador* Corredor = GetWorld()->SpawnActor<ACorredorDecorador>(ACorredorDecorador::StaticClass());
	Corredor->SetJugador(JugadorPrincipal);

	Jugador = Corredor;
	Jugador->Empezar();
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Jugador ahora esta en %s"), *Jugador->Estado()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Jugador ahora tiene los atributos de %s"), *Jugador->ObtenerAtributos()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Cyan,
		FString::Printf(TEXT("Su duracion es de %.2f"), Jugador->Duracion()));

	//Engendramos un decorador para disparar en el jugador principal
	ADisparadorDecorator* Disparar = GetWorld()->SpawnActor<ADisparadorDecorator>(ADisparadorDecorator::StaticClass());
	Disparar->SetJugador(Corredor);

	Jugador = Disparar;
	Jugador->Empezar();
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Emerald,
		FString::Printf(TEXT("Jugador ahora esta en %s"), *Jugador->Estado()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Emerald,
		FString::Printf(TEXT("Jugador ahora tiene los atributos de %s"), *Jugador->ObtenerAtributos()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Emerald,
		FString::Printf(TEXT("Su duracion es de %.2f"), Jugador->Duracion()));

	//Engendramos un decorador para ser invencible en el jugador principal
	AInvencibleDecorador* Invencible = GetWorld()->SpawnActor<AInvencibleDecorador>(AInvencibleDecorador::StaticClass());
	Invencible->SetJugador(Disparar);

	Jugador = Invencible;
	Jugador->Empezar();
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Magenta,
		FString::Printf(TEXT("Jugador ahora esta en %s"), *Jugador->Estado()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Magenta,
		FString::Printf(TEXT("Jugador ahora tiene los atributos de %s"), *Jugador->ObtenerAtributos()));
	GEngine->AddOnScreenDebugMessage(-1, 30.f, FColor::Magenta,
		FString::Printf(TEXT("Su duracion es de %.2f"), Jugador->Duracion()));
}

void ADecorator_PatternGameModeBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
