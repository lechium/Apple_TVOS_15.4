//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNBirthdayDescription <CNAbstractPropertyDescription>
{
}

- (CDUnknownBlockType)fromPlistTransform;	// IMP=0x000000000002ac6b
- (_Bool)isValidValue:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002ab51
- (_Bool)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2;	// IMP=0x000000000002aadf
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000002a906
- (Class)valueClass;	// IMP=0x000000000002a8f5
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000002a8e0
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000002a8cb
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002a81d
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002a7f3
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000002a6e1
- (id)init;	// IMP=0x000000000002a6b7
- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000049b15
- (id)CNValueFromABValue:(void *)arg1;	// IMP=0x000000000009cec6
- (void *)ABValueFromCNValue:(id)arg1;	// IMP=0x000000000009ce8e
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009ce72

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

