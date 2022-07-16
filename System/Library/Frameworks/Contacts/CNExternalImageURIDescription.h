//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNExternalImageURIDescription <CNAbstractPropertyDescription>
{
}

- (void)resetGuardianManagedValueOnContact:(id)arg1;	// IMP=0x0000000000027b3d
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000027b28
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000027b13
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000027a65
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000027a3b
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000027929
- (id)init;	// IMP=0x00000000000278ff
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009cc26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
