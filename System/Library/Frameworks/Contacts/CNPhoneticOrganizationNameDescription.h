//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNPhoneticOrganizationNameDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000029472
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000002945d
- (_Bool)isNonnull;	// IMP=0x0000000000029455
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000293a7
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002937d
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000002926b
- (id)init;	// IMP=0x0000000000029241
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009ce1e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

