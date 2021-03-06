//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CIRenderInfo : NSObject
{
    void *_priv;	// 8 = 0x8
}

+ (id)renderInfoWithCompletedTask:(id)arg1;	// IMP=0x00000000001486e5
- (double)timeForNodeID:(unsigned long long)arg1;	// IMP=0x00000000001488a9
- (id)description;	// IMP=0x00000000001487b8
- (long long)pixelsOverdrawn;	// IMP=0x00000000001487a7
@property(readonly) long long pixelsProcessed;
@property(readonly) long long passCount;
- (long long)kernelExecutionCycles;	// IMP=0x0000000000148774
@property(readonly) double kernelExecutionTime;
- (void)dealloc;	// IMP=0x000000000014871b
- (id)initWithCompletedTask:(id)arg1;	// IMP=0x000000000014867d
- (id)init;	// IMP=0x0000000000148640
- (id)_pdfDataRepresentation;	// IMP=0x0000000000149c90

@end

