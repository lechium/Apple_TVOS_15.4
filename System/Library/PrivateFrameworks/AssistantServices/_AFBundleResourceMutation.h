//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFBundleResourceMutating-Protocol.h>

@class AFBundleResource, NSString;

@interface _AFBundleResourceMutation : NSObject <AFBundleResourceMutating>
{
    AFBundleResource *_baseModel;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_extension;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasName:1;
        unsigned int hasExtension:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000132aed
- (id)generate;	// IMP=0x00000000001329ea
- (void)setExtension:(id)arg1;	// IMP=0x00000000001329ca
- (void)setName:(id)arg1;	// IMP=0x00000000001329aa
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000013293f
- (id)init;	// IMP=0x000000000013292b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

