//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSMutableDictionary, NSString, NSURL, SSVSAPSignaturePolicy;

@interface SSVURLBagInterpreter : NSObject <NSCopying>
{
    NSMutableDictionary *_cachedBagValues;	// 8 = 0x8
    NSArray *_subscriptionSignedActions;	// 16 = 0x10
    SSVSAPSignaturePolicy *_subscriptionSignaturePolicy;	// 24 = 0x18
    NSURL *_mescalPrimingURL;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000031752
@property(readonly, copy, nonatomic) NSURL *mescalPrimingURL; // @synthesize mescalPrimingURL=_mescalPrimingURL;
- (id)_valueForKey:(id)arg1 withClass:(Class)arg2;	// IMP=0x00000000000316f2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000316e7
- (id)valueForURLBagKey:(id)arg1;	// IMP=0x00000000000316d1
- (id)URLForURLBagKey:(id)arg1;	// IMP=0x000000000003163c
@property(readonly, copy, nonatomic) NSString *storeFrontSuffix;
- (_Bool)shouldSendAnonymousMachineIdentifierForURL:(id)arg1;	// IMP=0x0000000000031317
@property(readonly, copy, nonatomic) NSURL *pastisKeyServerURL;
@property(readonly, copy, nonatomic) NSURL *pastisCertificateURL;
@property(readonly, copy, nonatomic) NSDictionary *mescalSignedResponses;
@property(readonly, copy, nonatomic) NSDictionary *mescalSignedRequests;
@property(readonly, copy, nonatomic) NSDictionary *mescalSignedActions;
- (id)mescalSignaturePolicyForResponseURL:(id)arg1;	// IMP=0x000000000003114b
- (id)mescalSignaturePolicyForRequestURL:(id)arg1;	// IMP=0x0000000000030c73
@property(readonly, copy, nonatomic) NSURL *mescalSetupURL;
@property(readonly, copy, nonatomic) NSURL *mescalCertificateURL;
@property(readonly, copy, nonatomic) NSArray *AMDDomains;
- (id)cachedValueFromBag:(id)arg1 key:(id)arg2 withType:(unsigned long long)arg3 updateCache:(_Bool)arg4;	// IMP=0x00000000000308c4
- (id)initWithSSBag:(id)arg1;	// IMP=0x0000000000030583
- (id)initWithURLBagDictionary:(id)arg1;	// IMP=0x000000000003025d
- (id)initWithURLBag:(id)arg1;	// IMP=0x000000000003008c

@end

