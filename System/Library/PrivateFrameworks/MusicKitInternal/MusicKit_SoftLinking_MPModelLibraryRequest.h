//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MusicKit_SoftLinking_MPModelLibraryRequest
{
    _Bool _wantsDetailedKeepLocalRequestableResponse;	// 8 = 0x8
    NSArray *_allowedItemIdentifiers;	// 16 = 0x10
    NSArray *_allowedSectionIdentifiers;	// 24 = 0x18
    NSArray *_scopedContainers;	// 32 = 0x20
    NSArray *_itemSortDescriptors;	// 40 = 0x28
    NSArray *_sectionSortDescriptors;	// 48 = 0x30
    NSString *_itemFilterText;	// 56 = 0x38
    NSString *_sectionFilterText;	// 64 = 0x40
    struct _NSRange _range;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000000b673
@property(nonatomic) _Bool wantsDetailedKeepLocalRequestableResponse; // @synthesize wantsDetailedKeepLocalRequestableResponse=_wantsDetailedKeepLocalRequestableResponse;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(copy, nonatomic) NSString *sectionFilterText; // @synthesize sectionFilterText=_sectionFilterText;
@property(copy, nonatomic) NSString *itemFilterText; // @synthesize itemFilterText=_itemFilterText;
@property(copy, nonatomic) NSArray *sectionSortDescriptors; // @synthesize sectionSortDescriptors=_sectionSortDescriptors;
@property(copy, nonatomic) NSArray *itemSortDescriptors; // @synthesize itemSortDescriptors=_itemSortDescriptors;
@property(copy, nonatomic) NSArray *scopedContainers; // @synthesize scopedContainers=_scopedContainers;
@property(copy, nonatomic) NSArray *allowedSectionIdentifiers; // @synthesize allowedSectionIdentifiers=_allowedSectionIdentifiers;
@property(copy, nonatomic) NSArray *allowedItemIdentifiers; // @synthesize allowedItemIdentifiers=_allowedItemIdentifiers;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b3f9
- (id)initWithLegacyModelObjectType:(long long)arg1 itemKind:(id)arg2 allowedItemIdentifiers:(id)arg3 itemSortDescriptors:(id)arg4 itemFilterText:(id)arg5 range:(struct _NSRange)arg6 wantsDetailedKeepLocalRequestableResponse:(_Bool)arg7 downloadedContentOnly:(_Bool)arg8;	// IMP=0x000000000000b115
- (id)initWithLegacyModelObjectType:(long long)arg1 sectionLegacyModelObjectType:(long long)arg2 itemKind:(id)arg3 sectionKind:(id)arg4 allowedItemIdentifiers:(id)arg5 allowedSectionIdentifiers:(id)arg6 scopedContainers:(id)arg7 itemSortDescriptors:(id)arg8 sectionSortDescriptors:(id)arg9 itemFilterText:(id)arg10 sectionFilterText:(id)arg11 range:(struct _NSRange)arg12 wantsDetailedKeepLocalRequestableResponse:(_Bool)arg13 downloadedContentOnly:(_Bool)arg14;	// IMP=0x000000000000a983

@end

