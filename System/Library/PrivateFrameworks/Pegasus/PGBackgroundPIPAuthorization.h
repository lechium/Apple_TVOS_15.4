//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pegasus/PGBackgroundPIPServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSString;

@interface PGBackgroundPIPAuthorization : NSObject <PGBackgroundPIPServerToClientInterface>
{
    BSServiceConnection *_connection;	// 8 = 0x8
    long long _lock_state;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSString *_activitySessionIdentifier;	// 32 = 0x20
    NSString *_appBundleIdentifier;	// 40 = 0x28
    CDUnknownBlockType _stateTransitionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000ff98
@property(readonly, copy) CDUnknownBlockType stateTransitionHandler; // @synthesize stateTransitionHandler=_stateTransitionHandler;
@property(readonly, copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *activitySessionIdentifier; // @synthesize activitySessionIdentifier=_activitySessionIdentifier;
- (void)dealloc;	// IMP=0x000000000000febc
@property(readonly, copy) NSString *description;
- (void)revoke;	// IMP=0x000000000000fd17
- (void)_transitionToState:(long long)arg1;	// IMP=0x000000000000fc3c
- (oneway void)transitionToState:(id)arg1;	// IMP=0x000000000000fad2
@property(readonly, nonatomic) long long state;
- (id)initWithActivitySessionIdentifier:(id)arg1 appBundleIdentifier:(id)arg2 stateTransitionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000f0fc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

