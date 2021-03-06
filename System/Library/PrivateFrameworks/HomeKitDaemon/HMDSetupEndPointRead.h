//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDSetupEndPointRead <NSSecureCoding>
{
    unsigned long long _responseStatus;	// 40 = 0x28
    NSNumber *_videoSSRC;	// 48 = 0x30
    NSNumber *_audioSSRC;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000073bcc
- (void).cxx_destruct;	// IMP=0x0000000000073b9b
@property(readonly, copy, nonatomic) NSNumber *audioSSRC; // @synthesize audioSSRC=_audioSSRC;
@property(readonly, copy, nonatomic) NSNumber *videoSSRC; // @synthesize videoSSRC=_videoSSRC;
@property(readonly, nonatomic) unsigned long long responseStatus; // @synthesize responseStatus=_responseStatus;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000073a71
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007387c
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000007372f
- (_Bool)_parseFromTLVDataOnFailure;	// IMP=0x0000000000073700
- (_Bool)_parseFromTLVDataOnSuccess;	// IMP=0x0000000000073581
- (_Bool)_parseFromTLVData;	// IMP=0x000000000007341e
- (id)tlvData;	// IMP=0x000000000007327f
- (id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 responseStatus:(unsigned long long)arg5 videoSSRC:(id)arg6 audioSSRC:(id)arg7;	// IMP=0x00000000000731af

@end

