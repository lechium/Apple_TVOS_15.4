//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PLQueryChangeDetectionCriteria : NSObject
{
    NSMutableDictionary *_attributeKeyPathsByEntityNameAffectingFetchResult;	// 8 = 0x8
    NSMutableDictionary *_relationshipKeyPathsByEntityNameAffectingFetchResult;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000212a9d
- (void)enumerateEntitiesAndRelationshipsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000212a87
- (void)enumerateEntitiesAndAttributesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000212a71
- (void)addRelationshipKeyPath:(id)arg1 forEntityName:(id)arg2;	// IMP=0x00000000002129c7
- (void)addAttributeKeyPath:(id)arg1 forEntityName:(id)arg2;	// IMP=0x000000000021291d
@property(readonly) _Bool isEmpty;
- (id)description;	// IMP=0x000000000021289c
- (id)init;	// IMP=0x0000000000212827

@end

