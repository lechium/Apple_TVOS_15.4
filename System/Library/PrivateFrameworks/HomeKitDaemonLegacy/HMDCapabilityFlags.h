//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSData;

@interface HMDCapabilityFlags : HMFObject <NSSecureCoding>
{
    NSData *_bytesData;	// 8 = 0x8
}

+ (id)shortDescription;	// IMP=0x0000000000a82591
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a82589
- (void).cxx_destruct;	// IMP=0x0000000000a82576
@property(readonly) NSData *bytesData; // @synthesize bytesData=_bytesData;
- (_Bool)hasCapabilities:(id)arg1;	// IMP=0x0000000000a823c8
- (id)initWithData:(id)arg1;	// IMP=0x0000000000a8235a
- (id)initWithCapabilities:(id)arg1;	// IMP=0x0000000000a820a1
- (id)initWithCapabilityOptions:(unsigned long long)arg1;	// IMP=0x0000000000a81f1d
- (id)description;	// IMP=0x0000000000a81eb1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a81e11
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a81d98

@end

