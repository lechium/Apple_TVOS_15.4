//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/HFExecutionEnvironmentObserver-Protocol.h>
#import <Home/HFHomeManagerObserver-Protocol.h>

@class HFExecutionEnvironment, HFHomeKitDispatcher, HMHome, NSString;

@interface HFWiFiExecutionEnvironmentObserver : NSObject <HFHomeManagerObserver, HFExecutionEnvironmentObserver>
{
    HFExecutionEnvironment *_environment;	// 8 = 0x8
    HFHomeKitDispatcher *_dispatcher;	// 16 = 0x10
    HMHome *_lastKnownHome;	// 24 = 0x18
    unsigned long long _lastKnownRunningState;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003959a
@property(nonatomic) unsigned long long lastKnownRunningState; // @synthesize lastKnownRunningState=_lastKnownRunningState;
@property(retain, nonatomic) HMHome *lastKnownHome; // @synthesize lastKnownHome=_lastKnownHome;
@property(readonly, nonatomic) __weak HFHomeKitDispatcher *dispatcher; // @synthesize dispatcher=_dispatcher;
@property(readonly, nonatomic) __weak HFExecutionEnvironment *environment; // @synthesize environment=_environment;
- (void)_updateState;	// IMP=0x000000000003933c
- (void)homeKitDispatcher:(id)arg1 manager:(id)arg2 didChangeHome:(id)arg3;	// IMP=0x000000000003932a
- (void)homeManagerDidFinishInitialDatabaseLoad:(id)arg1;	// IMP=0x0000000000039318
- (void)executionEnvironmentDidEnterBackground:(id)arg1;	// IMP=0x0000000000039306
- (void)executionEnvironmentDidBecomeActive:(id)arg1;	// IMP=0x00000000000392f4
- (void)dealloc;	// IMP=0x0000000000039250
- (id)initWithExecutionEnvironment:(id)arg1 dispatcher:(id)arg2;	// IMP=0x000000000003918a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

