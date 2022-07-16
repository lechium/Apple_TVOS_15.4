//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class NSMapTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDObjectLookup : HMFObject <HMFLogging>
{
    NSMapTable *_uuidToObjectMapping;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0000000000518955
- (void).cxx_destruct;	// IMP=0x00000000005187b9
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSMapTable *uuidToObjectMapping; // @synthesize uuidToObjectMapping=_uuidToObjectMapping;
- (void)applyChange:(id)arg1 previous:(id)arg2 onObject:(id)arg3 result:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000051815b
- (void)resetObjects;	// IMP=0x000000000051811e
- (void)scanObjects;	// IMP=0x000000000051810c
- (id)_lookUpObjectWithUUID:(id)arg1 applyObjectChange:(id)arg2 previous:(id)arg3 result:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000517e10
- (void)lookUpAndApplyObjectChange:(id)arg1 previous:(id)arg2 result:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000517a11
- (id)initWithWorkQueue:(id)arg1;	// IMP=0x0000000000517972

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
