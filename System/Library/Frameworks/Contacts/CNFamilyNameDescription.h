//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNFamilyNameDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000028457
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000028442
- (_Bool)isNonnull;	// IMP=0x000000000002843a
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002838c
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000028362
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000028250
- (id)init;	// IMP=0x0000000000028226
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009ccb2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

