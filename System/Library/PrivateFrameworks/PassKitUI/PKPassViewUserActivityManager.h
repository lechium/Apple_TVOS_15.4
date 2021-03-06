//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKForegroundActiveArbiterObserver-Protocol.h>

@class NSString, NSUserActivity;
@protocol OS_dispatch_queue;

@interface PKPassViewUserActivityManager : NSObject <PKForegroundActiveArbiterObserver>
{
    NSUserActivity *_currentUserActivity;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _isForegroundActive;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000198f76
- (void).cxx_destruct;	// IMP=0x0000000000199880
- (id)_templateNameForPass:(id)arg1;	// IMP=0x00000000001997fb
- (id)_displayNameForPass:(id)arg1;	// IMP=0x0000000000199755
- (_Bool)_shouldDonateActivity:(id)arg1;	// IMP=0x00000000001996cf
- (id)_currentUserActivityPassUniqueID;	// IMP=0x000000000019966a
- (void)_endedViewingPass;	// IMP=0x0000000000199583
- (void)foregroundActiveArbiter:(id)arg1 didUpdateForegroundActiveState:(CDStruct_973bafd3)arg2;	// IMP=0x000000000019950c
- (void)endedViewingPass;	// IMP=0x00000000001994a0
- (void)startedViewingPass:(id)arg1;	// IMP=0x0000000000199109
- (void)dealloc;	// IMP=0x0000000000199094
- (id)_init;	// IMP=0x0000000000198fe9
- (id)init;	// IMP=0x0000000000198fdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

