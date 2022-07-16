//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ToneLibrary/TLAlertPlaybackBackEndController-Protocol.h>

@class NSMapTable, NSString, TLAlertQueuePlayerController, TLAlertSystemSoundController;
@protocol OS_dispatch_queue;

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController>
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSString *_accessQueueLabel;	// 16 = 0x10
    TLAlertQueuePlayerController *_queuePlayerController;	// 24 = 0x18
    TLAlertSystemSoundController *_systemSoundController;	// 32 = 0x20
    NSMapTable *_alertContexts;	// 40 = 0x28
}

+ (_Bool)_shouldStopAlertForUserInterruption:(id)arg1;	// IMP=0x0000000000030708
+ (long long)_playbackBackEndForAlertType:(long long)arg1 topic:(id)arg2;	// IMP=0x0000000000030593
+ (long long)_playbackBackEndForAlert:(id)arg1;	// IMP=0x00000000000304e9
+ (id)sharedAlertController;	// IMP=0x000000000002e8c0
- (void).cxx_destruct;	// IMP=0x0000000000030ad5
- (_Bool)_stopAllAlertsInCurrentProcess;	// IMP=0x00000000000308ff
- (id)_systemSoundController;	// IMP=0x00000000000308b7
- (id)_queuePlayerController;	// IMP=0x000000000003086f
- (id)_controllerForPlaybackBackEnd:(long long)arg1;	// IMP=0x0000000000030819
- (void)preheatForAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003031a
- (void)_didCompletePlaybackOfAlert:(id)arg1;	// IMP=0x000000000003026b
- (void)_didReachTimeoutForAlert:(id)arg1;	// IMP=0x00000000000301af
- (_Bool)_stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;	// IMP=0x000000000002fc4c
- (id)_prepareForPlayingAlert:(id)arg1;	// IMP=0x000000000002fa1f
- (void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(_Bool)arg2;	// IMP=0x000000000002f85c
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;	// IMP=0x000000000002f695
- (_Bool)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;	// IMP=0x000000000002f4ed
- (void)playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002f1f8
- (_Bool)stopAllAlerts;	// IMP=0x000000000002efd0
- (void)_assertRunningOnAccessQueue;	// IMP=0x000000000002ed98
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ed80
- (void)dealloc;	// IMP=0x000000000002ebe6
- (id)init;	// IMP=0x000000000002e915

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

