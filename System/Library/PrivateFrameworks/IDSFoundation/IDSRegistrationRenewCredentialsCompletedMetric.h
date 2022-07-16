//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSRegistrationRenewCredentialsCompletedMetric : NSObject <CUTCoreAnalyticsMetric>
{
    long long _renewResult;	// 8 = 0x8
    NSString *_errorDomain;	// 16 = 0x10
    long long _errorCode;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000012fb29
@property(readonly, nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(readonly, nonatomic) NSString *errorDomain; // @synthesize errorDomain=_errorDomain;
@property(readonly, nonatomic) long long renewResult; // @synthesize renewResult=_renewResult;
- (id)initWithRenewResult:(long long)arg1 errorDomain:(id)arg2 errorCode:(long long)arg3;	// IMP=0x000000000012fa8a
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

