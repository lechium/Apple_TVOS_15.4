//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface __TVSUIDigitView : UIView
{
    UIVisualEffectView *_backgroundView;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000034ce
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)_setupConstraints;	// IMP=0x00000000000031f6
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000031e0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000002f6d

@end

