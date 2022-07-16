//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemon/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDSRTPCryptoSuite, NSData;

@interface HMDSRTPParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    HMDSRTPCryptoSuite *_srtpCryptoSuite;	// 8 = 0x8
    NSData *_srtpMasterKey;	// 16 = 0x10
    NSData *_srtpMasterSalt;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000072509
- (void).cxx_destruct;	// IMP=0x00000000000724c7
@property(readonly, copy, nonatomic) NSData *srtpMasterSalt; // @synthesize srtpMasterSalt=_srtpMasterSalt;
@property(readonly, copy, nonatomic) NSData *srtpMasterKey; // @synthesize srtpMasterKey=_srtpMasterKey;
@property(readonly, copy, nonatomic) HMDSRTPCryptoSuite *srtpCryptoSuite; // @synthesize srtpCryptoSuite=_srtpCryptoSuite;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000723b1
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000072152
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000072007
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000071dcf
- (id)tlvData;	// IMP=0x0000000000071c8b
- (_Bool)compatibleWithRemoteEndPoint:(id)arg1;	// IMP=0x0000000000071b07
- (id)initWithCryptoSuite:(id)arg1 masterKey:(id)arg2 masterSalt:(id)arg3;	// IMP=0x0000000000071a41

@end

