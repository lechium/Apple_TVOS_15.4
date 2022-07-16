//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CKDistributedTimestampStateVector
{
}

- (id)descriptionWithStringSiteIdentifiers:(_Bool)arg1;	// IMP=0x00000000000ec0ef
- (id)clockVector;	// IMP=0x00000000000ec0b1
- (id)vectorFilteredByAtomState:(unsigned char)arg1;	// IMP=0x00000000000ebff0
- (void)enumerateAllClockValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ebe98
- (void)enumerateClockValuesForSiteIdentifier:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ebd81
- (void)addClockValuesInIndexSet:(id)arg1 withClockType:(unsigned char)arg2 atomState:(unsigned char)arg3 forSiteIdentifier:(id)arg4;	// IMP=0x00000000000ebc83
- (void)addClockValuesInIndexSet:(id)arg1 withAtomState:(unsigned char)arg2 forSiteIdentifier:(id)arg3;	// IMP=0x00000000000ebc66
- (void)addClockValuesInIndexSet:(id)arg1 withClockType:(unsigned char)arg2 forSiteIdentifier:(id)arg3;	// IMP=0x00000000000ebc4b
- (void)intersectStateVector:(id)arg1;	// IMP=0x00000000000eba5d
- (void)minusStateVector:(id)arg1;	// IMP=0x00000000000eb380
- (void)unionStateVector:(id)arg1;	// IMP=0x00000000000eb36e
- (void)unionVector:(id)arg1;	// IMP=0x00000000000ead2b
- (unsigned char)vectorExpansionState;	// IMP=0x00000000000ead20
- (_Bool)hasAtomStateNotInStateVector:(id)arg1;	// IMP=0x00000000000eac88

@end

