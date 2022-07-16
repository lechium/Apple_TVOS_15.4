//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreKnowledge/NSCopying-Protocol.h>
#import <CoreKnowledge/NSSecureCoding-Protocol.h>

@class NSArray, NSSet;

@interface CKVSearchCriteria : NSObject <NSSecureCoding, NSCopying>
{
    unsigned char _searchMode;	// 8 = 0x8
    NSArray *_searchTerms;	// 16 = 0x10
    NSSet *_originAppFilters;	// 24 = 0x18
    NSSet *_fieldTypeFilters;	// 32 = 0x20
    NSSet *_itemTypeFilters;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e0e9c
+ (id)builderWithLikeTerms:(id)arg1;	// IMP=0x00000000000e0e2e
+ (id)builderWithMatchTerm:(id)arg1;	// IMP=0x00000000000e0d8e
- (void).cxx_destruct;	// IMP=0x00000000000e0d50
@property(readonly, nonatomic) NSSet *itemTypeFilters; // @synthesize itemTypeFilters=_itemTypeFilters;
@property(readonly, nonatomic) NSSet *fieldTypeFilters; // @synthesize fieldTypeFilters=_fieldTypeFilters;
@property(readonly, nonatomic) NSSet *originAppFilters; // @synthesize originAppFilters=_originAppFilters;
@property(readonly, nonatomic) unsigned char searchMode; // @synthesize searchMode=_searchMode;
@property(readonly, nonatomic) NSArray *searchTerms; // @synthesize searchTerms=_searchTerms;
- (_Bool)isEqualToSearchCriteria:(id)arg1;	// IMP=0x00000000000e0b5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e0af3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e0a30
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e0808
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e075a
- (id)description;	// IMP=0x00000000000e0696
- (id)init;	// IMP=0x00000000000e064e
- (id)initWithSearchTerms:(id)arg1 searchMode:(unsigned char)arg2 originAppFilters:(id)arg3 fieldTypeFilters:(id)arg4 itemTypeFilters:(id)arg5;	// IMP=0x00000000000e0524
- (id)_commandCriterionFromVocabularyItemTypeFilters;	// IMP=0x00000000000dc3d9
- (id)_commandCriterionFromFieldTypeFilters;	// IMP=0x00000000000dc19b
- (id)_commandCriterionFromOriginAppFilters;	// IMP=0x00000000000dbee2
- (id)commandCriteriaFromSearchTerms;	// IMP=0x00000000000dbacb
- (id)commandCriteriaFromFilters;	// IMP=0x00000000000db9be

@end

