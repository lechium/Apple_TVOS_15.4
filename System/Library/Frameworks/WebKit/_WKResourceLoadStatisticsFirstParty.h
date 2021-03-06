//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface _WKResourceLoadStatisticsFirstParty : NSObject <WKObject>
{
    struct ObjectStorage<API::ResourceLoadStatisticsFirstParty> _firstParty;	// 8 = 0x8
    _Bool _thirdPartyStorageAccessGranted;	// 48 = 0x30
}

@property(readonly, nonatomic) _Bool thirdPartyStorageAccessGranted; // @synthesize thirdPartyStorageAccessGranted=_thirdPartyStorageAccessGranted;
@property(readonly) struct Object *_apiObject;
@property(readonly, nonatomic) double timeLastUpdated;
- (_Bool)storageAccess;	// IMP=0x0000000000003e8c
@property(readonly, nonatomic) NSString *firstPartyDomain;
- (void)dealloc;	// IMP=0x0000000000003e10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

