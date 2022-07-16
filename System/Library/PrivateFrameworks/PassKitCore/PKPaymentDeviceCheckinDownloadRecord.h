//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData, NSString, NSUUID;

@interface PKPaymentDeviceCheckinDownloadRecord <NSSecureCoding>
{
    NSString *_region;	// 24 = 0x18
    NSUUID *_identifier;	// 32 = 0x20
    NSData *_responseData;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000039029f
- (void).cxx_destruct;	// IMP=0x0000000000390316
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000390196
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000390054

@end

