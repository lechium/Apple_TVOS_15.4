//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSLayoutXAxisAnchor
{
}

- (_Bool)isCompatibleWithAnchor:(id)arg1;	// IMP=0x0000000000031c41
- (_Bool)validateOtherAttribute:(long long)arg1;	// IMP=0x0000000000031bd2
- (_Bool)_validateOtherXAxisAnchorDirectionAbstraction:(long long)arg1;	// IMP=0x0000000000031b81
- (id)constraintLessThanOrEqualToSystemSpacingAfterAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031b63
- (id)constraintGreaterThanOrEqualToSystemSpacingAfterAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031b47
- (id)constraintEqualToSystemSpacingAfterAnchor:(id)arg1 multiplier:(double)arg2;	// IMP=0x0000000000031b2e
- (id)offsetBy:(double)arg1;	// IMP=0x0000000000023c68
- (id)offsetByDimension:(id)arg1;	// IMP=0x0000000000023c56
- (id)offsetByDimension:(id)arg1 times:(double)arg2 plus:(double)arg3;	// IMP=0x0000000000023c44
- (id)distanceTo:(id)arg1;	// IMP=0x0000000000023c32
- (id)offsetTo:(id)arg1;	// IMP=0x0000000000023c20
- (id)anchorByOffsettingWithConstant:(double)arg1;	// IMP=0x0000000000023bdb
- (id)anchorByOffsettingWithDimension:(id)arg1 multiplier:(double)arg2 constant:(double)arg3;	// IMP=0x0000000000023b84
- (id)anchorByOffsettingWithDimension:(id)arg1;	// IMP=0x0000000000023b67
- (id)anchorWithOffsetToAnchor:(id)arg1;	// IMP=0x0000000000023b48
- (long long)_directionAbstraction;	// IMP=0x0000000000032012

@end

