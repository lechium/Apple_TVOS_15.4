//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSError, NSHashTable, NSMutableArray, SSURLBag;
@protocol OS_dispatch_queue;

@interface ISURLBagLoadingController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 16 = 0x10
    _Bool _hasSuccessfullyLoadedBag;	// 24 = 0x18
    NSDictionary *_bagDictionary;	// 32 = 0x20
    NSMutableArray *_bagAccessRequestBlocks;	// 40 = 0x28
    NSError *_bagLoadingError;	// 48 = 0x30
    NSHashTable *_bagObservers;	// 56 = 0x38
    SSURLBag *_URLBag;	// 64 = 0x40
    _Bool _loadingBag;	// 72 = 0x48
}

+ (id)sharedBagLoadingController;	// IMP=0x000000000000d534
- (void).cxx_destruct;	// IMP=0x000000000000e8fe
@property(readonly, nonatomic, getter=isLoadingBag) _Bool loadingBag; // @synthesize loadingBag=_loadingBag;
- (void)_updateBagWithDictionary:(id)arg1 error:(id)arg2;	// IMP=0x000000000000e4a0
- (void)_reloadURLBagAllowingUpdateUsingExistingBagDictionary:(_Bool)arg1;	// IMP=0x000000000000e24d
- (void)_didCompleteLoadingBagDictionary:(id)arg1 withError:(id)arg2;	// IMP=0x000000000000e0c8
- (void)_handleStoreFrontDidChangeNotification:(id)arg1;	// IMP=0x000000000000e065
- (void)_handleNetworkReachabilityFlagsDidChangeNotification:(id)arg1;	// IMP=0x000000000000df99
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x000000000000df36
- (void)reloadBag;	// IMP=0x000000000000ded3
- (void)requestAccessToBagUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000dbd6
- (void)removeBagObserver:(id)arg1;	// IMP=0x000000000000dafb
- (void)addBagObserver:(id)arg1;	// IMP=0x000000000000d9e7
@property(readonly, nonatomic) NSDictionary *bagDictionary;
- (void)dealloc;	// IMP=0x000000000000d7b0
- (id)init;	// IMP=0x000000000000d589

@end
