//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, NSCollectionLayoutSpacing;

@interface NSCollectionLayoutGroup <NSCopying>
{
    _Bool _hasCheckedIfDecorationItemRequiresRegistration;	// 96 = 0x60
    _Bool __hasDecorationItemRequiringRegistration;	// 97 = 0x61
    NSCollectionLayoutSpacing *_interItemSpacing;	// 104 = 0x68
    NSArray *_subitems;	// 112 = 0x70
    long long _layoutDirection;	// 120 = 0x78
    NSArray *_visualFormats;	// 128 = 0x80
    CDUnknownBlockType _customGroupItemProvider;	// 136 = 0x88
    CDUnknownBlockType _itemsProvider;	// 144 = 0x90
    CDUnknownBlockType _visualFormatItemProvider;	// 152 = 0x98
    long long _count;	// 160 = 0xa0
    long long _groupOptions;	// 168 = 0xa8
}

+ (id)layoutGroupWithSize:(id)arg1 visualFormats:(id)arg2 itemProvider:(CDUnknownBlockType)arg3;	// IMP=0x000000000023c5d8
+ (id)verticalGroupWithSize:(id)arg1 subitemsProvider:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c41d
+ (id)horizontalGroupWithSize:(id)arg1 subitemsProvider:(CDUnknownBlockType)arg2;	// IMP=0x000000000023c262
+ (id)customGroupWithLayoutSize:(id)arg1 itemProvider:(CDUnknownBlockType)arg2;	// IMP=0x000000000023b9ea
+ (id)verticalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2;	// IMP=0x000000000023b899
+ (id)verticalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;	// IMP=0x000000000023b68a
+ (id)horizontalGroupWithLayoutSize:(id)arg1 subitems:(id)arg2;	// IMP=0x000000000023b539
+ (id)horizontalGroupWithLayoutSize:(id)arg1 subitem:(id)arg2 count:(long long)arg3;	// IMP=0x000000000023b32a
- (void).cxx_destruct;	// IMP=0x000000000023d090
@property(nonatomic) long long groupOptions; // @synthesize groupOptions=_groupOptions;
@property(nonatomic) _Bool _hasDecorationItemRequiringRegistration; // @synthesize _hasDecorationItemRequiringRegistration=__hasDecorationItemRequiringRegistration;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) CDUnknownBlockType visualFormatItemProvider; // @synthesize visualFormatItemProvider=_visualFormatItemProvider;
@property(copy, nonatomic) CDUnknownBlockType itemsProvider; // @synthesize itemsProvider=_itemsProvider;
@property(copy, nonatomic) CDUnknownBlockType customGroupItemProvider; // @synthesize customGroupItemProvider=_customGroupItemProvider;
@property(copy, nonatomic) NSArray *visualFormats; // @synthesize visualFormats=_visualFormats;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(copy, nonatomic) NSArray *subitems; // @synthesize subitems=_subitems;
@property(copy, nonatomic) NSCollectionLayoutSpacing *interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
- (_Bool)_isListSolverCompatibleForLayoutAxis:(unsigned long long)arg1;	// IMP=0x000000000023cd5a
- (id)_effectiveSizeForSize:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3;	// IMP=0x000000000023ca2a
- (id)_effectiveCopiedSubitemsForSubitems:(id)arg1 count:(long long)arg2 layoutDirection:(long long)arg3;	// IMP=0x000000000023c8af
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000023bf44
- (id)visualDescription;	// IMP=0x000000000023bf32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000023bca2
- (_Bool)hasVisualFormat;	// IMP=0x000000000023bc5a
- (_Bool)hasItemProvider;	// IMP=0x000000000023bc27
- (_Bool)isCustomGroup;	// IMP=0x000000000023bbf4
- (unsigned long long)layoutAxis;	// IMP=0x000000000023bbb9
- (_Bool)isHorizontalGroup;	// IMP=0x000000000023bb7d
- (_Bool)isVerticalGroup;	// IMP=0x000000000023bb41
- (id)_externalDescription;	// IMP=0x000000000023b04f
- (id)description;	// IMP=0x000000000023ad97
- (id)initWithSize:(id)arg1 subitems:(id)arg2 count:(long long)arg3 interItemSpacing:(id)arg4 contentInsets:(struct NSDirectionalEdgeInsets)arg5 edgeSpacing:(id)arg6 layoutDirection:(long long)arg7 supplementaryItems:(id)arg8 visualFormats:(id)arg9 itemsProvider:(CDUnknownBlockType)arg10 visualFormatItemProvider:(CDUnknownBlockType)arg11 customGroupItemProvider:(CDUnknownBlockType)arg12 options:(long long)arg13 name:(id)arg14 identifier:(id)arg15;	// IMP=0x000000000023a904

// Remaining properties
@property(copy, nonatomic) NSArray *supplementaryItems; // @dynamic supplementaryItems;

@end
