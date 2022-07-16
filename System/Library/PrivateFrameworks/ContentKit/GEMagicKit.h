//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GEMagicKit : NSObject
{
}

+ (id)magicForData:(id)arg1 decompress:(_Bool)arg2;	// IMP=0x00000000000d521a
+ (id)magicForFileAtURL:(id)arg1 decompress:(_Bool)arg2;	// IMP=0x00000000000d51b1
+ (id)magicForFileAtPath:(id)arg1 decompress:(_Bool)arg2;	// IMP=0x00000000000d5198
+ (id)magicForData:(id)arg1;	// IMP=0x00000000000d517d
+ (id)magicForFileAtURL:(id)arg1;	// IMP=0x00000000000d5162
+ (id)magicForFileAtPath:(id)arg1;	// IMP=0x00000000000d5147
+ (id)typeHierarchyForType:(id)arg1;	// IMP=0x00000000000d4f37
+ (id)rawMagicOutputForObject:(id)arg1 cookie:(struct magic_set *)arg2 flags:(int)arg3;	// IMP=0x00000000000d4e08
+ (id)magicForObject:(id)arg1 decompress:(_Bool)arg2;	// IMP=0x00000000000d4cb1
+ (struct magic_set *)sharedMagicCookie;	// IMP=0x00000000000d3ab0

@end

