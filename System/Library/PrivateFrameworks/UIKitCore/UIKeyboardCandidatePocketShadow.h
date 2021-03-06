//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidatePocketShadow
{
    _Bool _shadowFadesToBottom;	// 8 = 0x8
    _Bool _drawsShadow;	// 9 = 0x9
    _Bool _showsInDarkBackground;	// 10 = 0xa
}

+ (id)leftShadowImage;	// IMP=0x00000000007b35a9
+ (double)widthWithShadow:(_Bool)arg1;	// IMP=0x00000000007b358d
@property(nonatomic) _Bool showsInDarkBackground; // @synthesize showsInDarkBackground=_showsInDarkBackground;
@property(nonatomic) _Bool drawsShadow; // @synthesize drawsShadow=_drawsShadow;
@property(nonatomic) _Bool shadowFadesToBottom; // @synthesize shadowFadesToBottom=_shadowFadesToBottom;
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x00000000007b3baa
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000007b36a8
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007b3620

@end

