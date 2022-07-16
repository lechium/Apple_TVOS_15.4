//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, PHFetchResult, PXSearchQuery;

@interface PXSearchQueryResult : NSObject
{
    PXSearchQuery *_searchQuery;	// 8 = 0x8
    NSArray *_searchResults;	// 16 = 0x10
    NSArray *_searchAssetResults;	// 24 = 0x18
    PHFetchResult *_curatedAssetsFetchResult;	// 32 = 0x20
    NSArray *_searchSuggestions;	// 40 = 0x28
    NSSet *_sceneIdentifiers;	// 48 = 0x30
    NSArray *_reloadItemIdentifiers;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000873725
@property(readonly, copy, nonatomic) NSArray *reloadItemIdentifiers; // @synthesize reloadItemIdentifiers=_reloadItemIdentifiers;
@property(readonly, copy, nonatomic) NSSet *sceneIdentifiers; // @synthesize sceneIdentifiers=_sceneIdentifiers;
@property(readonly, copy, nonatomic) NSArray *searchSuggestions; // @synthesize searchSuggestions=_searchSuggestions;
@property(readonly, copy, nonatomic) PHFetchResult *curatedAssetsFetchResult; // @synthesize curatedAssetsFetchResult=_curatedAssetsFetchResult;
@property(readonly, copy, nonatomic) NSArray *searchAssetResults; // @synthesize searchAssetResults=_searchAssetResults;
@property(readonly, copy, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
@property(readonly, copy, nonatomic) PXSearchQuery *searchQuery; // @synthesize searchQuery=_searchQuery;
- (id)initEmptySearchQueryResultForQuery:(id)arg1;	// IMP=0x00000000008736b3
- (id)initWithSearchQuery:(id)arg1 searchResults:(id)arg2 searchAssetResults:(id)arg3 curatedAssetsFetchResult:(id)arg4 searchSuggestions:(id)arg5 sceneIdentifiers:(id)arg6 reloadItemIdentifiers:(id)arg7;	// IMP=0x00000000008733ac

@end

