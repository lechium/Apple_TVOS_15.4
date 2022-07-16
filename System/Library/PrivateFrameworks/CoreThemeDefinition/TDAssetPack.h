//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreThemeDefinition/NSCopying-Protocol.h>

@class CUIMutableCommonAssetStorage, NSSet, NSString;

@interface TDAssetPack : NSObject <NSCopying>
{
    _Bool wasModified;	// 8 = 0x8
    NSSet *tags;	// 16 = 0x10
    NSString *outputPath;	// 24 = 0x18
    CUIMutableCommonAssetStorage *assetStore;	// 32 = 0x20
    NSString *assetPackIdentifier;	// 40 = 0x28
}

@property(copy, nonatomic) NSString *assetPackIdentifier; // @synthesize assetPackIdentifier;
@property(nonatomic) _Bool wasModified; // @synthesize wasModified;
@property(retain) CUIMutableCommonAssetStorage *assetStore; // @synthesize assetStore;
@property(copy, nonatomic) NSString *outputPath; // @synthesize outputPath;
@property(retain, nonatomic) NSSet *tags; // @synthesize tags;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000173dc
- (unsigned long long)hash;	// IMP=0x0000000000017388
- (void)dealloc;	// IMP=0x0000000000017313
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001726d

@end
