//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _DKThrottledActivity;
@protocol OS_dispatch_queue;

@interface _DKCloudUtilities : NSObject
{
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 8 = 0x8
    _DKThrottledActivity *_activityThrottler;	// 16 = 0x10
    _Bool _supportsDeviceToDeviceEncryption;	// 24 = 0x18
    _Bool _isSingleDevice;	// 25 = 0x19
}

+ (_Bool)isSyncAvailableAndEnabledWithVerboseLogging:(_Bool)arg1;	// IMP=0x000000000002eab9
+ (_Bool)isSyncAvailableAndEnabled;	// IMP=0x000000000002eaa5
+ (void)setUnitTesting:(_Bool)arg1;	// IMP=0x000000000002e9e6
+ (_Bool)isUnitTesting;	// IMP=0x000000000002e9da
+ (void)setCloudKitEnabled:(_Bool)arg1;	// IMP=0x000000000002e91b
+ (_Bool)isCloudKitEnabled;	// IMP=0x000000000002e90f
+ (id)containerIdentifier;	// IMP=0x000000000002e902
+ (id)sharedInstance;	// IMP=0x000000000002e87d
- (void).cxx_destruct;	// IMP=0x000000000003148b
- (void)deleteRemoteStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000002fd47
- (void)_accountDidChange:(id)arg1;	// IMP=0x000000000002f3b8
@property(readonly, nonatomic) _Bool supportsDeviceToDeviceEncryption;
@property(readonly, nonatomic) _Bool isSiriCloudSyncEnabled;
@property(readonly, nonatomic) _Bool isSingleDevice;
- (void)setCloudSyncAvailable:(_Bool)arg1;	// IMP=0x000000000002f25d
@property(readonly, nonatomic) _Bool isCloudSyncAvailable;
- (void)dealloc;	// IMP=0x000000000002f090
- (id)init;	// IMP=0x000000000002ecb9

@end

