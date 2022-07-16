//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKArtworkImageSource-Protocol.h>

@class MKArtworkDataSourceCache, NSString;
@protocol GEOTransitArtworkDataSource;

@interface MKSizedTransitArtwork : NSObject <MKArtworkImageSource>
{
    id <GEOTransitArtworkDataSource> _artwork;	// 8 = 0x8
    long long _shieldSize;	// 16 = 0x10
    long long _fallbackShieldSize;	// 24 = 0x18
    MKArtworkDataSourceCache *_artworkCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000813ea
@property(retain, nonatomic) MKArtworkDataSourceCache *artworkCache; // @synthesize artworkCache=_artworkCache;
@property(readonly, nonatomic) long long fallbackShieldSize; // @synthesize fallbackShieldSize=_fallbackShieldSize;
@property(readonly, nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artwork; // @synthesize artwork=_artwork;
- (id)badgeImageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x0000000000081340
- (id)imageToDisplayWithScreenScale:(double)arg1 nightMode:(_Bool)arg2;	// IMP=0x0000000000081269
@property(readonly) unsigned long long hash;
- (_Bool)isEqualToTransitArtworkViewMode:(id)arg1;	// IMP=0x000000000007f61e
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007f5c1
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 fallbackShieldSize:(long long)arg3 artworkCache:(id)arg4;	// IMP=0x000000000007f4de
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2 artworkCache:(id)arg3;	// IMP=0x000000000007f4c6
- (id)initWithArtwork:(id)arg1 shieldSize:(long long)arg2;	// IMP=0x000000000007f4b1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
