//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface FAFetchFamilyCircleRequest
{
    _Bool _signedInAccountShouldBeApprover;	// 8 = 0x8
    _Bool _forceServerFetch;	// 9 = 0x9
    _Bool _doNotFetchFromServer;	// 10 = 0xa
    _Bool _promptUserToResolveAuthenticatonFailure;	// 11 = 0xb
    NSArray *_expectedDSIDs;	// 16 = 0x10
    NSArray *_expectedAltDSIDs;	// 24 = 0x18
    unsigned long long _cachePolicy;	// 32 = 0x20
    NSDictionary *_serverResponse;	// 40 = 0x28
    long long _qualityOfService;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000012faf
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, retain) NSDictionary *serverResponse; // @synthesize serverResponse=_serverResponse;
@property _Bool promptUserToResolveAuthenticatonFailure; // @synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure;
@property _Bool doNotFetchFromServer; // @synthesize doNotFetchFromServer=_doNotFetchFromServer;
@property unsigned long long cachePolicy; // @synthesize cachePolicy=_cachePolicy;
@property _Bool forceServerFetch; // @synthesize forceServerFetch=_forceServerFetch;
@property _Bool signedInAccountShouldBeApprover; // @synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover;
@property(copy) NSArray *expectedAltDSIDs; // @synthesize expectedAltDSIDs=_expectedAltDSIDs;
@property(copy) NSArray *expectedDSIDs; // @synthesize expectedDSIDs=_expectedDSIDs;
- (id)fetchCachedFamilyCircleWithCache:(id)arg1 deviceInfo:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000012c97
- (id)fetchCachedFamilyCircle:(id *)arg1;	// IMP=0x0000000000012b09
- (id)requestOptions;	// IMP=0x0000000000012921
- (unsigned long long)_cachePolicy;	// IMP=0x0000000000012852
- (id)fetchFamilyCircleWithError:(id *)arg1;	// IMP=0x0000000000012274
- (void)startRequestWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011ec5
- (id)init;	// IMP=0x0000000000011e82

@end

