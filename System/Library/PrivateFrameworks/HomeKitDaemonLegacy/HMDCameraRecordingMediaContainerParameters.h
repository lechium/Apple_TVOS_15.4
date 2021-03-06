//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemonLegacy/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDCameraRecordingMediaContainerParameters : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSNumber *_fragmentLength;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000058d79f
- (void).cxx_destruct;	// IMP=0x000000000058d78c
@property(readonly, copy, nonatomic) NSNumber *fragmentLength; // @synthesize fragmentLength=_fragmentLength;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000058d702
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000058d66a
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000058d594
- (id)tlvData;	// IMP=0x000000000058d4f6
- (_Bool)_parseFromTLVData;	// IMP=0x000000000058d403
- (id)initWithFragmentLength:(id)arg1;	// IMP=0x000000000058d395

@end

