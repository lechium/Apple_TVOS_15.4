//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDSiriMultiUserNewLanguageNotificationManagerContext, NSString;

@interface HMDSiriMultiUserNewLanguageNotificationManager : HMFObject <HMFLogging, HMDSiriMultiUserNewLanguageNotificationManagerContextDelegate>
{
    HMDSiriMultiUserNewLanguageNotificationManagerContext *_context;	// 8 = 0x8
}

+ (id)logCategory;	// IMP=0x000000000017a00e
- (void).cxx_destruct;	// IMP=0x0000000000179e08
@property(readonly) HMDSiriMultiUserNewLanguageNotificationManagerContext *context; // @synthesize context=_context;
- (void)_postNotificationIfNecessaryForMediaAccessory:(id)arg1;	// IMP=0x000000000017932d
- (void)mediaAccessory:(id)arg1 didUpdateSoftwareToVersion:(id)arg2;	// IMP=0x000000000017922f
- (void)checkAllMediaAccessoriesAndPostNotificationIfNecessary;	// IMP=0x0000000000178fe7
- (id)initWithContext:(id)arg1;	// IMP=0x0000000000178f5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

