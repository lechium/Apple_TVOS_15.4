//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet, TVHKMediaEntitiesFetchResult;

@interface TVHKMediaEntitiesFetchResponse : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    unsigned long long _mediaEntitySubtype;	// 16 = 0x10
    TVHKMediaEntitiesFetchResult *_recentlyAddedMediaEntitiesResult;	// 24 = 0x18
    NSDictionary *_groupings;	// 32 = 0x20
    NSSet *_deletedMediaEntityIdentifiers;	// 40 = 0x28
    TVHKMediaEntitiesFetchResult *_mediaEntitiesResult;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000049214
@property(retain, nonatomic) TVHKMediaEntitiesFetchResult *mediaEntitiesResult; // @synthesize mediaEntitiesResult=_mediaEntitiesResult;
@property(copy, nonatomic) NSSet *deletedMediaEntityIdentifiers; // @synthesize deletedMediaEntityIdentifiers=_deletedMediaEntityIdentifiers;
@property(copy, nonatomic) NSDictionary *groupings; // @synthesize groupings=_groupings;
@property(retain, nonatomic) TVHKMediaEntitiesFetchResult *recentlyAddedMediaEntitiesResult; // @synthesize recentlyAddedMediaEntitiesResult=_recentlyAddedMediaEntitiesResult;
@property(nonatomic) unsigned long long mediaEntitySubtype; // @synthesize mediaEntitySubtype=_mediaEntitySubtype;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)debugDescription;	// IMP=0x00000000000490e5
- (id)description;	// IMP=0x0000000000048ee9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048a84
- (unsigned long long)hash;	// IMP=0x0000000000048900
- (_Bool)_updateWithResponse:(id)arg1 changeSet:(id)arg2 replaceContentsOnNilChanges:(_Bool)arg3;	// IMP=0x0000000000047fef
- (id)init;	// IMP=0x0000000000047f5d

@end

