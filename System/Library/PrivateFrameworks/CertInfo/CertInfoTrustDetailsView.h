//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CertInfoCertificateDetailsView, NSArray;

@interface CertInfoTrustDetailsView : UIView
{
    NSArray *_certificateViews;	// 8 = 0x8
    CertInfoCertificateDetailsView *_currentCertView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002ed2
- (void)layoutSubviews;	// IMP=0x0000000000002e7b
- (id)initWithFrame:(struct CGRect)arg1 trustProperties:(id)arg2;	// IMP=0x0000000000002b76
- (void)_appendRemainingCertificates;	// IMP=0x0000000000002a25

@end

