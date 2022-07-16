//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIColor, UIImageView, UITableViewCell;

__attribute__((visibility("hidden")))
@interface UITableViewCellReorderControl
{
    UITableViewCell *_cell;	// 112 = 0x70
    struct CGPoint _downPoint;	// 120 = 0x78
    double _focalY;	// 136 = 0x88
    double _focalHeight;	// 144 = 0x90
    UIImageView *_imageView;	// 152 = 0x98
    UIColor *_accessoryTintColor;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x0000000000d1a866
@property(retain, nonatomic) UIColor *accessoryTintColor; // @synthesize accessoryTintColor=_accessoryTintColor;
- (id)_imageView;	// IMP=0x0000000000d1a840
- (void)cancelTrackingWithEvent:(id)arg1;	// IMP=0x0000000000d1a7f4
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d1a79f
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d1a70d
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000d1a66e
- (_Bool)shouldTrack;	// IMP=0x0000000000d1a619
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x0000000000d1a56d
@property(readonly, nonatomic) _Bool wantsMaskingWhileAnimatingDisabled;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000d1a513
- (void)_updateImageView;	// IMP=0x0000000000d1a4bf
- (void)layoutSubviews;	// IMP=0x0000000000d1a3c1
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;	// IMP=0x0000000000d1a340
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000d1a30b
- (id)initWithTableViewCell:(id)arg1;	// IMP=0x0000000000d1a052
- (id)grabberImage;	// IMP=0x0000000000d19e7d

@end
