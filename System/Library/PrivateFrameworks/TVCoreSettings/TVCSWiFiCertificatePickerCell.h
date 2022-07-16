//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UITableViewCell.h>

@class NSArray, NSDate, NSString, UILabel;

__attribute__((visibility("hidden")))
@interface TVCSWiFiCertificatePickerCell : UITableViewCell
{
    NSString *_titleText;	// 8 = 0x8
    NSString *_issuer;	// 16 = 0x10
    NSDate *_expirationDate;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_issuedByLabel;	// 40 = 0x28
    UILabel *_issuerLabel;	// 48 = 0x30
    UILabel *_expiresByLabel;	// 56 = 0x38
    UILabel *_expiryDateLabel;	// 64 = 0x40
    NSArray *_constraints;	// 72 = 0x48
}

+ (id)dateFormatter;	// IMP=0x0000000000024520
- (void).cxx_destruct;	// IMP=0x0000000000026830
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, nonatomic) UILabel *expiryDateLabel; // @synthesize expiryDateLabel=_expiryDateLabel;
@property(readonly, nonatomic) UILabel *expiresByLabel; // @synthesize expiresByLabel=_expiresByLabel;
@property(readonly, nonatomic) UILabel *issuerLabel; // @synthesize issuerLabel=_issuerLabel;
@property(readonly, nonatomic) UILabel *issuedByLabel; // @synthesize issuedByLabel=_issuedByLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *issuer; // @synthesize issuer=_issuer;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (id)_requiredConstraints;	// IMP=0x0000000000026390
- (id)_newTitleLabel;	// IMP=0x0000000000026310
- (id)_newSubtitleLabel;	// IMP=0x0000000000026280
- (id)_subtitleFont;	// IMP=0x00000000000261b0
- (void)updateConstraints;	// IMP=0x0000000000024f00
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000245a0

@end
