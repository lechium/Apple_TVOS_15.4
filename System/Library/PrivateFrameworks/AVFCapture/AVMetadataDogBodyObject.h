//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCapture/NSCopying-Protocol.h>

@interface AVMetadataDogBodyObject <NSCopying>
{
}

+ (id)dogBodyObjectWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000895aa
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;	// IMP=0x00000000000897d2
- (id)description;	// IMP=0x00000000000896cc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000896c1
- (id)initWithBodyID:(long long)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4 optionalInfoDict:(id)arg5 originalMetadataObject:(id)arg6 sourceCaptureInput:(id)arg7;	// IMP=0x0000000000089645
- (id)initWithBodyID:(long long)arg1 time:(CDStruct_1b6d18a9)arg2 duration:(CDStruct_1b6d18a9)arg3 bounds:(struct CGRect)arg4;	// IMP=0x000000000008962b
- (id)initWithFigEmbeddedCaptureDeviceObjectDictionary:(id)arg1 input:(id)arg2 timeStamp:(id)arg3;	// IMP=0x00000000000895f5

@end

