//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface TVTextEntryFooterView : UIView
{
    UIButton *_submitButton;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001bfe9
@property(retain, nonatomic) UIButton *submitButton; // @synthesize submitButton=_submitButton;
- (struct CGRect)_buttonFrameWithBounds:(struct CGRect)arg1;	// IMP=0x000000000001bf46
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000001beed
- (void)layoutSubviews;	// IMP=0x000000000001be6e

@end
