//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSSecureCoding-Protocol.h>

@class NSDictionary, NSIndexSet, NSMutableSet, NSString, PSIWordEmbeddingMatch;

@interface PSIQueryToken : NSObject <NSSecureCoding>
{
    _Bool _userControlledCategoriesUseWildcard;	// 8 = 0x8
    _Bool _usesWordEmbeddings;	// 9 = 0x9
    _Bool _isFilterTypeToken;	// 10 = 0xa
    _Bool _isFullTextToken;	// 11 = 0xb
    _Bool _belongsToSearchText;	// 12 = 0xc
    NSString *_text;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSIndexSet *_searchedCategories;	// 32 = 0x20
    unsigned long long _userCategory;	// 40 = 0x28
    unsigned long long _matchType;	// 48 = 0x30
    PSIQueryToken *_parentToken;	// 56 = 0x38
    NSString *_normalizedText;	// 64 = 0x40
    PSIWordEmbeddingMatch *_wordEmbeddingMatch;	// 72 = 0x48
    NSMutableSet *_assetIds;	// 80 = 0x50
    NSMutableSet *_collectionIds;	// 88 = 0x58
    NSDictionary *_dateAttributes;	// 96 = 0x60
    struct _NSRange _rangeInSearchText;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000045910c
+ (id)stringForMatchType:(unsigned long long)arg1;	// IMP=0x00000000004590b8
+ (id)personQueryTokensFromSocialGroupQueryToken:(id)arg1;	// IMP=0x0000000000458ea6
- (void).cxx_destruct;	// IMP=0x0000000000458d16
@property(retain, nonatomic) NSDictionary *dateAttributes; // @synthesize dateAttributes=_dateAttributes;
@property(retain, nonatomic) NSMutableSet *collectionIds; // @synthesize collectionIds=_collectionIds;
@property(retain, nonatomic) NSMutableSet *assetIds; // @synthesize assetIds=_assetIds;
@property(nonatomic) _Bool belongsToSearchText; // @synthesize belongsToSearchText=_belongsToSearchText;
@property(nonatomic) _Bool isFullTextToken; // @synthesize isFullTextToken=_isFullTextToken;
@property(retain, nonatomic) PSIWordEmbeddingMatch *wordEmbeddingMatch; // @synthesize wordEmbeddingMatch=_wordEmbeddingMatch;
@property(copy, nonatomic) NSString *normalizedText; // @synthesize normalizedText=_normalizedText;
@property(retain, nonatomic) PSIQueryToken *parentToken; // @synthesize parentToken=_parentToken;
@property(nonatomic) struct _NSRange rangeInSearchText; // @synthesize rangeInSearchText=_rangeInSearchText;
@property(nonatomic) _Bool isFilterTypeToken; // @synthesize isFilterTypeToken=_isFilterTypeToken;
@property(nonatomic) _Bool usesWordEmbeddings; // @synthesize usesWordEmbeddings=_usesWordEmbeddings;
@property(nonatomic) _Bool userControlledCategoriesUseWildcard; // @synthesize userControlledCategoriesUseWildcard=_userControlledCategoriesUseWildcard;
@property(readonly, nonatomic) unsigned long long matchType; // @synthesize matchType=_matchType;
@property(nonatomic) unsigned long long userCategory; // @synthesize userCategory=_userCategory;
@property(copy, nonatomic) NSIndexSet *searchedCategories; // @synthesize searchedCategories=_searchedCategories;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000458a09
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000458729
- (void)replaceIdentifier:(id)arg1;	// IMP=0x0000000000458717
@property(readonly, copy, nonatomic) NSDictionary *debugDictionary;
- (id)description;	// IMP=0x0000000000458131
- (id)tokenByWordEmbeddingWithMatch:(id)arg1;	// IMP=0x000000000045809d
@property(readonly, nonatomic) _Bool containsMarker;
@property(readonly, copy, nonatomic) NSString *wildcardResolvedText;
@property(readonly, copy, nonatomic) NSString *groupMatchingText;
@property(readonly, nonatomic) _Bool isTextSearchable;
@property(readonly, nonatomic) unsigned long long resultCount;
@property(readonly, nonatomic) unsigned long long collectionCount;
@property(readonly, nonatomic) unsigned long long assetCount;
@property(readonly, copy, nonatomic) NSString *resolvedText;
- (void)normalizeTextWithTokenizer:(id)arg1;	// IMP=0x0000000000457da1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000457c59
- (unsigned long long)hash;	// IMP=0x0000000000457c1a
- (id)initWithText:(id)arg1 normalizedText:(id)arg2 userCategory:(unsigned long long)arg3 searchedCategories:(id)arg4 matchType:(unsigned long long)arg5;	// IMP=0x0000000000457bf6
- (id)initWithText:(id)arg1 normalizedText:(id)arg2 userCategory:(unsigned long long)arg3 matchType:(unsigned long long)arg4;	// IMP=0x0000000000457b5d
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3;	// IMP=0x0000000000457b12
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 searchedCategories:(id)arg3 matchType:(unsigned long long)arg4;	// IMP=0x0000000000457aea
- (id)initWithIdentifier:(id)arg1 userCategory:(unsigned long long)arg2;	// IMP=0x0000000000457a7f
- (id)initWithText:(id)arg1 userCategory:(unsigned long long)arg2 matchType:(unsigned long long)arg3;	// IMP=0x00000000004579ff
- (id)initWithText:(id)arg1 normalizedText:(id)arg2 identifier:(id)arg3 userCategory:(unsigned long long)arg4 searchedCategories:(id)arg5 matchType:(unsigned long long)arg6;	// IMP=0x000000000045787f

@end

