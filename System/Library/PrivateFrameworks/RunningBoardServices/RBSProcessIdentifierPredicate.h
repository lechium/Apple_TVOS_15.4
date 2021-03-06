//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol RBSProcessIdentifier;

__attribute__((visibility("hidden")))
@interface RBSProcessIdentifierPredicate
{
    id <RBSProcessIdentifier> _identifier;	// 8 = 0x8
}

+ (_Bool)supportsRBSXPCSecureCoding;	// IMP=0x0000000000031859
- (void).cxx_destruct;	// IMP=0x0000000000031934
@property(readonly, nonatomic) id <RBSProcessIdentifier> identifier; // @synthesize identifier=_identifier;
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x000000000003188b
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000031861
- (id)description;	// IMP=0x00000000000317d5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000031750
- (unsigned long long)hash;	// IMP=0x00000000000316fa
- (id)processPredicate;	// IMP=0x00000000000316de
- (_Bool)matchesProcess:(id)arg1;	// IMP=0x00000000000316c1
- (id)initWithIdentifier:(id)arg1;	// IMP=0x00000000000315d8

@end

