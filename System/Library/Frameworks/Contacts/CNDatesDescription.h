//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNDatesDescription <CNAbstractPropertyDescription>
{
}

- (CDUnknownBlockType)fromPlistTransform;	// IMP=0x000000000002e770
- (_Bool)isValidMultiValueValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e757
- (Class)labeledValueClass;	// IMP=0x000000000002e746
- (id)standardLabels;	// IMP=0x000000000002e6c8
- (_Bool)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2;	// IMP=0x000000000002e656
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000002e47d
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000002e468
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000002e453
- (_Bool)isNonnull;	// IMP=0x000000000002e44b
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002e2fa
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002e2d0
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000002e1be
- (id)init;	// IMP=0x000000000002e194
- (id)CNLabeledValueValueFromABMultiValueValueBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000004a47b
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;	// IMP=0x000000000009db00
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;	// IMP=0x000000000009dae7
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009dacb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

