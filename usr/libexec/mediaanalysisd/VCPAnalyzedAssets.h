//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface VCPAnalyzedAssets : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    struct sqlite3_stmt *_statement;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
}

+ (id)assetsWithoutFingerprintsFromPhotoLibrary:(id)arg1;	// IMP=0x0040000000016a0e
+ (id)assetsFromPhotoLibrary:(id)arg1;	// IMP=0x00100000000169ae
@property(readonly) unsigned long long count; // @synthesize count=_count;
- (int)next:(id *)arg1;	// IMP=0x0010000000016afb
- (void)dealloc;	// IMP=0x0010000000016a73
- (id)initWithPhotoLibrary:(id)arg1 andCondition:(id)arg2;	// IMP=0x0010000000016661

@end

