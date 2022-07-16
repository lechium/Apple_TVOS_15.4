//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AVFileProcessor : NSObject
{
    float _percentComplete;	// 8 = 0x8
    CDUnknownBlockType _progressBlock;	// 16 = 0x10
}

+ (id)fileProcessor;	// IMP=0x0000000000002967
- (id)sinfInfoFromFilePath:(id)arg1;	// IMP=0x0000000000002c82
- (id)sinfsFromFilePath:(id)arg1;	// IMP=0x0000000000002c57
- (id)rentalInfo:(id)arg1;	// IMP=0x0000000000002b38
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000002a00
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3;	// IMP=0x00000000000029eb
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000029d3
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2;	// IMP=0x00000000000029bb
- (void)dealloc;	// IMP=0x0000000000002980

@end
