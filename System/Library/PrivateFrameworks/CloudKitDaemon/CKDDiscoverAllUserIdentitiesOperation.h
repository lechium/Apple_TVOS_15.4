//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary;

@interface CKDDiscoverAllUserIdentitiesOperation
{
    NSMutableDictionary *_contactIdentifiersByLookupInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000bca27
@property(retain, nonatomic) NSMutableDictionary *contactIdentifiersByLookupInfo; // @synthesize contactIdentifiersByLookupInfo=_contactIdentifiersByLookupInfo;
- (void)_handleDiscoveredIdentity:(id)arg1 lookupInfo:(id)arg2 responseCode:(id)arg3;	// IMP=0x00000000000bc666
- (void)main;	// IMP=0x00000000000bc654
- (void)_populateUserIdentityLookupInfos;	// IMP=0x00000000000bc5db
- (void)_populateRealUserIdentityLookupInfos;	// IMP=0x00000000000bc53b
- (void)_populateFakeUnitTestLookupInfos;	// IMP=0x00000000000bc404
- (void)_populateFakeUnitTestLookupInfosForEnvironment:(long long)arg1;	// IMP=0x00000000000bc088
- (void)_discoverIdentitiesBatched:(id)arg1;	// IMP=0x00000000000bbefc
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000000bbecd

@end

