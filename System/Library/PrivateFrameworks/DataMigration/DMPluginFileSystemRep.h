//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSBundle, NSString;

@interface DMPluginFileSystemRep : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_path;	// 16 = 0x10
    NSBundle *_bundle;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
}

+ (id)allReps;	// IMP=0x0000000000001af6
- (void).cxx_destruct;	// IMP=0x0000000000001fbb
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isBundleValid;	// IMP=0x0000000000001f8f
- (id)initWithName:(id)arg1 atEnclosingPath:(id)arg2;	// IMP=0x0000000000001e7e

@end

