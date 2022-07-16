//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface HAPAccessoryWiFiConfiguration
{
    NSString *_ssid;	// 8 = 0x8
    NSData *_psk;	// 16 = 0x10
    NSString *_isoCountryCode;	// 24 = 0x18
}

+ (id)accessoryConfigurationWithSsid:(id)arg1 psk:(id)arg2 country:(id)arg3;	// IMP=0x000000000004b610
- (void).cxx_destruct;	// IMP=0x000000000004b5ce
@property(readonly, nonatomic) NSString *isoCountryCode; // @synthesize isoCountryCode=_isoCountryCode;
@property(readonly, nonatomic) NSData *psk; // @synthesize psk=_psk;
@property(readonly, nonatomic) NSString *ssid; // @synthesize ssid=_ssid;
- (id)description;	// IMP=0x000000000004b4fb
- (id)initWithSSID:(id)arg1 psk:(id)arg2 country:(id)arg3;	// IMP=0x000000000004b435

@end

