//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol NSObject><NSCopying;

@interface GKResource : NSObject
{
    _Bool _invalid;	// 8 = 0x8
    NSMutableDictionary *_metadataLookup;	// 16 = 0x10
    id <NSObject><NSCopying> _resourceID;	// 24 = 0x18
    id _representedItem;	// 32 = 0x20
    double _TTL;	// 40 = 0x28
}

+ (id)resourceWithID:(id)arg1 representedItem:(id)arg2 TTL:(double)arg3;	// IMP=0x00200000001bb86a
+ (id)resourceWithID:(id)arg1 representedItem:(id)arg2;	// IMP=0x00100000001bb855
+ (id)resourceWithID:(id)arg1;	// IMP=0x00100000001bb83e
+ (id)resourceForRemoveGames:(id)arg1;	// IMP=0x00100000000fe443
+ (id)resourceForPlayer:(id)arg1 TTL:(double)arg2;	// IMP=0x00100000001bbe14
+ (id)resourceForPlayer:(id)arg1;	// IMP=0x00100000001bbdff
- (void).cxx_destruct;	// IMP=0x00200000001bbdcc
@property(retain, nonatomic) NSMutableDictionary *metadataLookup; // @synthesize metadataLookup=_metadataLookup;
@property(nonatomic, getter=isInvalid) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) double TTL; // @synthesize TTL=_TTL;
@property(retain, nonatomic) id representedItem; // @synthesize representedItem=_representedItem;
@property(retain, nonatomic) id <NSObject><NSCopying> resourceID; // @synthesize resourceID=_resourceID;
@property(readonly, nonatomic, getter=isExpired) _Bool expired;
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00100000001bbcc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001bbc34
- (unsigned long long)hash;	// IMP=0x00100000001bbc1e
- (id)description;	// IMP=0x00100000001bba9e
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001bba1a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001bba0f
- (id)init;	// IMP=0x00100000001bb9cb
- (id)initWithResourceID:(id)arg1 representedItem:(id)arg2 TTL:(double)arg3;	// IMP=0x00100000001bb8f2

@end
