//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TVCKStoreArtworkVariantListing : NSObject
{
    NSArray *_artworkVariants;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000010251
@property(readonly, copy, nonatomic) NSArray *artworkVariants; // @synthesize artworkVariants=_artworkVariants;
- (id)bestArtworkVariantForSize:(struct CGSize)arg1;	// IMP=0x000000000000fe8b
- (id)initWithArray:(id)arg1;	// IMP=0x000000000000fb9c

@end

