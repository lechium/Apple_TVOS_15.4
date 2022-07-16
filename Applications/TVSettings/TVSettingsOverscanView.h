//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface TVSettingsOverscanView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_textLabel;	// 16 = 0x10
    UILabel *_actionSafeLabel;	// 24 = 0x18
    UILabel *_fullscreenLabel;	// 32 = 0x20
    NSString *_actionSafeText;	// 40 = 0x28
    NSString *_fullscreenText;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000000ea120
@property(copy, nonatomic) NSString *fullscreenText; // @synthesize fullscreenText=_fullscreenText;
@property(copy, nonatomic) NSString *actionSafeText; // @synthesize actionSafeText=_actionSafeText;
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00100000000e9ac0
- (void)layoutSubviews;	// IMP=0x00100000000e9360
@property(copy, nonatomic) NSString *instructionText;
@property(copy, nonatomic) NSString *titleText;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000e8b00

@end

