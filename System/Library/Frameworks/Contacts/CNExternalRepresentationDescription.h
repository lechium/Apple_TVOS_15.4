//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNExternalRepresentationDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000027440
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000002742b
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002737d
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000027353
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000027241
- (void)resetGuardianManagedValueOnContact:(id)arg1;	// IMP=0x000000000002722a
- (Class)valueClass;	// IMP=0x0000000000027219
- (id)init;	// IMP=0x00000000000271ef
- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000004a57d
- (unsigned int)abPropertyType;	// IMP=0x000000000009cbff
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009cbe3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

