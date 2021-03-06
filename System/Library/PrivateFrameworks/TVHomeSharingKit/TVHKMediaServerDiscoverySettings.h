//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, TVHKMediaServerDiscoveryConfiguration;
@protocol OS_dispatch_queue;

@interface TVHKMediaServerDiscoverySettings
{
    _Bool _cacheIPAddresses;	// 8 = 0x8
    _Bool _logVerbosely;	// 9 = 0x9
    NSString *_serverIPAddress;	// 16 = 0x10
    TVHKMediaServerDiscoveryConfiguration *_mediaServerDiscoveryConfiguration;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_serialProcessingQueue;	// 32 = 0x20
    unsigned long long _homeSharingGroupIdentifierFetchContext;	// 40 = 0x28
}

+ (_Bool)_validateMediaServerDiscoveryMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingGroupIdentifier:(id)arg3;	// IMP=0x000000000005088e
+ (id)new;	// IMP=0x000000000004f1e4
+ (id)sharedInstance;	// IMP=0x000000000004f147
- (void).cxx_destruct;	// IMP=0x00000000000509cb
@property(nonatomic) unsigned long long homeSharingGroupIdentifierFetchContext; // @synthesize homeSharingGroupIdentifierFetchContext=_homeSharingGroupIdentifierFetchContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingQueue; // @synthesize serialProcessingQueue=_serialProcessingQueue;
@property(nonatomic) _Bool logVerbosely; // @synthesize logVerbosely=_logVerbosely;
- (void)_writeMediaServerDiscoveryConfigurationToPreferences:(id)arg1;	// IMP=0x0000000000050686
- (id)_readMediaServerDiscoveryConfigurationFromPreferences;	// IMP=0x0000000000050471
- (void)_fetchHomeSharingGroupIdentifierWithAccountName:(id)arg1 password:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000501e7
- (void)_refreshFromPreferencesAndShouldNotify:(_Bool)arg1;	// IMP=0x000000000004feba
- (void)_setMediaServerDiscoveryConfigurationWithMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingPassword:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004f8e6
- (void)_refreshFromPreferences;	// IMP=0x000000000004f8cf
- (void)_initializeFromPreferences;	// IMP=0x000000000004f8bb
- (void)setMediaServerDiscoveryConfigurationWithMode:(unsigned long long)arg1 homeSharingAccountName:(id)arg2 homeSharingPassword:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000004f6c0
@property(copy, nonatomic) TVHKMediaServerDiscoveryConfiguration *mediaServerDiscoveryConfiguration; // @synthesize mediaServerDiscoveryConfiguration=_mediaServerDiscoveryConfiguration;
@property(copy, nonatomic) NSString *serverIPAddress; // @synthesize serverIPAddress=_serverIPAddress;
@property(nonatomic) _Bool cacheIPAddresses; // @synthesize cacheIPAddresses=_cacheIPAddresses;
- (id)_init;	// IMP=0x000000000004f282
- (id)init;	// IMP=0x000000000004f213

@end

