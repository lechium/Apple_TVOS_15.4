//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIView;

@interface TVLJSView : NSObject
{
    UIView *_underlyingUIView;	// 8 = 0x8
}

+ (struct OpaqueJSValue *)constructObjectWithClassName:(id)arg1 withATVJSViewClass:(Class)arg2 inContext:(struct OpaqueJSContext *)arg3;	// IMP=0x000000000000c83c
+ (id)viewFromValue:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2 exception:(const struct OpaqueJSValue **)arg3;	// IMP=0x000000000000c7b0
+ (void)addConstructorToObject:(struct OpaqueJSValue *)arg1 inContext:(struct OpaqueJSContext *)arg2;	// IMP=0x000000000000bf1a
@property(readonly, retain, nonatomic) UIView *underlyingUIView; // @synthesize underlyingUIView=_underlyingUIView;
- (id)makeUnderlyingUIView;	// IMP=0x000000000000c96a
- (void)dealloc;	// IMP=0x000000000000c8e1

@end
