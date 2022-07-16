//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact;

@interface CNChangeHistoryLinkContactsEvent
{
    CNContact *_fromContact;	// 8 = 0x8
    CNContact *_toContact;	// 16 = 0x10
    CNContact *_unifiedContact;	// 24 = 0x18
}

+ (unsigned long long)instanceSortOrder;	// IMP=0x000000000001796b
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017013
- (void).cxx_destruct;	// IMP=0x00000000000179a9
@property(readonly, nonatomic) CNContact *unifiedContact; // @synthesize unifiedContact=_unifiedContact;
@property(readonly, nonatomic) CNContact *toContact; // @synthesize toContact=_toContact;
@property(readonly, nonatomic) CNContact *fromContact; // @synthesize fromContact=_fromContact;
- (long long)comparisonResultWithinSameClass:(id)arg1;	// IMP=0x00000000000177f9
- (void)acceptEventVisitor:(id)arg1;	// IMP=0x0000000000017780
- (id)description;	// IMP=0x0000000000017657
- (unsigned long long)hash;	// IMP=0x00000000000173ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001701b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016f7d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016e85
- (id)initWithFromContact:(id)arg1 toContact:(id)arg2 unifiedContact:(id)arg3;	// IMP=0x0000000000016c4d
- (id)init;	// IMP=0x0000000000016c10

@end

