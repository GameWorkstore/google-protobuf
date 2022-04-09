#include "ProtobufTestInBegin.h"
#include "TestProtobuf.pb.h"

// Sets default values
AProtobufTestInBegin::AProtobufTestInBegin()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AProtobufTestInBegin::BeginPlay()
{
	Super::BeginPlay();

	main::NewMessege messege;
	messege.set_onestring(TCHAR_TO_UTF8("ADefaultString"));
	messege.set_oneint(1);
	auto bools = { true, false, true, false };

	messege.add_bools(true);
	messege.add_bools(false);
	messege.add_bools(false);

	auto stdString = messege.SerializeAsString().c_str();
	auto serialized = FString(TCHAR_TO_UTF8(stdString));
	UE_LOG(LogTemp, Warning, TEXT("Json serialized is %s"),*serialized);

	main::NewMessege messegeRecovered;
	messegeRecovered.ParseFromString(stdString);

	auto msgDeserialized = FString(messegeRecovered.onestring().c_str());

	UE_LOG(LogTemp, Warning, TEXT("One string %s"), *msgDeserialized);
}

// Called every frame
void AProtobufTestInBegin::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

