//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSData, NSMutableData, NSString;

@interface SGKeyValueCacheFile : NSObject <NSSecureCoding>
{
    struct _opaque_pthread_mutex_t _lock;	// 8 = 0x8
    NSData *_data;	// 72 = 0x48
    int _fd;	// 80 = 0x50
    NSString *_path;	// 88 = 0x58
    NSString *_tmpDir;	// 96 = 0x60
    NSMutableData *_memStore;	// 104 = 0x68
    SGKeyValueCacheFile *_other;	// 112 = 0x70
}

+ (id)fullNameForEncodedContact:(id)arg1;	// IMP=0x00000000000174e9
+ (id)encodedStringForFullName:(id)arg1;	// IMP=0x000000000001747d
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000017475
+ (void)clearCacheAtPath:(id)arg1;	// IMP=0x00000000000173bb
+ (id)keyValueCacheForPath:(id)arg1;	// IMP=0x0000000000017281
+ (id)pathToCache;	// IMP=0x0000000000017251
- (void).cxx_destruct;	// IMP=0x000000000001687c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000016801
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000016788
- (id)description;	// IMP=0x000000000001668a
- (void)deleteValueByRecordIdSet:(id)arg1;	// IMP=0x00000000000162d8
- (void)deleteValueByRecordId:(id)arg1;	// IMP=0x000000000001610c
- (void)setValueIfNotPresentWithDict:(id)arg1 fromRecordId:(id)arg2;	// IMP=0x0000000000015b7a
- (void)setValueIfNotPresent:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;	// IMP=0x00000000000159f4
- (void)setValue:(id)arg1 forKey:(id)arg2 fromRecordId:(id)arg3;	// IMP=0x0000000000015561
- (id)valueForKey:(id)arg1 found:(_Bool *)arg2;	// IMP=0x0000000000015290
- (id)valueForKey:(id)arg1;	// IMP=0x000000000001527c
- (id)_map;	// IMP=0x000000000001503c
- (void)commitTemporaryFile;	// IMP=0x0000000000014d73
- (void)dealloc;	// IMP=0x0000000000014cdf
- (id)initInMemory;	// IMP=0x0000000000014ca0
- (id)initTemporaryForOverwritingCache:(id)arg1;	// IMP=0x0000000000014866
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000014707
- (id)initWithFileDescriptor:(int)arg1;	// IMP=0x00000000000146e3
- (id)initBlank;	// IMP=0x0000000000014692
- (id)init;	// IMP=0x000000000001460b

@end

