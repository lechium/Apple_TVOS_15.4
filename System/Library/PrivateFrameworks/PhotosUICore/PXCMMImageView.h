//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSString, PXCMMImageViewModel, PXImageRequesterHelper, UIImageView;

@interface PXCMMImageView : UIView <PXChangeObserver>
{
    UIImageView *_imageView;	// 8 = 0x8
    UIView *_highlightView;	// 16 = 0x10
    PXImageRequesterHelper *_imageRequesterHelper;	// 24 = 0x18
    PXCMMImageViewModel *_viewModel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000006553e1
@property(retain, nonatomic) PXCMMImageViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000006552cf
- (_Bool)test_highlighted;	// IMP=0x00000000006552af
- (void)_updateContentsRect;	// IMP=0x000000000065521d
- (void)_updateImage;	// IMP=0x00000000006551be
- (void)_updateHighlighted;	// IMP=0x0000000000655178
- (void)_updateImageRequestHelper;	// IMP=0x0000000000655086
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000655045
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000654ff3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000654d60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

