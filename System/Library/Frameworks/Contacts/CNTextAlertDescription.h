//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNTextAlertDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000032a12
- (id)CNValueForContact:(id)arg1;	// IMP=0x00000000000329fd
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003294f
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000032925
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000032813
- (id)init;	// IMP=0x00000000000327e9
- (_Bool)applyABMultivalueValueBytes:(char *)arg1 length:(unsigned long long)arg2 identifier:(id)arg3 legacyIdentifier:(int)arg4 label:(id)arg5 toCNMultivalueRepresentation:(id)arg6;	// IMP=0x000000000004a2a2
- (void *)ABValueForABPerson:(void *)arg1;	// IMP=0x000000000009f590
- (_Bool)setABValue:(void *)arg1 onABPerson:(void *)arg2 error:(struct __CFError **)arg3;	// IMP=0x000000000009f50e
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009f4f2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

