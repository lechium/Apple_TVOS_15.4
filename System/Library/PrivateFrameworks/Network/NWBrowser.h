//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, NWBrowseDescriptor, NWParameters;
@protocol OS_nw_browser;

@interface NWBrowser : NSObject
{
    NWBrowseDescriptor *_descriptor;	// 8 = 0x8
    NWParameters *_parameters;	// 16 = 0x10
    NSObject<OS_nw_browser> *_internalBrowser;	// 24 = 0x18
    NSSet *_internalDiscoveredEndpoints;	// 32 = 0x20
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0000000000070270
- (void).cxx_destruct;	// IMP=0x0000000000070a40
@property(retain) NSSet *internalDiscoveredEndpoints; // @synthesize internalDiscoveredEndpoints=_internalDiscoveredEndpoints;
@property(readonly) NSObject<OS_nw_browser> *internalBrowser; // @synthesize internalBrowser=_internalBrowser;
@property(readonly) NWParameters *parameters; // @synthesize parameters=_parameters;
@property(readonly) NWBrowseDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) NSSet *discoveredEndpoints;
- (id)copyDiscoveredEndpoints;	// IMP=0x0000000000070930
- (void)dealloc;	// IMP=0x00000000000708f0
- (void)cancel;	// IMP=0x0000000000070870
- (id)initWithDescriptor:(id)arg1 parameters:(id)arg2;	// IMP=0x0000000000070460
- (void)setUpdateHandler;	// IMP=0x00000000000702f0

@end

