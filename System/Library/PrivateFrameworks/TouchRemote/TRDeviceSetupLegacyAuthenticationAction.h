//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TRDeviceSetupLegacyAuthenticationAction
{
    NSString *_deviceGUID;	// 24 = 0x18
    NSString *_userAgent;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001545a
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID=_deviceGUID;
- (id)deviceName;	// IMP=0x00000000000153a0
- (id)propertyListRepresentation;	// IMP=0x00000000000150ea

@end

