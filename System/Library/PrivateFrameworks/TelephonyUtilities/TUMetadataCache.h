//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUMetadataCacheDataProviderDelegate-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface TUMetadataCache : NSObject <TUMetadataCacheDataProviderDelegate>
{
    NSArray *_providers;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

+ (id)classIdentifier;	// IMP=0x00000000000869f9
- (void).cxx_destruct;	// IMP=0x0000000000087a32
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, copy, nonatomic) NSArray *providers; // @synthesize providers=_providers;
- (void)dataProvider:(id)arg1 requestedRefreshWithDestinationIDs:(id)arg2;	// IMP=0x00000000000877ac
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (void)_updateCacheWithDestinationIDs:(id)arg1 onlyEmptyProviders:(_Bool)arg2;	// IMP=0x000000000008701f
- (void)updateCacheForEmptyDataProvidersWithDestinationIDs:(id)arg1;	// IMP=0x0000000000087008
- (void)updateCacheWithDestinationIDs:(id)arg1;	// IMP=0x0000000000086ff4
- (id)metadataForDestinationID:(id)arg1;	// IMP=0x0000000000086e1b
- (id)initWithQueue:(id)arg1 dataProviders:(id)arg2;	// IMP=0x0000000000086c3d
- (id)initWithDataProviders:(id)arg1;	// IMP=0x0000000000086ae8
- (id)init;	// IMP=0x0000000000086abd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
