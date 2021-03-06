//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationRecorder-Protocol.h>

@class MNTrace, MNTracePreparedStatement, NSDate, NSMapTable, NSString;

@interface MNTraceRecorder : NSObject <MNLocationRecorder>
{
    MNTrace *_trace;	// 8 = 0x8
    NSString *_tracePath;	// 16 = 0x10
    NSDate *_recordingStartTime;	// 24 = 0x18
    NSDate *_recordingCompassHeadingLastDate;	// 32 = 0x20
    _Bool _corrupted;	// 40 = 0x28
    _Bool _closed;	// 41 = 0x29
    _Bool _created;	// 42 = 0x2a
    MNTracePreparedStatement *_recordEnvironmentInfoStatement;	// 48 = 0x30
    MNTracePreparedStatement *_recordDebugSettingStatement;	// 56 = 0x38
    MNTracePreparedStatement *_recordAudioSettingStatement;	// 64 = 0x40
    MNTracePreparedStatement *_recordStylesheetStatement;	// 72 = 0x48
    MNTracePreparedStatement *_recordLocationStatement;	// 80 = 0x50
    MNTracePreparedStatement *_recordLocationErrorStatement;	// 88 = 0x58
    MNTracePreparedStatement *_recordMatchInfoStatement;	// 96 = 0x60
    MNTracePreparedStatement *_recordDirectionsStatement;	// 104 = 0x68
    MNTracePreparedStatement *_recordETAUStatement;	// 112 = 0x70
    MNTracePreparedStatement *_recordRealtimeTransitUpdateRequest;	// 120 = 0x78
    MNTracePreparedStatement *_recordRealtimeTransitUpdateResponse;	// 128 = 0x80
    MNTracePreparedStatement *_recordRealtimeTransitUpdateResponseError;	// 136 = 0x88
    MNTracePreparedStatement *_recordVehicleSpeed;	// 144 = 0x90
    MNTracePreparedStatement *_recordVehicleHeading;	// 152 = 0x98
    MNTracePreparedStatement *_recordMotionData;	// 160 = 0xa0
    MNTracePreparedStatement *_recordCompassHeading;	// 168 = 0xa8
    MNTracePreparedStatement *_recordVirtualGarageVehicleState;	// 176 = 0xb0
    MNTracePreparedStatement *_recordNavigationEvent;	// 184 = 0xb8
    MNTracePreparedStatement *_updateNavigationEventLocationID;	// 192 = 0xc0
    unsigned long long _routeRequestCount;	// 200 = 0xc8
    unsigned long long _etaTrafficUpdateCount;	// 208 = 0xd0
    NSMapTable *_eventsPendingLocationReference;	// 216 = 0xd8
    CDUnknownBlockType _timeSinceRecordingBeganHandler;	// 224 = 0xe0
    CDUnknownBlockType _errorHandler;	// 232 = 0xe8
    _Bool _lastPauseSpokenAudio;	// 240 = 0xf0
    long long _lastVoiceGuidanceSetting;	// 248 = 0xf8
    unsigned long long _lastLaneEventHash;	// 256 = 0x100
}

- (void).cxx_destruct;	// IMP=0x000000000003aae8
@property(copy, nonatomic) CDUnknownBlockType timeSinceRecordingBeganHandler; // @synthesize timeSinceRecordingBeganHandler=_timeSinceRecordingBeganHandler;
@property(retain, nonatomic) NSDate *recordingStartTime; // @synthesize recordingStartTime=_recordingStartTime;
@property(readonly, nonatomic) MNTrace *trace; // @synthesize trace=_trace;
- (void)_executeStatementForQuery:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003a76a
- (void)_updateNavigationEventsWithLocationReference:(id)arg1;	// IMP=0x000000000003a39a
- (void)_logError:(id)arg1 resultCode:(int)arg2;	// IMP=0x000000000003a2d0
- (void)recordVirtualGarageVehicleState:(id)arg1 isDifferentVehicle:(_Bool)arg2;	// IMP=0x0000000000039a8f
- (void)recordCompassHeading:(double)arg1 magneticHeading:(double)arg2 accuracy:(double)arg3 timestamp:(id)arg4;	// IMP=0x00000000000396b4
- (void)recordMotionUpdate:(unsigned long long)arg1 exitType:(unsigned long long)arg2 confidence:(unsigned long long)arg3;	// IMP=0x0000000000039328
- (void)recordVehicleHeading:(double)arg1 timestamp:(id)arg2;	// IMP=0x0000000000039002
- (void)recordVehicleSpeed:(double)arg1 timestamp:(id)arg2;	// IMP=0x0000000000038cdc
- (void)recordTransitUpdateError:(id)arg1;	// IMP=0x00000000000389bf
- (void)recordTransitUpdateResponse:(id)arg1;	// IMP=0x00000000000386b0
- (void)recordTransitUpdateRequest:(id)arg1 withTimestamp:(double)arg2;	// IMP=0x00000000000383b8
- (void)recordETAURequest:(id)arg1 response:(id)arg2 error:(id)arg3 destinationName:(id)arg4 requestTimestamp:(double)arg5 responseTimestamp:(double)arg6;	// IMP=0x0000000000037f37
- (void)recordInitialCourse:(double)arg1;	// IMP=0x0000000000037b8e
- (void)recordDirectionsRequest:(id)arg1 response:(id)arg2 error:(id)arg3 waypoints:(id)arg4 selectedRouteIndex:(unsigned long long)arg5 requestTimestamp:(double)arg6 responseTimestamp:(double)arg7;	// IMP=0x00000000000374e9
- (void)endTransaction;	// IMP=0x0000000000037349
- (void)beginTransaction;	// IMP=0x00000000000371a9
- (void)resetLocationsForSimulation;	// IMP=0x0000000000036f68
- (void)setRouteGenius:(_Bool)arg1;	// IMP=0x0000000000036d99
- (void)setIsSimulation:(_Bool)arg1;	// IMP=0x0000000000036b90
- (void)recordError:(id)arg1;	// IMP=0x000000000003687c
- (void)recordLocationUpdateResume;	// IMP=0x0000000000036844
- (void)recordLocationUpdatePause;	// IMP=0x000000000003680c
- (void)recordLocation:(id)arg1 correctedLocation:(id)arg2;	// IMP=0x0000000000036791
- (void)recordSimulatedCoordinate:(struct CLLocationCoordinate2D)arg1 course:(double)arg2 altitude:(double)arg3 speed:(double)arg4 timestamp:(double)arg5 activeTransportType:(int)arg6;	// IMP=0x000000000003668a
- (void)recordLocation:(id)arg1 timestamp:(double)arg2;	// IMP=0x0000000000036670
- (void)_recordLocationEvent:(long long)arg1 recordingTimestamp:(double)arg2 location:(id)arg3 correctedLocation:(id)arg4;	// IMP=0x00000000000361bb
- (void)_recordLocationEvent:(long long)arg1 recordingTimestamp:(double)arg2 coordinate:(struct CLLocationCoordinate2D)arg3 rawCoordinate:(struct CLLocationCoordinate2D)arg4 timestamp:(double)arg5 horizontalAccuracy:(double)arg6 verticalAccuracy:(double)arg7 altitude:(double)arg8 speed:(double)arg9 speedAccuracy:(double)arg10 course:(double)arg11 rawCourse:(double)arg12 type:(int)arg13 courseAccuracy:(double)arg14 correctedCoordinate:(struct CLLocationCoordinate2D)arg15 correctedCourse:(double)arg16 matchType:(int)arg17 activeTransportType:(int)arg18 matchInfo:(id)arg19 correctedLocation:(id)arg20 speedLimit:(int)arg21 shieldText:(id)arg22 shieldType:(int)arg23;	// IMP=0x0000000000035806
- (void)recordLocation:(id)arg1 rawLocation:(id)arg2 timestamp:(double)arg3;	// IMP=0x0000000000034ebc
- (void)recordLocation:(id)arg1 rawLocation:(id)arg2;	// IMP=0x0000000000034e43
- (void)_recordLocationMatchInfoOnWriteQueue:(id)arg1 forLocationID:(int)arg2;	// IMP=0x0000000000034922
- (void)recordNavigationEvent:(long long)arg1 forLocation:(id)arg2 description:(id)arg3;	// IMP=0x00000000000343bb
- (void)recordMiscInfo:(id)arg1 value:(id)arg2;	// IMP=0x0000000000034002
- (void)recordStylesheet:(id)arg1 data:(id)arg2;	// IMP=0x0000000000033dfa
- (void)recordAudioSetting:(_Bool)arg1 voiceGuidance:(long long)arg2;	// IMP=0x0000000000033c1e
- (void)recordDebugSetting:(id)arg1 settingValue:(id)arg2;	// IMP=0x0000000000033a12
- (void)recordEnvironmentInfo:(id)arg1 value:(id)arg2;	// IMP=0x0000000000033806
- (double)timeSinceRecordingBegan;	// IMP=0x0000000000033680
- (void)_closeTraceDB;	// IMP=0x0000000000033588
- (void)_prepareStatements;	// IMP=0x0000000000031f71
- (void)_updateForExistingTrace;	// IMP=0x0000000000031a9e
- (void)_initializeTraceDB;	// IMP=0x00000000000310d0
- (_Bool)_isTracePathValid:(id)arg1;	// IMP=0x0000000000031038
- (void)_logSqliteErrorWithResult:(int)arg1 file:(const char *)arg2 line:(int)arg3;	// IMP=0x0000000000030ee1
- (void)_dispatchWrite:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030d62
- (void)saveTraceSynchronously;	// IMP=0x0000000000030bf8
- (void)saveTraceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030777
- (void)startWritingTraceToPath:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000300cd
- (id)init;	// IMP=0x0000000000030040

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

