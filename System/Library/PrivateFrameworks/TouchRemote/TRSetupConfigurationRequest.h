//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TRSetupConfigurationRequest
{
    NSString *_deviceName;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d562
- (void).cxx_destruct;	// IMP=0x000000000001d765
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (id)description;	// IMP=0x000000000001d679
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d5de
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d56a

@end

