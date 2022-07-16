//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Proximity/PRRangingClientProtocol-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue, PRBeaconListenerDelegate;

@interface PRBeaconListener <PRRangingClientProtocol>
{
    struct DaemonBackedService _service;	// 16 = 0x10
    id <PRBeaconListenerDelegate> _delegate;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0000000000022fb7
- (void).cxx_destruct;	// IMP=0x0000000000022f77
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <PRBeaconListenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateState:(unsigned long long)arg1;	// IMP=0x0000000000022e97
- (void)rangingRequestDidUpdateStatus:(unsigned long long)arg1;	// IMP=0x0000000000022e72
- (void)didReceiveNewSolutions:(id)arg1;	// IMP=0x0000000000022de3
- (void)rangingServiceDidUpdateState:(unsigned long long)arg1 cause:(long long)arg2;	// IMP=0x0000000000022dbe
- (void)didFailWithError:(id)arg1;	// IMP=0x0000000000022cb7
- (void)deamonConnectionInterrupted;	// IMP=0x0000000000022c01
- (void)deamonConnectionInvalidated;	// IMP=0x0000000000022bfb
- (void)dealloc;	// IMP=0x0000000000022b7d
- (void)clearBeaconAllowlistWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000022ae6
- (void)pushBeaconAllowlist:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022a2f
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000022654

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

