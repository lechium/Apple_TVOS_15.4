//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKAppleIDServerResourceLoadDelegate, AKAppleIDServerUIDataHarvester, AKServerRequestConfiguration, NSHTTPURLResponse, NSURL;

@interface AKAppleIDServerUIContextController : NSObject
{
    CDUnknownBlockType _serverUICompletion;	// 8 = 0x8
    NSHTTPURLResponse *_latestReadResponse;	// 16 = 0x10
    AKServerRequestConfiguration *_configuration;	// 24 = 0x18
    AKAppleIDServerResourceLoadDelegate *_serverUIDelegate;	// 32 = 0x20
    AKAppleIDServerUIDataHarvester *_serverDataHarvester;	// 40 = 0x28
    NSURL *_initiatingURL;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001ae06
@property(readonly, copy, nonatomic) NSURL *initiatingURL; // @synthesize initiatingURL=_initiatingURL;
@property(readonly, nonatomic) AKAppleIDServerUIDataHarvester *serverDataHarvester; // @synthesize serverDataHarvester=_serverDataHarvester;
@property(readonly, nonatomic) AKAppleIDServerResourceLoadDelegate *serverUIDelegate; // @synthesize serverUIDelegate=_serverUIDelegate;
- (void)_completeWithResponse:(id)arg1 additionalData:(id)arg2 error:(id)arg3;	// IMP=0x000000000001ab9e
- (void)completeWithFinalResponse:(id)arg1;	// IMP=0x000000000001ab08
- (void)completeWithError:(id)arg1 additionalData:(id)arg2;	// IMP=0x000000000001aaf1
- (void)completeWithError:(id)arg1;	// IMP=0x000000000001aad8
- (void)processResponse:(id)arg1;	// IMP=0x000000000001a9b3
- (id)_headerValueFromType:(unsigned long long)arg1;	// IMP=0x000000000001a98d
- (void)signRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a83a
- (_Bool)handleAuthKitActionAttribute:(id)arg1;	// IMP=0x000000000001a6b6
- (id)initWithRequestConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a598
- (void)tearDownContext;	// IMP=0x000000000001a55f

@end

