//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KoaMapper/KMMapper-Protocol.h>

@class KVItemBuilder, NSDictionary, NSNumber, NSString;

@interface KMMapper_INVocabularyItem : NSObject <KMMapper>
{
    KVItemBuilder *_builder;	// 8 = 0x8
    unsigned int _itemCounter;	// 16 = 0x10
    NSDictionary *_intentSlotToFieldTypeMap;	// 24 = 0x18
    NSNumber *_intentSlotNameKey;	// 32 = 0x20
}

+ (Class)externalObjectClass;	// IMP=0x0000000000002d5d
- (void).cxx_destruct;	// IMP=0x0000000000002d2a
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000002830
- (long long)targetItemType;	// IMP=0x0000000000002825
- (id)init;	// IMP=0x0000000000002320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

