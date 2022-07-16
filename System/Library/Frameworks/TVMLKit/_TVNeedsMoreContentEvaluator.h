//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKViewElement, UIScrollView;

__attribute__((visibility("hidden")))
@interface _TVNeedsMoreContentEvaluator : NSObject
{
    UIScrollView *_scrollView;	// 8 = 0x8
    long long _axis;	// 16 = 0x10
    long long _state;	// 24 = 0x18
    IKViewElement *_viewElement;	// 32 = 0x20
    double _threshold;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000029432
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) long long axis; // @synthesize axis=_axis;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)reset;	// IMP=0x00000000000293d6
- (void)evaluateForState:(long long)arg1;	// IMP=0x000000000002910a
- (id)initWithScrollView:(id)arg1 axis:(long long)arg2;	// IMP=0x0000000000028fb7
- (id)init;	// IMP=0x0000000000028fa9

@end

