//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSDictionary;

__attribute__((visibility("hidden")))
@interface NSManagedObjectModelBundle : NSObject
{
    NSBundle *_bundle;	// 8 = 0x8
    NSDictionary *_versionInfoDictionary;	// 16 = 0x10
}

- (id)_modelForVersionHashes:(id)arg1;	// IMP=0x00000000000ec507
- (id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2;	// IMP=0x00000000000eb8cb
- (id)optimizedVersionURL;	// IMP=0x00000000000eb866
- (id)currentVersionURL;	// IMP=0x00000000000eb835
- (id)urlForModelVersionWithName:(id)arg1;	// IMP=0x00000000000eb7ed
- (id)modelVersions;	// IMP=0x00000000000eb7b7
- (id)currentVersion;	// IMP=0x00000000000eb791
- (void)dealloc;	// IMP=0x00000000000eb738
- (id)initWithPath:(id)arg1;	// IMP=0x00000000000eb5bd

@end
