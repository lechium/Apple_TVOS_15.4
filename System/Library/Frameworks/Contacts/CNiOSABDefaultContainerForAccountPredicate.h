//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContainerPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABDefaultContainerForAccountPredicate <CNiOSContainerPredicate>
{
    NSString *_identifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000042433
- (void).cxx_destruct;	// IMP=0x0000000000042860
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, copy) NSString *description;
- (_Bool)includesDisabledContainers;	// IMP=0x0000000000042776
- (struct __CFArray *)cn_copyContainersInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x0000000000042669
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000425ec
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000042518
- (id)initWithAccountIdentifier:(id)arg1;	// IMP=0x000000000004244f
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000004243b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
