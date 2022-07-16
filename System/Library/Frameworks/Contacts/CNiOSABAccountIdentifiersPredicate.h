//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSAccountPredicate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABAccountIdentifiersPredicate <CNiOSAccountPredicate>
{
    NSArray *_identifiers;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002623f
- (void).cxx_destruct;	// IMP=0x0000000000026659
@property(readonly, copy, nonatomic) NSArray *identifiers; // @synthesize identifiers=_identifiers;
- (struct __CFArray *)cn_copyAccountsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000264c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000026444
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000026329
- (id)initWithIdentifiers:(id)arg1;	// IMP=0x0000000000026260
- (id)initWithPredicate:(id)arg1;	// IMP=0x0000000000026247

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

