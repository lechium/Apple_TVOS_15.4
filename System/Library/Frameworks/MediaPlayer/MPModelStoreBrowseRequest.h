//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelStoreBrowseResponse, NSURL;

@interface MPModelStoreBrowseRequest
{
    NSURL *_loadAdditionalContentURL;	// 8 = 0x8
    MPModelStoreBrowseResponse *_previousRetrievedNestedResponse;	// 16 = 0x10
    long long _domain;	// 24 = 0x18
    long long _additionalContent;	// 32 = 0x20
    unsigned long long _options;	// 40 = 0x28
    long long _filteringPolicy;	// 48 = 0x30
    long long _subscriptionStatus;	// 56 = 0x38
    MPModelStoreBrowseResponse *_previousResponse;	// 64 = 0x40
    long long _requestEndpoint;	// 72 = 0x48
}

+ (id)allSupportedSectionProperties;	// IMP=0x000000000007b916
+ (id)allSupportedItemProperties;	// IMP=0x000000000007b8fd
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007b8f5
- (void).cxx_destruct;	// IMP=0x000000000007b8b3
@property(nonatomic) long long requestEndpoint; // @synthesize requestEndpoint=_requestEndpoint;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previousResponse; // @synthesize previousResponse=_previousResponse;
@property(nonatomic) long long subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;
@property(nonatomic) long long filteringPolicy; // @synthesize filteringPolicy=_filteringPolicy;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) long long additionalContent; // @synthesize additionalContent=_additionalContent;
@property(nonatomic) long long domain; // @synthesize domain=_domain;
@property(retain, nonatomic) MPModelStoreBrowseResponse *previousRetrievedNestedResponse; // @synthesize previousRetrievedNestedResponse=_previousRetrievedNestedResponse;
@property(copy, nonatomic) NSURL *loadAdditionalContentURL; // @synthesize loadAdditionalContentURL=_loadAdditionalContentURL;
@property(nonatomic) _Bool flattenRadioList;
- (void)configureWithParentSection:(id)arg1;	// IMP=0x000000000007b6b6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000007b5dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007b4b2
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007b35e
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000007b2ab
- (id)init;	// IMP=0x000000000007b233

@end

