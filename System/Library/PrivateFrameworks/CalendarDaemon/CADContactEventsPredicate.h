//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface CADContactEventsPredicate
{
    NSSet *_contactEmailAddresses;	// 32 = 0x20
    NSSet *_contactNameComponents;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000ba3a
- (void).cxx_destruct;	// IMP=0x000000000000c2e0
@property(retain) NSSet *contactNameComponents; // @synthesize contactNameComponents=_contactNameComponents;
@property(retain) NSSet *contactEmailAddresses; // @synthesize contactEmailAddresses=_contactEmailAddresses;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000bef7
- (id)predicateFormat;	// IMP=0x000000000000bd5d
- (id)defaultPropertiesToLoad;	// IMP=0x000000000000bd53
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000bc0d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000ba4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ba42
- (id)initWithCalendarIDs:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 contacts:(id)arg4;	// IMP=0x000000000000b2f8
- (_Bool)_isCandidate:(void *)arg1 allowAllDayEvent:(_Bool)arg2;	// IMP=0x000000000000c9a0
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;	// IMP=0x000000000000c311

@end

