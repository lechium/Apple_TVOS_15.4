//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface WFSandboxExtensionManager : NSObject
{
    NSSet *_extensionResourcesClassNames;	// 8 = 0x8
    NSDictionary *_extensionClassesPerResource;	// 16 = 0x10
}

+ (_Bool)hasExtensionForResourceClassName:(id)arg1;	// IMP=0x000000000023e843
+ (id)allAvailableExtensionResourceClassNames;	// IMP=0x000000000023e7d9
- (void).cxx_destruct;	// IMP=0x000000000023e5ba
@property(readonly, copy, nonatomic) NSDictionary *extensionClassesPerResource; // @synthesize extensionClassesPerResource=_extensionClassesPerResource;
@property(readonly, copy, nonatomic) NSSet *extensionResourcesClassNames; // @synthesize extensionResourcesClassNames=_extensionResourcesClassNames;
- (id)requestSandboxExtensionForResources:(id)arg1 destinationProcessAuditToken:(CDStruct_6ad76789)arg2 unauthorizedResources:(id *)arg3;	// IMP=0x000000000023e49d
- (id)initWithExtensionClassesPerResource:(id)arg1;	// IMP=0x000000000023e38b
- (id)init;	// IMP=0x000000000023e372

@end

