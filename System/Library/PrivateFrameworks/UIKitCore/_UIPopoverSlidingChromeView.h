//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIPopoverSlidingChromeView
{
}

+ (struct UIEdgeInsets)contentViewInsets;	// IMP=0x0000000001096164
+ (double)cornerRadius;	// IMP=0x000000000109615b
+ (double)arrowBase;	// IMP=0x0000000001096152
+ (double)arrowHeight;	// IMP=0x0000000001096149
- (void)layoutSubviews;	// IMP=0x0000000001096285
- (void)setArrowDirection:(unsigned long long)arg1;	// IMP=0x000000000109627f
- (unsigned long long)arrowDirection;	// IMP=0x0000000001096277
- (void)setArrowOffset:(double)arg1;	// IMP=0x0000000001096271
- (double)arrowOffset;	// IMP=0x0000000001096268
- (id)_shadowPathForRect:(struct CGRect)arg1 arrowDirection:(unsigned long long)arg2;	// IMP=0x000000000109622e
- (struct CGSize)_shadowOffset;	// IMP=0x0000000001096222
- (double)_shadowRadius;	// IMP=0x0000000001096219
- (double)_shadowOpacity;	// IMP=0x0000000001096210
- (struct UIEdgeInsets)_shadowInsets;	// IMP=0x00000000010961fd
- (struct UIEdgeInsets)_contentViewInsets;	// IMP=0x00000000010961a0

@end
