//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHomeSharingKit/NSCopying-Protocol.h>

@class TVHKMediaServerIdentifier, TVHKSeasonsCache, TVHKShowsCache;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntitiesFetchCache : NSObject <NSCopying>
{
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 8 = 0x8
    TVHKShowsCache *_showsCache;	// 16 = 0x10
    TVHKSeasonsCache *_seasonsCache;	// 24 = 0x18
}

+ (id)new;	// IMP=0x000000000003864c
- (void).cxx_destruct;	// IMP=0x00000000000389f2
@property(readonly, nonatomic) TVHKSeasonsCache *seasonsCache; // @synthesize seasonsCache=_seasonsCache;
@property(readonly, nonatomic) TVHKShowsCache *showsCache; // @synthesize showsCache=_showsCache;
@property(readonly, copy, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
- (id)description;	// IMP=0x00000000000388ab
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000038814
- (void)clear;	// IMP=0x0000000000038793
- (id)initWithMediaServerIdentifier:(id)arg1;	// IMP=0x00000000000386ea
- (id)init;	// IMP=0x000000000003867b

@end

