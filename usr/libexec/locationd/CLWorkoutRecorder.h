//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class CLDispatchSilo, CLDrivingRecorderTrigger, CLServiceVendor, CLWorkoutRecorderPublisher, CLWorkoutRecorderTrigger, NSString, NSURL;

@interface CLWorkoutRecorder : CLIntersiloService
{
    NSURL *_workingDirectory;	// 8 = 0x8
    _Bool _deviceUnlocked;	// 16 = 0x10
    struct unique_ptr<CLDataProtectionManager_Type::Client, std::default_delete<CLDataProtectionManager_Type::Client>> _dataProtectionClient;	// 24 = 0x18
    CLWorkoutRecorderTrigger *_workoutRecorderTrigger;	// 32 = 0x20
    CLDrivingRecorderTrigger *_drivingRecorderTrigger;	// 40 = 0x28
    struct CLDaemonLocation _recentLocation;	// 48 = 0x30
    void *_serviceLocationProvider;	// 224 = 0xe0
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::default_delete<CLServiceLocationProvider_Type::Client>> _serviceLocationClient;	// 232 = 0xe8
    CLWorkoutRecorderPublisher *_publisher;	// 240 = 0xf0
}

+ (_Bool)isSupported;	// IMP=0x0020000000a81f83
+ (id)getSilo;	// IMP=0x0010000000a81dc4
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a81dab
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x0010000000a81d4e
- (id).cxx_construct;	// IMP=0x0020000000a839df
- (void).cxx_destruct;	// IMP=0x0010000000a8398d
@property(readonly, retain, nonatomic) CLWorkoutRecorderPublisher *publisher; // @synthesize publisher=_publisher;
- (void)handleResponse:(id)arg1;	// IMP=0x0010000000a8384c
- (_Bool)workingDirectoryHasSufficientFreeSpace;	// IMP=0x0010000000a83582
- (_Bool)createWorkingDirectory;	// IMP=0x0010000000a830ba
- (_Bool)acquireTokenWithSettings:(void *)arg1 publisher:(id)arg2;	// IMP=0x0010000000a82d8d
- (void)onLocationNotification:(const int *)arg1 data:(const void *)arg2;	// IMP=0x0010000000a82d6d
- (void)onDataProtectionNotification:(const int *)arg1 data:(const NotificationData_6933e140 *)arg2;	// IMP=0x0010000000a82ceb
- (struct CLDaemonLocation *)getRecentLocation;	// IMP=0x0010000000a82cdb
- (id)getWorkingDirectory;	// IMP=0x0010000000a82cca
- (_Bool)didPublishRecording:(id *)arg1 settings:(void *)arg2 publisher:(id)arg3;	// IMP=0x0010000000a82918
- (_Bool)canStartRecording:(id *)arg1 settings:(void *)arg2 publisher:(id)arg3;	// IMP=0x0010000000a82338
- (void)endService;	// IMP=0x0010000000a8221b
- (void)beginService;	// IMP=0x0010000000a81f8b
- (void)dealloc;	// IMP=0x0010000000a81f06
- (id)init;	// IMP=0x0010000000a81e20

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, retain, nonatomic) CLDispatchSilo *silo; // @dynamic silo;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;
@property(readonly, nonatomic) CLServiceVendor *vendor;

@end

