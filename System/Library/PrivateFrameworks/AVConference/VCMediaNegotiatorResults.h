//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorResults : NSObject
{
    _Bool _supportsDynamicMaxBitrate;	// 8 = 0x8
    NSString *_remoteUserAgent;	// 16 = 0x10
    NSString *_remoteBasebandCodec;	// 24 = 0x18
    unsigned int _remoteBasebandCodecSampleRate;	// 32 = 0x20
    unsigned char _mediaControlInfoVersion;	// 36 = 0x24
    unsigned int _remoteBlobVersion;	// 40 = 0x28
    int _controlChannelVersion;	// 44 = 0x2c
    NSMutableSet *_bandwidthConfigurations;	// 48 = 0x30
}

@property(nonatomic) int controlChannelVersion; // @synthesize controlChannelVersion=_controlChannelVersion;
@property(nonatomic) unsigned int remoteBlobVersion; // @synthesize remoteBlobVersion=_remoteBlobVersion;
@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property(readonly, nonatomic) NSSet *bandwidthConfigurations; // @synthesize bandwidthConfigurations=_bandwidthConfigurations;
@property(nonatomic) unsigned int remoteBasebandCodecSampleRate; // @synthesize remoteBasebandCodecSampleRate=_remoteBasebandCodecSampleRate;
@property(retain, nonatomic) NSString *remoteBasebandCodec; // @synthesize remoteBasebandCodec=_remoteBasebandCodec;
@property(retain, nonatomic) NSString *remoteUserAgent; // @synthesize remoteUserAgent=_remoteUserAgent;
@property(nonatomic) _Bool supportsDynamicMaxBitrate; // @synthesize supportsDynamicMaxBitrate=_supportsDynamicMaxBitrate;
- (unsigned int)maxBandwidthWithOperatingMode:(int)arg1 connectionType:(int)arg2;	// IMP=0x000000000029579b
- (void)addBandwidthConfigurations:(id)arg1;	// IMP=0x0000000000295766
- (void)dealloc;	// IMP=0x00000000002956f2
- (id)init;	// IMP=0x0000000000295672

@end

