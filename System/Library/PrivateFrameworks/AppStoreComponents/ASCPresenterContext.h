//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCAppOfferStateCenter, ASCArtworkFetcher, ASCLockupFetcher;

__attribute__((visibility("hidden")))
@interface ASCPresenterContext : NSObject
{
    ASCArtworkFetcher *_artworkFetcher;	// 8 = 0x8
    ASCLockupFetcher *_lockupFetcher;	// 16 = 0x10
    ASCAppOfferStateCenter *_appOfferStateCenter;	// 24 = 0x18
}

+ (id)sharedContext;	// IMP=0x000000000001cc68
- (void).cxx_destruct;	// IMP=0x000000000001d255
@property(readonly, nonatomic) ASCAppOfferStateCenter *appOfferStateCenter; // @synthesize appOfferStateCenter=_appOfferStateCenter;
@property(readonly, nonatomic) ASCLockupFetcher *lockupFetcher; // @synthesize lockupFetcher=_lockupFetcher;
@property(readonly, nonatomic) ASCArtworkFetcher *artworkFetcher; // @synthesize artworkFetcher=_artworkFetcher;
- (id)description;	// IMP=0x000000000001d126
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001cef6
- (unsigned long long)hash;	// IMP=0x000000000001ce16
- (id)initWithArtworkFetcher:(id)arg1 lockupFetcher:(id)arg2 appOfferStateCenter:(id)arg3;	// IMP=0x000000000001cd5f

@end

