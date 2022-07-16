//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSDictionary, _EXExtensionPoint;
@protocol EXEnumeratorConfig;

__attribute__((visibility("hidden")))
@interface EXExtensionPointEnumerator : NSEnumerator
{
    _Bool _validateExtensionPoints;	// 8 = 0x8
    id <EXEnumeratorConfig> _config;	// 16 = 0x10
    NSDictionary *_extensionPoints;	// 24 = 0x18
    NSEnumerator *_extensionPointsKeyEnumerator;	// 32 = 0x20
    NSDictionary *_currentExtensionPointDict;	// 40 = 0x28
    _EXExtensionPoint *_currentExtensionPoint;	// 48 = 0x30
}

+ (void)enumerateExtensionPointsInDirectoryAtURL:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000002c1b5
- (void).cxx_destruct;	// IMP=0x000000000002db96
@property(readonly) _EXExtensionPoint *currentExtensionPoint; // @synthesize currentExtensionPoint=_currentExtensionPoint;
@property(readonly) NSDictionary *currentExtensionPointDict; // @synthesize currentExtensionPointDict=_currentExtensionPointDict;
@property(readonly) NSEnumerator *extensionPointsKeyEnumerator; // @synthesize extensionPointsKeyEnumerator=_extensionPointsKeyEnumerator;
@property(readonly) NSDictionary *extensionPoints; // @synthesize extensionPoints=_extensionPoints;
@property(readonly) id <EXEnumeratorConfig> config; // @synthesize config=_config;
@property(readonly) _Bool validateExtensionPoints; // @synthesize validateExtensionPoints=_validateExtensionPoints;
- (id)nextObject;	// IMP=0x000000000002d531
- (_Bool)validateExtensionPointIdentifier:(id)arg1 sdkDictionary:(id)arg2;	// IMP=0x000000000002d25c
- (id)synthesizeNSExtensionKeysInDictionary:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000002d008
- (id)translateXPCCacheDictionary:(id)arg1;	// IMP=0x000000000002cca3
- (id)initWithSDKDictionary:(id)arg1 config:(id)arg2;	// IMP=0x000000000002cba7
- (id)initWithSDKDictionary:(id)arg1 urls:(id)arg2 config:(id)arg3;	// IMP=0x000000000002c7db
- (id)initWithCacheURLs:(id)arg1 config:(id)arg2;	// IMP=0x000000000002c7bc

@end

