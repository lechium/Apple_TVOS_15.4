//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UILabel;

__attribute__((visibility("hidden")))
@interface _UISearchBarPromptContainerView
{
    long long _barMetrics;	// 8 = 0x8
    UILabel *_promptLabel;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b8cbd
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) long long barMetrics; // @synthesize barMetrics=_barMetrics;
- (void)layoutSubviews;	// IMP=0x00000000001b8a3e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001b89ac
- (_Bool)useMini;	// IMP=0x00000000001b8997
- (_Bool)_isKnownUISearchBarComponentContainer;	// IMP=0x00000000007d2844

@end

