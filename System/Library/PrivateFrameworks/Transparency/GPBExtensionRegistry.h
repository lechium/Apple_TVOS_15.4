//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Transparency/NSCopying-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GPBExtensionRegistry : NSObject <NSCopying>
{
    NSMutableDictionary *mutableClassMap_;	// 8 = 0x8
}

- (void)addExtensions:(id)arg1;	// IMP=0x0000000000047521
- (id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2;	// IMP=0x00000000000474c5
- (void)addExtension:(id)arg1;	// IMP=0x000000000004741b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000473c2
- (void)dealloc;	// IMP=0x0000000000047387
- (id)init;	// IMP=0x000000000004733b

@end
