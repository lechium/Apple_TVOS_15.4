//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFOutputVoiceDescriptorMutating-Protocol.h>

@class AFOutputVoiceDescriptor, NSString;

@interface _AFOutputVoiceDescriptorMutation : NSObject <AFOutputVoiceDescriptorMutating>
{
    AFOutputVoiceDescriptor *_baseModel;	// 8 = 0x8
    NSString *_localizedDisplay;	// 16 = 0x10
    NSString *_localizedDisplayWithRegion;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasLocalizedDisplay:1;
        unsigned int hasLocalizedDisplayWithRegion:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002a7ac
- (id)generate;	// IMP=0x000000000002a6a9
- (void)setLocalizedDisplayWithRegion:(id)arg1;	// IMP=0x000000000002a689
- (void)setLocalizedDisplay:(id)arg1;	// IMP=0x000000000002a669
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000002a5fe
- (id)init;	// IMP=0x000000000002a5ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

