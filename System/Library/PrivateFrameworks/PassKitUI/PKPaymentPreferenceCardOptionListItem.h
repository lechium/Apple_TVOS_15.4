//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentPass, PKPaymentPreferenceCard;

@interface PKPaymentPreferenceCardOptionListItem
{
}

- (id)_censoredPANTextForPass:(id)arg1;	// IMP=0x00000000003300a7
- (id)_image;	// IMP=0x000000000032ffe7
- (id)_secondaryText;	// IMP=0x000000000032ff88
- (id)_text;	// IMP=0x000000000032ff38
@property(readonly, nonatomic) PKPaymentPreferenceCard *cardSectionPreference;
@property(readonly, nonatomic) PKPaymentPass *pass;

@end

