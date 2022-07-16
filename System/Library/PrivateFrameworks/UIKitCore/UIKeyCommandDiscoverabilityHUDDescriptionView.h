//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSLayoutManagerDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSString, UIFont, UITextView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDDescriptionView <NSLayoutManagerDelegate>
{
    UITextView *_textView;	// 8 = 0x8
    NSDictionary *_textAttributes;	// 16 = 0x10
    NSMutableDictionary *_glyphViews;	// 24 = 0x18
    unsigned long long _glyphSize;	// 32 = 0x20
    struct CGSize _intrinsicContentSize;	// 40 = 0x28
    double _spaceWidth;	// 56 = 0x38
    UIFont *_font;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000b37268
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double spaceWidth; // @synthesize spaceWidth=_spaceWidth;
- (long long)layoutManager:(id)arg1 shouldUseAction:(long long)arg2 forControlCharacterAtIndex:(unsigned long long)arg3;	// IMP=0x0000000000b3723a
- (void)layoutManager:(id)arg1 didCompleteLayoutForTextContainer:(id)arg2 atEnd:(_Bool)arg3;	// IMP=0x0000000000b36e27
- (struct CGRect)layoutManager:(id)arg1 boundingBoxForControlGlyphAtIndex:(unsigned long long)arg2 forTextContainer:(id)arg3 proposedLineFragment:(struct CGRect)arg4 glyphPosition:(struct CGPoint)arg5 characterIndex:(unsigned long long)arg6;	// IMP=0x0000000000b36a56
- (unsigned long long)layoutManager:(id)arg1 shouldGenerateGlyphs:(const unsigned short *)arg2 properties:(const long long *)arg3 characterIndexes:(const unsigned long long *)arg4 font:(id)arg5 forGlyphRange:(struct _NSRange)arg6;	// IMP=0x0000000000b36883
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x0000000000b3681c
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000b367c6
- (void)invalidateIntrinsicContentSize;	// IMP=0x0000000000b36785
@property(copy, nonatomic) NSString *text;
- (id)initWithText:(id)arg1 font:(id)arg2 lineHeight:(double)arg3 lineSpacing:(double)arg4 color:(id)arg5 edgeInsets:(struct UIEdgeInsets)arg6;	// IMP=0x0000000000b360ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

