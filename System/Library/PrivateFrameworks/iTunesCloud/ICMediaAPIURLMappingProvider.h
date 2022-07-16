//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ICMediaAPIURLMappingProvider : NSObject
{
}

+ (id)sharedProvider;	// IMP=0x00000000001afb9e
- (void)_saveCachedResponsePayload:(id)arg1 eTag:(id)arg2;	// IMP=0x00000000001af41d
- (id)_loadCacheDictionary;	// IMP=0x00000000001af300
- (id)_cacheFileURL;	// IMP=0x00000000001af250
- (void)setCurrentURLMappingSet:(id)arg1;	// IMP=0x00000000001af1ff
- (void)clearCachedURLMappings;	// IMP=0x00000000001af072
- (void)updateURLMappingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001aef45
- (id)getCurrentURLMappingSet;	// IMP=0x00000000001aedce

@end

