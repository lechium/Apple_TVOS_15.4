//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class ASTBiggerProgressView, UIButton;
@protocol AXGestureRecorderControlsViewDelegate;

@interface AXGestureRecorderControlsView : UIView
{
    UIButton *_leftButton;	// 8 = 0x8
    UIButton *_rightButton;	// 16 = 0x10
    ASTBiggerProgressView *_progressView;	// 24 = 0x18
    id <AXGestureRecorderControlsViewDelegate> _delegate;	// 32 = 0x20
    UIButton *_middleButton;	// 40 = 0x28
}

+ (double)defaultHeight;	// IMP=0x000000000001db34
- (void).cxx_destruct;	// IMP=0x000000000001ee9c
@property(retain, nonatomic) UIButton *middleButton; // @synthesize middleButton=_middleButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak id <AXGestureRecorderControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_buttonTapped:(id)arg1;	// IMP=0x000000000001ed3a
@property(nonatomic, getter=isRightButtonEnabled) _Bool rightButtonEnabled;
@property(nonatomic, getter=isLeftButtonEnabled) _Bool leftButtonEnabled;
- (void)setLeftButtonColor:(int)arg1 title:(id)arg2 enabled:(_Bool)arg3 rightButtonColor:(int)arg4 title:(id)arg5 enabled:(_Bool)arg6 animationDuration:(double)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000000001e808
- (id)makeButton;	// IMP=0x000000000001e676
- (void)layoutSubviews;	// IMP=0x000000000001e019
@property(nonatomic) float progress;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001db42

@end
