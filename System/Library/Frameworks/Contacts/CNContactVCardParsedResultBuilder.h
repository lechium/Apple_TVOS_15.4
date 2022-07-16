//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNVCardParsedResultBuilder-Protocol.h>

@class CNMutableContact, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardParsedResultBuilder : NSObject <CNVCardParsedResultBuilder>
{
    CNMutableContact *_contact;	// 8 = 0x8
    _Bool _empty;	// 16 = 0x10
}

+ (id)labeledValuesWithValues:(id)arg1 transform:(CDUnknownBlockType)arg2 labels:(id)arg3 isPrimaries:(id)arg4;	// IMP=0x000000000001aabe
+ (CDUnknownBlockType)contactValueTransformForVCardKey:(id)arg1;	// IMP=0x000000000001a021
+ (id)contactKeyForVCardKey:(id)arg1;	// IMP=0x0000000000019b38
- (void).cxx_destruct;	// IMP=0x000000000001aedd
- (long long)personFlags;	// IMP=0x000000000001aea6
- (_Bool)setPersonFlags:(long long)arg1;	// IMP=0x000000000001ae73
- (unsigned long long)personFlagsByAddingContactType:(long long)arg1 toFlags:(unsigned long long)arg2;	// IMP=0x000000000001ae5d
- (long long)contactTypeFromPersonFlags:(long long)arg1;	// IMP=0x000000000001ae4c
- (id)validCountryCodes;	// IMP=0x000000000001ae44
- (void)setUnknownProperties:(id)arg1;	// IMP=0x000000000001ae3e
- (_Bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;	// IMP=0x000000000001ad14
- (_Bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;	// IMP=0x000000000001a93b
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;	// IMP=0x000000000001a81c
- (_Bool)canSetValueForProperty:(id)arg1;	// IMP=0x000000000001a814
- (id)valueForProperty:(id)arg1;	// IMP=0x000000000001a79d
- (id)build;	// IMP=0x000000000001a775
- (id)init;	// IMP=0x000000000001a709

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

