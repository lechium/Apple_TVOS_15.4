//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSObject, NSString, PXImageRequester, PXTitleSubtitleLabelSpec, PXViewSpec;
@protocol PXAnonymousView;

@interface PXRegionOfInterest <NSCopying>
{
    _Bool _isRepresentingPlaceholderContent;	// 8 = 0x8
    PXImageRequester *_imageRequester;	// 16 = 0x10
    PXViewSpec *_imageViewSpec;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    NSString *_subtitle;	// 40 = 0x28
    PXTitleSubtitleLabelSpec *_textViewSpec;	// 48 = 0x30
    CDUnknownBlockType _placeholderViewFactory;	// 56 = 0x38
    CDUnknownBlockType _trackingContainerViewFactory;	// 64 = 0x40
    struct CGRect _imageContentsRect;	// 72 = 0x48
}

+ (struct CGRect)convertedImageContentsRectOfRegionOfInterest:(id)arg1 toCoordinateSpace:(id)arg2 fittingSize:(struct CGSize)arg3 flipped:(_Bool)arg4;	// IMP=0x00000000007794f6
- (void).cxx_destruct;	// IMP=0x0000000000779470
@property(nonatomic) _Bool isRepresentingPlaceholderContent; // @synthesize isRepresentingPlaceholderContent=_isRepresentingPlaceholderContent;
@property(copy, nonatomic) CDUnknownBlockType trackingContainerViewFactory; // @synthesize trackingContainerViewFactory=_trackingContainerViewFactory;
@property(copy, nonatomic) CDUnknownBlockType placeholderViewFactory; // @synthesize placeholderViewFactory=_placeholderViewFactory;
@property(retain, nonatomic) PXTitleSubtitleLabelSpec *textViewSpec; // @synthesize textViewSpec=_textViewSpec;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) PXViewSpec *imageViewSpec; // @synthesize imageViewSpec=_imageViewSpec;
@property(nonatomic) struct CGRect imageContentsRect; // @synthesize imageContentsRect=_imageContentsRect;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
@property(readonly, nonatomic) NSObject<PXAnonymousView> *trackingContainerView;
- (struct CGRect)uncroppedImageFrameInCoordinateSpace:(id)arg1;	// IMP=0x000000000077910f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000778fe2
- (id)initWithRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;	// IMP=0x0000000000778f7f

@end

