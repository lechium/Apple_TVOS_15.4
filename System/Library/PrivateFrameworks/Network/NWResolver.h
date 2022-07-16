//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NWEndpoint, NWParameters;
@protocol OS_nw_resolver;

@interface NWResolver : NSObject
{
    NWEndpoint *_endpoint;	// 8 = 0x8
    NWParameters *_parameters;	// 16 = 0x10
    NSObject<OS_nw_resolver> *_internalResolver;	// 24 = 0x18
    long long _internalStatus;	// 32 = 0x20
    NSSet *_internalResolvedEndpoints;	// 40 = 0x28
    NSArray *_internalResolvedEndpointArray;	// 48 = 0x30
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00000000000869e0
- (void).cxx_destruct;	// IMP=0x0000000000087730
@property(retain) NSArray *internalResolvedEndpointArray; // @synthesize internalResolvedEndpointArray=_internalResolvedEndpointArray;
@property(retain) NSSet *internalResolvedEndpoints; // @synthesize internalResolvedEndpoints=_internalResolvedEndpoints;
@property long long internalStatus; // @synthesize internalStatus=_internalStatus;
@property(readonly) NSObject<OS_nw_resolver> *internalResolver; // @synthesize internalResolver=_internalResolver;
@property(readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly) NWEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSArray *resolvedEndpointArray;
- (id)copyResolvedEndpointArray;	// IMP=0x00000000000875d0
@property(readonly, nonatomic) NSSet *resolvedEndpoints;
- (id)copyResolvedEndpoints;	// IMP=0x0000000000087550
@property(readonly, nonatomic) long long status;
- (void)dealloc;	// IMP=0x0000000000087490
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000086fb0
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000000086ba0
- (void)setUpdateHandler;	// IMP=0x0000000000086a90

@end
