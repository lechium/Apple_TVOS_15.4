//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

@interface CKDTapToRadarManager : NSObject
{
    NSObject<OS_dispatch_queue> *_alertQueue;	// 8 = 0x8
    NSUserDefaults *_userDefaults;	// 16 = 0x10
    NSMutableDictionary *_lastPromptDateByMessageHash;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000000000dd353
- (void).cxx_destruct;	// IMP=0x00000000000de086
@property(retain, nonatomic) NSMutableDictionary *lastPromptDateByMessageHash; // @synthesize lastPromptDateByMessageHash=_lastPromptDateByMessageHash;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *alertQueue; // @synthesize alertQueue=_alertQueue;
- (void)triggerTapToRadarWithRequest:(id)arg1;	// IMP=0x00000000000ddf10
- (void)_lockedTriggerTapToRadarWithRequest:(id)arg1;	// IMP=0x00000000000dd9e5
- (void)_launchTTRWithRequest:(id)arg1;	// IMP=0x00000000000dd638
- (void)_notePromptAttemptForMessage:(id)arg1;	// IMP=0x00000000000dd4e9
- (id)_lastPromptDateForMessage:(id)arg1;	// IMP=0x00000000000dd3fa
- (id)_hashForMessage:(id)arg1;	// IMP=0x00000000000dd3b8
- (id)_init;	// IMP=0x00000000000dd04c
- (id)init;	// IMP=0x00000000000dcfc5

@end
