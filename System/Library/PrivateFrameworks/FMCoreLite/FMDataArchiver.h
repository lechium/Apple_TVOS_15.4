//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSURL;

@interface FMDataArchiver : NSObject
{
    _Bool _backedUp;	// 8 = 0x8
    _Bool _createDirectories;	// 9 = 0x9
    long long _dataProtectionClass;	// 16 = 0x10
    NSURL *_fileURL;	// 24 = 0x18
    NSData *_unitTestData;	// 32 = 0x20
}

+ (id)defaultClasses;	// IMP=0x000000000000484d
- (void).cxx_destruct;	// IMP=0x0000000000005aa1
@property(copy, nonatomic) NSData *unitTestData; // @synthesize unitTestData=_unitTestData;
@property(retain, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(nonatomic) _Bool createDirectories; // @synthesize createDirectories=_createDirectories;
@property(nonatomic) _Bool backedUp; // @synthesize backedUp=_backedUp;
@property(nonatomic) long long dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
- (unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1;	// IMP=0x0000000000005a11
- (id)saveObject:(id)arg1;	// IMP=0x00000000000052e0
- (_Bool)saveDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000005296
- (_Bool)saveArray:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000524c
- (id)saveDictionary:(id)arg1;	// IMP=0x000000000000523a
- (id)saveArray:(id)arg1;	// IMP=0x0000000000005228
- (id)underlyingDataWithError:(id *)arg1;	// IMP=0x0000000000004f7e
- (id)readDataOfClasses:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004e72
- (id)readArrayAndClasses:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004c32
- (id)readDictionaryAndClasses:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000049f2
- (void)injectUnitTestData:(id)arg1;	// IMP=0x000000000000483b
- (id)initWithFileURL:(id)arg1;	// IMP=0x000000000000473a

@end
