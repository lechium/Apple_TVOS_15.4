//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface PKSelectActionHeader : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_subtitle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001ac69d
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)layoutSubviews;	// IMP=0x00000000001ac4e3
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;	// IMP=0x00000000001ac2d4

@end

