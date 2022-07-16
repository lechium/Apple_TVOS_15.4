//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDWACAccessoryAssociation-Protocol.h>

@class HMDMediaOutputDevice;
@protocol HMFLocking;

@interface HMDMediaAccessoryAdvertisement <HMDWACAccessoryAssociation>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _associated;	// 16 = 0x10
    HMDMediaOutputDevice *_outputDevice;	// 24 = 0x18
}

+ (_Bool)canAirPortExpressSupportMediaAccessory:(id)arg1;	// IMP=0x0000000000978cdf
- (void).cxx_destruct;	// IMP=0x0000000000978c12
- (long long)associationOptions;	// IMP=0x0000000000978b51
@property(getter=isAssociated) _Bool associated; // @synthesize associated=_associated;
@property(retain) HMDMediaOutputDevice *outputDevice; // @synthesize outputDevice=_outputDevice;
- (id)description;	// IMP=0x00000000009786ef
- (_Bool)matchesWACDeviceID:(id)arg1;	// IMP=0x0000000000978671
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3;	// IMP=0x0000000000978604
- (id)initWithOutputDevice:(id)arg1;	// IMP=0x0000000000978480

@end

