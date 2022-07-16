//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIFoundation/NSLayoutManager.h>

@class UIFont;

__attribute__((visibility("hidden")))
@interface _UIFieldEditorLayoutManager : NSLayoutManager
{
    UIFont *_fontForExtraBulletRendering;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000e8d024
- (void)_completeBulletRenderingForTextContainer:(id)arg1;	// IMP=0x0000000000e8cdcb
- (struct CGRect)_boundingBoxForBulletAtCharIndex:(long long)arg1 inUnobscuredRange:(struct _NSRange)arg2;	// IMP=0x0000000000e8cd3e
- (long long)_generateBulletGlyphs:(const unsigned short *)arg1 properties:(const long long *)arg2 characterIndexes:(const unsigned long long *)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange)arg5 unobscuredRange:(struct _NSRange)arg6;	// IMP=0x0000000000e8ca3d
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;	// IMP=0x0000000000e8c6ab
- (void)resetFontForExtraBulletRendering;	// IMP=0x0000000000e8c68a
- (void)useFontForExtraBulletRendering:(id)arg1;	// IMP=0x0000000000e8c644

@end
