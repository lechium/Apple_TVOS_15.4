//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFSetAirPlayRouteRequest
{
    _Bool _suppressPasscodePrompt;	// 8 = 0x8
    NSString *_routeUID;	// 16 = 0x10
    NSString *_password;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000038237
- (void).cxx_destruct;	// IMP=0x000000000003855c
@property(nonatomic) _Bool suppressPasscodePrompt; // @synthesize suppressPasscodePrompt=_suppressPasscodePrompt;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *routeUID; // @synthesize routeUID=_routeUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000383d8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003823f

@end

