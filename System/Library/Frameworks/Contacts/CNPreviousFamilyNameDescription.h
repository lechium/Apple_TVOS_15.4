//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNPreviousFamilyNameDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000028914
- (id)CNValueForContact:(id)arg1;	// IMP=0x00000000000288ff
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000000288ce
- (_Bool)isNonnull;	// IMP=0x00000000000288c6
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000028818
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000287ee
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x00000000000286dc
- (id)init;	// IMP=0x00000000000286b2
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009ccea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

