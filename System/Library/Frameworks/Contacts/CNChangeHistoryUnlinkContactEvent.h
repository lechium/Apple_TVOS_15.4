//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact;

@interface CNChangeHistoryUnlinkContactEvent
{
    CNContact *_contact;	// 8 = 0x8
}

+ (unsigned long long)instanceSortOrder;	// IMP=0x0000000000018012
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017bcf
- (void).cxx_destruct;	// IMP=0x000000000001802e
@property(readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
- (long long)comparisonResultWithinSameClass:(id)arg1;	// IMP=0x0000000000017f43
- (void)acceptEventVisitor:(id)arg1;	// IMP=0x0000000000017eca
- (id)description;	// IMP=0x0000000000017e24
- (unsigned long long)hash;	// IMP=0x0000000000017d4e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000017bd7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000017ba5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000017b18
- (id)initWithContact:(id)arg1;	// IMP=0x0000000000017a28
- (id)init;	// IMP=0x00000000000179eb

@end

