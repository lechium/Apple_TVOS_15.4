//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface ADUserTargetingProperties : PBCodable <NSCopying>
{
    CDStruct_95bda58d _accountStates;	// 8 = 0x8
    CDStruct_95bda58d _accountTypes;	// 32 = 0x20
    CDStruct_95bda58d _deviceModes;	// 56 = 0x38
    double _clientClockTime;	// 80 = 0x50
    NSString *_administrativeArea;	// 88 = 0x58
    int _advertisingIdentifierMonthResetCount;	// 96 = 0x60
    NSString *_algoId;	// 104 = 0x68
    NSString *_appID;	// 112 = 0x70
    NSString *_appVersion;	// 120 = 0x78
    int _appsRank;	// 128 = 0x80
    NSString *_carrierMCC;	// 136 = 0x88
    NSString *_carrierMNC;	// 144 = 0x90
    int _connectionType;	// 152 = 0x98
    NSString *_currentCarrierMCC;	// 160 = 0xa0
    NSString *_currentCarrierMNC;	// 168 = 0xa8
    NSString *_dPIDString;	// 176 = 0xb0
    NSString *_deviceModel;	// 184 = 0xb8
    NSString *_deviceRequestID;	// 192 = 0xc0
    float _horizontalAccuracy;	// 200 = 0xc8
    NSString *_iAdIDString;	// 208 = 0xd0
    NSString *_iTunesStore;	// 216 = 0xd8
    NSString *_isoCountryCode;	// 224 = 0xe0
    float _latitude;	// 232 = 0xe8
    NSString *_localeIdentifier;	// 240 = 0xf0
    NSString *_locality;	// 248 = 0xf8
    float _longitude;	// 256 = 0x100
    NSString *_osVersionAndBuild;	// 264 = 0x108
    NSString *_postalCode;	// 272 = 0x110
    int _runState;	// 280 = 0x118
    NSString *_storeFrontLanguageLocaleIdentifier;	// 288 = 0x120
    NSString *_subAdministrativeArea;	// 296 = 0x128
    NSMutableArray *_targetings;	// 304 = 0x130
    float _timezone;	// 312 = 0x138
    NSString *_toroIDString;	// 320 = 0x140
    NSMutableArray *_userKeyboards;	// 328 = 0x148
    _Bool _isOnInternationalDataRoaming;	// 336 = 0x150
    _Bool _limitAdTracking;	// 337 = 0x151
    struct {
        unsigned int clientClockTime:1;
        unsigned int advertisingIdentifierMonthResetCount:1;
        unsigned int appsRank:1;
        unsigned int connectionType:1;
        unsigned int horizontalAccuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int runState:1;
        unsigned int timezone:1;
        unsigned int isOnInternationalDataRoaming:1;
        unsigned int limitAdTracking:1;
    } _has;	// 340 = 0x154
}

+ (Class)targetingType;	// IMP=0x0000000000024ac3
+ (Class)userKeyboardType;	// IMP=0x000000000002439f
- (void).cxx_destruct;	// IMP=0x000000000002a0f7
@property(retain, nonatomic) NSString *storeFrontLanguageLocaleIdentifier; // @synthesize storeFrontLanguageLocaleIdentifier=_storeFrontLanguageLocaleIdentifier;
@property(nonatomic) _Bool isOnInternationalDataRoaming; // @synthesize isOnInternationalDataRoaming=_isOnInternationalDataRoaming;
@property(retain, nonatomic) NSString *currentCarrierMCC; // @synthesize currentCarrierMCC=_currentCarrierMCC;
@property(retain, nonatomic) NSString *currentCarrierMNC; // @synthesize currentCarrierMNC=_currentCarrierMNC;
@property(retain, nonatomic) NSString *carrierMCC; // @synthesize carrierMCC=_carrierMCC;
@property(retain, nonatomic) NSString *carrierMNC; // @synthesize carrierMNC=_carrierMNC;
@property(retain, nonatomic) NSString *deviceRequestID; // @synthesize deviceRequestID=_deviceRequestID;
@property(nonatomic) int advertisingIdentifierMonthResetCount; // @synthesize advertisingIdentifierMonthResetCount=_advertisingIdentifierMonthResetCount;
@property(retain, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property(retain, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property(retain, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSString *dPIDString; // @synthesize dPIDString=_dPIDString;
@property(retain, nonatomic) NSString *algoId; // @synthesize algoId=_algoId;
@property(retain, nonatomic) NSString *iAdIDString; // @synthesize iAdIDString=_iAdIDString;
@property(retain, nonatomic) NSString *toroIDString; // @synthesize toroIDString=_toroIDString;
@property(nonatomic) _Bool limitAdTracking; // @synthesize limitAdTracking=_limitAdTracking;
@property(retain, nonatomic) NSMutableArray *targetings; // @synthesize targetings=_targetings;
@property(retain, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(nonatomic) float horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) float longitude; // @synthesize longitude=_longitude;
@property(nonatomic) float latitude; // @synthesize latitude=_latitude;
@property(nonatomic) int appsRank; // @synthesize appsRank=_appsRank;
@property(retain, nonatomic) NSMutableArray *userKeyboards; // @synthesize userKeyboards=_userKeyboards;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(retain, nonatomic) NSString *iTunesStore; // @synthesize iTunesStore=_iTunesStore;
@property(retain, nonatomic) NSString *osVersionAndBuild; // @synthesize osVersionAndBuild=_osVersionAndBuild;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(nonatomic) float timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *deviceModel; // @synthesize deviceModel=_deviceModel;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) double clientClockTime; // @synthesize clientClockTime=_clientClockTime;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000002956a
- (unsigned long long)hash;	// IMP=0x0000000000028bf0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028431
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027c06
- (void)copyTo:(id)arg1;	// IMP=0x000000000002753a
- (void)writeTo:(id)arg1;	// IMP=0x0000000000026eb1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000026ea4
- (id)dictionaryRepresentation;	// IMP=0x0000000000025292
- (id)description;	// IMP=0x00000000000251e3
- (int)StringAsAccountStates:(id)arg1;	// IMP=0x0000000000025151
- (id)accountStatesAsString:(int)arg1;	// IMP=0x00000000000250eb
- (void)setAccountStates:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000250d4
- (int)accountStateAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000025007
- (void)addAccountState:(int)arg1;	// IMP=0x0000000000024ff4
- (void)clearAccountStates;	// IMP=0x0000000000024fe3
@property(readonly, nonatomic) int *accountStates;
@property(readonly, nonatomic) unsigned long long accountStatesCount;
@property(readonly, nonatomic) _Bool hasStoreFrontLanguageLocaleIdentifier;
- (int)StringAsConnectionType:(id)arg1;	// IMP=0x0000000000024e10
- (id)connectionTypeAsString:(int)arg1;	// IMP=0x0000000000024d36
@property(nonatomic) _Bool hasConnectionType;
@property(nonatomic) int connectionType; // @synthesize connectionType=_connectionType;
@property(nonatomic) _Bool hasIsOnInternationalDataRoaming;
@property(readonly, nonatomic) _Bool hasCurrentCarrierMCC;
@property(readonly, nonatomic) _Bool hasCurrentCarrierMNC;
@property(readonly, nonatomic) _Bool hasCarrierMCC;
@property(readonly, nonatomic) _Bool hasCarrierMNC;
@property(readonly, nonatomic) _Bool hasDeviceRequestID;
@property(nonatomic) _Bool hasAdvertisingIdentifierMonthResetCount;
@property(readonly, nonatomic) _Bool hasSubAdministrativeArea;
@property(readonly, nonatomic) _Bool hasLocality;
@property(readonly, nonatomic) _Bool hasAdministrativeArea;
@property(readonly, nonatomic) _Bool hasPostalCode;
@property(readonly, nonatomic) _Bool hasDPIDString;
@property(readonly, nonatomic) _Bool hasAlgoId;
@property(readonly, nonatomic) _Bool hasIAdIDString;
@property(readonly, nonatomic) _Bool hasToroIDString;
@property(nonatomic) _Bool hasLimitAdTracking;
- (id)targetingAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024aa6
- (unsigned long long)targetingsCount;	// IMP=0x0000000000024a89
- (void)addTargeting:(id)arg1;	// IMP=0x0000000000024a1f
- (void)clearTargetings;	// IMP=0x0000000000024a02
@property(readonly, nonatomic) _Bool hasIsoCountryCode;
@property(nonatomic) _Bool hasHorizontalAccuracy;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
- (int)StringAsAccountTypes:(id)arg1;	// IMP=0x00000000000247ec
- (id)accountTypesAsString:(int)arg1;	// IMP=0x0000000000024748
- (void)setAccountTypes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000024731
- (int)accountTypeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024664
- (void)addAccountType:(int)arg1;	// IMP=0x0000000000024651
- (void)clearAccountTypes;	// IMP=0x0000000000024640
@property(readonly, nonatomic) int *accountTypes;
@property(readonly, nonatomic) unsigned long long accountTypesCount;
- (int)StringAsDeviceModes:(id)arg1;	// IMP=0x000000000002458b
- (id)deviceModesAsString:(int)arg1;	// IMP=0x0000000000024525
- (void)setDeviceModes:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000002450e
- (int)deviceModeAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024441
- (void)addDeviceMode:(int)arg1;	// IMP=0x000000000002442e
- (void)clearDeviceModes;	// IMP=0x000000000002441d
@property(readonly, nonatomic) int *deviceModes;
@property(readonly, nonatomic) unsigned long long deviceModesCount;
@property(nonatomic) _Bool hasAppsRank;
- (id)userKeyboardAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000024382
- (unsigned long long)userKeyboardsCount;	// IMP=0x0000000000024365
- (void)addUserKeyboard:(id)arg1;	// IMP=0x00000000000242fb
- (void)clearUserKeyboards;	// IMP=0x00000000000242de
@property(readonly, nonatomic) _Bool hasLocaleIdentifier;
@property(readonly, nonatomic) _Bool hasITunesStore;
@property(readonly, nonatomic) _Bool hasOsVersionAndBuild;
@property(readonly, nonatomic) _Bool hasAppVersion;
- (int)StringAsRunState:(id)arg1;	// IMP=0x00000000000241f8
- (id)runStateAsString:(int)arg1;	// IMP=0x0000000000024192
@property(nonatomic) _Bool hasRunState;
@property(nonatomic) int runState; // @synthesize runState=_runState;
@property(nonatomic) _Bool hasTimezone;
@property(readonly, nonatomic) _Bool hasDeviceModel;
@property(readonly, nonatomic) _Bool hasAppID;
@property(nonatomic) _Bool hasClientClockTime;
- (void)dealloc;	// IMP=0x0000000000024008

@end
