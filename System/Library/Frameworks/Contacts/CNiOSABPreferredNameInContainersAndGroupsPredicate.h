//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABPreferredNameInContainersAndGroupsPredicate <CNiOSContactPredicate>
{
    NSArray *_containerIdentifiers;	// 24 = 0x18
    NSArray *_groupIdentifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d910a
- (void).cxx_destruct;	// IMP=0x00000000000d9781
@property(readonly, copy, nonatomic) NSArray *groupIdentifiers; // @synthesize groupIdentifiers=_groupIdentifiers;
@property(readonly, copy, nonatomic) NSArray *containerIdentifiers; // @synthesize containerIdentifiers=_containerIdentifiers;
@property(readonly, copy) NSString *description;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000d9649
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000d9437
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000d942f
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000d9427
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000d941f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d9380
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d91d9
- (id)initWithContainerIdentifiers:(id)arg1 groupIdentifiers:(id)arg2;	// IMP=0x00000000000d9112

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

