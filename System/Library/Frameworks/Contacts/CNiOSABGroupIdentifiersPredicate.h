//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSGroupPredicate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupIdentifiersPredicate <CNiOSGroupPredicate>
{
    NSArray *_identifiers;	// 24 = 0x18
}

+ (id)descriptionOfIdentifiers:(id)arg1;	// IMP=0x00000000000ed166
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ecd23
- (void).cxx_destruct;	// IMP=0x00000000000ed1ed
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000ecf7b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ecefe
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ecdf4
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x00000000000ecd2b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

