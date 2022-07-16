//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSKVStore, NSString;

@interface IMDReplayStorageController : NSObject
{
    NSString *_filePath;	// 8 = 0x8
    IDSKVStore *_store;	// 16 = 0x10
}

@property(retain, nonatomic) IDSKVStore *store; // @synthesize store=_store;
@property(readonly, retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void)dealloc;	// IMP=0x00000000000c3928
- (void)deleteReplayDB;	// IMP=0x00000000000c38be
- (id)copyNextBatchWithSize:(unsigned long long)arg1 iterationContext:(id *)arg2;	// IMP=0x00000000000c363d
- (_Bool)storeDictionary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c3599
- (id)initWithFilePath:(id)arg1;	// IMP=0x00000000000c34fe

@end

