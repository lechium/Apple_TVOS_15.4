//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNAbstractPropertyDescription-Protocol.h>

@class NSString;

@interface CNImageHashDescription <CNAbstractPropertyDescription>
{
}

- (void)setCNValue:(id)arg1 onContact:(id)arg2;	// IMP=0x0000000000033598
- (id)CNValueForContact:(id)arg1;	// IMP=0x0000000000033583
- (Class)valueClass;	// IMP=0x0000000000033572
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x00000000000334c4
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;	// IMP=0x000000000003349a
- (_Bool)isEqualForContact:(id)arg1 other:(id)arg2;	// IMP=0x0000000000033388
- (id)init;	// IMP=0x000000000003335e
- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000004a596
- (_Bool)abPropertyID:(int *)arg1;	// IMP=0x000000000009f709

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

