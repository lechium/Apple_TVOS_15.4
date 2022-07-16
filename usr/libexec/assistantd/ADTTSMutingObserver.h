//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface ADTTSMutingObserver : NSObject
{
    struct __CFBag *_observers;	// 8 = 0x8
    long long _useDeviceSpeakerForTTSPreference;	// 16 = 0x10
    struct os_unfair_lock_s _handsFreeLock;	// 24 = 0x18
    _Bool _currentRouteIsHandsFree;	// 28 = 0x1c
}

+ (id)sharedInstance;	// IMP=0x00200000001847da
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x00200000001859a8
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x0010000000185872
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x001000000018573c
- (void)removeHandsFreeStateObserver:(id)arg1;	// IMP=0x0010000000185631
- (void)addHandsFreeStateObserver:(id)arg1;	// IMP=0x0010000000185467
- (void)_useDeviceSpeakerForTTSPreferenceChanged;	// IMP=0x001000000018534c
- (void)_stopListeningForMuteStateChanges;	// IMP=0x0010000000185273
- (void)_listenForMuteStateChanges;	// IMP=0x001000000018515d
- (void)_stopListeningForAudioRouteChanges;	// IMP=0x001000000018506b
- (MISSING_TYPE *)_listenForAudioRouteChanges;	// IMP=0x0010000000184f79
- (void)_muteStateChanged:(id)arg1;	// IMP=0x0010000000184d6c
- (void)_notifyObservers:(_Bool)arg1;	// IMP=0x0010000000184d1f
- (void)_updateAudioRouteOnMainThread;	// IMP=0x00100000001849a7
- (void)_cleanupAudioRouteOnMainThread;	// IMP=0x0010000000184981
- (_Bool)_currentRouteIsHandsFree;	// IMP=0x0010000000184959
- (void)dealloc;	// IMP=0x001000000018491a
- (id)init;	// IMP=0x001000000018482f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

