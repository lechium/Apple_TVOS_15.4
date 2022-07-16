//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMCFileAccessRepairTool, NSDictionary, NSError, NSString;

@interface DMCDictionaryWriter : NSObject
{
    DMCFileAccessRepairTool *_repairTool;	// 8 = 0x8
    NSDictionary *_dictionary;	// 16 = 0x10
    NSString *_path;	// 24 = 0x18
    NSError *_serializeError;	// 32 = 0x20
    NSError *_writeError;	// 40 = 0x28
    NSError *_beforeWriteRepairError;	// 48 = 0x30
    NSError *_afterWriteRepairError;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000139c6
@property(retain, nonatomic) DMCFileAccessRepairTool *repairTool; // @synthesize repairTool=_repairTool;
@property(copy, nonatomic) NSError *afterWriteRepairError; // @synthesize afterWriteRepairError=_afterWriteRepairError;
@property(copy, nonatomic) NSError *beforeWriteRepairError; // @synthesize beforeWriteRepairError=_beforeWriteRepairError;
@property(copy, nonatomic) NSError *writeError; // @synthesize writeError=_writeError;
@property(copy, nonatomic) NSError *serializeError; // @synthesize serializeError=_serializeError;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (_Bool)repairAccessIfNecessaryWithError:(id *)arg1;	// IMP=0x0000000000013816
- (_Bool)writeData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013755
- (void)serializeDataAndWriteToStorage;	// IMP=0x000000000001360e
- (void)logResultOfWrite;	// IMP=0x000000000001310a
- (void)logStartOfWrite;	// IMP=0x0000000000013005
- (_Bool)didWriteSucceed;	// IMP=0x0000000000012f6a
- (_Bool)write;	// IMP=0x0000000000012f15
- (id)serializedData;	// IMP=0x0000000000012e62
- (id)createRepairTool;	// IMP=0x0000000000012e49
- (void)reset;	// IMP=0x0000000000012db3
- (id)initWithDictionary:(id)arg1 path:(id)arg2;	// IMP=0x0000000000012ce4

@end
