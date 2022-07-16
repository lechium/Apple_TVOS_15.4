//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface PKWatchHeroImageView : UIView
{
    UIView *_watchView;	// 8 = 0x8
    UILabel *_doneLabel;	// 16 = 0x10
    _Bool _useNewUI;	// 24 = 0x18
    struct CGSize _originalWatchViewSize;	// 32 = 0x20
    _Bool _hideDoneLabel;	// 48 = 0x30
}

+ (id)watchDeviceImage;	// IMP=0x00000000002428fb
+ (id)_bridgeHeroImage;	// IMP=0x00000000002428ea
- (void).cxx_destruct;	// IMP=0x000000000024292f
@property(nonatomic) _Bool hideDoneLabel; // @synthesize hideDoneLabel=_hideDoneLabel;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000024290d
- (struct CGPoint)_watchScreenInset;	// IMP=0x000000000024280a
- (void)layoutSubviews;	// IMP=0x00000000002426a7
- (struct CGSize)_watchScreenSize:(double)arg1;	// IMP=0x0000000000242601
- (struct CGSize)_heroWatchImageSize;	// IMP=0x00000000002425c1
- (id)_resizeImage:(id)arg1 toSize:(struct CGSize)arg2;	// IMP=0x00000000002424fd
@property(readonly, nonatomic) _Bool isCompactWatch;
- (struct CGSize)imageSize;	// IMP=0x0000000000242463
- (struct CGRect)spaceBelowCardFrame;	// IMP=0x0000000000242351
@property(readonly, nonatomic) struct CGRect cardFrame;
@property(readonly, nonatomic) struct CGRect watchScreenFrame;
@property(readonly, nonatomic) struct CGPoint watchScreenCenter;
@property(readonly, nonatomic) double watchDeviceImageScaleFactor;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000241bfd
- (id)init;	// IMP=0x0000000000241bcb

@end
