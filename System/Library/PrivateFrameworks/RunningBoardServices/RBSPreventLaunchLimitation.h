//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RBSProcessPredicate;

@interface RBSPreventLaunchLimitation
{
    RBSProcessPredicate *_predicate;	// 8 = 0x8
}

+ (id)limitationWithPredicate:(id)arg1;	// IMP=0x0000000000036873
- (void).cxx_destruct;	// IMP=0x0000000000036bfb
@property(readonly, nonatomic) RBSProcessPredicate *predicate; // @synthesize predicate=_predicate;
- (unsigned long long)hash;	// IMP=0x0000000000036bcd
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000036b48
- (id)initWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000036aad
- (void)encodeWithRBSXPCCoder:(id)arg1;	// IMP=0x0000000000036a30
- (id)description;	// IMP=0x00000000000369ac

@end

