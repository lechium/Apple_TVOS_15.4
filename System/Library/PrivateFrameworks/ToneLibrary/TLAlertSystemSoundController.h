//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ToneLibrary/TLAlertPlaybackBackEndController-Protocol.h>
#import <ToneLibrary/TLBacklightObserver-Protocol.h>

@class NSMapTable, NSString, TLAudioQueue;

@interface TLAlertSystemSoundController : NSObject <TLBacklightObserver, TLAlertPlaybackBackEndController>
{
    TLAudioQueue *_audioQueue;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSMapTable *_alertSystemSoundContexts;	// 24 = 0x18
    long long _backlightStatus;	// 32 = 0x20
    unsigned long long _backlightObservationRequestsCount;	// 40 = 0x28
}

+ (id)_optionsForSystemSoundAlert:(id)arg1 withSound:(id)arg2;	// IMP=0x0000000000024e10
+ (id)_descriptionForAlertComponentsSuppressionFlags:(unsigned int)arg1;	// IMP=0x0000000000024da2
+ (unsigned int)_componentSuppressionFlagsForAlert:(id)arg1;	// IMP=0x0000000000024cdf
+ (id)_vibrationPatternForAlert:(id)arg1 withSound:(id)arg2;	// IMP=0x0000000000024a70
+ (unsigned int)_soundBehaviorForAlert:(id)arg1 withSound:(id)arg2;	// IMP=0x0000000000024892
+ (id)_toneIdentifierForDeemphasizingAlert:(id)arg1;	// IMP=0x000000000002488a
+ (id)_soundForAlert:(id)arg1 toneIdentifierForDeemphasizingAlert:(id)arg2;	// IMP=0x00000000000245c3
- (void).cxx_destruct;	// IMP=0x000000000002759b
- (void)_processDeemphasizableAlertChangesForBackglightStatus:(long long)arg1 stopTasksDescriptorForDeemphasizedAlerts:(id)arg2 deemphasizableAlertBeginPlayingContexts:(id)arg3;	// IMP=0x0000000000026afc
- (void)backlightStatusDidChange:(long long)arg1;	// IMP=0x000000000002645b
- (void)_endRequiringBacklightObservation;	// IMP=0x00000000000261b0
- (void)_beginRequiringBacklightObservation;	// IMP=0x00000000000260ce
- (void)_recordPlaybackFailureIntoPlaybackCompletionContext:(id)arg1;	// IMP=0x0000000000026032
- (void)_processPlaybackCompletionContexts:(id)arg1;	// IMP=0x0000000000025d62
- (void)_didCompletePlaybackForAlert:(id)arg1;	// IMP=0x000000000002542a
- (void)_preheatForAlert:(id)arg1 backlightStatus:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024267
- (void)preheatForAlert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002410b
- (id)_prepareForPreemptingAlertsBeforeBeginningPlaybackOfAlert:(id)arg1 withSound:(id)arg2 playbackCompletionType:(long long)arg3;	// IMP=0x0000000000023d40
- (void)_processStopTasksDescriptor:(id)arg1;	// IMP=0x00000000000239d5
- (id)_prepareForStoppingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;	// IMP=0x0000000000023125
- (_Bool)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;	// IMP=0x0000000000022fb6
- (void)_processPlayTaskDescriptors:(id)arg1;	// IMP=0x00000000000220f8
- (id)_playTaskDescriptorForAlert:(id)arg1 withSound:(id)arg2 alertSystemSoundContext:(id)arg3;	// IMP=0x0000000000022015
- (CDStruct_fa0c26dd)_considerDeferringPlayingAlertForBacklightStatusResolution:(id)arg1 alertSystemSoundContext:(id)arg2;	// IMP=0x0000000000021eb0
- (void)_playAlert:(id)arg1 alertSystemSoundContext:(id)arg2 toneIdentifierForDeemphasizingAlert:(id)arg3 backlightStatusResolutionDeferralContext:(CDStruct_fa0c26dd)arg4;	// IMP=0x0000000000021a32
- (void)playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000021788
- (void)dealloc;	// IMP=0x00000000000214af
- (id)init;	// IMP=0x00000000000213fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

