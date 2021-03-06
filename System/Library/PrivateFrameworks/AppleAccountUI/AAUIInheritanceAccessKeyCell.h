//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSTableCell.h>

@class UIImageView, UITextView;

@interface AAUIInheritanceAccessKeyCell : PSTableCell
{
    UIImageView *_qrCodeImageView;	// 120 = 0x78
    UITextView *_accessKeyTextView;	// 128 = 0x80
}

+ (id)specifierForAcessKey:(id)arg1 qrCodeImage:(id)arg2;	// IMP=0x00000000000098f9
- (void).cxx_destruct;	// IMP=0x000000000000a34e
@property(retain, nonatomic) UITextView *accessKeyTextView; // @synthesize accessKeyTextView=_accessKeyTextView;
@property(retain, nonatomic) UIImageView *qrCodeImageView; // @synthesize qrCodeImageView=_qrCodeImageView;
- (void)refreshCellContentsWithSpecifier:(id)arg1;	// IMP=0x000000000000a1ee
- (void)_setupViews;	// IMP=0x00000000000099e3
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000009896

@end

