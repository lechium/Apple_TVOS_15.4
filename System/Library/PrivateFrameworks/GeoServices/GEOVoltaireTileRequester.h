//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOSimpleTileRequesterSubclass-Protocol.h>

@interface GEOVoltaireTileRequester <GEOSimpleTileRequesterSubclass>
{
    _Bool _hasUpdatedManifestForHTTP410;	// 144 = 0x90
}

+ (unsigned char)tileProviderIdentifier;	// IMP=0x0000000000cccab3
- (id)additionalAnalyticsStatesForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000ccdb9e
- (void)failedLoadingTileForKey:(struct _GEOTileKey)arg1 baseOperation:(id)arg2 error:(id)arg3;	// IMP=0x0000000000ccdac3
- (_Bool)shouldDownloadToDiskForTileKey:(const struct _GEOTileKey *)arg1 estimatedDataSize:(unsigned long long)arg2;	// IMP=0x0000000000ccda9b
- (_Bool)needsLocalizationForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000ccd93b
- (id)localizationURLForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000ccd8af
- (id)_localizationURLForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000ccd2dc
- (id)urlForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000cccd00
- (id)_deviceRegionSKUQueryItemForTileSet:(id)arg1;	// IMP=0x0000000000cccbec
- (_Bool)shouldAllowEmptyDataForTileKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000cccbcb
- (int)checksumMethodForIncomingTileDataWithKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000cccb64
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;	// IMP=0x0000000000cccabe

@end

