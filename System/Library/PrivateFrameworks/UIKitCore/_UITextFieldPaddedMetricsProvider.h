//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITextFieldMetricsProvider-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UITextFieldPaddedMetricsProvider : NSObject <_UITextFieldMetricsProvider>
{
    _Bool _canIntrinsicHeightExceedContentHeight;	// 8 = 0x8
    double _minimumIntrinsicHeight;	// 16 = 0x10
    struct UIEdgeInsets _padding;	// 24 = 0x18
}

@property(nonatomic) _Bool canIntrinsicHeightExceedContentHeight; // @synthesize canIntrinsicHeightExceedContentHeight=_canIntrinsicHeightExceedContentHeight;
@property(nonatomic) double minimumIntrinsicHeight; // @synthesize minimumIntrinsicHeight=_minimumIntrinsicHeight;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(readonly, nonatomic) _Bool shouldExtendCaretHeight;
@property(readonly, nonatomic) double naturalHeight;
- (struct CGSize)intrinsicSizeForContentSize:(struct CGSize)arg1;	// IMP=0x000000000057ee46
- (struct CGRect)contentFrameForBounds:(struct CGRect)arg1;	// IMP=0x000000000057ed99
- (id)initWithPerEdgePadding:(struct UIEdgeInsets)arg1;	// IMP=0x000000000057ed52
- (id)initWithSymmetricalPadding:(struct CGSize)arg1;	// IMP=0x000000000057ecf6
- (id)init;	// IMP=0x000000000057ecb7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

