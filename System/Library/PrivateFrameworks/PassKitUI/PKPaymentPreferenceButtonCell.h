//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIButton;

@interface PKPaymentPreferenceButtonCell
{
    UIButton *_button;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    NSString *_buttonTitle;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002c0a41
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)pk_childrenForAppearance;	// IMP=0x00000000002c09a3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002c0851
- (void)buttonTapped:(id)arg1;	// IMP=0x00000000002c0837
- (void)layoutSubviews;	// IMP=0x00000000002c070f
- (id)initWithReuseIdentifier:(id)arg1;	// IMP=0x00000000002c033e

@end

