//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/ISBasePlayerUIViewChangeObserver-Protocol.h>
#import <PhotosUICore/PXMutableLivePhotoViewModulator-Protocol.h>

@class ISLivePhotoUIView, NSString, PXImageLayerModulator;

@interface PXLivePhotoViewModulator : NSObject <PXMutableLivePhotoViewModulator, ISBasePlayerUIViewChangeObserver>
{
    _Bool _isPerformingChanges;	// 8 = 0x8
    _Bool _isPerformingUpdates;	// 9 = 0x9
    struct {
        _Bool input;
        _Bool gainMapImage;
    } _needsUpdateFlags;	// 10 = 0xa
    _Bool _revealsGainMapImage;	// 12 = 0xc
    _Bool _animateGainMapAppearance;	// 13 = 0xd
    _Bool _displayingVideoComplement;	// 14 = 0xe
    float _gainMapValue;	// 16 = 0x10
    ISLivePhotoUIView *_livePhotoView;	// 24 = 0x18
    struct CGImage *_gainMapImage;	// 32 = 0x20
    PXImageLayerModulator *_imageModulator;	// 40 = 0x28
    PXImageLayerModulator *_videoModulator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000037e627
@property(readonly, nonatomic) PXImageLayerModulator *videoModulator; // @synthesize videoModulator=_videoModulator;
@property(readonly, nonatomic) PXImageLayerModulator *imageModulator; // @synthesize imageModulator=_imageModulator;
@property(nonatomic) _Bool displayingVideoComplement; // @synthesize displayingVideoComplement=_displayingVideoComplement;
@property(nonatomic) _Bool animateGainMapAppearance; // @synthesize animateGainMapAppearance=_animateGainMapAppearance;
@property(readonly, nonatomic) _Bool revealsGainMapImage; // @synthesize revealsGainMapImage=_revealsGainMapImage;
@property(readonly, nonatomic) float gainMapValue; // @synthesize gainMapValue=_gainMapValue;
@property(readonly, nonatomic) struct CGImage *gainMapImage; // @synthesize gainMapImage=_gainMapImage;
@property(readonly, nonatomic) ISLivePhotoUIView *livePhotoView; // @synthesize livePhotoView=_livePhotoView;
- (void)basePlayerUIView:(id)arg1 didChange:(unsigned long long)arg2 withAnimationDuration:(double)arg3;	// IMP=0x000000000037e3c4
- (void)_updateGainMapImage;	// IMP=0x000000000037e33c
- (void)_invalidateGainMapImage;	// IMP=0x000000000037e326
- (void)_updateInput;	// IMP=0x000000000037e16b
- (void)_invalidateInput;	// IMP=0x000000000037e155
- (void)_updateIfNeeded;	// IMP=0x000000000037e0f0
- (void)_setNeedsUpdate;	// IMP=0x000000000037e05d
- (_Bool)_needsUpdate;	// IMP=0x000000000037e048
- (void)setRevealsGainMapImage:(_Bool)arg1;	// IMP=0x000000000037e02c
- (void)setGainMapValue:(float)arg1;	// IMP=0x000000000037dff0
- (void)setGainMapImage:(struct CGImage *)arg1 animated:(_Bool)arg2;	// IMP=0x000000000037df88
- (void)setGainMapImage:(struct CGImage *)arg1;	// IMP=0x000000000037df74
- (void)setLivePhotoView:(id)arg1;	// IMP=0x000000000037ddee
- (void)prepareForReuse;	// IMP=0x000000000037ddac
- (void)performChanges_Private:(CDUnknownBlockType)arg1;	// IMP=0x000000000037dd9a
- (void)performChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000037dd5d
- (void)dealloc;	// IMP=0x000000000037dd23
- (id)init;	// IMP=0x000000000037dca9
- (id)initWithImageModulator:(id)arg1 videoModulator:(id)arg2;	// IMP=0x000000000037dbd8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

