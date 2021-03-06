//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSUUID;

@interface HCIndexTable : NSObject
{
    struct vector<unsigned long long, std::allocator<unsigned long long>> _mutableHuffmanCodes;	// 8 = 0x8
    NSData *_huffmanCodesMemoryMappedData;	// 32 = 0x20
    NSUUID *_versionUUID;	// 40 = 0x28
    struct HCIndexTableFileHeader *_fileHeader;	// 48 = 0x30
}

+ (id)indexTableFromFile:(id)arg1;	// IMP=0x000000000018c8b6
- (id).cxx_construct;	// IMP=0x000000000018c89e
- (void).cxx_destruct;	// IMP=0x000000000018c860
@property(readonly, nonatomic) NSData *huffmanCodesMemoryMappedData; // @synthesize huffmanCodesMemoryMappedData=_huffmanCodesMemoryMappedData;
@property(readonly, nonatomic) const unsigned long long *huffmanCodes;
@property(readonly) NSUUID *versionUUID;
@property(readonly, nonatomic) const struct HCIndexTableFileHeader *fileHeader;
- (_Bool)writeToFile:(id)arg1;	// IMP=0x000000000018c3db
- (id)codeAtIndex:(unsigned long long)arg1;	// IMP=0x000000000018c36f
@property(readonly, nonatomic) unsigned long long count;
@property(readonly, nonatomic) _Bool isValid;
- (id)initWithHuffmanCodesMemoryMappedData:(id)arg1;	// IMP=0x000000000018c21c
- (id)init;	// IMP=0x000000000018c1a7

@end

