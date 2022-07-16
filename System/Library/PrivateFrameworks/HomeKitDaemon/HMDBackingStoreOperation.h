//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDBackingStore, NSString, NSUUID;

@interface HMDBackingStoreOperation : NSOperation <HMFLogging>
{
    CDUnknownBlockType _resultBlock;	// 8 = 0x8
    NSUUID *_operationUUID;	// 16 = 0x10
    CDUnknownBlockType _operationFinishBlock;	// 24 = 0x18
    HMDBackingStore *_store;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000080aedc
- (void).cxx_destruct;	// IMP=0x000000000080ae83
@property(retain, nonatomic) HMDBackingStore *store; // @synthesize store=_store;
@property(copy) CDUnknownBlockType operationFinishBlock; // @synthesize operationFinishBlock=_operationFinishBlock;
@property(readonly, nonatomic) NSUUID *operationUUID; // @synthesize operationUUID=_operationUUID;
@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
- (id)logIdentifier;	// IMP=0x000000000080adb4
@property(readonly, copy) NSString *description;
- (void)main;	// IMP=0x000000000080ac6c
- (id)mainReturningError;	// IMP=0x000000000080ac64
- (id)init;	// IMP=0x000000000080ac50
- (id)initWithResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000080ab7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

