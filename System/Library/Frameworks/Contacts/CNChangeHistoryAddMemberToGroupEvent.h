//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, CNGroup;

@interface CNChangeHistoryAddMemberToGroupEvent
{
    CNContact *_member;	// 8 = 0x8
    CNGroup *_group;	// 16 = 0x10
}

+ (unsigned long long)instanceSortOrder;	// IMP=0x0000000000014dd9
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000146e2
- (void).cxx_destruct;	// IMP=0x0000000000014e06
@property(readonly, nonatomic) CNGroup *group; // @synthesize group=_group;
@property(readonly, nonatomic) CNContact *member; // @synthesize member=_member;
- (long long)comparisonResultWithinSameClass:(id)arg1;	// IMP=0x0000000000014c67
- (void)acceptEventVisitor:(id)arg1;	// IMP=0x0000000000014bee
- (id)description;	// IMP=0x0000000000014b02
- (unsigned long long)hash;	// IMP=0x0000000000014988
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000146ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014667
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000145a2
- (id)initWithMember:(id)arg1 group:(id)arg2;	// IMP=0x000000000001440a
- (id)init;	// IMP=0x00000000000143cd

@end

