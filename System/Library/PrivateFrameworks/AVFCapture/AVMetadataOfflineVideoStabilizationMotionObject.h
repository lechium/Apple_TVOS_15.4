//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFCapture/NSCopying-Protocol.h>

@class AVMetadataOfflineVideoStabilizationMotionObjectInternal, NSDictionary;

@interface AVMetadataOfflineVideoStabilizationMotionObject <NSCopying>
{
    AVMetadataOfflineVideoStabilizationMotionObjectInternal *_offlineVISMotionObjectInternal;	// 16 = 0x10
}

+ (id)offlineVideoStabilizationMotionObjectWithTime:(CDStruct_1b6d18a9)arg1 motionDictionary:(id)arg2 input:(id)arg3;	// IMP=0x000000000008cea8
@property(readonly) NSDictionary *payload;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008cfe4
- (id)description;	// IMP=0x000000000008cf3f
- (void)dealloc;	// IMP=0x000000000008cefd
- (id)initWithTime:(CDStruct_1b6d18a9)arg1 motionDictionary:(id)arg2 input:(id)arg3;	// IMP=0x000000000008cdbe

@end

