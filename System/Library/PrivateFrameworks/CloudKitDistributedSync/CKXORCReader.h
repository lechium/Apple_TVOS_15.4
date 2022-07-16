//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDistributedSync/CKXReaderProtocol-Protocol.h>

@class CKXORCReaderOptions;
@protocol CKXORCHelpers;

@interface CKXORCReader <CKXReaderProtocol>
{
    struct unique_ptr<orc::Reader, std::default_delete<orc::Reader>> _reader;	// 8 = 0x8
    struct unordered_map<unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, std::pair<std::unique_ptr<orc::RowReader>, std::unique_ptr<orc::ColumnVectorBatch>>>>> _structToReaderBatchPair;	// 16 = 0x10
    struct unordered_map<unsigned long, NSIndexSet *, std::hash<unsigned long>, std::equal_to<unsigned long>, std::allocator<std::pair<const unsigned long, NSIndexSet *>>> _rowsForTopLevelContainerStructs;	// 56 = 0x38
    id <CKXORCHelpers> _helpers;	// 96 = 0x60
    CKXORCReaderOptions *_options;	// 104 = 0x68
}

- (id).cxx_construct;	// IMP=0x00000000000f0e4d
- (void).cxx_destruct;	// IMP=0x00000000000f0dac
@property(readonly, nonatomic) CKXORCReaderOptions *options; // @synthesize options=_options;
@property(readonly, nonatomic) id <CKXORCHelpers> helpers; // @synthesize helpers=_helpers;
- (void *)valueColumnForField:(unsigned long long)arg1;	// IMP=0x00000000000f0cb4
- (void *)listColumnForReference:(unsigned long long)arg1;	// IMP=0x00000000000f0bb8
- (void *)structReferenceColumnForReference:(unsigned long long)arg1;	// IMP=0x00000000000f0abc
- (void *)structColumnForStruct:(unsigned long long)arg1;	// IMP=0x00000000000f0a85
- (void)copyData:(void *)arg1 forList:(CDStruct_2d6ed345)arg2;	// IMP=0x00000000000f0577
- (void)copyData:(void *)arg1 forField:(unsigned long long)arg2 inStruct:(CDStruct_08de4b04)arg3;	// IMP=0x00000000000f03d3
- (CDStruct_08de4b04)referencedStructAtIndex:(long long)arg1 inList:(CDStruct_2d6ed345)arg2;	// IMP=0x00000000000f00f4
- (long long)lengthForList:(CDStruct_2d6ed345)arg1;	// IMP=0x00000000000efea7
- (CDStruct_2d6ed345)referencedListForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;	// IMP=0x00000000000efd97
- (_Bool)referenceIsNull:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;	// IMP=0x00000000000efc02
- (CDStruct_08de4b04)referencedStructForReference:(unsigned long long)arg1 inStruct:(CDStruct_08de4b04)arg2;	// IMP=0x00000000000efaff
- (CDStruct_08de4b04)rootStructWithType:(unsigned long long)arg1;	// IMP=0x00000000000efa3e
- (_Bool)setData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ef8a9
- (void *)rootColumnForStruct:(unsigned long long)arg1;	// IMP=0x00000000000ef7c0
- (id)rowsForStructColumn:(unsigned long long)arg1;	// IMP=0x00000000000eeedd
- (unsigned long long)offsetInCurrentBatchForRow:(unsigned long long)arg1 forStruct:(unsigned long long)arg2;	// IMP=0x00000000000eedb9
- (_Bool)loadBatchWithRow:(unsigned long long)arg1 forStruct:(unsigned long long)arg2;	// IMP=0x00000000000eeb77
- (void)createRowReaderForStruct:(unsigned long long)arg1;	// IMP=0x00000000000ee1ec
- (_Bool)createReaderIfNecessaryWithError:(id *)arg1;	// IMP=0x00000000000ede01
- (id)initWithSchema:(id)arg1 helpers:(id)arg2 options:(id)arg3;	// IMP=0x00000000000edc62
- (id)initWithSchema:(id)arg1;	// IMP=0x00000000000edbd3

@end

