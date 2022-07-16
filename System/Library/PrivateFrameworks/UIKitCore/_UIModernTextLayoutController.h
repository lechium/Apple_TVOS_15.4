//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSTextLayoutManagerDelegate-Protocol.h>

@class NSMapTable, NSMutableSet, NSString, NSTextContentStorage, NSTextLayoutManager;

__attribute__((visibility("hidden")))
@interface _UIModernTextLayoutController <NSTextLayoutManagerDelegate>
{
    NSTextContentStorage *_textContentStorage;	// 8 = 0x8
    NSTextLayoutManager *_textLayoutManager;	// 16 = 0x10
    NSMutableSet *_ghostedRanges;	// 24 = 0x18
    NSMutableSet *_invisibleRanges;	// 32 = 0x20
    NSMapTable *_textCanvasViews;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000067eb41
- (id)textLayoutManager:(id)arg1 renderingAttributesForLink:(id)arg2 atLocation:(id)arg3 defaultAttributes:(id)arg4;	// IMP=0x000000000067eac1
- (void)resetFontForExtraBulletRendering;	// IMP=0x000000000067eabb
- (void)invalidateDisplayForCharacterRange:(struct _NSRange)arg1;	// IMP=0x000000000067eab5
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;	// IMP=0x000000000067ea58
- (struct _NSRange)rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2;	// IMP=0x000000000067e5ae
- (id)positionWithOffset:(long long)arg1 affinity:(long long)arg2;	// IMP=0x000000000067e548
- (id)textRangeForCharacterRange:(struct _NSRange)arg1;	// IMP=0x000000000067e3da
- (struct _NSRange)characterRangeForTextRange:(id)arg1;	// IMP=0x000000000067e24c
- (id)validatedPositionForPosition:(id)arg1;	// IMP=0x000000000067e101
- (id)validatedRangeForRange:(id)arg1;	// IMP=0x000000000067dfed
- (struct CGRect)boundingRectForRange:(id)arg1;	// IMP=0x000000000067dd0e
- (void)invalidateLayoutForRange:(id)arg1;	// IMP=0x000000000067dcb7
- (void)ensureLayoutForRange:(id)arg1;	// IMP=0x000000000067dc60
- (struct CGRect)updateLayoutForSizeChangeOfTextContainer:(id)arg1;	// IMP=0x000000000067dbc6
- (struct CGRect)usedRectForTextContainer:(id)arg1;	// IMP=0x000000000067dad2
- (void)ensureLayoutForTextContainer:(id)arg1;	// IMP=0x000000000067d9ee
- (id)previewRendererForRange:(id)arg1 unifyRects:(_Bool)arg2;	// IMP=0x000000000067d94a
- (id)dequeueCanvasViewForTextContainer:(id)arg1;	// IMP=0x000000000067d89e
- (id)textContainerForPosition:(id)arg1;	// IMP=0x000000000067d834
- (id)textContainers;	// IMP=0x000000000067d817
- (void)requestTextGeometryAtPosition:(id)arg1 typingAttributes:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000067d521
- (double)baselineOffsetForFirstGlyph;	// IMP=0x000000000067d3a3
- (id)annotatedSubstringForRange:(id)arg1;	// IMP=0x000000000067d09f
- (id)attributedTextInRange:(id)arg1;	// IMP=0x000000000067caef
- (void)setUnobscuredRange:(id)arg1;	// IMP=0x000000000067ca11
- (void)setDocumentObscured:(_Bool)arg1;	// IMP=0x000000000067c964
- (void)removeInvisibleRange:(id)arg1;	// IMP=0x000000000067c947
- (void)addInvisibleRange:(id)arg1;	// IMP=0x000000000067c8dd
- (void)removeAllGhostedRanges;	// IMP=0x000000000067c8c0
- (void)addGhostedRange:(id)arg1;	// IMP=0x000000000067c856
- (void)removeRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x000000000067c67b
- (void)addRenderingAttributes:(id)arg1 forRange:(id)arg2;	// IMP=0x000000000067c549
- (void)removeAnnotationAttribute:(id)arg1 forRange:(id)arg2;	// IMP=0x000000000067c4c9
- (id)annotationAttribute:(id)arg1 atPosition:(id)arg2;	// IMP=0x000000000067c322
- (void)addAnnotationAttribute:(id)arg1 value:(id)arg2 forRange:(id)arg3;	// IMP=0x000000000067c28c
- (id)nearestPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x000000000067c27a
- (id)cursorPositionAtPoint:(struct CGPoint)arg1 inContainer:(id)arg2;	// IMP=0x000000000067c013
- (id)selectionRectsForRange:(id)arg1 fromView:(id)arg2 forContainerPassingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000067bcf4
- (void)enumerateTextLineFragmentsInRange:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000067b6e2
- (long long)baseWritingDirectionAtPosition:(id)arg1;	// IMP=0x000000000067b684
- (id)attributesAtPosition:(id)arg1 inDirection:(long long)arg2;	// IMP=0x000000000067b1d0
- (id)textRangeForBounds:(struct CGRect)arg1 inTextContainer:(id)arg2 layoutIfNeeded:(_Bool)arg3;	// IMP=0x000000000067b125
- (struct CGRect)insertionRectForPosition:(id)arg1 typingAttributes:(id)arg2 placeholderAttachment:(id)arg3 textContainer:(id *)arg4;	// IMP=0x000000000067ae11
- (long long)affinityForPosition:(id)arg1;	// IMP=0x000000000067adfc
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000067acd5
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000067ac44
- (id)textRangeForLineEnclosingPosition:(id)arg1 effectiveAffinity:(long long)arg2;	// IMP=0x000000000067a99b
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2 affinity:(long long)arg3;	// IMP=0x000000000067a869
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;	// IMP=0x000000000067a63c
- (id)emptyTextRangeAtPosition:(id)arg1;	// IMP=0x000000000067a551
- (id)documentRange;	// IMP=0x000000000067a4e3
- (id)endOfDocument;	// IMP=0x000000000067a457
- (id)beginningOfDocument;	// IMP=0x000000000067a3cb
- (id)textStorage;	// IMP=0x000000000067a3ae
- (void)_updateSelectionWithTextRange:(id)arg1 affinity:(long long)arg2 typingAttributes:(id)arg3;	// IMP=0x000000000067a29d
- (id)_locationWithOffset:(long long)arg1;	// IMP=0x000000000067a1e6
- (id)initWithTextContainer:(id)arg1;	// IMP=0x0000000000679f40
- (id)initWithTextStorage:(id)arg1;	// IMP=0x0000000000679dff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
