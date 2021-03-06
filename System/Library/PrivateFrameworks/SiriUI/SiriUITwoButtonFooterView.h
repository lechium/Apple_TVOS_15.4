//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class SiriUIContentButton, SiriUIKeyline;

@interface SiriUITwoButtonFooterView
{
    SiriUIKeyline *_verticalKeyline;	// 8 = 0x8
    SiriUIKeyline *_horizontalKeyline;	// 16 = 0x10
    SiriUIContentButton *_leftButton;	// 24 = 0x18
    SiriUIContentButton *_rightButton;	// 32 = 0x20
}

+ (double)defaultHeight;	// IMP=0x00000000000144e3
- (void).cxx_destruct;	// IMP=0x00000000000148fc
@property(readonly, nonatomic) SiriUIContentButton *rightButton; // @synthesize rightButton=_rightButton;
@property(readonly, nonatomic) SiriUIContentButton *leftButton; // @synthesize leftButton=_leftButton;
- (void)layoutSubviews;	// IMP=0x0000000000014612
- (void)prepareForReuse;	// IMP=0x0000000000014530
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000143b9

@end

