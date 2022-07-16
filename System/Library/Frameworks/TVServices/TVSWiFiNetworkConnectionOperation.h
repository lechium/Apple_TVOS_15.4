//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, TVSStateMachine, TVSWiFiNetwork;
@protocol OS_dispatch_semaphore, TVSWiFiNetworkConnectionOperationDelegate;

@interface TVSWiFiNetworkConnectionOperation : NSOperation
{
    NSObject<OS_dispatch_semaphore> *_semaphore;	// 8 = 0x8
    _Bool _directedScan;	// 16 = 0x10
    id <TVSWiFiNetworkConnectionOperationDelegate> _delegate;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    TVSStateMachine *_stateMachine;	// 40 = 0x28
    id _scanToken;	// 48 = 0x30
    TVSWiFiNetwork *_network;	// 56 = 0x38
    NSString *_networkName;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000f3cf
@property(readonly, nonatomic, getter=isDirectedScan) _Bool directedScan; // @synthesize directedScan=_directedScan;
@property(copy, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(retain, nonatomic) TVSWiFiNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) id scanToken; // @synthesize scanToken=_scanToken;
@property(retain, nonatomic) TVSStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <TVSWiFiNetworkConnectionOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateStateWithNewState:(id)arg1;	// IMP=0x000000000000f1ff
- (void)_scanForNetworkWithInfo:(id)arg1;	// IMP=0x000000000000eeac
- (id)_connectToNetwork:(id)arg1 withPassword:(id)arg2;	// IMP=0x000000000000e905
- (void)_cleanup;	// IMP=0x000000000000e823
- (void)_initializeStateMachine;	// IMP=0x000000000000d575
- (void)setState:(unsigned long long)arg1;	// IMP=0x000000000000d519
- (void)cancel;	// IMP=0x000000000000d47a
- (void)connect;	// IMP=0x000000000000d35b
- (void)main;	// IMP=0x000000000000d1c5
- (id)initWithNetworkName:(id)arg1;	// IMP=0x000000000000d12b
- (id)initWithNetwork:(id)arg1;	// IMP=0x000000000000d0ad
- (id)init;	// IMP=0x000000000000d09f

@end

