//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMIVideoRetimerDelegate-Protocol.h>

@class NSString;

@interface HMIVideoRetimerDelegateAdapter : HMFObject <HMIVideoRetimerDelegate>
{
    CDUnknownBlockType _retimerDidRetimeSampleBuffer;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000429bf
@property(copy) CDUnknownBlockType retimerDidRetimeSampleBuffer; // @synthesize retimerDidRetimeSampleBuffer=_retimerDidRetimeSampleBuffer;
- (void)retimer:(id)arg1 didRetimeSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;	// IMP=0x0000000000042909

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

