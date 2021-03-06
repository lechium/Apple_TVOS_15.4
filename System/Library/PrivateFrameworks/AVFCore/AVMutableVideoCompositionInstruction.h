//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVMutableVideoCompositionInstructionInternal, NSArray;

@interface AVMutableVideoCompositionInstruction
{
    AVMutableVideoCompositionInstructionInternal *_mutableInstruction;	// 16 = 0x10
}

+ (id)videoCompositionInstruction;	// IMP=0x00000000000ac46a
@property(copy, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property(nonatomic) _Bool enablePostProcessing;
@property(copy, nonatomic) NSArray *layerInstructions;
@property(retain, nonatomic) struct CGColor *backgroundColor;
@property(nonatomic) CDStruct_e83c9415 timeRange;

@end

