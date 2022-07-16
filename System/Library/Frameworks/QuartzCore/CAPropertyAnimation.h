//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CAValueFunction, NSString;

@interface CAPropertyAnimation
{
}

+ (id)animationWithKeyPath:(id)arg1;	// IMP=0x00000000001c23c9
- (_Bool)cumulative;	// IMP=0x00000000001c22ae
- (_Bool)additive;	// IMP=0x00000000001c229c
@property(retain) CAValueFunction *valueFunction;
@property(getter=isCumulative) _Bool cumulative;
@property(copy) NSString *keyPath;
@property(getter=isAdditive) _Bool additive;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;	// IMP=0x00000000001c2011
- (_Bool)_setCARenderAnimation:(void *)arg1 layer:(id)arg2;	// IMP=0x00000000001c1e04
- (void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3;	// IMP=0x00000000001c1dfe

@end
