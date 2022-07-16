//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSGroupPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABGroupiOSLegacyIdentifierPredicate <CNiOSGroupPredicate>
{
    int _iOSLegacyIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e947d
@property(readonly, nonatomic) int iOSLegacyIdentifier; // @synthesize iOSLegacyIdentifier=_iOSLegacyIdentifier;
@property(readonly, copy) NSString *description;
- (struct __CFArray *)cn_copyGroupsInAddressBook:(void *)arg1 error:(struct __CFError **)arg2;	// IMP=0x00000000000e9604
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e9587
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e950e
- (id)initWithiOSLegacyIdentifier:(int)arg1;	// IMP=0x00000000000e9485

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

