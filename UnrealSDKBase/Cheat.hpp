using namespace SDK;

class cheat_manager {
private:
	SDK::UWorld** _UWorld;
	UWorld* gWorld;
	APlayerController* PlayerController;
	ULocalPlayer* LocalPlayer;
	UGameInstance* OwningGameInstance;
	UGameViewportClient* GameViewportClient;
	AGameStateBase* GameState;
	AActor* obj;
	UGameplayStatics* UGStatics;
	UKismetSystemLibrary* KismetSystemLib;
	ARPlayerPawn* MyPlayer;
	ACharacter* BaseClass; 
	UKismetMathLibrary* MathLib;
	int x, y = 0;
public:
	void cheat_thread();
	void dump_bones();
};