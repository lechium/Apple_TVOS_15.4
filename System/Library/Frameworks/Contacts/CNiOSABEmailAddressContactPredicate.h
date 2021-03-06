//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABEmailAddressContactPredicate <CNiOSContactPredicate>
{
}

- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000a6901
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000a67a8
- (_Bool)_inputsAreValid;	// IMP=0x00000000000a669d
- (_Bool)_stringsAreNonEmpty:(id)arg1;	// IMP=0x00000000000a65a8
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000a65a0
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000a6598
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000a6590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

