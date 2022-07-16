//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXCMMPosterHeaderView, PXCMMViewModel, PXMomentShareStatusPresentation, UIView;

@interface PXCMMPosterTileController : NSObject <PXChangeObserver, PXUIViewBasicTile, PXReusableObject>
{
    unsigned long long _activityType;	// 8 = 0x8
    PXCMMViewModel *_viewModel;	// 16 = 0x10
    PXMomentShareStatusPresentation *_momentShareStatusPresentation;	// 24 = 0x18
    PXCMMPosterHeaderView *_posterHeaderView;	// 32 = 0x20
}

+ (double)preferredHeightForWidth:(double)arg1 traitCollection:(id)arg2 screen:(id)arg3;	// IMP=0x0000000000019fce
- (void).cxx_destruct;	// IMP=0x0000000000019e23
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000019d4b
- (void)_updateStatusString;	// IMP=0x0000000000019c48
- (void)_updateContent;	// IMP=0x0000000000019bc6
- (void)prepareForReuse;	// IMP=0x0000000000019bae
- (void)becomeReusable;	// IMP=0x0000000000019b93
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;	// IMP=0x0000000000019b8d
@property(readonly, nonatomic) UIView *view;
- (id)initWithActivityType:(unsigned long long)arg1 viewModel:(id)arg2 momentShareStatusPresentation:(id)arg3;	// IMP=0x0000000000019a4b
- (id)init;	// IMP=0x00000000000199d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
