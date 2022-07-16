//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSCoreTypesetterDelegateInternal-Protocol.h>
#import <UIFoundation/NSSecureCoding-Protocol.h>
#import <UIFoundation/__NSTextRunStorageDataSource-Protocol.h>

@class NSArray, NSLayoutManager, NSOperationQueue, NSString, NSTextElement, NSTextLayoutManager, NSTextParagraph, NSTextRange, NSTextStorage, _NSTextAttachmentLayoutContext, _NSTextAttributeStorage;
@protocol NSTextLocation;

@interface NSTextLayoutFragment : NSObject <NSCoreTypesetterDelegateInternal, __NSTextRunStorageDataSource, NSSecureCoding>
{
    NSTextLayoutManager *_textLayoutManager;	// 8 = 0x8
    NSTextElement *_textElement;	// 16 = 0x10
    NSTextRange *_rangeInElement;	// 24 = 0x18
    _NSTextAttributeStorage *_renderingAttributesTable;	// 32 = 0x20
    struct CGRect _layoutFragmentFrame;	// 40 = 0x28
    struct CGPoint _layoutPoint;	// 72 = 0x48
    _NSTextAttachmentLayoutContext *_textAttachmentLayoutContext;	// 88 = 0x58
    _Bool _isTextParagraph;	// 96 = 0x60
    struct _NSRange _characterRange;	// 104 = 0x68
    unsigned long long _sourceVerticalDelta;	// 120 = 0x78
    unsigned long long _sourceRangeDelta;	// 128 = 0x80
    struct CGRect _sourceBoundingRect;	// 136 = 0x88
    struct CGRect _destinationBoundingRect;	// 168 = 0xa8
    unsigned long long _animationType;	// 200 = 0xc8
    NSLayoutManager *_destinationLayoutManager;	// 208 = 0xd0
    NSTextStorage *_destinationTextStorage;	// 216 = 0xd8
    double _destinationVerticalDelta;	// 224 = 0xe0
    struct _NSRange _destinationGlyphRange;	// 232 = 0xe8
    NSLayoutManager *_layoutManager;	// 248 = 0xf8
    _Bool _renderingAttributesValidated;	// 256 = 0x100
    _Bool _rendersTextCorrectionMarkers;	// 257 = 0x101
    NSArray *_textLineFragments;	// 264 = 0x108
    NSOperationQueue *_layoutQueue;	// 272 = 0x110
    unsigned long long _state;	// 280 = 0x118
}

+ (id)layoutFragmentQueue;	// IMP=0x0000000000009667
+ (id)_validCoreTextRenderingAttributes;	// IMP=0x00000000000095d8
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008d81
- (void).cxx_destruct;	// IMP=0x000000000000c1c7
@property(retain) _NSTextAttachmentLayoutContext *textAttachmentLayoutContext; // @synthesize textAttachmentLayoutContext=_textAttachmentLayoutContext;
@property _Bool rendersTextCorrectionMarkers; // @synthesize rendersTextCorrectionMarkers=_rendersTextCorrectionMarkers;
@property(getter=_isRenderingAttributesValidated) _Bool _renderingAttributesValidated; // @synthesize _renderingAttributesValidated;
@property unsigned long long state; // @synthesize state=_state;
@property(retain) NSOperationQueue *layoutQueue; // @synthesize layoutQueue=_layoutQueue;
@property(copy) NSArray *textLineFragments; // @synthesize textLineFragments=_textLineFragments;
- (struct CGRect)frameForTextAttachmentAtLocation:(id)arg1;	// IMP=0x000000000000c089
- (void)_setupResolvedTextAttachmentFrames;	// IMP=0x000000000000bbec
@property(readonly, copy) NSArray *textAttachmentViewProviders;
- (void)enumerateViewportElementsFromLocation:(id)arg1 options:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bb23
- (_Bool)supportsSubelements;	// IMP=0x000000000000bb0d
- (void)setTextAttachmentProvider:(id)arg1 forLocation:(id)arg2;	// IMP=0x000000000000bad9
- (id)textAttachmentViewProviderForLocation:(id)arg1;	// IMP=0x000000000000baae
- (id)_layoutInfoForTextAttachmentAtLocation:(id)arg1;	// IMP=0x000000000000b946
- (id)_resolvedRenderingAttributesForCharacterIndex:(long long)arg1 effectiveRange:(out struct _NSRange *)arg2;	// IMP=0x000000000000b43e
- (void)layoutManagerDidSetTemporaryAttributes:(id)arg1 forTextRange:(id)arg2;	// IMP=0x000000000000b312
- (void)invalidateRenderingAttributesForTextRange:(id)arg1;	// IMP=0x000000000000b2dc
- (void)setRenderingAttributes:(id)arg1 forTextRange:(id)arg2;	// IMP=0x000000000000b13a
- (void)removeRenderingAttribute:(id)arg1 forTextRange:(id)arg2;	// IMP=0x000000000000b123
- (void)addRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;	// IMP=0x000000000000b111
- (void)setRenderingAttribute:(id)arg1 value:(id)arg2 forTextRange:(id)arg3;	// IMP=0x000000000000b047
- (id)_textAttributesAffectingLayout;	// IMP=0x000000000000af52
- (id)_coreTextAttributes;	// IMP=0x000000000000aefc
- (void)enumerateRenderingAttributesFromLocation:(id)arg1 reverse:(_Bool)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ad92
@property(readonly) id <NSTextLocation> baseLocation;
- (long long)offsetFromLocation:(id)arg1 toLocation:(id)arg2;	// IMP=0x000000000000ad27
- (id)locationFromLocation:(id)arg1 withOffset:(long long)arg2;	// IMP=0x000000000000ace7
@property(readonly, getter=isCountableDataSource) _Bool countableDataSource;
@property(readonly, copy) NSString *description;
@property(readonly) struct CGRect renderingSurfaceBounds;
- (void)invalidateLayout;	// IMP=0x000000000000a67b
- (void)layout;	// IMP=0x000000000000a5a8
- (void)estimateSize;	// IMP=0x000000000000a404
- (void)_layout;	// IMP=0x000000000000977b
- (long long)_baseWritingDirection;	// IMP=0x00000000000096f9
- (id)representedRangeAtPoint:(struct CGPoint)arg1;	// IMP=0x00000000000095d0
- (double)verticalOffsetOfTextLocation:(id)arg1 withAffinity:(long long)arg2;	// IMP=0x000000000000931d
- (void)drawAtPoint:(struct CGPoint)arg1 context:(struct CGContext *)arg2;	// IMP=0x000000000000930b
- (void)drawAtPoint:(struct CGPoint)arg1 inContext:(struct CGContext *)arg2;	// IMP=0x00000000000090e1
- (void)setLayoutFragmentFrameOrigin:(struct CGPoint)arg1;	// IMP=0x0000000000009064
- (struct CGPoint)layoutFragmentFrameOrigin;	// IMP=0x000000000000901d
@property struct CGRect layoutFragmentFrame;
- (struct CGSize)layoutSize;	// IMP=0x0000000000008f73
- (id)representedRange;	// IMP=0x0000000000008f61
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008e85
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000008d89
- (void)dealloc;	// IMP=0x0000000000008ce2
@property(readonly) NSTextParagraph *textParagraph; // @dynamic textParagraph;
@property(readonly) NSTextRange *rangeInElement; // @dynamic rangeInElement;
- (void)setTextElement:(id)arg1;	// IMP=0x0000000000008bc3
@property(readonly) __weak NSTextElement *textElement; // @dynamic textElement;
- (void)setTextLayoutManager:(id)arg1;	// IMP=0x0000000000008b83
@property(readonly) __weak NSTextLayoutManager *textLayoutManager; // @dynamic textLayoutManager;
- (void)setLayoutPoint:(struct CGPoint)arg1;	// IMP=0x0000000000008b63
- (struct CGPoint)layoutPoint;	// IMP=0x0000000000008b1c
@property(readonly) double bottomMargin;
@property(readonly) double topMargin;
@property(readonly) double trailingPadding;
@property(readonly) double leadingPadding;
- (id)init;	// IMP=0x0000000000008af0
- (id)initWithTextElement:(id)arg1 range:(id)arg2;	// IMP=0x0000000000008a44
- (unsigned long long)animationType;	// IMP=0x000000000000c5c8
@property struct CGRect destinationBoundingRect; // @dynamic destinationBoundingRect;
- (struct CGRect)sourceBoundingRect;	// IMP=0x000000000000c58c
- (struct _NSRange)characterRange;	// IMP=0x000000000000c57e
- (id)layoutManager;	// IMP=0x000000000000c56d
- (void)drawAtPoint:(struct CGPoint)arg1 contentType:(unsigned long long)arg2;	// IMP=0x000000000000c45f
- (void)_setup;	// IMP=0x000000000000c3d0
@property struct _NSRange destinationGlyphRange;
@property double destinationVerticalDelta;
@property(retain) NSTextStorage *destinationTextStorage;
@property NSLayoutManager *destinationLayoutManager;
- (id)initWithLayoutManager:(id)arg1 characterRange:(struct _NSRange)arg2 animationType:(unsigned long long)arg3 boundingRect:(struct CGRect)arg4;	// IMP=0x000000000000c1eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

