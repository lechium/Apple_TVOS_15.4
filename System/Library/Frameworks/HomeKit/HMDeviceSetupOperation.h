//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <HomeKit/HMDeviceSetupSessionDelegate-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>

@class HMAccessory, HMDeviceSetupSession, HMFUnfairLock, NSError, NSObject, NSString, TRSession;
@protocol OS_dispatch_queue;

@interface HMDeviceSetupOperation : NSOperation <HMDeviceSetupSessionDelegate, HMFLogging>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    _Bool _executing;	// 16 = 0x10
    _Bool _finished;	// 17 = 0x11
    NSError *_error;	// 24 = 0x18
    HMAccessory *_accessory;	// 32 = 0x20
    TRSession *_session;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_clientQueue;	// 48 = 0x30
    HMDeviceSetupSession *_setupSession;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00000000000f50ff
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000000f5099
- (void).cxx_destruct;	// IMP=0x00000000000f447b
@property(readonly, nonatomic) HMDeviceSetupSession *setupSession; // @synthesize setupSession=_setupSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly) __weak TRSession *session; // @synthesize session=_session;
- (id)logIdentifier;	// IMP=0x00000000000f43c6
- (void)setupSession:(id)arg1 didReceiveExchangeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f42ea
- (void)setupSession:(id)arg1 didCloseWithError:(id)arg2;	// IMP=0x00000000000f41dd
- (void)cancelWithError:(id)arg1;	// IMP=0x00000000000f4103
- (void)cancel;	// IMP=0x00000000000f40ab
- (void)start;	// IMP=0x00000000000f3e9e
- (void)setAccessory:(id)arg1;	// IMP=0x00000000000f3dd3
@property(readonly) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void)setQualityOfService:(long long)arg1;	// IMP=0x00000000000f3c37
- (void)setError:(id)arg1;	// IMP=0x00000000000f3b52
@property(readonly) NSError *error; // @synthesize error=_error;
- (void)finish;	// IMP=0x00000000000f39f1
@property(getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (_Bool)isAsynchronous;	// IMP=0x00000000000f3645
- (void)dealloc;	// IMP=0x00000000000f35e7
- (id)initWithSession:(id)arg1;	// IMP=0x00000000000f340a
- (id)init;	// IMP=0x00000000000f3362

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

