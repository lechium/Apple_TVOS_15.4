//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <KoaMapper/KMMapper-Protocol.h>

@class KVItemBuilder, NSNumber, NSString;

@interface KMMapper_CNContact : NSObject <KMMapper>
{
    KVItemBuilder *_builder;	// 8 = 0x8
    NSNumber *_meCardIdentifierKey;	// 16 = 0x10
    NSNumber *_alternativeItemIdKey;	// 24 = 0x18
}

+ (Class)externalObjectClass;	// IMP=0x000000000000580a
- (void).cxx_destruct;	// IMP=0x00000000000057d7
- (_Bool)_addLabeledFieldsOfType:(long long)arg1 labeledValues:(id)arg2 labelOnly:(_Bool)arg3 error:(id *)arg4;	// IMP=0x00000000000053a5
- (id)itemsFromExternalObject:(id)arg1 additionalFields:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000043af
- (long long)targetItemType;	// IMP=0x00000000000043a4
- (id)init;	// IMP=0x000000000000430c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
