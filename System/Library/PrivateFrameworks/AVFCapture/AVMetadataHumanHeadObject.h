//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCapture/NSCopying-Protocol.h>

@interface AVMetadataHumanHeadObject <NSCopying>
{
}

+ (id)humanHeadObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3;	// IMP=0x000000000008a3f4
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;	// IMP=0x000000000008a694
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008a689
- (id)description;	// IMP=0x000000000008a599
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3 type:(id)arg4;	// IMP=0x000000000008a446

@end

