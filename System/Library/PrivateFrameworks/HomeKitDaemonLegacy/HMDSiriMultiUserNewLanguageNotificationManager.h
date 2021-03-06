//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>

@class HMDSiriMultiUserNewLanguageNotificationManagerContext, NSString;

@interface HMDSiriMultiUserNewLanguageNotificationManager : HMFObject <HMFLogging, HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate>
{
    HMDSiriMultiUserNewLanguageNotificationManagerContext *_context;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x0000000000921c48
- (void).cxx_destruct;	// IMP=0x0000000000921a42
@property(readonly) HMDSiriMultiUserNewLanguageNotificationManagerContext *context; // @synthesize context=_context;
- (void)_postNotificationIfNecessaryForMediaAccessory:(id)arg1;	// IMP=0x0000000000920f67
- (void)mediaAccessory:(id)arg1 didUpdateSoftwareToVersion:(id)arg2;	// IMP=0x0000000000920e69
- (void)checkAllMediaAccessoriesAndPostNotificationIfNecessary;	// IMP=0x0000000000920c21
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000920b98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

