//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface RBSCompoundAnyPredicate
{
    NSSet *_predicates;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x00000000000177cb
- (void).cxx_destruct;	// IMP=0x0000000000017a2c
- (id)description;	// IMP=0x0000000000017958
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000178ab
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000177fd
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x00000000000177d3
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x000000000001764f
- (id)processIdentifier;	// IMP=0x0000000000017447

@end
