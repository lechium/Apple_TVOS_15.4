//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/TUCallProviderManagerDataSourceDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMapTable, NSString, TUCallProvider;
@protocol OS_dispatch_queue, TUCallProviderManagerDataSource;

@interface TUCallProviderManager : NSObject <TUCallProviderManagerDataSourceDelegate>
{
    unsigned long long _type;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <TUCallProviderManagerDataSource> _dataSource;	// 24 = 0x18
    NSMapTable *_delegateToQueue;	// 32 = 0x20
}

+ (int)serviceForProvider:(id)arg1 video:(_Bool)arg2;	// IMP=0x00000000000852c3
+ (id)defaultProviders;	// IMP=0x0000000000084cc2
- (void).cxx_destruct;	// IMP=0x00000000000865ae
@property(retain, nonatomic) NSMapTable *delegateToQueue; // @synthesize delegateToQueue=_delegateToQueue;
@property(readonly, nonatomic) id <TUCallProviderManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)providersChangedForDataSource:(id)arg1;	// IMP=0x000000000008622a
@property(readonly, copy, nonatomic) NSDictionary *providersByIdentifier;
- (void)launchAppForDialRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000085c86
- (void)donateUserIntentForProviderWithIdentifier:(id)arg1;	// IMP=0x0000000000085c14
- (id)providerForFavoritesEntryActionBundleIdentifier:(id)arg1;	// IMP=0x0000000000085a91
- (id)providerForFavoritesEntry:(id)arg1;	// IMP=0x0000000000085a2f
- (id)providerForRecentCall:(id)arg1;	// IMP=0x00000000000858ee
- (id)providersPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000000856f9
- (id)providerWithIdentifier:(id)arg1;	// IMP=0x0000000000085676
@property(readonly, copy, nonatomic) NSArray *providers;
@property(readonly, nonatomic) TUCallProvider *emergencyProvider;
- (void)removeDelegate:(id)arg1;	// IMP=0x00000000000854ef
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000085389
- (id)providerWithService:(int)arg1 video:(_Bool *)arg2;	// IMP=0x000000000008526b
@property(readonly, nonatomic) TUCallProvider *tinCanProvider;
@property(readonly, nonatomic) TUCallProvider *faceTimeProvider;
@property(readonly, nonatomic) TUCallProvider *telephonyProvider;
@property(readonly, nonatomic) TUCallProvider *voicemailProvider;
@property(readonly, nonatomic) TUCallProvider *defaultProvider;
- (void)dealloc;	// IMP=0x0000000000085100
@property(readonly, copy) NSString *debugDescription;
- (id)initWithDataSource:(id)arg1 type:(unsigned long long)arg2 queue:(id)arg3;	// IMP=0x0000000000084f97
- (id)initWithType:(unsigned long long)arg1;	// IMP=0x0000000000084f2b
- (id)initWithPairedHostDeviceProviders;	// IMP=0x0000000000084f14
- (id)initWithLocalProviders;	// IMP=0x0000000000084efd
- (id)init;	// IMP=0x0000000000084ee9
- (id)dialRequestForRecentCall:(id)arg1;	// IMP=0x00000000000de1d1

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

