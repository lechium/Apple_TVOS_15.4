//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNOrganizationNameDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000002a216
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000002a201
- (_Bool)isNonnull;	// IMP=0x000000000002a1f9
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002a14b
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002a121
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000002a00f
- (id)init;	// IMP=0x0000000000029fe5
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009ce02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

