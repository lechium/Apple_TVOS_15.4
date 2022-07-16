//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface HAPTLVBase
{
    NSData *_tlvDatablob;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000ea3d9
@property(readonly, nonatomic) NSData *tlvDatablob; // @synthesize tlvDatablob=_tlvDatablob;
- (id)_parseArray:(id)arg1 result:(id *)arg2 objectCreator:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ea1d0
- (_Bool)_parse:(id)arg1;	// IMP=0x00000000000ea1be
- (_Bool)_parseMandatory:(id)arg1 optional:(id)arg2;	// IMP=0x00000000000ea15a
- (_Bool)_parseFields:(id)arg1;	// IMP=0x00000000000e91dc
- (_Bool)_parseFromTLVData;	// IMP=0x00000000000e91d4
- (id)initWithTLVData:(id)arg1;	// IMP=0x00000000000e9133

@end

