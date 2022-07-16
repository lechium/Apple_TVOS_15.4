//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface HMDCameraNetworkConfig : HMFObject <NSCopying>
{
    CDUnion_fab80606 _ipv4SockAddress;	// 8 = 0x8
    CDUnion_fab80606 _ipv6SockAddress;	// 36 = 0x24
    _Bool _ipv6;	// 64 = 0x40
    NSString *_ipAddress;	// 72 = 0x48
    NSNumber *_rtpPort;	// 80 = 0x50
}

+ (id)localIPAddress;	// IMP=0x00000000005d7819
- (void).cxx_destruct;	// IMP=0x00000000005d77e8
@property(retain, nonatomic) NSNumber *rtpPort; // @synthesize rtpPort=_rtpPort;
@property(nonatomic) _Bool ipv6; // @synthesize ipv6=_ipv6;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (id)description;	// IMP=0x00000000005d768e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005d75b0
- (id)initWithAddress:(id)arg1 ipv6:(_Bool)arg2 rtpPort:(id)arg3;	// IMP=0x00000000005d750f
- (id)init;	// IMP=0x00000000005d74d0

@end

