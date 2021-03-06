//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, NSString;
@protocol ADDeviceSyncMessageReceiving, OS_dispatch_queue;

@interface ADDeviceSyncSession : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _incomingSequence;	// 16 = 0x10
    unsigned long long _outgoingSequence;	// 24 = 0x18
    NSSet *_messageSenders;	// 32 = 0x20
    NSDictionary *_dataConsumersByType;	// 40 = 0x28
    NSDictionary *_dataProvidersByType;	// 48 = 0x30
    NSString *_deviceIdentifier;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000ff1d6
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void)_pullSnapshotForDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000feb6a
- (void)_pullDeltaForDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fe4d9
- (void)_pullGenerationsForDataTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fde76
- (void)_pushGenerationsByDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fd8d6
- (void)_pingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fd3d3
- (void)_sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fd03e
- (void)_handlePullSnapshotForDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fcc5b
- (void)_handlePullDeltaForDataType:(id)arg1 generation:(unsigned long long)arg2 limit:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fc83a
- (void)_handlePullGenerationsForDataTypes:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fc171
- (void)_handlePushGenerationsByDataType:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fbeae
- (void)_handlePingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fbe03
- (void)_receiveMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000faf31
- (_Bool)_handlePulledSnapshot:(id)arg1 forDataType:(id)arg2;	// IMP=0x00100000000faeb3
- (_Bool)_handlePulledDeltaWithIncrementalChanges:(id)arg1 forDataType:(id)arg2;	// IMP=0x00100000000fae35
- (_Bool)_handlePushedOrPulledGeneration:(unsigned long long)arg1 forDataType:(id)arg2;	// IMP=0x00100000000fa84c
- (void)_invalidate;	// IMP=0x00100000000fa7fd
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fa724
- (void)receiveMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000fa64b
- (void)invalidate;	// IMP=0x00100000000fa5ea
- (void)pushGenerationsByDataTypes:(id)arg1;	// IMP=0x00100000000fa540
- (id)initWithQueue:(id)arg1 deviceIdentifier:(id)arg2 dataConsumersByType:(id)arg3 dataProvidersByType:(id)arg4 messageSenders:(id)arg5;	// IMP=0x00100000000fa352
@property(readonly, nonatomic) id <ADDeviceSyncMessageReceiving> messageReceiver;
- (void)dealloc;	// IMP=0x00100000000fa30b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

