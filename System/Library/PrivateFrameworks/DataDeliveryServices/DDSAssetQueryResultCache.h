//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DataDeliveryServices/DDSAssetQueryResultCaching-Protocol.h>
#import <DataDeliveryServices/DDSCacheDelegate-Protocol.h>

@class DDSCache, NSString;

@interface DDSAssetQueryResultCache : NSObject <DDSCacheDelegate, DDSAssetQueryResultCaching>
{
    DDSCache *_cache;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002203
@property(readonly, nonatomic) DDSCache *cache; // @synthesize cache=_cache;
- (void)cache:(id)arg1 willEvictObjects:(id)arg2;	// IMP=0x0000000000002154
- (void)clearCache;	// IMP=0x00000000000020b0
- (void)cacheAssets:(id)arg1 forQuery:(id)arg2;	// IMP=0x0000000000002008
- (id)cachedAssetsForQuery:(id)arg1;	// IMP=0x0000000000001f66
- (id)init;	// IMP=0x0000000000001ee2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

