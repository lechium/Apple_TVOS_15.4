//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface MCGlobalHTTPProxyPayload
{
    _Bool _proxyPACFallbackAllowed;	// 80 = 0x50
    _Bool _proxyCaptiveLoginAllowed;	// 81 = 0x51
    int _proxyType;	// 84 = 0x54
    NSString *_proxyServer;	// 88 = 0x58
    NSNumber *_proxyServerPort;	// 96 = 0x60
    NSString *_proxyUsername;	// 104 = 0x68
    NSString *_proxyPassword;	// 112 = 0x70
    NSString *_proxyPACURLString;	// 120 = 0x78
    NSString *_credentialUUID;	// 128 = 0x80
    NSNumber *_proxyPACFallbackAllowedNum;	// 136 = 0x88
    NSNumber *_proxyCaptiveLoginAllowedNum;	// 144 = 0x90
}

+ (id)localizedPluralForm;	// IMP=0x00000000000a42fe
+ (id)localizedSingularForm;	// IMP=0x00000000000a42eb
+ (id)typeStrings;	// IMP=0x00000000000a42cb
- (void).cxx_destruct;	// IMP=0x00000000000a618d
@property(retain, nonatomic) NSNumber *proxyCaptiveLoginAllowedNum; // @synthesize proxyCaptiveLoginAllowedNum=_proxyCaptiveLoginAllowedNum;
@property(retain, nonatomic) NSNumber *proxyPACFallbackAllowedNum; // @synthesize proxyPACFallbackAllowedNum=_proxyPACFallbackAllowedNum;
@property(nonatomic) _Bool proxyCaptiveLoginAllowed; // @synthesize proxyCaptiveLoginAllowed=_proxyCaptiveLoginAllowed;
@property(nonatomic) _Bool proxyPACFallbackAllowed; // @synthesize proxyPACFallbackAllowed=_proxyPACFallbackAllowed;
@property(retain, nonatomic) NSString *credentialUUID; // @synthesize credentialUUID=_credentialUUID;
@property(retain, nonatomic) NSString *proxyPACURLString; // @synthesize proxyPACURLString=_proxyPACURLString;
@property(retain, nonatomic) NSString *proxyPassword; // @synthesize proxyPassword=_proxyPassword;
@property(retain, nonatomic) NSString *proxyUsername; // @synthesize proxyUsername=_proxyUsername;
@property(retain, nonatomic) NSNumber *proxyServerPort; // @synthesize proxyServerPort=_proxyServerPort;
@property(retain, nonatomic) NSString *proxyServer; // @synthesize proxyServer=_proxyServer;
@property(nonatomic) int proxyType; // @synthesize proxyType=_proxyType;
- (id)installationWarnings;	// IMP=0x00000000000a5f21
- (id)verboseDescription;	// IMP=0x00000000000a5be1
- (id)payloadDescriptionKeyValueSections;	// IMP=0x00000000000a5365
- (id)subtitle2Description;	// IMP=0x00000000000a52e5
- (id)subtitle2Label;	// IMP=0x00000000000a5291
- (id)subtitle1Description;	// IMP=0x00000000000a5244
- (id)subtitle1Label;	// IMP=0x00000000000a51dc
- (id)stubDictionary;	// IMP=0x00000000000a4f13
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x00000000000a4311

@end

