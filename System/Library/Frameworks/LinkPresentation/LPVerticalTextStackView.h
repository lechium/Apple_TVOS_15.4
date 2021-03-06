//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LinkPresentation/LPContentInsettable-Protocol.h>

@class LPVerticalTextStackViewStyle, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPVerticalTextStackView <LPContentInsettable>
{
    NSMutableArray *_items;	// 8 = 0x8
    _Bool _hasEverBuilt;	// 16 = 0x10
    struct UIEdgeInsets _contentInset;	// 24 = 0x18
    LPVerticalTextStackViewStyle *_style;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002dcdc
- (struct CGSize)_layoutTextStackForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;	// IMP=0x000000000002d147
- (long long)computedNumberOfLines;	// IMP=0x000000000002d00c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002cf6b
- (void)layoutComponentView;	// IMP=0x000000000002cef7
- (void)addArrangedSubview:(id)arg1;	// IMP=0x000000000002ce67
- (void)setContentInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000002ce09
- (id)initWithHost:(id)arg1 style:(id)arg2;	// IMP=0x000000000002cc7f
- (id)initWithHost:(id)arg1;	// IMP=0x000000000002cc71

@end

