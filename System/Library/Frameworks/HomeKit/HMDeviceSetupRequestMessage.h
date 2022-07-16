//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TouchRemote/TRRequestMessage.h>

@class NSData;

@interface HMDeviceSetupRequestMessage : TRRequestMessage
{
    NSData *_payload;	// 8 = 0x8
    long long _qualityOfService;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000260d12
- (void).cxx_destruct;	// IMP=0x0000000000260cff
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, copy, nonatomic) NSData *payload; // @synthesize payload=_payload;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000260c09
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000260b28
- (id)initWithPayload:(id)arg1;	// IMP=0x0000000000260a9f
- (id)init;	// IMP=0x0000000000260a8b

@end
