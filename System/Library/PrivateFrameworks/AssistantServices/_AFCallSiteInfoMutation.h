//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFCallSiteInfoMutating-Protocol.h>

@class AFCallSiteInfo, NSString;

@interface _AFCallSiteInfoMutation : NSObject <AFCallSiteInfoMutating>
{
    AFCallSiteInfo *_baseModel;	// 8 = 0x8
    NSString *_imagePath;	// 16 = 0x10
    NSString *_symbolName;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasImagePath:1;
        unsigned int hasSymbolName:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000011ef2c
- (id)generate;	// IMP=0x000000000011ee29
- (void)setSymbolName:(id)arg1;	// IMP=0x000000000011ee09
- (void)setImagePath:(id)arg1;	// IMP=0x000000000011ede9
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000011ed7e
- (id)init;	// IMP=0x000000000011ed6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

