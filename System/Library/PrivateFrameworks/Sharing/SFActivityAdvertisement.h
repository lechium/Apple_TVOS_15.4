//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary, SFPeerDevice;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding>
{
    long long _advertisementVersion;	// 8 = 0x8
    NSData *_advertisementPayload;	// 16 = 0x10
    NSDictionary *_options;	// 24 = 0x18
    SFPeerDevice *_device;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000004212e
- (void).cxx_destruct;	// IMP=0x000000000004217c
@property(readonly, retain) SFPeerDevice *device; // @synthesize device=_device;
@property(readonly, copy) NSDictionary *options; // @synthesize options=_options;
@property(readonly, copy) NSData *advertisementPayload; // @synthesize advertisementPayload=_advertisementPayload;
@property(readonly) long long advertisementVersion; // @synthesize advertisementVersion=_advertisementVersion;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000042092
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000041e7d
- (id)description;	// IMP=0x0000000000041d38
- (id)initWithAdvertisementVersion:(unsigned long long)arg1 advertisementPayload:(id)arg2 options:(id)arg3 device:(id)arg4;	// IMP=0x0000000000041c50

@end
