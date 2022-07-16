//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CLRoutineMonitorServiceProtocol;

@interface CLContextManagerSignificantLocationVisit
{
    id <CLRoutineMonitorServiceProtocol> _routineMonitorProxy;	// 40 = 0x28
    double lastSLVUpdateTimestamp;	// 48 = 0x30
    double lastFloorTransitionUpdateTimestamp;	// 56 = 0x38
    unsigned char numWorkSubmissions;	// 64 = 0x40
    unsigned char numUnknownSubmissions;	// 65 = 0x41
    _Bool useSanctionedPolygons;	// 66 = 0x42
    struct CLFloorTransitionDetector _floorTransitionDetector;	// 72 = 0x48
    _Bool _valid;	// 136 = 0x88
    _Bool _duringVisit;	// 137 = 0x89
    double _currentVisitHorizontalUncertainty;	// 144 = 0x90
    struct CLLocationCoordinate2D _currentVisitLocation;	// 152 = 0x98
}

+ (_Bool)isInsideSanctionedPolygon:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00200000006af6ab
- (id).cxx_construct;	// IMP=0x00200000006af88a
- (void).cxx_destruct;	// IMP=0x00100000006af879
@property(nonatomic) double currentVisitHorizontalUncertainty; // @synthesize currentVisitHorizontalUncertainty=_currentVisitHorizontalUncertainty;
@property(nonatomic) struct CLLocationCoordinate2D currentVisitLocation; // @synthesize currentVisitLocation=_currentVisitLocation;
@property(nonatomic) _Bool duringVisit; // @synthesize duringVisit=_duringVisit;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (_Bool)shouldTriggerFloorTransitionHarvest:(float)arg1 atTime:(double)arg2;	// IMP=0x00100000006af4d7
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x00100000006aef27
- (double)timeUserGetCloseToVisitLocation;	// IMP=0x00100000006ae9c1
- (_Bool)hasPressureChangeFrom:(double)arg1 to:(double)arg2;	// IMP=0x00100000006ae782
- (void)sendTrackFrom:(double)arg1 to:(double)arg2 location:(struct CLLocationCoordinate2D)arg3 horrUnc:(double)arg4 type:(unsigned long long)arg5;	// IMP=0x00100000006ae5ce
- (_Bool)shouldSubmit:(long long)arg1 calibrationType:(unsigned long long)arg2;	// IMP=0x00100000006ae368
- (_Bool)isDeparture:(id)arg1;	// IMP=0x00100000006ae327
- (_Bool)isEntry:(id)arg1;	// IMP=0x00100000006ae2e8
- (void)onVisit:(id)arg1;	// IMP=0x00100000006adc33
- (void)stopBuffering;	// IMP=0x00100000006adc09
- (void)startBuffering;	// IMP=0x00100000006adbdf
- (void)cleanup;	// IMP=0x00100000006adba3
- (void)dealloc;	// IMP=0x00100000006adb61
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x00100000006ad855

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

