//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSNumber, NSString, NSURL, SSAuthenticationContext, SSURLConnectionResponse, SSURLRequestProperties;

@interface URLConnectionRequestOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    NSURL *_destinationFileURL;	// 104 = 0x68
    SSURLRequestProperties *_properties;	// 112 = 0x70
    SSURLConnectionResponse *_response;	// 120 = 0x78
    _Bool _sendsResponseForHTTPFailures;	// 128 = 0x80
    _Bool _shouldMescalSign;	// 129 = 0x81
}

- (_Bool)_shouldSendMachineDataHeadersForProperties:(id)arg1;	// IMP=0x00200000001c1eeb
- (id)_newStoreURLOperationWithProperties:(id)arg1;	// IMP=0x00100000001c1d87
- (id)_metricsPageEventWithResponse:(id)arg1 performance:(id)arg2;	// IMP=0x00100000001c1c0c
- (void)_importKeybagFromDictionary:(id)arg1;	// IMP=0x00100000001c1ba7
- (void)_addKBSyncDataToRequestProperties:(id)arg1 forAccountID:(id)arg2;	// IMP=0x00100000001c1ba1
- (id)_accountIdentifier;	// IMP=0x00100000001c1b40
- (void)operation:(id)arg1 didAuthenticateWithDSID:(id)arg2;	// IMP=0x00100000001c1b3a
- (void)run;	// IMP=0x00100000001c1545
@property(readonly) SSURLConnectionResponse *URLResponse;
@property _Bool shouldMescalSign;
@property _Bool sendsResponseForHTTPFailures;
@property(copy) NSURL *destinationFileURL;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) SSURLRequestProperties *requestProperties;
- (void)dealloc;	// IMP=0x00100000001c11dc
- (id)initWithRequestProperties:(id)arg1;	// IMP=0x00100000001c117e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property(readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property(readonly) Class superclass;

@end

