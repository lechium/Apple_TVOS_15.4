//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNJobTitleDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x000000000002a6a2
- (id)CNValueForContact:(id)arg1;	// IMP=0x000000000002a68d
- (_Bool)isNonnull;	// IMP=0x000000000002a685
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002a5d7
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000002a5ad
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x000000000002a49b
- (id)init;	// IMP=0x000000000002a471
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009ce56

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

