//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDSyncOperationOptions, HMFTimer, NSString, NSUUID;

@interface HMDSyncOperation : HMFObject
{
    NSUUID *_identifier;	// 8 = 0x8
    HMFTimer *_delayTimer;	// 16 = 0x10
    CDUnknownBlockType _operationBlock;	// 24 = 0x18
    HMDSyncOperationOptions *_options;	// 32 = 0x20
}

+ (id)cloudOperation:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000671417
+ (id)cloudZoneFetchSyncOperation:(id)arg1 cloudConflict:(_Bool)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000671365
+ (id)cloudZonePushSyncOperation:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000006712b9
+ (id)cloudFetchSyncOperationWithCloudConflict:(_Bool)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000671222
+ (id)cloudVerifyAccountSyncOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000067118e
+ (id)cloudForcePushSyncOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000006710fd
+ (id)cloudPushSyncOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000067106c
+ (id)cancelOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000670fd8
+ (id)postFetchOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000670f44
+ (id)queryDatabaseOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000670eb0
- (void).cxx_destruct;	// IMP=0x0000000000670e5d
@property(readonly, nonatomic) HMDSyncOperationOptions *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType operationBlock; // @synthesize operationBlock=_operationBlock;
@property(retain, nonatomic) HMFTimer *delayTimer; // @synthesize delayTimer=_delayTimer;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *zoneName;
@property(readonly, nonatomic) unsigned long long operationType;
- (id)description;	// IMP=0x0000000000670c03
- (id)_initWithOptions:(id)arg1 syncBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000670b24

@end

