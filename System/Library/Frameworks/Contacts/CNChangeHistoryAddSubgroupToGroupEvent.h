//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNGroup;

@interface CNChangeHistoryAddSubgroupToGroupEvent
{
    CNGroup *_subgroup;	// 8 = 0x8
    CNGroup *_group;	// 16 = 0x10
}

+ (unsigned long long)instanceSortOrder;	// IMP=0x000000000001620b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000015bd7
- (void).cxx_destruct;	// IMP=0x0000000000016238
@property(readonly, nonatomic) CNGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) CNGroup *subgroup; // @synthesize subgroup=_subgroup;
- (long long)comparisonResultWithinSameClass:(id)arg1;	// IMP=0x0000000000016099
- (void)acceptEventVisitor:(id)arg1;	// IMP=0x0000000000016020
- (id)description;	// IMP=0x0000000000015f34
- (unsigned long long)hash;	// IMP=0x0000000000015ddb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015bdf
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000015b5c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000015a97
- (id)initWithSubgroup:(id)arg1 group:(id)arg2;	// IMP=0x00000000000158ff
- (id)init;	// IMP=0x00000000000158c2

@end
