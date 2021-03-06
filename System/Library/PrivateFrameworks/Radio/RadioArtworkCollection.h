//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>

@class NSArray;

@interface RadioArtworkCollection : NSObject <NSCopying>
{
    NSArray *_artworks;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001dd79
@property(readonly, nonatomic) NSArray *artworks; // @synthesize artworks=_artworks;
- (id)_artworksBySortingArtworks:(id)arg1;	// IMP=0x000000000001dd53
- (id)bestArtworkForPointSize:(struct CGSize)arg1;	// IMP=0x000000000001dd0c
- (id)bestArtworkForPixelSize:(struct CGSize)arg1;	// IMP=0x000000000001db63
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001db58
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001dad8
- (unsigned long long)hash;	// IMP=0x000000000001dabe
- (id)description;	// IMP=0x000000000001da7d
- (id)initWithArtworkVariants:(id)arg1;	// IMP=0x000000000001d7d1
- (id)initWithArtworks:(id)arg1;	// IMP=0x000000000001d72d

@end

