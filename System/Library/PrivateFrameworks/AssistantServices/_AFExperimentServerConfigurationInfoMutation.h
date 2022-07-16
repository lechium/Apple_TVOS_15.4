//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFExperimentServerConfigurationInfoMutating-Protocol.h>

@class AFExperimentServerConfigurationInfo, NSString, NSURL;

@interface _AFExperimentServerConfigurationInfoMutation : NSObject <AFExperimentServerConfigurationInfoMutating>
{
    AFExperimentServerConfigurationInfo *_baseModel;	// 8 = 0x8
    NSString *_configurationIdentifier;	// 16 = 0x10
    NSURL *_configurationURL;	// 24 = 0x18
    double _maxTimeToSync;	// 32 = 0x20
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasConfigurationIdentifier:1;
        unsigned int hasConfigurationURL:1;
        unsigned int hasMaxTimeToSync:1;
    } _mutationFlags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000102706
- (id)generate;	// IMP=0x00000000001025c7
- (void)setMaxTimeToSync:(double)arg1;	// IMP=0x00000000001025b8
- (void)setConfigurationURL:(id)arg1;	// IMP=0x0000000000102598
- (void)setConfigurationIdentifier:(id)arg1;	// IMP=0x0000000000102578
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000010250d
- (id)init;	// IMP=0x00000000001024f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

