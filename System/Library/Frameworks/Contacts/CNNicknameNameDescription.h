//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNNicknameNameDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000028b5a
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000028b45
- (_Bool)isNonnull;	// IMP=0x0000000000028b3d
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000028a8f
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x0000000000028a65
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000028953
- (id)init;	// IMP=0x0000000000028929
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009cd06

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

