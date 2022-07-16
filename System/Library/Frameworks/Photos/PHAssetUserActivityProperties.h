//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PHAssetUserActivityProperties
{
    long long _syncedPlayCount;	// 16 = 0x10
    long long _syncedShareCount;	// 24 = 0x18
    long long _syncedViewCount;	// 32 = 0x20
    long long _pendingPlayCount;	// 40 = 0x28
    long long _pendingShareCount;	// 48 = 0x30
    long long _pendingViewCount;	// 56 = 0x38
}

+ (id)propertiesToFetch;	// IMP=0x00000000000e5961
+ (id)propertySetName;	// IMP=0x00000000000e5954
@property(nonatomic) long long pendingViewCount; // @synthesize pendingViewCount=_pendingViewCount;
@property(nonatomic) long long pendingShareCount; // @synthesize pendingShareCount=_pendingShareCount;
@property(nonatomic) long long pendingPlayCount; // @synthesize pendingPlayCount=_pendingPlayCount;
@property(nonatomic) long long syncedViewCount; // @synthesize syncedViewCount=_syncedViewCount;
@property(nonatomic) long long syncedShareCount; // @synthesize syncedShareCount=_syncedShareCount;
@property(nonatomic) long long syncedPlayCount; // @synthesize syncedPlayCount=_syncedPlayCount;
@property(readonly, nonatomic) long long viewCount;
@property(readonly, nonatomic) long long shareCount;
@property(readonly, nonatomic) long long playCount;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;	// IMP=0x00000000000e55ba

@end
