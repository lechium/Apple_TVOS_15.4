//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ANFiles : NSObject
{
}

+ (id)temporaryDirectoryUrl;	// IMP=0x00000000000186d7
+ (void)removeItem:(id)arg1;	// IMP=0x0000000000018661
+ (void)purgeTemporarySubDirectory:(id)arg1;	// IMP=0x00000000000185eb
+ (id)createTemporaryURLWithFileExtension:(id)arg1 directory:(id)arg2;	// IMP=0x0000000000018550
+ (id)createTemporaryFileWithData:(id)arg1 extension:(id)arg2 directory:(id)arg3;	// IMP=0x0000000000018497
+ (id)shared;	// IMP=0x0000000000018412
- (void)removeDirectoryIfEmpty:(id)arg1;	// IMP=0x0000000000018eb6
- (id)createDirectory:(id)arg1 andFileURLWithExtension:(id)arg2;	// IMP=0x0000000000018bdb
- (void)removeItem:(id)arg1;	// IMP=0x0000000000018add
- (void)purgeTemporarySubDirectory:(id)arg1;	// IMP=0x0000000000018844
- (id)createTemporaryURLWithExtension:(id)arg1 directory:(id)arg2;	// IMP=0x0000000000018829
- (id)createTemporaryFileWithData:(id)arg1 extension:(id)arg2 directory:(id)arg3;	// IMP=0x0000000000018728

@end

