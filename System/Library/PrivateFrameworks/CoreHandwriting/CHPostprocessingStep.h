//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CHPostprocessingStep : NSObject
{
}

+ (void)expandPathsWithCorrectedTokens:(id)arg1 fromTokens:(id)arg2 correctedTokenPath:(id)arg3 originalTokenPath:(id)arg4;	// IMP=0x000000000016e660
+ (id)applyTransform:(CDUnknownBlockType)arg1 toAllTokens:(id)arg2;	// IMP=0x000000000016e090
- (id)process:(id)arg1 options:(id)arg2;	// IMP=0x000000000016e070
- (id)process:(id)arg1;	// IMP=0x000000000016e040

@end
