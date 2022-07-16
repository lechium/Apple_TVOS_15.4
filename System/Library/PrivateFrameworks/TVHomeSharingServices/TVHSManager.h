//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TVHSMediaServerDiscoveryConfiguration;

@interface TVHSManager : NSObject
{
    TVHSMediaServerDiscoveryConfiguration *_mediaServerDiscoveryConfiguration;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x0000000000001454
- (void).cxx_destruct;	// IMP=0x00000000000018c6
@property(copy, nonatomic) TVHSMediaServerDiscoveryConfiguration *mediaServerDiscoveryConfiguration; // @synthesize mediaServerDiscoveryConfiguration=_mediaServerDiscoveryConfiguration;
- (void)enableMediaServerDiscoverWithDiscoveryMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingPassword:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000157e
- (void)startManagementWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000014d8
- (id)init;	// IMP=0x00000000000014a9

@end
