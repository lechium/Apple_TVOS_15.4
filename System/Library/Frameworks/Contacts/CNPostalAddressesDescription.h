//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNPostalAddressesDescription <CNAbstractPropertyDescription>
{
}

- (id)summarizationKeys;	// IMP=0x0000000000032135
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000003211d
- (CDUnknownBlockType)fromDictionaryTransform;	// IMP=0x0000000000032104
- (CDUnknownBlockType)dictionaryTransform;	// IMP=0x00000000000320eb
- (Class)labeledValueClass;	// IMP=0x00000000000320da
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x00000000000320c5
- (id)CNValueForContact:(id)arg1;	// IMP=0x00000000000320b0
- (_Bool)isNonnull;	// IMP=0x00000000000320a8
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000031f57
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000031f2d
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000031e1b
- (id)init;	// IMP=0x0000000000031df1
- (void *)ABMultiValueValueFromCNLabeledValueValue:(id)arg1;	// IMP=0x000000000009ed6c
- (id)CNLabeledValueValueFromABMultiValueValue:(void *)arg1;	// IMP=0x000000000009ea1c
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009ea00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
