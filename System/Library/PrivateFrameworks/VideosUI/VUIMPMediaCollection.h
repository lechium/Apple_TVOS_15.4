//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideosUI/VUIMPMediaEntityImageLoadParamsCreating-Protocol.h>

@class MPMediaItemCollection, NSString;

__attribute__((visibility("hidden")))
@interface VUIMPMediaCollection <VUIMPMediaEntityImageLoadParamsCreating>
{
    NSString *_coverArtImageIdentifier;	// 8 = 0x8
    MPMediaItemCollection *_mediaItemCollection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000146fe9
@property(retain, nonatomic) MPMediaItemCollection *mediaItemCollection; // @synthesize mediaItemCollection=_mediaItemCollection;
- (id)imageLoadParamsWithImageType:(unsigned long long)arg1;	// IMP=0x0000000000146f44
- (id)_valueForPropertyDescriptor:(id)arg1;	// IMP=0x0000000000146e37
- (id)assetController;	// IMP=0x0000000000146d4c
- (id)showIdentifier;	// IMP=0x0000000000146c6c
- (id)playedState;	// IMP=0x0000000000146c3f
- (id)coverArtImageIdentifier;	// IMP=0x0000000000146c2a
- (id)contentRating;	// IMP=0x0000000000146b4a
- (id)HLSAudioCapability;	// IMP=0x0000000000146a6a
- (id)HLSColorCapability;	// IMP=0x000000000014698a
- (id)HLSResolution;	// IMP=0x00000000001468aa
- (id)audioCapability;	// IMP=0x00000000001467ca
- (id)colorCapability;	// IMP=0x00000000001466ea
- (id)resolution;	// IMP=0x000000000014660a
- (id)isLocal;	// IMP=0x00000000001463cf
- (id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4;	// IMP=0x0000000000146360
- (id)initWithMediaLibrary:(id)arg1 mediaItemCollection:(id)arg2 identifier:(id)arg3 requestedProperties:(id)arg4 kind:(id)arg5;	// IMP=0x0000000000146111

@end
