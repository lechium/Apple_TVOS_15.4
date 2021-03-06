//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFLogging-Protocol.h>
#import <HMFoundation/_HMFLogBackendSessionDelegate-Protocol.h>

@class NSMutableArray, NSPointerArray, NSString;
@protocol HMFRTCSessionFactory;

@interface HMFLogBackendSessionManager : NSObject <_HMFLogBackendSessionDelegate, HMFLogging>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSPointerArray *_activeSessions;	// 16 = 0x10
    NSMutableArray *_queuedSessions;	// 24 = 0x18
    id <HMFRTCSessionFactory> _rtcFactory;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000001167b
+ (id)sharedSessionManager;	// IMP=0x0000000000010c87
- (void).cxx_destruct;	// IMP=0x00000000000116e2
- (id)logBackendSessionWithServiceName:(id)arg1 samplingUUID:(id)arg2 isRealtime:(_Bool)arg3;	// IMP=0x00000000000111d6
- (void)didCompleteActiveSession;	// IMP=0x0000000000010e98
- (void)__sendMetaEventWithName:(id)arg1 correspondingServiceName:(id)arg2;	// IMP=0x0000000000010cdc
- (id)init;	// IMP=0x0000000000010c47
- (id)initWithFactory:(id)arg1;	// IMP=0x0000000000010b93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

