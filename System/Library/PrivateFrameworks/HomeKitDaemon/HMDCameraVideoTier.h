//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDVideoResolution, NSNumber;

@interface HMDCameraVideoTier : HMFObject <NSSecureCoding>
{
    HMDVideoResolution *_videoResolution;	// 8 = 0x8
    NSNumber *_maxBitRate;	// 16 = 0x10
    NSNumber *_minBitRate;	// 24 = 0x18
    NSNumber *_rtcpInterval;	// 32 = 0x20
    NSNumber *_framerate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000946cef
- (void).cxx_destruct;	// IMP=0x0000000000946c8b
@property(retain, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(readonly, nonatomic) NSNumber *rtcpInterval; // @synthesize rtcpInterval=_rtcpInterval;
@property(readonly, nonatomic) NSNumber *minBitRate; // @synthesize minBitRate=_minBitRate;
@property(readonly, nonatomic) NSNumber *maxBitRate; // @synthesize maxBitRate=_maxBitRate;
@property(readonly, nonatomic) HMDVideoResolution *videoResolution; // @synthesize videoResolution=_videoResolution;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000946ad6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000094693f
- (unsigned long long)hash;	// IMP=0x00000000009468fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000946828
- (id)description;	// IMP=0x0000000000946711
- (id)initWithVideoResolution:(id)arg1 framerate:(id)arg2 minBitRate:(id)arg3 maxBitRate:(id)arg4 rtcpInterval:(id)arg5;	// IMP=0x00000000009465f9

@end

