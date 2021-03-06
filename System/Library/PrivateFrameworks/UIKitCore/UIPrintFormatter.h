//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying>
{
    _Bool _needsRecalc;	// 8 = 0x8
    _Bool _imagePDFAnnotations;	// 9 = 0x9
    UIPrintPageRenderer *_printPageRenderer;	// 16 = 0x10
    double _maximumContentHeight;	// 24 = 0x18
    double _maximumContentWidth;	// 32 = 0x20
    long long _startPage;	// 40 = 0x28
    long long _pageCount;	// 48 = 0x30
    struct UIEdgeInsets _contentInsets;	// 56 = 0x38
    struct UIEdgeInsets _perPageContentInsets;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000b0bb8b
@property(nonatomic) _Bool imagePDFAnnotations; // @synthesize imagePDFAnnotations=_imagePDFAnnotations;
@property(nonatomic) long long startPage; // @synthesize startPage=_startPage;
@property(nonatomic) struct UIEdgeInsets perPageContentInsets; // @synthesize perPageContentInsets=_perPageContentInsets;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) double maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property(nonatomic) double maximumContentHeight; // @synthesize maximumContentHeight=_maximumContentHeight;
@property(nonatomic) __weak UIPrintPageRenderer *printPageRenderer; // @synthesize printPageRenderer=_printPageRenderer;
- (void)drawInRect:(struct CGRect)arg1 forPageAtIndex:(long long)arg2;	// IMP=0x0000000000b0bb03
- (struct CGRect)rectForPageAtIndex:(long long)arg1;	// IMP=0x0000000000b0ba4b
- (struct CGRect)_pageContentRect:(_Bool)arg1;	// IMP=0x0000000000b0b79b
- (long long)_recalcPageCount;	// IMP=0x0000000000b0b793
@property(readonly, nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
- (void)_recalcIfNecessary;	// IMP=0x0000000000b0b747
- (void)_setNeedsRecalc;	// IMP=0x0000000000b0b73d
- (void)removeFromPrintPageRenderer;	// IMP=0x0000000000b0b57a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b0b529
- (id)init;	// IMP=0x0000000000b0b4b5

@end

