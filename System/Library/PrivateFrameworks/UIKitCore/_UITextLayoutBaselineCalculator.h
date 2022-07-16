//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITextLayoutBaselineCalculator-Protocol.h>

@class NSDictionary, NSString, _UITextLayoutController;
@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface _UITextLayoutBaselineCalculator : NSObject <_UITextLayoutBaselineCalculator>
{
    _UITextLayoutController *_textLayoutController;	// 8 = 0x8
    NSDictionary *_typingAttributes;	// 16 = 0x10
    id <UICoordinateSpace> _coordinateSpace;	// 24 = 0x18
    double _scale;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000005c4ff1
- (double)_convertOffset:(double)arg1;	// IMP=0x00000000005c4f11
@property(readonly, nonatomic) double lastBaselineOffsetFromBottom;
@property(readonly, nonatomic) double firstBaselineOffsetFromTop;
- (double)_baselineOffsetAtPosition:(id)arg1;	// IMP=0x00000000005c47e7
- (id)initWithTextLayoutController:(id)arg1 typingAttributes:(id)arg2 coordinateSpace:(id)arg3 scale:(double)arg4;	// IMP=0x00000000005c4720

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

