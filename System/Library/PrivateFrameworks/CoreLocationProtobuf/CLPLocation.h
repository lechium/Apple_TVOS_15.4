//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPBaroCalibrationIndication, CLPMotionActivity, CLPPipelineDiagnosticReport, CLPSatelliteReport, NSMutableArray;

@interface CLPLocation : PBCodable <NSCopying>
{
    double _latitude;	// 8 = 0x8
    double _longitude;	// 16 = 0x10
    double _timestamp;	// 24 = 0x18
    float _altitude;	// 32 = 0x20
    NSMutableArray *_appBundleIdIndices;	// 40 = 0x28
    CLPBaroCalibrationIndication *_baroCalibrationIndication;	// 48 = 0x30
    int _context;	// 56 = 0x38
    float _course;	// 60 = 0x3c
    float _courseAccuracy;	// 64 = 0x40
    CLPMotionActivity *_dominantMotionActivity;	// 72 = 0x48
    int _floor;	// 80 = 0x50
    float _horizontalAccuracy;	// 84 = 0x54
    float _horzUncSemiMaj;	// 88 = 0x58
    float _horzUncSemiMajAz;	// 92 = 0x5c
    float _horzUncSemiMin;	// 96 = 0x60
    int _modeIndicator;	// 100 = 0x64
    CLPMotionActivity *_motionActivity;	// 104 = 0x68
    int _motionActivityConfidence;	// 112 = 0x70
    int _motionActivityType;	// 116 = 0x74
    CLPPipelineDiagnosticReport *_pipelineDiagnosticReport;	// 120 = 0x78
    int _provider;	// 128 = 0x80
    CLPMotionActivity *_rawMotionActivity;	// 136 = 0x88
    CLPSatelliteReport *_satReport;	// 144 = 0x90
    float _speed;	// 152 = 0x98
    float _speedAccuracy;	// 156 = 0x9c
    float _verticalAccuracy;	// 160 = 0xa0
    _Bool _isFromLocationController;	// 164 = 0xa4
    _Bool _motionVehicleConnected;	// 165 = 0xa5
    _Bool _motionVehicleConnectedStateChanged;	// 166 = 0xa6
    struct {
        unsigned int altitude:1;
        unsigned int context:1;
        unsigned int course:1;
        unsigned int courseAccuracy:1;
        unsigned int floor:1;
        unsigned int horzUncSemiMaj:1;
        unsigned int horzUncSemiMajAz:1;
        unsigned int horzUncSemiMin:1;
        unsigned int modeIndicator:1;
        unsigned int motionActivityConfidence:1;
        unsigned int motionActivityType:1;
        unsigned int provider:1;
        unsigned int speed:1;
        unsigned int speedAccuracy:1;
        unsigned int verticalAccuracy:1;
        unsigned int isFromLocationController:1;
        unsigned int motionVehicleConnected:1;
        unsigned int motionVehicleConnectedStateChanged:1;
    } _has;	// 168 = 0xa8
}

+ (Class)appBundleIdIndicesType;	// IMP=0x0000000000030316
- (void).cxx_destruct;	// IMP=0x000000000003478a
@property(retain, nonatomic) CLPBaroCalibrationIndication *baroCalibrationIndication; // @synthesize baroCalibrationIndication=_baroCalibrationIndication;
@property(retain, nonatomic) CLPPipelineDiagnosticReport *pipelineDiagnosticReport; // @synthesize pipelineDiagnosticReport=_pipelineDiagnosticReport;
@property(nonatomic) _Bool isFromLocationController; // @synthesize isFromLocationController=_isFromLocationController;
@property(retain, nonatomic) CLPSatelliteReport *satReport; // @synthesize satReport=_satReport;
@property(nonatomic) float horzUncSemiMajAz; // @synthesize horzUncSemiMajAz=_horzUncSemiMajAz;
@property(nonatomic) float horzUncSemiMin; // @synthesize horzUncSemiMin=_horzUncSemiMin;
@property(nonatomic) float horzUncSemiMaj; // @synthesize horzUncSemiMaj=_horzUncSemiMaj;
@property(nonatomic) float speedAccuracy; // @synthesize speedAccuracy=_speedAccuracy;
@property(nonatomic) float courseAccuracy; // @synthesize courseAccuracy=_courseAccuracy;
@property(retain, nonatomic) CLPMotionActivity *dominantMotionActivity; // @synthesize dominantMotionActivity=_dominantMotionActivity;
@property(retain, nonatomic) CLPMotionActivity *motionActivity; // @synthesize motionActivity=_motionActivity;
@property(retain, nonatomic) CLPMotionActivity *rawMotionActivity; // @synthesize rawMotionActivity=_rawMotionActivity;
@property(nonatomic) _Bool motionVehicleConnected; // @synthesize motionVehicleConnected=_motionVehicleConnected;
@property(nonatomic) _Bool motionVehicleConnectedStateChanged; // @synthesize motionVehicleConnectedStateChanged=_motionVehicleConnectedStateChanged;
@property(retain, nonatomic) NSMutableArray *appBundleIdIndices; // @synthesize appBundleIdIndices=_appBundleIdIndices;
@property(nonatomic) int floor; // @synthesize floor=_floor;
@property(nonatomic) int provider; // @synthesize provider=_provider;
@property(nonatomic) int motionActivityConfidence; // @synthesize motionActivityConfidence=_motionActivityConfidence;
@property(nonatomic) int motionActivityType; // @synthesize motionActivityType=_motionActivityType;
@property(nonatomic) int context; // @synthesize context=_context;
@property(nonatomic) float course; // @synthesize course=_course;
@property(nonatomic) float speed; // @synthesize speed=_speed;
@property(nonatomic) float verticalAccuracy; // @synthesize verticalAccuracy=_verticalAccuracy;
@property(nonatomic) float altitude; // @synthesize altitude=_altitude;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) float horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000033fb4
- (unsigned long long)hash;	// IMP=0x0000000000033049
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000032a28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000032492
- (void)copyTo:(id)arg1;	// IMP=0x00000000000320a8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000031bf1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000031be4
- (id)dictionaryRepresentation;	// IMP=0x0000000000030881
- (id)description;	// IMP=0x00000000000307d2
@property(readonly, nonatomic) _Bool hasBaroCalibrationIndication;
@property(readonly, nonatomic) _Bool hasPipelineDiagnosticReport;
@property(nonatomic) _Bool hasIsFromLocationController;
@property(readonly, nonatomic) _Bool hasSatReport;
@property(nonatomic) _Bool hasHorzUncSemiMajAz;
@property(nonatomic) _Bool hasHorzUncSemiMin;
@property(nonatomic) _Bool hasHorzUncSemiMaj;
- (int)StringAsModeIndicator:(id)arg1;	// IMP=0x0000000000030594
- (id)modeIndicatorAsString:(int)arg1;	// IMP=0x0000000000030508
@property(nonatomic) _Bool hasModeIndicator;
@property(nonatomic) int modeIndicator; // @synthesize modeIndicator=_modeIndicator;
@property(nonatomic) _Bool hasSpeedAccuracy;
@property(nonatomic) _Bool hasCourseAccuracy;
@property(readonly, nonatomic) _Bool hasDominantMotionActivity;
@property(readonly, nonatomic) _Bool hasMotionActivity;
@property(readonly, nonatomic) _Bool hasRawMotionActivity;
@property(nonatomic) _Bool hasMotionVehicleConnected;
@property(nonatomic) _Bool hasMotionVehicleConnectedStateChanged;
- (id)appBundleIdIndicesAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000302f9
- (unsigned long long)appBundleIdIndicesCount;	// IMP=0x00000000000302dc
- (void)addAppBundleIdIndices:(id)arg1;	// IMP=0x0000000000030272
- (void)clearAppBundleIdIndices;	// IMP=0x0000000000030255
@property(nonatomic) _Bool hasFloor;
@property(nonatomic) _Bool hasProvider;
@property(nonatomic) _Bool hasMotionActivityConfidence;
@property(nonatomic) _Bool hasMotionActivityType;
@property(nonatomic) _Bool hasContext;
@property(nonatomic) _Bool hasCourse;
@property(nonatomic) _Bool hasSpeed;
@property(nonatomic) _Bool hasVerticalAccuracy;
@property(nonatomic) _Bool hasAltitude;

@end
