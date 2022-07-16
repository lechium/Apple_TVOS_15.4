//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ABGroupMembershipPredicate
{
    void *_group;	// 16 = 0x10
    void *_store;	// 24 = 0x18
    NSString *_accountIdentifier;	// 32 = 0x20
}

@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)description;	// IMP=0x0000000000035c9f
- (void)ab_bindWhereClauseComponentOfStatement:(struct CPSqliteStatement *)arg1 withBindingOffset:(int *)arg2 predicateIdentifier:(int)arg3;	// IMP=0x0000000000035ba6
- (id)queryWhereStringForPredicateIdentifier:(int)arg1;	// IMP=0x0000000000035a95
- (_Bool)isValid;	// IMP=0x0000000000035a42
@property(nonatomic) void *store;
@property(nonatomic) void *group;
- (void)dealloc;	// IMP=0x0000000000035928

@end
