//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLogMsgStateAccount, GEOLogMsgStateApplicationIdentifier, GEOLogMsgStateCarPlay, GEOLogMsgStateCuratedCollection, GEOLogMsgStateDeviceBase, GEOLogMsgStateDeviceConnection, GEOLogMsgStateDeviceIdentifier, GEOLogMsgStateDeviceLocale, GEOLogMsgStateDeviceSettings, GEOLogMsgStateDirectionsDetail, GEOLogMsgStateExperiments, GEOLogMsgStateExtension, GEOLogMsgStateMapLaunch, GEOLogMsgStateMapRestore, GEOLogMsgStateMapSettings, GEOLogMsgStateMapUI, GEOLogMsgStateMapUIShown, GEOLogMsgStateMapView, GEOLogMsgStateMapViewLocation, GEOLogMsgStateMapsFeatures, GEOLogMsgStateMapsServer, GEOLogMsgStateMapsUserSettings, GEOLogMsgStateMarket, GEOLogMsgStateNavigation, GEOLogMsgStateNearbyTransit, GEOLogMsgStatePairedDevice, GEOLogMsgStatePlaceCard, GEOLogMsgStatePlaceRequest, GEOLogMsgStatePlaceSummaryLayout, GEOLogMsgStateRAP, GEOLogMsgStateRoute, GEOLogMsgStateRoutingSettings, GEOLogMsgStateSuggestions, GEOLogMsgStateTileSet, GEOLogMsgStateTransit, GEOLogMsgStateTransitStep, GEOLogMsgStateUGCPhoto, GEOLogMsgStateUser, GEOLogMsgStateUserSession, NSString, PBDataReader;

@interface GEOLogMsgState : PBCodable <NSCopying>
{
    PBDataReader *_reader;	// 8 = 0x8
    GEOLogMsgStateAccount *_account;	// 16 = 0x10
    GEOLogMsgStateApplicationIdentifier *_applicationIdentifier;	// 24 = 0x18
    GEOLogMsgStateCarPlay *_carPlay;	// 32 = 0x20
    GEOLogMsgStateCuratedCollection *_curatedCollection;	// 40 = 0x28
    GEOLogMsgStateDeviceBase *_deviceBase;	// 48 = 0x30
    GEOLogMsgStateDeviceConnection *_deviceConnection;	// 56 = 0x38
    GEOLogMsgStateDeviceIdentifier *_deviceIdentifier;	// 64 = 0x40
    GEOLogMsgStateDeviceLocale *_deviceLocale;	// 72 = 0x48
    GEOLogMsgStateDeviceSettings *_deviceSettings;	// 80 = 0x50
    GEOLogMsgStateDirectionsDetail *_directionsDetail;	// 88 = 0x58
    GEOLogMsgStateExperiments *_experiments;	// 96 = 0x60
    GEOLogMsgStateExtension *_extension;	// 104 = 0x68
    GEOLogMsgStateMapLaunch *_mapLaunch;	// 112 = 0x70
    GEOLogMsgStateMapRestore *_mapRestore;	// 120 = 0x78
    GEOLogMsgStateMapSettings *_mapSettings;	// 128 = 0x80
    GEOLogMsgStateMapUIShown *_mapUiShown;	// 136 = 0x88
    GEOLogMsgStateMapUI *_mapUi;	// 144 = 0x90
    GEOLogMsgStateMapViewLocation *_mapViewLocation;	// 152 = 0x98
    GEOLogMsgStateMapView *_mapView;	// 160 = 0xa0
    GEOLogMsgStateMapsFeatures *_mapsFeatures;	// 168 = 0xa8
    GEOLogMsgStateMapsServer *_mapsServer;	// 176 = 0xb0
    GEOLogMsgStateMapsUserSettings *_mapsUserSettings;	// 184 = 0xb8
    GEOLogMsgStateMarket *_market;	// 192 = 0xc0
    GEOLogMsgStateNavigation *_navigation;	// 200 = 0xc8
    GEOLogMsgStateNearbyTransit *_nearbyTransit;	// 208 = 0xd0
    GEOLogMsgStatePairedDevice *_pairedDevice;	// 216 = 0xd8
    GEOLogMsgStatePlaceCard *_placeCard;	// 224 = 0xe0
    GEOLogMsgStatePlaceRequest *_placeRequest;	// 232 = 0xe8
    GEOLogMsgStatePlaceSummaryLayout *_placeSummaryLayout;	// 240 = 0xf0
    GEOLogMsgStateRAP *_rap;	// 248 = 0xf8
    GEOLogMsgStateRoute *_route;	// 256 = 0x100
    GEOLogMsgStateRoutingSettings *_routingSettings;	// 264 = 0x108
    NSString *_stateOrigin;	// 272 = 0x110
    GEOLogMsgStateSuggestions *_suggestions;	// 280 = 0x118
    GEOLogMsgStateTileSet *_tileSet;	// 288 = 0x120
    GEOLogMsgStateTransitStep *_transitStep;	// 296 = 0x128
    GEOLogMsgStateTransit *_transit;	// 304 = 0x130
    GEOLogMsgStateUGCPhoto *_ugcPhoto;	// 312 = 0x138
    GEOLogMsgStateUserSession *_userSession;	// 320 = 0x140
    GEOLogMsgStateUser *_user;	// 328 = 0x148
    unsigned int _readerMarkPos;	// 336 = 0x150
    unsigned int _readerMarkLength;	// 340 = 0x154
    struct os_unfair_lock_s _readerLock;	// 344 = 0x158
    int _stateType;	// 348 = 0x15c
    struct {
        unsigned int has_stateType:1;
        unsigned int read_account:1;
        unsigned int read_applicationIdentifier:1;
        unsigned int read_carPlay:1;
        unsigned int read_curatedCollection:1;
        unsigned int read_deviceBase:1;
        unsigned int read_deviceConnection:1;
        unsigned int read_deviceIdentifier:1;
        unsigned int read_deviceLocale:1;
        unsigned int read_deviceSettings:1;
        unsigned int read_directionsDetail:1;
        unsigned int read_experiments:1;
        unsigned int read_extension:1;
        unsigned int read_mapLaunch:1;
        unsigned int read_mapRestore:1;
        unsigned int read_mapSettings:1;
        unsigned int read_mapUiShown:1;
        unsigned int read_mapUi:1;
        unsigned int read_mapViewLocation:1;
        unsigned int read_mapView:1;
        unsigned int read_mapsFeatures:1;
        unsigned int read_mapsServer:1;
        unsigned int read_mapsUserSettings:1;
        unsigned int read_market:1;
        unsigned int read_navigation:1;
        unsigned int read_nearbyTransit:1;
        unsigned int read_pairedDevice:1;
        unsigned int read_placeCard:1;
        unsigned int read_placeRequest:1;
        unsigned int read_placeSummaryLayout:1;
        unsigned int read_rap:1;
        unsigned int read_route:1;
        unsigned int read_routingSettings:1;
        unsigned int read_stateOrigin:1;
        unsigned int read_suggestions:1;
        unsigned int read_tileSet:1;
        unsigned int read_transitStep:1;
        unsigned int read_transit:1;
        unsigned int read_ugcPhoto:1;
        unsigned int read_userSession:1;
        unsigned int read_user:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 352 = 0x160
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00000000013d50bf
- (void).cxx_destruct;	// IMP=0x00000000013dd2d9
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000013dca03
- (unsigned long long)hash;	// IMP=0x00000000013dc593
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000013dbcb6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000013db48b
- (void)copyTo:(id)arg1;	// IMP=0x00000000013daedb
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000013dae47
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000013dace5
- (void)writeTo:(id)arg1;	// IMP=0x00000000013da473
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000013da464
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000013cfcf1
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000013cfcdf
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000013cdb7f
- (id)jsonRepresentation;	// IMP=0x00000000013cdb70
- (id)dictionaryRepresentation;	// IMP=0x00000000013cbf19
- (id)description;	// IMP=0x00000000013cbe6a
@property(retain, nonatomic) GEOLogMsgStateMapsUserSettings *mapsUserSettings;
@property(readonly, nonatomic) _Bool hasMapsUserSettings;
@property(retain, nonatomic) GEOLogMsgStateMapsFeatures *mapsFeatures;
@property(readonly, nonatomic) _Bool hasMapsFeatures;
@property(retain, nonatomic) GEOLogMsgStateRoutingSettings *routingSettings;
@property(readonly, nonatomic) _Bool hasRoutingSettings;
@property(retain, nonatomic) GEOLogMsgStateMarket *market;
@property(readonly, nonatomic) _Bool hasMarket;
@property(retain, nonatomic) GEOLogMsgStateDirectionsDetail *directionsDetail;
@property(readonly, nonatomic) _Bool hasDirectionsDetail;
@property(retain, nonatomic) GEOLogMsgStateUGCPhoto *ugcPhoto;
@property(readonly, nonatomic) _Bool hasUgcPhoto;
@property(retain, nonatomic) GEOLogMsgStateCuratedCollection *curatedCollection;
@property(readonly, nonatomic) _Bool hasCuratedCollection;
@property(retain, nonatomic) GEOLogMsgStateMapLaunch *mapLaunch;
@property(readonly, nonatomic) _Bool hasMapLaunch;
@property(retain, nonatomic) GEOLogMsgStateSuggestions *suggestions;
@property(readonly, nonatomic) _Bool hasSuggestions;
@property(retain, nonatomic) GEOLogMsgStateMapRestore *mapRestore;
@property(readonly, nonatomic) _Bool hasMapRestore;
@property(retain, nonatomic) GEOLogMsgStateNavigation *navigation;
@property(readonly, nonatomic) _Bool hasNavigation;
@property(retain, nonatomic) GEOLogMsgStatePlaceRequest *placeRequest;
@property(readonly, nonatomic) _Bool hasPlaceRequest;
@property(retain, nonatomic) GEOLogMsgStateTileSet *tileSet;
@property(readonly, nonatomic) _Bool hasTileSet;
@property(retain, nonatomic) GEOLogMsgStateMapsServer *mapsServer;
@property(readonly, nonatomic) _Bool hasMapsServer;
@property(retain, nonatomic) GEOLogMsgStateRoute *route;
@property(readonly, nonatomic) _Bool hasRoute;
@property(retain, nonatomic) GEOLogMsgStatePlaceCard *placeCard;
@property(readonly, nonatomic) _Bool hasPlaceCard;
@property(retain, nonatomic) GEOLogMsgStateExperiments *experiments;
@property(readonly, nonatomic) _Bool hasExperiments;
@property(retain, nonatomic) GEOLogMsgStateUserSession *userSession;
@property(readonly, nonatomic) _Bool hasUserSession;
@property(retain, nonatomic) GEOLogMsgStateMapUIShown *mapUiShown;
@property(readonly, nonatomic) _Bool hasMapUiShown;
@property(retain, nonatomic) GEOLogMsgStateMapUI *mapUi;
@property(readonly, nonatomic) _Bool hasMapUi;
@property(retain, nonatomic) GEOLogMsgStateMapSettings *mapSettings;
@property(readonly, nonatomic) _Bool hasMapSettings;
@property(retain, nonatomic) GEOLogMsgStateTransit *transit;
@property(readonly, nonatomic) _Bool hasTransit;
@property(retain, nonatomic) GEOLogMsgStateMapViewLocation *mapViewLocation;
@property(readonly, nonatomic) _Bool hasMapViewLocation;
@property(retain, nonatomic) GEOLogMsgStateMapView *mapView;
@property(readonly, nonatomic) _Bool hasMapView;
@property(retain, nonatomic) GEOLogMsgStateDeviceSettings *deviceSettings;
@property(readonly, nonatomic) _Bool hasDeviceSettings;
@property(retain, nonatomic) GEOLogMsgStateExtension *extension;
@property(readonly, nonatomic) _Bool hasExtension;
@property(retain, nonatomic) GEOLogMsgStatePairedDevice *pairedDevice;
@property(readonly, nonatomic) _Bool hasPairedDevice;
@property(retain, nonatomic) GEOLogMsgStateCarPlay *carPlay;
@property(readonly, nonatomic) _Bool hasCarPlay;
@property(retain, nonatomic) GEOLogMsgStateDeviceConnection *deviceConnection;
@property(readonly, nonatomic) _Bool hasDeviceConnection;
@property(retain, nonatomic) GEOLogMsgStateDeviceLocale *deviceLocale;
@property(readonly, nonatomic) _Bool hasDeviceLocale;
@property(retain, nonatomic) GEOLogMsgStateDeviceBase *deviceBase;
@property(readonly, nonatomic) _Bool hasDeviceBase;
@property(retain, nonatomic) GEOLogMsgStateApplicationIdentifier *applicationIdentifier;
@property(readonly, nonatomic) _Bool hasApplicationIdentifier;
@property(retain, nonatomic) GEOLogMsgStateDeviceIdentifier *deviceIdentifier;
@property(readonly, nonatomic) _Bool hasDeviceIdentifier;
- (int)StringAsStateType:(id)arg1;	// IMP=0x00000000013c8dd4
- (id)stateTypeAsString:(int)arg1;	// IMP=0x00000000013c8a64
@property(nonatomic) _Bool hasStateType;
@property(nonatomic) int stateType;
@property(retain, nonatomic) GEOLogMsgStateNearbyTransit *nearbyTransit;
@property(readonly, nonatomic) _Bool hasNearbyTransit;
@property(retain, nonatomic) GEOLogMsgStateTransitStep *transitStep;
@property(readonly, nonatomic) _Bool hasTransitStep;
@property(retain, nonatomic) GEOLogMsgStatePlaceSummaryLayout *placeSummaryLayout;
@property(readonly, nonatomic) _Bool hasPlaceSummaryLayout;
@property(retain, nonatomic) GEOLogMsgStateRAP *rap;
@property(readonly, nonatomic) _Bool hasRap;
@property(retain, nonatomic) GEOLogMsgStateAccount *account;
@property(readonly, nonatomic) _Bool hasAccount;
@property(retain, nonatomic) GEOLogMsgStateUser *user;
@property(readonly, nonatomic) _Bool hasUser;
@property(retain, nonatomic) NSString *stateOrigin;
@property(readonly, nonatomic) _Bool hasStateOrigin;
- (id)initWithData:(id)arg1;	// IMP=0x00000000013c544b
- (id)init;	// IMP=0x00000000013c53ef

@end

