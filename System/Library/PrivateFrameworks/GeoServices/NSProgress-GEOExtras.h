//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSProgress.h>

@interface NSProgress (GEOExtras)
+ (id)_geo_mirroredProgressFromReportingXPCEndpoint:(id)arg1 totalUnitCount:(long long)arg2;	// IMP=0x0000000000c0d00a
+ (id)_geo_mirroredProgressForReceivingOverXPC:(id *)arg1;	// IMP=0x0000000000c0cfd4
+ (id)_geo_mirroredProgressFromReceivingXPCEndpoint:(id)arg1;	// IMP=0x0000000000c0cf87
+ (id)_geo_newReportingXPCEndpointMirroringProgress:(id)arg1;	// IMP=0x0000000000c0cf0c
+ (id)_geo_progressMirroringProgress:(id)arg1;	// IMP=0x0000000000c0cebf
- (void)_geo_mirroredProgressReplaceObservedProgressWith:(id)arg1;	// IMP=0x0000000000c0d09e
@end

