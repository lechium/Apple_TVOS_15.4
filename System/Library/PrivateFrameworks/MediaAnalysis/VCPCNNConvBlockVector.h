//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCPCNNConvBlockVector
{
    CDUnknownFunctionPointerType CalculateDotProductOfChunk;	// 112 = 0x70
}

+ (_Bool)isFilterSizeSupported:(int)arg1;	// IMP=0x000000000001860e
- (int)forward;	// IMP=0x0000000000019c67
- (int)chunkFourForward;	// IMP=0x00000000000191ac
- (int)straightForwardForChunkFour;	// IMP=0x0000000000018be9
- (int)readFromDisk:(struct __sFILE *)arg1 quantFactor:(short)arg2;	// IMP=0x0000000000018706
- (id)initWithParameters:(int)arg1 filterNum:(int)arg2 chunk:(int)arg3 reLU:(_Bool)arg4 padding:(_Bool)arg5 groups:(int)arg6 stride:(int)arg7 batchNorm:(_Bool)arg8;	// IMP=0x000000000001861c

@end

