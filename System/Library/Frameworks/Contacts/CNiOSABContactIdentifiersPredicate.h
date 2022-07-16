//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNiOSContactPredicate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNiOSABContactIdentifiersPredicate <CNiOSContactPredicate>
{
    _Bool _ignoreUnifiedIdentifiers;	// 24 = 0x18
}

@property(readonly) _Bool ignoreUnifiedIdentifiers; // @synthesize ignoreUnifiedIdentifiers=_ignoreUnifiedIdentifiers;
- (id)cn_cursorForEncodedPeopleFromAddressBook:(void *)arg1 fetchRequest:(id)arg2 environment:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000ede95
- (struct __CFArray *)cn_copyPeopleInAddressBook:(void *)arg1 fetchRequest:(id)arg2 matchInfos:(id *)arg3 environment:(id)arg4 error:(struct __CFError **)arg5;	// IMP=0x00000000000edd78
- (_Bool)cn_supportsEncodedFetching;	// IMP=0x00000000000edd70
- (_Bool)cn_supportsNativeBatchFetch;	// IMP=0x00000000000edd5e
- (_Bool)cn_supportsNativeSorting;	// IMP=0x00000000000edd56
- (id)initWithIdentifiers:(id)arg1 ignoreUnifiedIdentifiers:(_Bool)arg2;	// IMP=0x00000000000edcf6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

