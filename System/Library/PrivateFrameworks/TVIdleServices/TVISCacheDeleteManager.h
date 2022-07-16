//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVISAssetServiceManager;
@protocol OS_dispatch_queue;

@interface TVISCacheDeleteManager : NSObject
{
    TVISAssetServiceManager *_assetManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_cacheDeleteQ;	// 16 = 0x10
}

+ (void)registerWithCacheDelete;	// IMP=0x00000000000062c0
+ (id)sharedInstance;	// IMP=0x00000000000060e0
- (void).cxx_destruct;	// IMP=0x0000000000007270
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *cacheDeleteQ; // @synthesize cacheDeleteQ=_cacheDeleteQ;
@property(readonly, nonatomic) TVISAssetServiceManager *assetManager; // @synthesize assetManager=_assetManager;
- (const struct __CFDictionary *)_periodicPurgeHandlerWithUrgency:(int)arg1 info:(const struct __CFDictionary *)arg2;	// IMP=0x0000000000007160
- (void)_purgeCancelHandler;	// IMP=0x0000000000007090
- (const struct __CFDictionary *)_purgeHandlerWithUrgency:(int)arg1 info:(const struct __CFDictionary *)arg2;	// IMP=0x0000000000006830
- (const struct __CFDictionary *)_purgeableAmountHandlerWithUrgency:(int)arg1 info:(const struct __CFDictionary *)arg2;	// IMP=0x00000000000065a0
- (id)init;	// IMP=0x00000000000061f0

@end

