//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/NSMutableCopying-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface SSMetricsMutableEvent <NSMutableCopying>
{
    NSMutableDictionary *_mutableBody;	// 8 = 0x8
    _Bool _shouldSuppressUserInfo;	// 16 = 0x10
    _Bool _shouldSuppressDSIDHeader;	// 17 = 0x11
}

- (void).cxx_destruct;	// IMP=0x0000000000166960
@property(nonatomic) _Bool shouldSuppressDSIDHeader; // @synthesize shouldSuppressDSIDHeader=_shouldSuppressDSIDHeader;
@property(nonatomic) _Bool shouldSuppressUserInfo; // @synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo;
@property(readonly, copy, nonatomic) NSDictionary *bodyDictionary; // @synthesize bodyDictionary=_mutableBody;
- (id)decorateReportingURL:(id)arg1;	// IMP=0x0000000000166833
- (id)debugDescription;	// IMP=0x00000000001667c1
- (void)setProperty:(id)arg1 forBodyKey:(id)arg2;	// IMP=0x0000000000166730
- (void)setOriginalTimeUsingDate:(id)arg1;	// IMP=0x000000000016660d
- (id)propertyForBodyKey:(id)arg1;	// IMP=0x00000000001665a2
- (void)addPropertiesWithDictionary:(id)arg1;	// IMP=0x0000000000166585
- (void)appendPropertiesToBody:(id)arg1;	// IMP=0x0000000000166503
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001664cc
@property(retain, nonatomic) NSString *canaryIdentifier;
@property(retain, nonatomic) NSString *userAgent;
@property(retain, nonatomic) NSNumber *previousClientVersion;
@property(retain, nonatomic) NSString *hostApplicationIdentifier;
@property(retain, nonatomic) NSNumber *clientVersion;
@property(retain, nonatomic) NSString *applicationIdentifier;
@property(retain, nonatomic) NSNumber *eventVersion;
@property(retain, nonatomic) NSNumber *baseVersion;
@property(retain, nonatomic) NSString *topic;
@property double originalTime;
@property(retain, nonatomic) NSString *eventType;
@property(retain, nonatomic) NSString *connection;
@property(retain, nonatomic) NSNumber *accountIdentifier;
- (id)initWithBodyDictionary:(id)arg1;	// IMP=0x0000000000165eb1
- (id)init;	// IMP=0x0000000000165e98

@end

