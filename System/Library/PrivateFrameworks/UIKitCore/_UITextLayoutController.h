//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUIStyleEffectConfiguration, NSArray, NSLayoutManager, NSTextContainer, NSTextStorage, UIColor, UITextInputController, UITextPosition, UITextRange, _UITextInputControllerLayoutManagerConnection;
@protocol NSLayoutManagerDelegate;

__attribute__((visibility("hidden")))
@interface _UITextLayoutController : NSObject
{
    _UITextInputControllerLayoutManagerConnection *_textInputControllerConnection;	// 8 = 0x8
    _Bool _documentObscured;	// 16 = 0x10
    _Bool _allowsNonContiguousLayout;	// 17 = 0x11
    _Bool _drawsDebugBaselines;	// 18 = 0x12
    UITextRange *_unobscuredRange;	// 24 = 0x18
    Class _classicCanvasViewClass;	// 32 = 0x20
    id <NSLayoutManagerDelegate> _layoutManagerDelegate;	// 40 = 0x28
    UIColor *_underlineColorForTextAlternatives;	// 48 = 0x30
    UIColor *_underlineColorForSpelling;	// 56 = 0x38
    CUIStyleEffectConfiguration *_styleEffectConfiguration;	// 64 = 0x40
}

+ (id)classicControllerWithTextContainer:(id)arg1 textStorage:(id)arg2;	// IMP=0x0000000000d335bb
+ (id)modernControllerWithTextStorage:(id)arg1;	// IMP=0x0000000000d3356e
+ (id)layoutControllerWithTextContainer:(id)arg1;	// IMP=0x0000000000d334e2
- (void).cxx_destruct;	// IMP=0x0000000000d3475c
@property(copy, nonatomic) CUIStyleEffectConfiguration *styleEffectConfiguration; // @synthesize styleEffectConfiguration=_styleEffectConfiguration;
@property(retain, nonatomic) UIColor *underlineColorForSpelling; // @synthesize underlineColorForSpelling=_underlineColorForSpelling;
@property(retain, nonatomic) UIColor *underlineColorForTextAlternatives; // @synthesize underlineColorForTextAlternatives=_underlineColorForTextAlternatives;
@property(nonatomic) _Bool drawsDebugBaselines; // @synthesize drawsDebugBaselines=_drawsDebugBaselines;
@property(nonatomic) _Bool allowsNonContiguousLayout; // @synthesize allowsNonContiguousLayout=_allowsNonContiguousLayout;
@property(nonatomic) __weak id <NSLayoutManagerDelegate> layoutManagerDelegate; // @synthesize layoutManagerDelegate=_layoutManagerDelegate;
@property(retain, nonatomic) Class classicCanvasViewClass; // @synthesize classicCanvasViewClass=_classicCanvasViewClass;
@property(retain, nonatomic) UITextRange *unobscuredRange; // @synthesize unobscuredRange=_unobscuredRange;
@property(nonatomic, getter=isDocumentObscured) _Bool documentObscured; // @synthesize documentObscured=_documentObscured;
- (void)resetFontForExtraBulletRendering;	// IMP=0x0000000000d34651
- (void)invalidateDisplayForCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000000d3461e
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000000d345c8
- (struct _NSRange)rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2;	// IMP=0x0000000000d34588
- (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;	// IMP=0x0000000000d34552
- (id)textRangeForCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000000d3451c
- (struct _NSRange)characterRangeForTextRange:(id)arg1;	// IMP=0x0000000000d344dc
@property(readonly, nonatomic) NSLayoutManager *layoutManager;
@property(readonly, nonatomic) _Bool canAccessLayoutManager;
- (id)validatedPositionForPosition:(id)arg1;	// IMP=0x0000000000d34376
- (id)validatedRangeForRange:(id)arg1;	// IMP=0x0000000000d3424e
- (struct CGRect)boundingRectForRange:(id)arg1;	// IMP=0x0000000000d341f8
- (void)invalidateLayoutForRange:(id)arg1;	// IMP=0x0000000000d341c5
- (void)ensureLayoutForRange:(id)arg1;	// IMP=0x0000000000d34192
- (struct CGRect)updateLayoutForSizeChangeOfTextContainer:(id)arg1;	// IMP=0x0000000000d34174
- (struct CGRect)usedRectForTextContainer:(id)arg1;	// IMP=0x0000000000d3411e
- (void)ensureLayoutForTextContainer:(id)arg1;	// IMP=0x0000000000d340eb
- (id)dequeueCanvasViewForTextContainer:(id)arg1;	// IMP=0x0000000000d340b5
- (id)previewRendererForRange:(id)arg1 unifyRects:(_Bool)arg2;	// IMP=0x0000000000d340ad
- (id)textContainerForPosition:(id)arg1;	// IMP=0x0000000000d34077
@property(readonly, nonatomic) NSTextContainer *firstTextContainer;
@property(readonly, copy, nonatomic) NSArray *textContainers;
- (id)baselineCalculatorForView:(id)arg1 typingAttributes:(id)arg2;	// IMP=0x0000000000d33f5c
- (void)requestTextGeometryAtPosition:(id)arg1 typingAttributes:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000d33f29
- (double)baselineOffsetForFirstGlyph;	// IMP=0x0000000000d33ef2
- (id)annotatedSubstringForRange:(id)arg1;	// IMP=0x0000000000d33ebc
- (id)attributedTextInRange:(id)arg1;	// IMP=0x0000000000d33e86
- (void)removeInvisibleRange:(id)arg1;	// IMP=0x0000000000d33ddd
- (void)addInvisibleRange:(id)arg1;	// IMP=0x0000000000d33daa
- (void)removeAllGhostedRanges;	// IMP=0x0000000000d33d77
- (void)addGhostedRange:(id)arg1;	// IMP=0x0000000000d33d44
- (void)removeRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x0000000000d33d11
- (void)addRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x0000000000d33cde
- (void)removeAnnotationAttribute:(id)arg1 forRange:(id)arg2;	// IMP=0x0000000000d33cab
- (id)annotationAttribute:(id)arg1 atPosition:(id)arg2;	// IMP=0x0000000000d33c75
- (void)addAnnotationAttribute:(id)arg1 value:(id)arg2 forRange:(id)arg3;	// IMP=0x0000000000d33c42
- (id)nearestTextRangeAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x0000000000d33b94
- (id)nearestPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x0000000000d33b5e
- (id)cursorPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x0000000000d33b28
- (id)selectionRectsForRange:(id)arg1 fromView:(id)arg2 forContainerPassingTest:(CDUnknownBlockType)arg3;	// IMP=0x0000000000d33aed
- (long long)baseWritingDirectionAtPosition:(id)arg1;	// IMP=0x0000000000d33ab7
- (id)attributesAtPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x0000000000d33a81
- (void)enumerateTextLineFragmentsInRange:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000d33a4e
- (id)textRangeForBounds:(struct CGRect)arg1 inTextContainer:(id)arg2 layoutIfNeeded:(_Bool)arg3;	// IMP=0x0000000000d33a18
- (struct CGRect)insertionRectForPosition:(id)arg1 typingAttributes:(id)arg2 placeholderAttachment:(id)arg3 textContainer:(id *)arg4;	// IMP=0x0000000000d339c2
- (long long)affinityForPosition:(id)arg1;	// IMP=0x0000000000d3398c
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000d33956
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000d33920
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;	// IMP=0x0000000000d3390b
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2 affinity:(long long)arg3;	// IMP=0x0000000000d338d5
- (id)textRangeForLineEnclosingPosition:(id)arg1 effectiveAffinity:(long long)arg2;	// IMP=0x0000000000d3389f
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x0000000000d33869
- (id)emptyTextRangeAtPosition:(id)arg1;	// IMP=0x0000000000d33833
@property(readonly, nonatomic) UITextRange *documentRange;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
@property(readonly, nonatomic) NSTextStorage *textStorage;
@property(readonly, nonatomic) UITextInputController *textInputController;
- (id)initWithTextContainer:(id)arg1 textStorage:(id)arg2;	// IMP=0x0000000000d3367a
- (id)initWithTextContainer:(id)arg1;	// IMP=0x0000000000d3362b

@end

