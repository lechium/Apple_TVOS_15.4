//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKXWriterProtocol-Protocol.h>

@class CKXORCWriterOptions;
@protocol CKXORCHelpers;

@interface CKXORCWriter <CKXWriterProtocol>
{
    struct unique_ptr<orc::Writer, std::default_delete<orc::Writer>> _writer;	// 8 = 0x8
    struct unique_ptr<orc::OutputStream, std::default_delete<orc::OutputStream>> _outputStream;	// 16 = 0x10
    struct unique_ptr<orc::ColumnVectorBatch, std::default_delete<orc::ColumnVectorBatch>> _currentBatch;	// 24 = 0x18
    struct set<CKXStructInstance, std::less<CKXStructInstance>, std::allocator<CKXStructInstance>> _uncommittedStructs;	// 32 = 0x20
    id <CKXORCHelpers> _helpers;	// 56 = 0x38
    CKXORCWriterOptions *_options;	// 64 = 0x40
    unsigned long long _rootStructToken;	// 72 = 0x48
    unsigned long long _startingRowForCurrentBatch;	// 80 = 0x50
}

- (id).cxx_construct;	// IMP=0x00000000000f3d45
- (void).cxx_destruct;	// IMP=0x00000000000f3ca2
@property(nonatomic) unsigned long long startingRowForCurrentBatch; // @synthesize startingRowForCurrentBatch=_startingRowForCurrentBatch;
@property(nonatomic) unsigned long long rootStructToken; // @synthesize rootStructToken=_rootStructToken;
@property(readonly, nonatomic) CKXORCWriterOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <CKXORCHelpers> helpers; // @synthesize helpers=_helpers;
- (void *)valueColumnForField:(unsigned long long)arg1;	// IMP=0x00000000000f3b09
- (void *)listColumnForReference:(unsigned long long)arg1;	// IMP=0x00000000000f39bc
- (void *)structReferenceColumnForReference:(unsigned long long)arg1;	// IMP=0x00000000000f386f
- (void *)structColumnForStruct:(unsigned long long)arg1;	// IMP=0x00000000000f37cd
- (id)flush;	// IMP=0x00000000000f3603
- (void)commitStruct:(CDStruct_08de4b04)arg1;	// IMP=0x00000000000f348a
- (void)setData:(void *)arg1 withLength:(unsigned long long)arg2 forList:(CDStruct_2d6ed345)arg3;	// IMP=0x00000000000f306a
- (void)setData:(void *)arg1 withEncoding:(const char *)arg2 forField:(unsigned long long)arg3 inStruct:(CDStruct_08de4b04)arg4;	// IMP=0x00000000000f2e0e
- (CDStruct_08de4b04)beginAppendedListStructInList:(CDStruct_2d6ed345)arg1;	// IMP=0x00000000000f2cea
- (void)_appendData:(void *)arg1 withValueSize:(unsigned long long)arg2 length:(unsigned long long)arg3 toRow:(unsigned long long)arg4 toList:(unsigned long long)arg5;	// IMP=0x00000000000f2a6f
- (CDStruct_2d6ed345)beginReferencedListForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;	// IMP=0x00000000000f2983
- (CDStruct_08de4b04)beginReferencedStructForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;	// IMP=0x00000000000f280f
- (CDStruct_08de4b04)beginRootStructWithType:(unsigned long long)arg1;	// IMP=0x00000000000f2739
- (void *)rootColumn;	// IMP=0x00000000000f270b
- (void)enumerateAllColumnsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000f26d9
- (CDStruct_08de4b04)appendRowForStruct:(unsigned long long)arg1;	// IMP=0x00000000000f221c
- (void)expandColumn:(void *)arg1 includingRow:(unsigned long long)arg2;	// IMP=0x00000000000f21d9
- (void)expandColumn:(void *)arg1 includingBatchOffset:(unsigned long long)arg2;	// IMP=0x00000000000f216a
- (unsigned long long)offsetInCurrentBatchForRow:(unsigned long long)arg1;	// IMP=0x00000000000f207c
- (_Bool)growCurrentBatchToIncludeRow:(unsigned long long)arg1;	// IMP=0x00000000000f201e
- (_Bool)growCurrentBatchToIncludeBatchOffset:(unsigned long long)arg1;	// IMP=0x00000000000f1c41
- (void)commitBatchIfNeeded;	// IMP=0x00000000000f1b46
- (void)commitBatch;	// IMP=0x00000000000f182e
- (void)updateNumberOfElementsForCurrentBatch;	// IMP=0x00000000000f1748
- (void)createWriter;	// IMP=0x00000000000f121a
- (void)resetColumnNulls:(void *)arg1 inRange:(struct _NSRange)arg2;	// IMP=0x00000000000f11e2
- (id)initWithSchema:(id)arg1 helpers:(id)arg2 options:(id)arg3;	// IMP=0x00000000000f1034
- (id)initWithSchema:(id)arg1;	// IMP=0x00000000000f0fa5

@end

