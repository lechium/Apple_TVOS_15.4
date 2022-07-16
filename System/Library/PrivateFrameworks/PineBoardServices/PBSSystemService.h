//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PBSSystemService : NSObject
{
}

+ (id)sharedInstance;	// IMP=0x00000000000143f0
- (void)registerSystemHomeUIServiceEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017000
- (void)fetchSystemHomeUIServiceEndpoint:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016f50
- (id)infoForProvidersWithType:(id)arg1;	// IMP=0x0000000000016960
- (void)endpointForProviderType:(id)arg1 withIdentifier:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000016860
- (void)registerServiceProviderEndpoint:(id)arg1 forProviderType:(id)arg2;	// IMP=0x0000000000016780
- (void)listen;	// IMP=0x0000000000016700
- (void)showVolumeHUDWithImageName:(id)arg1 level:(id)arg2;	// IMP=0x0000000000016620
- (void)showVolumeHUDForRouteType:(long long)arg1 withLevel:(id)arg2;	// IMP=0x0000000000016570
- (void)setShouldSuppressSystemVolumeHUD:(_Bool)arg1;	// IMP=0x00000000000164e0
- (void)setWantsVolumeButtonEvents:(_Bool)arg1;	// IMP=0x0000000000016450
- (void)setWantsPlayPauseButtonEvents:(_Bool)arg1;	// IMP=0x00000000000163c0
- (void)pairAppleRemote:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016240
- (void)fetchPairedAppleRemoteStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000160f0
- (void)launchKioskApp;	// IMP=0x0000000000016070
- (void)presentAirDropPromptForDiagnosticFileWithOptions:(id)arg1;	// IMP=0x0000000000015fc0
- (void)handleShowHomeIntentWithFilters:(id)arg1 time:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015ec0
- (void)setControlCenterFullScreenOverlayActive:(_Bool)arg1;	// IMP=0x0000000000015e30
- (void)takeScreenshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015cc0
- (void)setKioskAppBundleIdentifier:(id)arg1;	// IMP=0x0000000000015c10
- (void)kioskAppBundleIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015aa0
- (void)setSystemAppearance:(long long)arg1;	// IMP=0x0000000000015a10
- (void)systemAppearanceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000000158d0
- (void)sendEventData:(id)arg1;	// IMP=0x0000000000015820
- (void)sendMenuButtonEvent;	// IMP=0x00000000000157a0
- (void)performScreenActionWithName:(id)arg1 forItemIdentifier:(id)arg2 parameters:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000015550
- (void)setNextAssistantRecognitionStrings:(id)arg1;	// IMP=0x00000000000154a0
- (void)setNextVoiceRecognitionAudioInputPaths:(id)arg1;	// IMP=0x00000000000153f0
- (void)topActiveOrActivatingApplicationIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015280
- (void)recentApplicationBundleIdentifiersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015110
- (void)presentNowPlayingWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015030
- (void)presentAudioUpsellWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014f50
- (void)fetchHintStatusWithCompletion_SYNC:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014ea0
- (void)fetchHintStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014df0
- (void)noteHintShown:(unsigned long long)arg1;	// IMP=0x0000000000014d60
- (void)presentSystemRoutingUIWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014c80
- (void)presentSystemRoutingUI:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014c20
- (void)launchCRDApp;	// IMP=0x0000000000014ba0
- (void)deactivateScreenSaver;	// IMP=0x0000000000014b20
- (void)activateScreenSaver;	// IMP=0x0000000000014aa0
- (void)setAirPlayActive:(_Bool)arg1;	// IMP=0x0000000000014a10
- (void)sleepTimeoutWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000148d0
- (void)setSleepTimeout:(double)arg1;	// IMP=0x0000000000014840
- (void)reboot;	// IMP=0x00000000000147c0
- (void)relaunch;	// IMP=0x0000000000014740
- (void)relaunchBackboardd;	// IMP=0x00000000000146c0
- (void)wakeSystemForReason:(id)arg1;	// IMP=0x0000000000014610
- (void)sleepSystemForReason:(id)arg1;	// IMP=0x0000000000014560
- (void)deactivateApplication;	// IMP=0x00000000000144e0

@end
