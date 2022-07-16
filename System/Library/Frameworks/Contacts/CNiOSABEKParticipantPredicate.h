//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface CNiOSABEKParticipantPredicate <CNiOSContactPredicate>
{
    NSString *_name;	// 24 = 0x18
    NSURL *_URL;	// 32 = 0x20
    NSString *_emailAddress;	// 40 = 0x28
    NSString *_customDescription;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000fbed4
- (void).cxx_destruct;	// IMP=0x00000000000fc954
@property(copy, nonatomic) NSString *customDescription; // @synthesize customDescription=_customDescription;
@property(copy, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000fc795
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000fc486
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000fc47e
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000fc476
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000fc46e
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000fc1d5
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000fc009
- (id)initWithName:(id)arg1 URL:(id)arg2 emailAddress:(id)arg3 customDescription:(id)arg4;	// IMP=0x00000000000fbedc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
