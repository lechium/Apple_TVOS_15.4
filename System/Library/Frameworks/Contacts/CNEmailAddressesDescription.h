//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNEmailAddressesDescription <CNAbstractPropertyDescription>
{
}

- (id)standardLabels;	// IMP=0x000000000002da5b
- (_Bool)canUnifyValue:(id)arg1 withValue:(id)arg2;	// IMP=0x000000000002da2a
- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000002da15
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000002da00
- (_Bool)isNonnull;	// IMP=0x000000000002d9f8
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002d8a7
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002d87d
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000002d76b
- (id)init;	// IMP=0x000000000002d741
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009da93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

