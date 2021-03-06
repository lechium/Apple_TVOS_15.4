//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class CNInstantMessageAddress, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABInstantMessageAddressContactPredicate <CNiOSContactPredicate>
{
    CNInstantMessageAddress *_imAddress;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001b01
- (void).cxx_destruct;	// IMP=0x000000000000224c
@property(copy, nonatomic) CNInstantMessageAddress *imAddress; // @synthesize imAddress=_imAddress;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000202d
@property(readonly, copy) NSString *description;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000001f54
- (id)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 nserror:(id *)arg5;	// IMP=0x0000000000001d02
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x0000000000001c72
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x0000000000001c6a
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x0000000000001c62
- (_Bool)cn_supportsNativeSorting;	// IMP=0x0000000000001c5a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001bdd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001b09
- (id)initWithInstantMessageAddress:(id)arg1;	// IMP=0x0000000000001a70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

