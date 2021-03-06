//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLContainerRelation, NSString;

@interface CPLContainerRelationChange
{
    NSString *_itemIdentifier;	// 8 = 0x8
    CPLContainerRelation *_relation;	// 16 = 0x10
}

+ (_Bool)shouldReallyQuarantineRecord;	// IMP=0x00000000000ddc17
+ (id)relationWithItemIdentifier:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x00000000000dda89
+ (id)relationWithItemScopedIdentifier:(id)arg1 containerIdentifier:(id)arg2;	// IMP=0x00000000000dd99c
+ (id)relationToContainerWithIdentifier:(id)arg1;	// IMP=0x00000000000dd946
- (void).cxx_destruct;	// IMP=0x00000000000dd915
@property(retain, nonatomic) CPLContainerRelation *relation; // @synthesize relation=_relation;
@property(copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (_Bool)supportsDirectDeletion;	// IMP=0x00000000000dd8c6
- (_Bool)supportsDeletion;	// IMP=0x00000000000dd8be
- (_Bool)validateFullRecord;	// IMP=0x00000000000dd846
- (id)description;	// IMP=0x00000000000dd67c
- (void)setSecondaryIdentifier:(id)arg1;	// IMP=0x00000000000dd65f
- (id)secondaryIdentifier;	// IMP=0x00000000000dd642
- (void)setRelatedIdentifier:(id)arg1;	// IMP=0x00000000000dd630
- (id)relatedIdentifier;	// IMP=0x00000000000dd61e
- (void)setContainerScopedIdentifier:(id)arg1;	// IMP=0x00000000000dd291
- (id)containerScopedIdentifier;	// IMP=0x00000000000dd1ce
- (void)setItemScopedIdentifier:(id)arg1;	// IMP=0x00000000000dce57
- (id)itemScopedIdentifier;	// IMP=0x00000000000dcdbb
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069aef
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000069619
- (id)scopedIdentifiersForMapping;	// IMP=0x0000000000069523
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 fullRecord:(id)arg3 usingStorageView:(id)arg4;	// IMP=0x00000000000acefe

@end

