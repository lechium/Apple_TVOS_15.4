//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/NSURLSessionDelegate-Protocol.h>

@class NSDictionary, NSString, NSURLSession;

@interface ADServer <NSURLSessionDelegate>
{
    int _configurationExpirationTime;	// 8 = 0x8
    NSDictionary *_configurations;	// 16 = 0x10
    NSString *_resourceConnectProxyURL;	// 24 = 0x18
    NSURLSession *_session;	// 32 = 0x20
}

+ (id)workQueue;	// IMP=0x000000000001c8ee
+ (void)initialize;	// IMP=0x000000000001c6df
+ (id)sharedInstance;	// IMP=0x000000000001c652
- (void).cxx_destruct;	// IMP=0x000000000001e69f
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSString *resourceConnectProxyURL; // @synthesize resourceConnectProxyURL=_resourceConnectProxyURL;
@property int configurationExpirationTime; // @synthesize configurationExpirationTime=_configurationExpirationTime;
@property(retain) NSDictionary *configurations; // @synthesize configurations=_configurations;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000001e5b0
- (void)handleRequest:(id)arg1 serverURL:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001d7d4
- (id)serverURLForMessageClass:(Class)arg1 serverURL:(id)arg2;	// IMP=0x000000000001d4e2
- (id)routingHeaderForClass:(Class)arg1 serverURL:(id)arg2;	// IMP=0x000000000001d2f0
- (id)deserializeMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001d0e0
- (id)serializeMessage:(id)arg1;	// IMP=0x000000000001cf7d
- (void)saveProxyURL;	// IMP=0x000000000001cf3e
- (void)saveConfig;	// IMP=0x000000000001ceff
- (void)restoreConfiguration;	// IMP=0x000000000001ce6c
- (void)buildConfigurationDictionary:(id)arg1;	// IMP=0x000000000001ca02
- (_Bool)shouldRestoreConfiguration;	// IMP=0x000000000001c8ff
- (id)init;	// IMP=0x000000000001c741

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

