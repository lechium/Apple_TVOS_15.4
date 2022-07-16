//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol PKDataReleaseHeaderDelegate;

@interface PKDataReleaseHeader : UIView
{
    id <PKDataReleaseHeaderDelegate> _delegate;	// 8 = 0x8
    UILabel *_label;	// 16 = 0x10
    UIButton *_dismissButton;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000228cf3
- (void)_dismiss;	// IMP=0x0000000000228cbf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000228c52
- (void)layoutSubviews;	// IMP=0x0000000000228992
- (id)initWithDelegate:(id)arg1;	// IMP=0x00000000002284aa

@end

