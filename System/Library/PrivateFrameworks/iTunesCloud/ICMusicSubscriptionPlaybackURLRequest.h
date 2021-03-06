//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface ICMusicSubscriptionPlaybackURLRequest
{
    _Bool _delegatedPlayback;	// 8 = 0x8
    NSString *_assetSourceStorefrontID;	// 16 = 0x10
    NSString *_cloudUniversalLibraryID;	// 24 = 0x18
    NSString *_playbackAuthorizationToken;	// 32 = 0x20
    long long _requestType;	// 40 = 0x28
    unsigned long long _storeCloudID;	// 48 = 0x30
    long long _storePurchasedAdamID;	// 56 = 0x38
    long long _storeSubscriptionAdamID;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000014b78c
@property(nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property(nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property(nonatomic) unsigned long long storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property(nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property(nonatomic, getter=isDelegatedPlayback) _Bool delegatedPlayback; // @synthesize delegatedPlayback=_delegatedPlayback;
@property(copy, nonatomic) NSString *playbackAuthorizationToken; // @synthesize playbackAuthorizationToken=_playbackAuthorizationToken;
@property(copy, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property(copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
- (id)_signpostRequestInfo;	// IMP=0x000000000014b557
- (id)_actionType;	// IMP=0x000000000014b521
- (void)buildStoreURLRequestWithURLRequest:(id)arg1 builderProperties:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000014b449

@end

