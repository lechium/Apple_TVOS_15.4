//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMSystemProxySettingsFetcher : NSObject
{
    unsigned short _port;	// 8 = 0x8
    unsigned short _proxyPort;	// 10 = 0xa
    id _delegate;	// 16 = 0x10
    NSString *_host;	// 24 = 0x18
    long long _proxyProtocol;	// 32 = 0x20
    NSString *_proxyHost;	// 40 = 0x28
    NSString *_proxyAccount;	// 48 = 0x30
    NSString *_proxyPassword;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000273d
@property(copy, nonatomic) NSString *_proxyPassword; // @synthesize _proxyPassword;
@property(copy, nonatomic) NSString *_proxyAccount; // @synthesize _proxyAccount;
@property(nonatomic) unsigned short _proxyPort; // @synthesize _proxyPort;
@property(copy, nonatomic) NSString *_proxyHost; // @synthesize _proxyHost;
@property(nonatomic) long long _proxyProtocol; // @synthesize _proxyProtocol;
@property(nonatomic) unsigned short _port; // @synthesize _port;
@property(copy, nonatomic) NSString *_host; // @synthesize _host;
@property id delegate; // @synthesize delegate=_delegate;
- (void)retrieveProxyAccountSettings;	// IMP=0x0000000000002659
- (void)retrieveProxySettings;	// IMP=0x0000000000002653
- (id)initWithProxyProtocol:(long long)arg1 proxyHost:(id)arg2 proxyPort:(unsigned short)arg3 delegate:(id)arg4;	// IMP=0x00000000000025ac
- (id)initWithHost:(id)arg1 port:(unsigned short)arg2 delegate:(id)arg3;	// IMP=0x0000000000002509
- (void)_takeProxySettingsFromDictionary:(struct __CFDictionary *)arg1;	// IMP=0x0000000000002503
- (void)_getProxyAccountAndPasswordFromKeychain;	// IMP=0x00000000000024c9
- (void)_callAccountSettingsDelegateMethod;	// IMP=0x0000000000002475
- (void)_callProxySettingsDelegateMethod;	// IMP=0x000000000000241c

@end

