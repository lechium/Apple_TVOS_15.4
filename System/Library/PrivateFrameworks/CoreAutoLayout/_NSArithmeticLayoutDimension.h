//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreAutoLayout/NSCompositeLayoutAnchor-Protocol.h>

@class NSArray, NSLayoutDimension;

@interface _NSArithmeticLayoutDimension <NSCompositeLayoutAnchor>
{
    NSLayoutDimension *_rootLayoutDimension;	// 64 = 0x40
    double _multiplier;	// 72 = 0x48
    double _constant;	// 80 = 0x50
}

@property(readonly) NSArray *_childAnchors;
- (id)equationDescription;	// IMP=0x0000000000021567
- (double)_valueInEngine:(id)arg1;	// IMP=0x000000000002151d
- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;	// IMP=0x0000000000021461
- (id)_nearestAncestorLayoutItem;	// IMP=0x0000000000021444
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000021384
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000211df
- (void)dealloc;	// IMP=0x000000000002119d
- (id)initWithAnchor:(id)arg1;	// IMP=0x0000000000021116
- (id)initWithMultiplier:(double)arg1 dimension:(id)arg2 constant:(double)arg3;	// IMP=0x000000000002108c

@end

