//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CSFLPCMTypeConverter : NSObject
{
}

+ (void)applyNegative12dBGainToFloatBuffer:(id)arg1;	// IMP=0x000000000002119b
+ (void)applyNegative12dBGainToShortBuffer:(id)arg1;	// IMP=0x0000000000021181
+ (void)apply12dBGainToFloatBuffer:(id)arg1;	// IMP=0x0000000000021167
+ (void)apply12dBGainToShortBuffer:(id)arg1;	// IMP=0x000000000002114d
+ (void)applyGain:(float)arg1 toFloatBuffer:(id)arg2;	// IMP=0x0000000000021035
+ (void)applyGain:(float)arg1 toShortBuffer:(id)arg2;	// IMP=0x0000000000020e57
+ (id)convertToShortLPCMBufFromFloatLPCMBuf:(id)arg1;	// IMP=0x0000000000020c93
+ (id)convertToFloatLPCMBufFromShortLPCMBuf:(id)arg1;	// IMP=0x0000000000020b12

@end

