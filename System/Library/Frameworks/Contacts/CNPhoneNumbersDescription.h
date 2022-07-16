//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNPhoneNumbersDescription <CNAbstractPropertyDescription>
{
}

- (CDUnknownBlockType)fromPlistTransform;	// IMP=0x000000000002d728
- (CDUnknownBlockType)plistTransform;	// IMP=0x000000000002d70f
- (Class)labeledValueClass;	// IMP=0x000000000002d6fe
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000002d6e6
- (id)stringForIndexingForContact:(id)arg1;	// IMP=0x000000000002d408
- (id)standardLabels;	// IMP=0x000000000002d315
- (id)equivalentLabelSets;	// IMP=0x000000000002d202
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000002d1ed
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000002d1d8
- (_Bool)isNonnull;	// IMP=0x000000000002d1d0
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002d07f
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002d055
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000002cf43
- (id)init;	// IMP=0x000000000002cf19
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000004a3fd
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;	// IMP=0x000000000009da2c
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;	// IMP=0x000000000009d9d9
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009d9bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
