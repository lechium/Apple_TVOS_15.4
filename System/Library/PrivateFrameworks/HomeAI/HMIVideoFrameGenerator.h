//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMIVideoAssetReader;

@interface HMIVideoFrameGenerator : HMFObject
{
    HMIVideoAssetReader *_reader;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000061942
@property(readonly) HMIVideoAssetReader *reader; // @synthesize reader=_reader;
- (void)generateVideoFramesForTimes:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000615fe
- (id)initWithVideoFragment:(id)arg1;	// IMP=0x0000000000061514

@end

