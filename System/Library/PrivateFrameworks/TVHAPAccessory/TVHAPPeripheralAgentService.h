//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVHAPAccessory/PBSBulletinServiceDelegate-Protocol.h>

@class NSString, PBSBulletin;
@protocol PBSBulletinServiceInterface;

@interface TVHAPPeripheralAgentService : NSObject <PBSBulletinServiceDelegate>
{
    id <PBSBulletinServiceInterface> _bulletinService;	// 8 = 0x8
    PBSBulletin *_bulletin;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000002561
- (void).cxx_destruct;	// IMP=0x0000000000002b08
@property(retain) PBSBulletin *bulletin; // @synthesize bulletin=_bulletin;
@property(retain, nonatomic) id <PBSBulletinServiceInterface> bulletinService; // @synthesize bulletinService=_bulletinService;
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x0000000000002a61
- (void)_presentPeripheralHUD:(long long)arg1;	// IMP=0x000000000000268d
- (void)remoteConnected:(_Bool)arg1;	// IMP=0x00000000000025b6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
