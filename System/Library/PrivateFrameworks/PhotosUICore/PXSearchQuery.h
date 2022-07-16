//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSArray, NSString, PXSearchQueryOptions;

@interface PXSearchQuery : NSObject <NSCopying>
{
    PXSearchQueryOptions *_options;	// 8 = 0x8
    NSString *_searchText;	// 16 = 0x10
    NSArray *_searchTokens;	// 24 = 0x18
    NSString *_priorityAssetUUID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000072e1ed
@property(readonly, copy, nonatomic) NSString *priorityAssetUUID; // @synthesize priorityAssetUUID=_priorityAssetUUID;
@property(readonly, copy, nonatomic) NSArray *searchTokens; // @synthesize searchTokens=_searchTokens;
@property(readonly, copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(readonly, copy, nonatomic) PXSearchQueryOptions *options; // @synthesize options=_options;
- (unsigned long long)hash;	// IMP=0x000000000072e138
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000072df58
- (_Bool)isEquivalentToRecentSearchQuery:(id)arg1;	// IMP=0x000000000072de8e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000072dd82
- (id)description;	// IMP=0x000000000072dc5c
@property(readonly, nonatomic) _Bool supportsRecentSearch;
@property(readonly, nonatomic) unsigned long long searchTermCount;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool hasSearchText;
@property(readonly, copy, nonatomic) NSString *localizedQueryString;
@property(readonly, copy, nonatomic) NSArray *queryTokens;
- (id)dictionaryRepresentation;	// IMP=0x000000000072d3de
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000072cffd
- (id)initWithSearchText:(id)arg1 searchTokens:(id)arg2 options:(id)arg3;	// IMP=0x000000000072cd1b
- (id)init;	// IMP=0x000000000072cca1

@end
