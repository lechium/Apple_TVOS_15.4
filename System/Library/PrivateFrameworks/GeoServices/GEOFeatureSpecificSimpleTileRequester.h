//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface GEOFeatureSpecificSimpleTileRequester
{
}

+ (unsigned char)tileProviderIdentifier;	// IMP=0x000000000113eafd
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x000000000113f427
- (CDStruct_d1a7ebee)kindForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x000000000113f41f
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x000000000113efaf
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x000000000113edcf
- (_Bool)tileDataIsCacheableForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x000000000113edc7
- (struct _GEOTileKey)_regularTileKeyForTransitLineSelectionTileKey:(const struct _GEOTileKey *)arg1 muid:(unsigned long long *)arg2;	// IMP=0x000000000113eb08

@end

