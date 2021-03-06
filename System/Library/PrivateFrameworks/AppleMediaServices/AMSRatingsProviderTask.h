//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>

@class NSString;
@protocol AMSBagProtocol;

@interface AMSRatingsProviderTask <AMSBagConsumer>
{
    unsigned long long _mediaType;	// 8 = 0x8
    NSString *_storeFront;	// 16 = 0x10
    id <AMSBagProtocol> _bag;	// 24 = 0x18
    NSString *_clientIdentifier;	// 32 = 0x20
}

+ (id)bagKeySet;	// IMP=0x00000000001ed627
+ (id)createBagForSubProfile;	// IMP=0x00000000001ed58d
+ (id)bagSubProfileVersion;	// IMP=0x00000000001ed580
+ (id)bagSubProfile;	// IMP=0x00000000001ed573
+ (id)ratingWithValue:(id)arg1 mediaType:(unsigned long long)arg2 storeFront:(id)arg3 clientIdentifier:(id)arg4 bag:(id)arg5;	// IMP=0x00000000001ec64f
- (void).cxx_destruct;	// IMP=0x00000000001ed684
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) NSString *storeFront; // @synthesize storeFront=_storeFront;
@property(readonly, nonatomic) unsigned long long mediaType; // @synthesize mediaType=_mediaType;
- (id)_commonQueryItems;	// IMP=0x00000000001ed441
- (id)_appQueryItems;	// IMP=0x00000000001ed3a4
- (id)_urlForMediaType:(unsigned long long)arg1;	// IMP=0x00000000001ece31
- (id)performTask;	// IMP=0x00000000001ebc8a
- (id)resultWithCachedData:(id)arg1;	// IMP=0x00000000001ebbdb
- (id)initWithMediaType:(unsigned long long)arg1 storeFront:(id)arg2 clientIdentifier:(id)arg3 bag:(id)arg4;	// IMP=0x00000000001ebb02
- (id)initWithMediaType:(unsigned long long)arg1 clientIdentifier:(id)arg2 bag:(id)arg3;	// IMP=0x00000000001ebae8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

