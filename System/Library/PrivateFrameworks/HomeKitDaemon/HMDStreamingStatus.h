//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemon/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDStreamingStatus : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    unsigned long long _streamingStatus;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000067e47
@property(readonly, nonatomic) unsigned long long streamingStatus; // @synthesize streamingStatus=_streamingStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000067dde
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000067d65
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x0000000000067ccc
- (id)tlvData;	// IMP=0x0000000000067c13
- (_Bool)_parseFromTLVData;	// IMP=0x0000000000067b08

@end

