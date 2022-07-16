//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class PKTableHeaderView, UIButton, UIScrollView;

@interface PKCameraCaptureInstructionView : UIView
{
    long long _context;	// 8 = 0x8
    UIScrollView *_scrollView;	// 16 = 0x10
    UIButton *_primaryButton;	// 24 = 0x18
    UIButton *_secondaryButton;	// 32 = 0x20
    PKTableHeaderView *_headerView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000044f1b9
@property(retain, nonatomic) PKTableHeaderView *headerView; // @synthesize headerView=_headerView;
- (_Bool)isBuddyiPad;	// IMP=0x000000000044f18c
- (void)layoutSubviews;	// IMP=0x000000000044eaed
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000044ea82
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000044e988
- (_Bool)hasSecondaryButton;	// IMP=0x000000000044e973
- (void)removeSecondaryButton;	// IMP=0x000000000044e93b
- (void)setSecondaryButtonTitle:(id)arg1;	// IMP=0x000000000044e91e
- (void)setPrimaryButtonTitle:(id)arg1;	// IMP=0x000000000044e901
- (void)setPrimaryButtonHidden:(_Bool)arg1;	// IMP=0x000000000044e8e4
- (void)setPrimaryButtonEnabled:(_Bool)arg1;	// IMP=0x000000000044e8c7
- (void)setupHeaderView;	// IMP=0x000000000044e7ca
- (void)setupSecondaryButtonWithTitle:(id)arg1 action:(id)arg2;	// IMP=0x000000000044e5c3
- (void)setupPrimaryButtonWithTitle:(id)arg1 action:(id)arg2;	// IMP=0x000000000044e3da
- (void)setupScrollView;	// IMP=0x000000000044e397
- (id)initWithFrame:(struct CGRect)arg1 context:(long long)arg2 primaryAction:(id)arg3 primaryActionTitle:(id)arg4 secondaryAction:(id)arg5 secondaryActionTitle:(id)arg6;	// IMP=0x000000000044e28c

@end

