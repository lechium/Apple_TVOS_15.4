//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel, UIVisualEffectView;

@interface _TVDigitView : UIView
{
    UIVisualEffectView *_backgroundView;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000006c99f
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)_setupConstraints;	// IMP=0x000000000006c6c7
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000006c6b1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000006c448

@end

