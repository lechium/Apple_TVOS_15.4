//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNPhoneticGivenNameDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000028da0
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000028d8b
- (_Bool)isNonnull;	// IMP=0x0000000000028d83
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000028cd5
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000028cab
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000028b99
- (id)init;	// IMP=0x0000000000028b6f
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009cd22

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
