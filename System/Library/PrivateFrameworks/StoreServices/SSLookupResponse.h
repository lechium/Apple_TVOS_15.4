//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableArray, NSString, SSMetricsConfiguration, SSMetricsPageEvent;

@interface SSLookupResponse : NSObject <SSXPCCoding>
{
    NSDate *_expirationDate;	// 8 = 0x8
    NSMutableArray *_itemOrder;	// 16 = 0x10
    SSMetricsPageEvent *_metricsPageEvent;	// 24 = 0x18
    NSDictionary *_response;	// 32 = 0x20
}

@property(retain, nonatomic, setter=_setMetricsPageEvent:) SSMetricsPageEvent *metricsPageEvent; // @synthesize metricsPageEvent=_metricsPageEvent;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00000000000dd7fb
- (id)copyXPCEncoding;	// IMP=0x00000000000dd77f
- (void)_enumerateItemsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000dd505
@property(readonly, nonatomic) NSDictionary *responseDictionary;
- (id)valueForProperty:(id)arg1;	// IMP=0x00000000000dd4c7
@property(readonly, nonatomic) SSMetricsConfiguration *metricsConfiguration;
- (id)itemForKey:(id)arg1;	// IMP=0x00000000000dd3e8
- (id)appStoreURLWithReason:(long long)arg1 initialIndex:(long long)arg2;	// IMP=0x00000000000dd291
@property(readonly, nonatomic) NSArray *allItems;
- (void)dealloc;	// IMP=0x00000000000dd1a9
- (id)initWithResponseDictionary:(id)arg1;	// IMP=0x00000000000dd12a
- (id)initWithLocationResponseDictionary:(id)arg1;	// IMP=0x00000000000dcb5f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

