//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface CertInfoCertificateListCellContentView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UILabel *_expirationLabel;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001342c
- (void)layoutSubviews;	// IMP=0x0000000000012ee5
- (void)_setText:(id)arg1 forLabel:(id)arg2 withRedColor:(_Bool)arg3;	// IMP=0x0000000000012e13
- (void)_setupLabel:(id)arg1 isSubtitle:(_Bool)arg2;	// IMP=0x0000000000012d00
- (void)setExpiration:(id)arg1;	// IMP=0x0000000000012b8a
- (void)setSubtitle:(id)arg1;	// IMP=0x0000000000012a66
- (void)setTitle:(id)arg1;	// IMP=0x0000000000012a46
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000128d6

@end

