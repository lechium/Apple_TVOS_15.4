//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSMutableData, NSString;

@interface UIWKDocumentContext : NSObject
{
    _Bool _rectsAreInCharacterOrder;	// 8 = 0x8
    struct _NSRange _lastRectRange;	// 16 = 0x10
    NSMutableData *_selectionRects;	// 32 = 0x20
    NSObject *_contextBefore;	// 40 = 0x28
    NSObject *_selectedText;	// 48 = 0x30
    NSObject *_contextAfter;	// 56 = 0x38
    NSObject *_markedText;	// 64 = 0x40
    NSAttributedString *_annotatedText;	// 72 = 0x48
    struct _NSRange _selectedRangeInMarkedText;	// 80 = 0x50
}

@property(copy, nonatomic) NSAttributedString *annotatedText; // @synthesize annotatedText=_annotatedText;
@property(nonatomic) struct _NSRange selectedRangeInMarkedText; // @synthesize selectedRangeInMarkedText=_selectedRangeInMarkedText;
@property(copy, nonatomic) NSObject *markedText; // @synthesize markedText=_markedText;
@property(copy, nonatomic) NSObject *contextAfter; // @synthesize contextAfter=_contextAfter;
@property(copy, nonatomic) NSObject *selectedText; // @synthesize selectedText=_selectedText;
@property(copy, nonatomic) NSObject *contextBefore; // @synthesize contextBefore=_contextBefore;
@property(retain, nonatomic) NSMutableData *_selectionRects; // @synthesize _selectionRects;
- (void)enumerateLayoutRectsWithOptions:(unsigned long long)arg1 characterRange:(struct _NSRange)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000e4b699
- (void)enumerateLayoutRects:(CDUnknownBlockType)arg1;	// IMP=0x0000000000e4b675
- (struct _NSRange)deltaForSelectionRange:(struct _NSRange)arg1;	// IMP=0x0000000000e4b634
- (id)stringContainedWithinRect:(struct CGRect)arg1;	// IMP=0x0000000000e4b53b
- (struct _NSRange)rangeContainedWithinRect:(struct CGRect)arg1;	// IMP=0x0000000000e4b3d4
- (id)characterRectsForCharacterRange:(struct _NSRange)arg1;	// IMP=0x0000000000e4b2eb
- (unsigned long long)closestCharacterIndexForPoint:(struct CGPoint)arg1;	// IMP=0x0000000000e4b16f
- (void)sortTextRectsByCharacterRange;	// IMP=0x0000000000e4ae49
- (void)addTextRect:(struct CGRect)arg1 forCharacterRange:(struct _NSRange)arg2;	// IMP=0x0000000000e4ad6a
- (void)resetTextRects;	// IMP=0x0000000000e4ad3c
@property(readonly, nonatomic) struct _NSRange markedTextRange;
@property(readonly, nonatomic) struct _NSRange selectedTextRange;
@property(readonly, nonatomic) NSString *_markedTextString;
@property(readonly, nonatomic) NSString *_contextAfterString;
@property(readonly, nonatomic) NSString *_selectedTextString;
@property(readonly, nonatomic) NSString *_contextBeforeString;
- (void)dealloc;	// IMP=0x0000000000e4aa4b
- (id)init;	// IMP=0x0000000000e4aa04

@end

