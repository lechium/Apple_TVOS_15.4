//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXSearchResultModelTranslator : NSObject
{
}

+ (_Bool)_isSinglePersonSearchResult:(id)arg1;	// IMP=0x00000000008ddf5f
+ (id)searchResultsForTopAssetsResult:(id)arg1;	// IMP=0x00000000008ddf28
+ (id)searchResultsForAssetResults:(id)arg1;	// IMP=0x00000000008ddce3
+ (id)searchResultsForCollectionResults:(id)arg1;	// IMP=0x00000000008ddaf3
+ (id)assetSearchResultsForPLTopAssetsSearchResult:(id)arg1;	// IMP=0x00000000008dd856
+ (id)personSearchResultForPLAssetSearchResult:(id)arg1;	// IMP=0x00000000008dd66b
+ (id)_dateFromPSIDate:(id)arg1;	// IMP=0x00000000008dd4fa
+ (unsigned long long)_collectionTypeForPLCollectionSearchResult:(id)arg1;	// IMP=0x00000000008dd4ca
+ (id)collectionSearchResultForPLCollectionSearchResult:(id)arg1;	// IMP=0x00000000008dd140
+ (unsigned long long)_assetAggregationTypeForPLAssetSearchResult:(id)arg1;	// IMP=0x00000000008dcfbe
+ (id)assetAggregationSearchResultForPLAssetSearchResult:(id)arg1;	// IMP=0x00000000008dcda3
- (id)init;	// IMP=0x00000000008dcd29

@end

