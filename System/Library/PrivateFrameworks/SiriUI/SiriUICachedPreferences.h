//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSettingsConnection, NSHashTable, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface SiriUICachedPreferences : NSObject
{
    NSUserDefaults *_textInputDefaults;	// 8 = 0x8
    _Bool _isTextInputEnabled;	// 16 = 0x10
    _Bool _isHoldToTalkForTextInputEnabled;	// 17 = 0x11
    _Bool _isSiriMiniEnabled;	// 18 = 0x12
    _Bool _isStreamingDictationEnabled;	// 19 = 0x13
    _Bool _isSiriSafeForLockScreen;	// 20 = 0x14
    _Bool _announceNotificationsInCarPlayTemporarilyDisabled;	// 21 = 0x15
    _Bool _understandingOnDeviceAssetsAvailable;	// 22 = 0x16
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_uodAssetsqueue;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    AFSettingsConnection *_settingsConnection;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000000000121e8
- (void).cxx_destruct;	// IMP=0x0000000000013418
- (void)_notifyObserversOfSettingsChangeWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000132e9
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000013125
- (void)_setUODAssetsAvailable:(_Bool)arg1;	// IMP=0x0000000000013117
- (void)_setAnnounceNotificationsInCarPlayTemporarilyDisabled:(_Bool)arg1;	// IMP=0x000000000001304b
@property(readonly, nonatomic) _Bool understandingOnDeviceAssetsAvailable;
@property(readonly, nonatomic) _Bool announceNotificationsInCarPlayTemporarilyDisabled;
@property(readonly, nonatomic) _Bool isSiriSafeForLockScreen;
@property(readonly, nonatomic) _Bool isStreamingDictationEnabled;
@property(readonly, nonatomic) _Bool isSiriMiniEnabled;
@property(readonly, nonatomic) _Bool isHoldToTalkForTextInputEnabled;
@property(readonly, nonatomic) _Bool isTextInputEnabled;
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000012ac1
- (void)addObserver:(id)arg1;	// IMP=0x00000000000129f3
- (void)updatePreferences;	// IMP=0x00000000000124cc
- (void)dealloc;	// IMP=0x0000000000012409
- (id)init;	// IMP=0x0000000000012279

@end

