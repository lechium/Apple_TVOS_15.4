//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface IMDCKRecordSaltManager : NSObject
{
    NSString *_cachedSalt;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_ckQueue;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x000000000006355c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
@property(retain) NSString *cachedSalt; // @synthesize cachedSalt=_cachedSalt;
- (void)deleteDeDupeRecordZone;	// IMP=0x0000000000063c54
- (void)clearLocalSyncState;	// IMP=0x0000000000063c40
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(CDUnknownBlockType)arg1 forceFetch:(_Bool)arg2;	// IMP=0x00000000000639b7
- (void)fetchLatestRecordKeyFromCKAndCreateIfKeyDoesNotExistWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000639a3
- (void)_fetchLatestSaltFromCloudKitAndPersistWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000636c9
- (id)_container;	// IMP=0x0000000000063697
- (void)_scheduleOperation:(id)arg1;	// IMP=0x0000000000063654
- (id)_CKUtilitiesSharedInstance;	// IMP=0x000000000006363b
- (void)dealloc;	// IMP=0x00000000000635f7
- (id)init;	// IMP=0x00000000000635a1

@end
