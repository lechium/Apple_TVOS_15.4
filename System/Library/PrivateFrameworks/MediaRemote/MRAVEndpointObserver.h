//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRAVEndpoint, MRAVRoutingDiscoverySession, NSArray, NSString;

@interface MRAVEndpointObserver : NSObject
{
    MRAVRoutingDiscoverySession *_discoverySession;	// 8 = 0x8
    NSArray *_endpoints;	// 16 = 0x10
    CDUnknownBlockType _endpointChangedCallback;	// 24 = 0x18
    _Bool _didBegin;	// 32 = 0x20
    NSString *_outputDeviceUID;	// 40 = 0x28
    MRAVEndpoint *_endpoint;	// 48 = 0x30
    NSString *_label;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000dde0e
@property(readonly, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) MRAVEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSString *outputDeviceUID; // @synthesize outputDeviceUID=_outputDeviceUID;
- (void)_handleOutputContextDidChangeNotification;	// IMP=0x00000000000ddc4b
- (void)end;	// IMP=0x00000000000ddae6
- (void)begin;	// IMP=0x00000000000dd433
@property(copy, nonatomic) CDUnknownBlockType endpointChangedCallback;
- (id)debugDescription;	// IMP=0x00000000000dd1e1
- (id)description;	// IMP=0x00000000000dd172
- (void)dealloc;	// IMP=0x00000000000dd07f
- (id)initWithOutputDeviceUID:(id)arg1 label:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000dcf7b
- (id)initWithOutputDeviceUID:(id)arg1;	// IMP=0x00000000000dcf5f

@end

