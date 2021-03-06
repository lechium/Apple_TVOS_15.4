//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIMPMediaEntityImageLoadParamsCreating-Protocol.h>

@class MPMediaItem, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaItem <VUIMPMediaEntityImageLoadParamsCreating>
{
    NSString *_coverArtImageIdentifier;	// 8 = 0x8
    NSString *_previewFrameImageIdentifier;	// 16 = 0x10
    MPMediaItem *_mediaItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000021ae31
@property(retain, nonatomic) MPMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;	// IMP=0x000000000021adad
- (id)mediaPlayerMediaItem;	// IMP=0x000000000021ad9b
- (id)rentalExpirationDate;	// IMP=0x000000000021ace5
- (id)credits;	// IMP=0x000000000021ac2f
- (id)studio;	// IMP=0x000000000021ab79
- (id)showCanonicalID;	// IMP=0x000000000021ab6c
- (id)seasonCanonicalID;	// IMP=0x000000000021ab5f
- (id)seasonIdentifier;	// IMP=0x000000000021aaa9
- (id)extrasURL;	// IMP=0x000000000021a9f3
- (id)previewFrameImageIdentifier;	// IMP=0x000000000021a9de
- (id)isPlayable;	// IMP=0x000000000021a928
- (id)assetType;	// IMP=0x000000000021a872
- (id)_valueForPropertyDescriptor:(id)arg1;	// IMP=0x000000000021a78c
- (id)assetController;	// IMP=0x000000000021a6a1
- (id)showIdentifier;	// IMP=0x000000000021a5eb
- (id)playedState;	// IMP=0x000000000021a535
- (id)coverArtImageIdentifier;	// IMP=0x000000000021a520
- (id)contentRating;	// IMP=0x000000000021a46a
- (id)HLSAudioCapability;	// IMP=0x000000000021a3b4
- (id)HLSColorCapability;	// IMP=0x000000000021a2fe
- (id)HLSResolution;	// IMP=0x000000000021a248
- (id)audioCapability;	// IMP=0x000000000021a192
- (id)colorCapability;	// IMP=0x000000000021a0dc
- (id)resolution;	// IMP=0x000000000021a026
- (id)isLocal;	// IMP=0x0000000000219f70
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;	// IMP=0x0000000000219f01
- (id)initWithMediaLibrary:(id)arg1 mediaItem:(id)arg2 requestedProperties:(id)arg3;	// IMP=0x0000000000219cc8

@end

