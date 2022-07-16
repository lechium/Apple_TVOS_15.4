//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface HMDStructuredWriter
{
    NSError *_error;	// 8 = 0x8
}

+ (id)extendedTypeWriterWithWriter:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000020c77f
+ (id)writerIntoOPACKData:(id)arg1;	// IMP=0x00000000003587fe
+ (id)writerIntoObject:(id *)arg1 extendedTypeOptions:(unsigned long long)arg2;	// IMP=0x0000000000399c0e
+ (id)writerIntoObject:(id *)arg1;	// IMP=0x0000000000399be0
- (void).cxx_destruct;	// IMP=0x000000000086d1d0
- (void)writeToken:(struct _HMDStructuredDataToken)arg1;	// IMP=0x000000000086cf74
- (void)writeUUID:(id)arg1;	// IMP=0x000000000086cf21
- (void)writeDate:(id)arg1;	// IMP=0x000000000086cece
- (void)writeData:(id)arg1;	// IMP=0x000000000086ce7b
- (void)writeNumber:(id)arg1;	// IMP=0x000000000086ce28
- (void)writeString:(id)arg1;	// IMP=0x000000000086cdd5
- (void)writeBoolean:(_Bool)arg1;	// IMP=0x000000000086cd7e
- (void)writeNull;	// IMP=0x000000000086cd5e
- (void)endDictionary;	// IMP=0x000000000086cd3e
- (void)writeDictionaryKey:(id)arg1;	// IMP=0x000000000086cceb
- (void)beginDictionaryOfSize:(unsigned long long)arg1;	// IMP=0x000000000086cc89
- (void)endArray;	// IMP=0x000000000086cc69
- (void)beginArrayOfSize:(unsigned long long)arg1;	// IMP=0x000000000086cc07
- (void)failWithError:(id)arg1;	// IMP=0x000000000086cb8f
- (id)error;	// IMP=0x000000000086cb7a
- (void)writeLogicalValue:(id)arg1;	// IMP=0x0000000000399734

@end

