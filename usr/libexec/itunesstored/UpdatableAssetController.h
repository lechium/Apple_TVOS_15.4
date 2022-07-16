//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface UpdatableAssetController : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSMutableDictionary *_deferredScheduleValuesByClientID;	// 16 = 0x10
    NSMutableDictionary *_lastModifiedHeaderValueByClientID;	// 24 = 0x18
    ISOperationQueue *_operationQueue;	// 32 = 0x20
    id _taskObserver;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x004000000016d7c9
- (void).cxx_destruct;	// IMP=0x002000000016fc15
- (void)_sendUnentitledResponseToMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016f9e2
- (id)_operationQueue;	// IMP=0x001000000016f936
- (void)_networkTypeChangedNotification:(id)arg1;	// IMP=0x001000000016f373
- (_Bool)_hasEntitlements:(id)arg1;	// IMP=0x001000000016f35c
- (id)_bundledManifestURLForClientIdentifier:(id)arg1;	// IMP=0x001000000016f231
- (void)_bagDidLoadNotification:(id)arg1;	// IMP=0x001000000016ecab
- (void)clearCache:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016e974
- (void)_scheduleUpdateAssetsOperationWithManifestURL:(id)arg1 bundledManifestURL:(id)arg2 clientIdentifier:(id)arg3 userAgent:(id)arg4 scheduledInBackground:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000016db70
- (void)refreshCache:(id)arg1 connection:(id)arg2;	// IMP=0x001000000016d895
- (void)observeXPCServer:(id)arg1;	// IMP=0x001000000016d81e
- (void)dealloc;	// IMP=0x001000000016d6ac
- (id)init;	// IMP=0x001000000016d321

@end
