#include "Scene/ProjectActorFactory.h"
#include "Library/Factory/Factory.h"

namespace al {

static NameToCreator<ActorCreatorFunction> sProjectActorFactoryEntries[] = {
    {"AchievementNpc", nullptr},
    {"AirBubble", nullptr},
    {"AirBubbleGenerator", nullptr},
    {"AirCurrent", nullptr},
    {"AllDeadWatcher", nullptr},
    {"AllDeadWatcherWithShine", nullptr},
    {"AmiiboHelpNpc", nullptr},
    {"AmiiboNpc", nullptr},
    {"AnagramAlphabet", nullptr},
#ifdef VER_120
    {"TimeBalloonNpc", nullptr},
#endif
    {"Barrel2D", nullptr},
    {"BarrelGenerator2D", nullptr},
    {"BarrierField", nullptr},
    {"BazookaElectric", nullptr},
    {"BendLeafTree", nullptr},
    {"BgmPlayObj", nullptr},
    {"Bird", nullptr},
    {"BirdCarryMeat", nullptr},
    {"BirdPlayerGlideCtrl", nullptr},
    {"BlockBrick", nullptr},
    {"BlockBrick2D", nullptr},
    {"BlockBrickBig2D", nullptr},
    {"BlockEmpty", nullptr},
    {"BlockEmpty2D", nullptr},
    {"BlockHard", nullptr},
    {"ClashWorldBlockHard", nullptr},
    {"BlockQuestion", nullptr},
    {"CityBlockQuestion", nullptr},
    {"BlockQuestion2D", nullptr},
    {"BlockTransparent", nullptr},
    {"BlockTransparent2D", nullptr},
    {"BlowObjBeans", nullptr},
    {"BlowObjCan", nullptr},
    {"BlowObjGarbageBag", nullptr},
    {"BlowObjMushroom", nullptr},
    {"BlowObj", nullptr},
    {"BombTail", nullptr},
    {"BossForest", nullptr},
    {"BossForestBlock", nullptr},
    {"BossForestWander", nullptr},
    {"BossKnuckle", nullptr},
    {"BossKnuckleCounterGround", nullptr},
    {"BossKnuckleFix", nullptr},
    {"BossMagma", nullptr},
    {"BossRaid", nullptr},
    {"BossRaidNpc", nullptr},
    {"BossRaidRivet", nullptr},
    {"BreakablePole", nullptr},
    {"Breeda", nullptr},
    {"Bubble", nullptr},
    {"Bubble2D", nullptr},
    {"BubbleLauncher", nullptr},
    {"Bull", nullptr},
    {"Byugo", nullptr},
    {"Cactus", nullptr},
    {"CactusMini", nullptr},
    {"CageShine", nullptr},
    {"CageSaveSwitch", nullptr},
    {"CageStageSwitch", nullptr},
    {"CageBreakable", nullptr},
    {"CameraDemoGateMapParts", nullptr},
    {"CameraDemoKeyMoveMapParts", nullptr},
    {"CameraRailHolder", nullptr},
    {"CameraSub", nullptr},
    {"CameraWatchPoint", nullptr},
    {"Candlestand", nullptr},
    {"CandlestandFire", nullptr},
    {"CandlestandInitializer", nullptr},
    {"CandlestandBgmDirector", nullptr},
    {"CandlestandSaveWatcher", nullptr},
    {"CandlestandWatcher", nullptr},
    {"CapAccelerator", nullptr},
    {"CapAcceleratorKeyMoveMapParts", nullptr},
    {"CapAppearMapParts", nullptr},
    {"CapBeamer", nullptr},
    {"CapBomb", nullptr},
    {"CapCatapult", nullptr},
    {"CapFlower", nullptr},
    {"CapFlowerGroup", nullptr},
    {"CapHanger", nullptr},
    {"CapMessageAfterInformation", nullptr},
    {"CapRack", nullptr},
    {"CapRackTimer", nullptr},
    {"CapRailMover", nullptr},
    {"CapSlotBase", nullptr},
    {"CapSwitch", nullptr},
    {"CapSwitchSave", nullptr},
    {"CapSwitchTimer", nullptr},
    {"CapThrower", nullptr},
    {"CapTrampoline", nullptr},
    {"Car", nullptr},
    {"CarSandWorld", nullptr},
    {"CarWatcher", nullptr},
    {"CardboardBox", nullptr},
    {"CatchBomb", nullptr},
    {"Chair", nullptr},
    {"CheckpointFlag", nullptr},
    {"ChorobonHolder", nullptr},
    {"ChurchDoor", nullptr},
    {"CityBuilding", nullptr},
    {"CityStreetlight", nullptr},
    {"CityWorldSign", nullptr},
    {"CityWorldUndergroundMachine", nullptr},
    {"CitySign", nullptr},
    {"CitySignal", nullptr},
    {"CityWorldTable", nullptr},
    {"Closet", nullptr},
    {"CloudStep", nullptr},
    {"CollapseSandHill", nullptr},
    {"CollectAnimalWatcher", nullptr},
    {"CollectBgmSpeaker", nullptr},
    {"CollectionList", nullptr},
    {"Coin", nullptr},
    {"Coin2D", nullptr},
    {"Coin2DCityDirector", nullptr},
    {"CoinBlow", nullptr},
    {"CoinChameleon", nullptr},
    {"CoinCirclePlacement", nullptr},
    {"CoinCollect", nullptr},
    {"CoinCollectHintObj", nullptr},
    {"CoinCollect2D", nullptr},
    {"CoinLead", nullptr},
    {"CoinRail", nullptr},
    {"CoinRing", nullptr},
    {"CoinStackGroup", nullptr},
    {"CrystalBreakable", nullptr},
    {"DamageBallGenerator", nullptr},
    {"DelaySwitch", nullptr},
    {"DemoActorCapManHero", nullptr},
    {"DemoActorCapManHeroine", nullptr},
    {"DemoActorKoopaShip", nullptr},
    {"DemoActorHack", nullptr},
    {"DemoActorPeach", nullptr},
    {"DemoActorShineTower", nullptr},
    {"DemoPeachWorldHomeWater001", nullptr},
    {"DemoChangeEffectObj", nullptr},
    {"DemoWorldMoveHomeBackGround", nullptr},
    {"DemoPeachWedding", nullptr},
    {"DemoPlayer", nullptr},
    {"DemoPlayerCap", nullptr},
    {"DigPoint", nullptr},
    {"DigPointHintPhoto", nullptr},
    {"DigPointWater", nullptr},
    {"DirectionFixedBillboard", nullptr},
    {"Dokan", nullptr},
    {"DokanKoopa", nullptr},
    {"DokanMaze", nullptr},
    {"DokanMazeDirector", nullptr},
    {"DokanStageChange", nullptr},
    {"DonkeyKong2D", nullptr},
    {"Donsuke", nullptr},
    {"Doshi", nullptr},
    {"DoorAreaChange", nullptr},
    {"DoorAreaChangeCap", nullptr},
    {"DoorCity", nullptr},
    {"DoorSnow", nullptr},
    {"DoorWarp", nullptr},
    {"DoorWarpStageChange", nullptr},
    {"EchoBlockMapParts", nullptr},
    {"EffectObj", nullptr},
    {"EffectObjScale", nullptr},
    {"EffectObjAlpha", nullptr},
    {"EffectObjCameraEmit", nullptr},
    {"EffectObjFollowCamera", nullptr},
    {"EffectObjFollowCameraLimit", nullptr},
    {"EffectObjInterval", nullptr},
    {"EffectObjNpcManFar", nullptr},
    {"EffectObjQualityChange", nullptr},
    {"ElectricWire", nullptr},
    {"ElectricWireKoopa", nullptr},
    {"EntranceCameraStartObj", nullptr},
    {"EventKeyMoveCameraObjNoDemo", nullptr},
    {"EventKeyMoveCameraObjWithDemo", nullptr},
    {"FigureWalkingNpc", nullptr},
    {"FireBlower", nullptr},
    {"FireBrosPossessed", nullptr},
    {"FireSwitch", nullptr},
    {"FireHydrant", nullptr},
    {"FireDrum2D", nullptr},
    {"FishingFish", nullptr},
    {"FixMapParts2D", nullptr},
    {"FixMapPartsAppearKillAsync", nullptr},
    {"FixMapPartsBgmChangeAction", nullptr},
    {"FixMapPartsCapHanger", nullptr},
    {"FixMapPartsDitherAppear", nullptr},
    {"FixMapPartsForceSafetyPoint", nullptr},
    {"FixMapPartsFukankunZoomCapMessage", nullptr},
    {"FixMapPartsScenarioAction", nullptr},
    {"FlyObject", nullptr},
    {"ForestManSeed", nullptr},
    {"ForestWorldHomeBreakParts000", nullptr},
    {"FogRequester", nullptr},
    {"FrailBox", nullptr},
    {"Frog", nullptr},
    {"Fukankun", nullptr},
    {"FukankunZoomCapMessageSun", nullptr},
    {"FukuwaraiWatcher", nullptr},
    {"ForestWorldEnergyStand", nullptr},
    {"ForestWorldFlowerCtrl", nullptr},
    {"GabuZou", nullptr},
    {"GabuZouGroup", nullptr},
    {"Gamane", nullptr},
    {"GiantWanderBoss", nullptr},
    {"GoalMark", nullptr},
    {"GolemClimb", nullptr},
    {"Gotogoton", nullptr},
    {"GotogotonGoal", nullptr},
    {"GraphicsObjShadowMaskCube", nullptr},
    {"GraphicsObjShadowMaskSphere", nullptr},
    {"GrowerBug", nullptr},
    {"GrowerWorm", nullptr},
    {"GrowFlowerCoin", nullptr},
    {"GrowFlowerWatcher", nullptr},
    {"GrowPlantGrowPlace", nullptr},
    {"GrowPlantSeed", nullptr},
    {"GrowPlantStartStage", nullptr},
    {"GrowPlantWatcher", nullptr},
    {"Gunetter", nullptr},
    {"GunetterMove", nullptr},
    {"HackCar", nullptr},
    {"HackFork", nullptr},
    {"HammerBrosPossessed", nullptr},
    {"HammerBros2D", nullptr},
    {"HelpNpc", nullptr},
    {"HintNpc", nullptr},
    {"HintPhoto", nullptr},
    {"HintRouteGuidePoint", nullptr},
    {"HipDropSwitch", nullptr},
    {"HipDropSwitchSave", nullptr},
    {"HipDropSwitchTimer", nullptr},
    {"HipDropTile", nullptr},
    {"HipDropMoveLift", nullptr},
    {"HipDropRepairParts", nullptr},
    {"HipDropTransformPartsWatcher", nullptr},
    {"HomeBed", nullptr},
    {"HomeChair", nullptr},
    {"HomeInside", nullptr},
    {"HomeShip", nullptr},
    {"Hosui", nullptr},
    {"IcicleFall", nullptr},
    {"Imomu", nullptr},
    {"IndicatorDirector", nullptr},
    {"Jango", nullptr},
    {"Joku", nullptr},
    {"JugemFishing", nullptr},
    {"JumpingRopeNpc", nullptr},
    {"Kakku", nullptr},
    {"KaronWing", nullptr},
    {"KeyMoveCameraFix", nullptr},
    {"KickStone", nullptr},
    {"KillerLauncher", nullptr},
    {"KillerLauncherDot", nullptr},
    {"KinokoUfo", nullptr},
    {"Koopa", nullptr},
    {"KoopaCapPlayer", nullptr},
    {"KoopaChurch", nullptr},
    {"KoopaLv1", nullptr},
    {"KoopaLv2", nullptr},
    {"KoopaLv3", nullptr},
    {"KoopaShip", nullptr},
    {"Kuribo2D3D", nullptr},
    {"KuriboGenerator2D3D", nullptr},
    {"KuriboGirl", nullptr},
    {"KuriboPossessed", nullptr},
    {"KuriboMini", nullptr},
    {"KuriboTowerSwitch", nullptr},
    {"KuriboWing", nullptr},
    {"LavaFryingPan", nullptr},
    {"LavaStewVeget", nullptr},
    {"LavaPan", nullptr},
    {"LavaWave", nullptr},
    {"LifeMaxUpItem", nullptr},
    {"LifeMaxUpItem2D", nullptr},
    {"LifeUpItem", nullptr},
    {"LifeUpItem2D", nullptr},
    {"LightningController", nullptr},
    {"LongGenerator", nullptr},
    {"MarchingCubeBlock", nullptr},
    {"MapPartsRoulette", nullptr},
    {"Megane", nullptr},
    {"MeganeLiftExLift", nullptr},
    {"MeganeKeyMoveMapParts", nullptr},
    {"MeganeMapParts", nullptr},
    {"Mirror", nullptr},
    {"MoonBasementBreakParts", nullptr},
    {"MoonBasementClimaxWatcher", nullptr},
    {"MoonBasementFallObj", nullptr},
    {"MoonBasementFinalGate", nullptr},
    {"MoonBasementFallObjDecoration", nullptr},
    {"MoonBasementFloor", nullptr},
    {"MoonBasementGate", nullptr},
    {"MoonBasementMeteorAreaObj", nullptr},
    {"MoonBasementPillar", nullptr},
    {"MoonBasementRock", nullptr},
    {"MoonBasementSlideObj", nullptr},
    {"MoonRock", nullptr},
    {"MoonWorldBell", nullptr},
    {"MoonWorldCaptureParadeLift", nullptr},
    {"Mofumofu", nullptr},
    {"MofumofuLv2", nullptr},
    {"MofumofuScrap", nullptr},
    {"Motorcycle", nullptr},
    {"MotorcycleParkingLot", nullptr},
    {"MoveHomeNpc", nullptr},
    {"MoviePlayerMapParts", nullptr},
    {"MultiGateKeeperBonfire", nullptr},
    {"MultiGateKeeperWatcher", nullptr},
    {"Mummy", nullptr},
    {"MummyGenerator", nullptr},
    {"NeedleTrap", nullptr},
    {"Nokonoko2D", nullptr},
    {"NoteObjFirst", nullptr},
    {"NoteObjFirst2D", nullptr},
    {"NoteObjDirector", nullptr},
    {"Objex", nullptr},
    {"OccludedEffectRequester", nullptr},
    {"OceanWave", nullptr},
    {"CloudOcean", nullptr},
    {"DemoCloudOcean", nullptr},
    {"OneMeshFixMapParts", nullptr},
    {"OpeningStageStartDemo", nullptr},
    {"PackunFire", nullptr},
    {"PadRumblePoint", nullptr},
    {"PaintObj", nullptr},
    {"PaulineAtCeremony", nullptr},
    {"PaulineAudience", nullptr},
    {"PeachWorldHomeCastleCap", nullptr},
    {"PeachWorldGate", nullptr},
    {"PeachWorldMoatWater", nullptr},
    {"PeachWorldTree", nullptr},
    {"Pecho", nullptr},
    {"Pen", nullptr},
    {"PictureStageChange", nullptr},
    {"PillarKeyMoveParts", nullptr},
    {"PillarSwitchOpenMapParts", nullptr},
    {"PlayerMotionObserver", nullptr},
    {"PlayerStartObj", nullptr},
    {"PlayerSubjectiveWatchCheckObj", nullptr},
    {"PlayGuideBoard", nullptr},
    {"PlayRecorder", nullptr},
    {"PlayerStartObjNoLink", nullptr},
    {"PochiHintPhoto", nullptr},
    {"Poetter", nullptr},
    {"PoleClimbParts", nullptr},
    {"PoleClimbPartsBreak", nullptr},
    {"PoleGrabCeil", nullptr},
    {"PoleGrabCeilKeyMoveParts", nullptr},
    {"PopnGenerator", nullptr},
    {"LavaWorldPoster", nullptr},
    {"PosterCeremony", nullptr},
    {"PosterWedding", nullptr},
    {"ReactionObjectSkyRhythm", nullptr},
    {"PosterWatcher", nullptr},
    {"PrePassCausticsLight", nullptr},
    {"PrePassLineLight", nullptr},
    {"PrePassPointLight", nullptr},
    {"PrePassProjLight", nullptr},
    {"PrePassProjOrthoLight", nullptr},
    {"PrePassSpotLight", nullptr},
    {"ProjectRaceCheckPoint", nullptr},
    {"Pyramid", nullptr},
    {"QuestObj", nullptr},
    {"RabbitGraph", nullptr},
    {"RaceAudienceNpc", nullptr},
    {"RaceManGoal", nullptr},
    {"RaceManRace", nullptr},
    {"RaceManStart", nullptr},
    {"RaceWatcher", nullptr},
    {"RadiConRaceWatcher", nullptr},
    {"RadioCassette", nullptr},
    {"RadiconNpc", nullptr},
    {"Radish", nullptr},
    {"RadishGold", nullptr},
    {"RailDrawer", nullptr},
    {"RankingNpc", nullptr},
    {"ReactionObject", nullptr},
    {"CarBreakable", nullptr},
    {"ReactionObjectDotCharacter", nullptr},
    {"ReflectBombGenerator", nullptr},
    {"RhythmSpotlight", nullptr},
    {"RippleGeneratePoint", nullptr},
    {"RippleGenerateSquare", nullptr},
    {"RotateTarget", nullptr},
    {"RouletteSwitch", nullptr},
    {"RouteGuideArrow", nullptr},
    {"RouteGuideRail", nullptr},
    {"RunAwayNpc", nullptr},
    {"SandGeyser", nullptr},
    {"SandWorldHomeLift", nullptr},
    {"SaucePan", nullptr},
    {"SaveFlagCheckObj", nullptr},
    {"ScenarioStartCameraAnim", nullptr},
    {"ScenarioStartCameraSimpleZoom", nullptr},
    {"ScenarioStartCameraRailMove", nullptr},
    {"Senobi", nullptr},
    {"SenobiGeneratePoint", nullptr},
    {"SenobiMoveMapParts", nullptr},
    {"SenobiMoveMapPartsConnector", nullptr},
    {"SeBarrierObj", nullptr},
    {"SePlayObj", nullptr},
    {"SePlayObjWithSave", nullptr},
    {"SePlayRail", nullptr},
    {"SequentialSwitch", nullptr},
    {"SessionBgmCtrlObj", nullptr},
    {"SessionMayorNpc", nullptr},
    {"SessionMusicianNpc", nullptr},
    {"Shibaken", nullptr},
    {"ShibakenHomeShipInside", nullptr},
    {"Shine", nullptr},
    {"ShineWithAppearCamera", nullptr},
    {"ShineChipWatcher", nullptr},
    {"ShineDot", nullptr},
    {"ShineFukankunWatchObj", nullptr},
    {"ShineTowerRocket", nullptr},
    {"ShopBgmPlayer", nullptr},
    {"ShopMark", nullptr},
    {"ShoppingWatcher", nullptr},
    {"SignBoardDanger", nullptr},
    {"SignBoardLayoutTexture", nullptr},
    {"SkyFukankunZoomCapMessage", nullptr},
    {"SkyWorldCloud", nullptr},
    {"SkyWorldKoopaFire", nullptr},
    {"SkyWorldKoopaFrame", nullptr},
    {"SkyWorldMiddleViewCloud", nullptr},
    {"SignBoard", nullptr},
    {"SnowWorldBigIcicle", nullptr},
    {"SnowWorldSequenceFlagCheckObj", nullptr},
    {"Sky", nullptr},
    {"SmallWanderBoss", nullptr},
    {"SneakingMan", nullptr},
    {"SnowManRaceNpc", nullptr},
    {"SnowVolume", nullptr},
    {"SnowVolumeEraser", nullptr},
    {"Souvenir", nullptr},
    {"SouvenirDirector", nullptr},
    {"Special2KeyMoveLift", nullptr},
    {"Special2KeyMoveParts", nullptr},
    {"SphinxQuiz", nullptr},
    {"SphinxRide", nullptr},
    {"SphinxTaxiWatcher", nullptr},
    {"Squirrel", nullptr},
    {"Stacker", nullptr},
    {"StackerCapWorldCtrl", nullptr},
    {"StageEventDemo", nullptr},
    {"StageSwitchSelector", nullptr},
    {"StageTalkDemoNpcCap", nullptr},
    {"StageTalkDemoNpcCapMoonRock", nullptr},
    {"Stake", nullptr},
    {"Statue", nullptr},
    {"StatueSnapMark", nullptr},
    {"SubActorLodFixPartsScenarioAction", nullptr},
    {"SwitchAnd", nullptr},
    {"SwitchKeyMoveMapParts", nullptr},
    {"TalkMessageInfoPoint", nullptr},
    {"TalkMessageInfoPointSaveObj", nullptr},
    {"TalkNpc", nullptr},
    {"TalkNpcFreeze", nullptr},
    {"TalkNpcCapMan", nullptr},
    {"TalkNpcCapManHero", nullptr},
    {"TalkNpcCityMan", nullptr},
    {"TalkNpcCityManLow", nullptr},
    {"TalkNpcCityManSit", nullptr},
    {"TalkNpcCityMayor", nullptr},
    {"TalkNpcCollectBgm", nullptr},
    {"TalkNpcDesertMan", nullptr},
    {"TalkNpcForestMan", nullptr},
    {"TalkNpcForestManScrap", nullptr},
    {"TalkNpcKinopio", nullptr},
    {"TalkNpcKinopioBrigade", nullptr},
    {"TalkNpcKinopioMember", nullptr},
    {"TalkNpcLakeMan", nullptr},
    {"TalkNpcLavaMan", nullptr},
    {"TalkNpcLavaManCook", nullptr},
    {"TalkNpcLifeUpItemSeller", nullptr},
    {"TalkNpcRabbit", nullptr},
    {"TalkNpcSeaMan", nullptr},
    {"TalkNpcSnowMan", nullptr},
    {"TalkNpcSnowManLeader", nullptr},
    {"TalkNpcSnowManRacer", nullptr},
    {"TalkPoint", nullptr},
    {"Tank", nullptr},
    {"TankReviveCtrl", nullptr},
    {"TaxiStop", nullptr},
    {"TextureReplaceScreen", nullptr},
    {"ThunderRenderRequester", nullptr},
    {"Togezo", nullptr},
    {"Togezo2D", nullptr},
    {"TokimekiMayorNpc", nullptr},
    {"TrampleBush", nullptr},
    {"TrampleSwitch", nullptr},
    {"TrampleSwitchSave", nullptr},
    {"TrampleSwitchTimer", nullptr},
    {"TransparentWall", nullptr},
    {"TreasureBox", nullptr},
    {"TreasureBoxKey", nullptr},
    {"TreasureBoxSequentialDirector", nullptr},
    {"TRex", nullptr},
    {"TRexForceScroll", nullptr},
    {"TRexPatrol", nullptr},
    {"TRexSleep", nullptr},
    {"TRexScrollBreakMapParts", nullptr},
    {"Tsukkun", nullptr},
    {"TsukkunHole", nullptr},
    {"TwistChainList", nullptr},
    {"Utsubo", nullptr},
    {"UtsuboWatcher", nullptr},
    {"VocalMike", nullptr},
    {"VolleyballBase", nullptr},
    {"VolleyballNet", nullptr},
    {"VolleyballNpc", nullptr},
    {"Wanwan", nullptr},
    {"WanwanHole", nullptr},
    {"WaterAreaMoveModel", nullptr},
    {"WaterfallWorldBigBreakableWall", nullptr},
    {"WaterfallWorldFallDownBridge", nullptr},
    {"WaterfallWorldHomeCage", nullptr},
    {"WaterfallWorldWaterfall", nullptr},
    {"WaterRoad", nullptr},
    {"WeightSwitch", nullptr},
    {"WheelWaveSurfParts", nullptr},
    {"WindBlowPuzzle", nullptr},
    {"WorldMapEarth", nullptr},
    {"WorldTravelingNpc", nullptr},
    {"WorldTravelingPeach", nullptr},
    {"WorldWarpHole", nullptr},
    {"Fastener", nullptr},
    {"FastenerObj", nullptr},
    {"AtmosScatterRequester", nullptr},
    {"BackHideParts", nullptr},
    {"BreakMapParts", nullptr},
    {"CapRotateMapParts", nullptr},
    {"ClockMapParts", nullptr},
    {"ConveyerMapParts", nullptr},
    {"FallMapParts", nullptr},
    {"FixMapParts", nullptr},
    {"FloaterMapParts", nullptr},
    {"FlowMapParts", nullptr},
    {"GateMapParts", nullptr},
    {"KeyMoveMapParts", nullptr},
    {"KeyMoveMapPartsGenerator", nullptr},
    {"PossessedMapParts", nullptr},
    {"Pukupuku", nullptr},
    {"PulseSwitch", nullptr},
    {"RailCollision", nullptr},
    {"RailMoveMapParts", nullptr},
    {"RiseMapParts", nullptr},
    {"ReactionMapParts", nullptr},
    {"RiseMapPartsHolder", nullptr},
    {"RocketFlower", nullptr},
    {"RollingCubeMapParts", nullptr},
    {"RippleFixMapParts", nullptr},
    {"RotateMapParts", nullptr},
    {"SeesawMapParts", nullptr},
    {"SlideMapParts", nullptr},
    {"SubActorLodMapParts", nullptr},
    {"SurfMapParts", nullptr},
    {"SwingMapParts", nullptr},
    {"SwitchDitherMapParts", nullptr},
    {"SwitchKeepOnWatcher", nullptr},
    {"SwitchOpenMapParts", nullptr},
    {"VisibleSwitchMapParts", nullptr},
    {"WaveSurfMapParts", nullptr},
    {"WheelMapParts", nullptr},
    {"WobbleMapParts", nullptr},
    {"WindBlowMapParts", nullptr},
    {"Yoshi", nullptr},
    {"YoshiFruit", nullptr},
    {"YoshiFruitShineHolder", nullptr},
    {"Yukimaru", nullptr},
    {"YukimaruRacer", nullptr},
    {"YukimaruRacerTiago", nullptr}};

ProjectActorFactory::ProjectActorFactory() : ActorFactory("アクター生成") {  //("繧｢繧ｯ繧ｿ繝ｼ逕滓")
    initFactory(sProjectActorFactoryEntries);
}

}  // namespace al