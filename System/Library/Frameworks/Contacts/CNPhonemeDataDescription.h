//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNPhonemeDataDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000032417
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000032402
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000032354
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003232a
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000032218
- (id)init;	// IMP=0x00000000000321ee
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009f09f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

