//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DVTInstrumentsFoundation/DVTDeviceGlobalStatusIndicator-Protocol.h>
#import <DVTInstrumentsFoundation/PBSBulletinServiceDelegate-Protocol.h>

@class DVTDeviceGlobalStatusIndicatorConfiguration, NSString, PBSBulletin;
@protocol OS_os_log, PBSBulletinServiceInterface;

@interface DVTTVOSDeviceGlobalStatusIndicator : NSObject <PBSBulletinServiceDelegate, DVTDeviceGlobalStatusIndicator>
{
    NSObject<OS_os_log> *_statusIndicatorLog;	// 8 = 0x8
    DVTDeviceGlobalStatusIndicatorConfiguration *_configuration;	// 16 = 0x10
    CDUnknownBlockType _stoppedByUserBlock;	// 24 = 0x18
    id <PBSBulletinServiceInterface> _bulletinService;	// 32 = 0x20
    PBSBulletin *_presentedBulletin;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005dc7c
@property(retain, nonatomic) PBSBulletin *presentedBulletin; // @synthesize presentedBulletin=_presentedBulletin;
@property(retain, nonatomic) id <PBSBulletinServiceInterface> bulletinService; // @synthesize bulletinService=_bulletinService;
@property(copy, nonatomic) CDUnknownBlockType stoppedByUserBlock; // @synthesize stoppedByUserBlock=_stoppedByUserBlock;
@property(retain, nonatomic) DVTDeviceGlobalStatusIndicatorConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x000000000005dadd
- (void)deactivate;	// IMP=0x000000000005da9b
- (void)activateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d657
- (id)initWithConfiguration:(id)arg1 stoppedByUserBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d532

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
