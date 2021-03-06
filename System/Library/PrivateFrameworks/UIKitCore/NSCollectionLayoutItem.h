//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSCollectionLayoutEdgeSpacing, NSCollectionLayoutSize, NSString, NSUUID;

@interface NSCollectionLayoutItem : NSObject <NSCopying>
{
    _Bool _containsEstimatedSizeItem;	// 8 = 0x8
    _Bool _hasComputedContainsEstimatedItem;	// 9 = 0x9
    NSCollectionLayoutEdgeSpacing *_edgeSpacing;	// 16 = 0x10
    NSArray *_supplementaryItems;	// 24 = 0x18
    NSCollectionLayoutSize *_size;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
    NSString *_name;	// 48 = 0x30
    NSArray *_decorationItems;	// 56 = 0x38
    struct NSDirectionalEdgeInsets _contentInsets;	// 64 = 0x40
}

+ (id)itemWithSize:(id)arg1 decorationItems:(id)arg2;	// IMP=0x000000000023954b
+ (id)itemWithLayoutSize:(id)arg1 supplementaryItems:(id)arg2;	// IMP=0x0000000000239447
+ (id)itemWithLayoutSize:(id)arg1;	// IMP=0x0000000000239369
- (void).cxx_destruct;	// IMP=0x000000000023a759
@property(nonatomic) _Bool hasComputedContainsEstimatedItem; // @synthesize hasComputedContainsEstimatedItem=_hasComputedContainsEstimatedItem;
@property(copy, nonatomic) NSArray *decorationItems; // @synthesize decorationItems=_decorationItems;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSCollectionLayoutSize *size; // @synthesize size=_size;
@property(copy, nonatomic) NSArray *supplementaryItems; // @synthesize supplementaryItems=_supplementaryItems;
@property(copy, nonatomic) NSCollectionLayoutEdgeSpacing *edgeSpacing; // @synthesize edgeSpacing=_edgeSpacing;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (_Bool)hasCustomGroupItemProvider;	// IMP=0x000000000023a649
- (_Bool)ignoresRTL;	// IMP=0x000000000023a612
- (id)auxillaryItems;	// IMP=0x000000000023a5a3
- (struct NSDirectionalEdgeInsets)_effectiveContentInsets;	// IMP=0x000000000023a485
- (_Bool)isDecoration;	// IMP=0x000000000023a45c
- (_Bool)isSupplementary;	// IMP=0x000000000023a433
- (_Bool)isAuxillary;	// IMP=0x000000000023a3fa
- (_Bool)isCustomGroup;	// IMP=0x000000000023a3c1
- (_Bool)isGroup;	// IMP=0x000000000023a398
- (struct CGSize)_insetSizeForContainer:(id)arg1;	// IMP=0x000000000023a293
- (void)_enumerateItemsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000023a092
- (void)_enumerateSupplementaryItemsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000239dab
- (_Bool)containsEstimatedSizeItem;	// IMP=0x0000000000239c1a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002397d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023965d
@property(readonly, nonatomic) NSCollectionLayoutSize *layoutSize;
- (id)_externalDescription;	// IMP=0x00000000002392a0
- (id)description;	// IMP=0x000000000023914d
- (id)initWithSize:(id)arg1 contentInsets:(struct NSDirectionalEdgeInsets)arg2 edgeSpacing:(id)arg3 supplementaryItems:(id)arg4 decorationItems:(id)arg5 name:(id)arg6 identifier:(id)arg7;	// IMP=0x0000000000238fd8
- (id)_visualDescription;	// IMP=0x0000000000274e0a

@end

