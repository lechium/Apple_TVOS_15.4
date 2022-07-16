//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADRapportLinkConfiguration, ADRapportLinkDiscoveryOptions, ADRapportLinkTransportOptions, NSString;

@interface _ADRapportLinkConfigurationMutation : NSObject
{
    ADRapportLinkConfiguration *_baseModel;	// 8 = 0x8
    ADRapportLinkDiscoveryOptions *_discoveryOptions;	// 16 = 0x10
    ADRapportLinkTransportOptions *_transportOptions;	// 24 = 0x18
    long long _enablesProximityTracking;	// 32 = 0x20
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasDiscoveryOptions:1;
        unsigned int hasTransportOptions:1;
        unsigned int hasEnablesProximityTracking:1;
    } _mutationFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000013eb00
- (id)generate;	// IMP=0x001000000013e9cf
- (void)setEnablesProximityTracking:(long long)arg1;	// IMP=0x001000000013e9c1
- (void)setTransportOptions:(id)arg1;	// IMP=0x001000000013e9a1
- (void)setDiscoveryOptions:(id)arg1;	// IMP=0x001000000013e981
- (id)initWithBaseModel:(id)arg1;	// IMP=0x001000000013e916
- (id)init;	// IMP=0x001000000013e902

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
