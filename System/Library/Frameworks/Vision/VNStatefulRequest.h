//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

@interface VNStatefulRequest
{
}

+ (Class)configurationClass;	// IMP=0x00000000001ab00d
@property(readonly) NSUUID *requestUUID;
@property(readonly) CDStruct_1b6d18a9 requestFrameAnalysisSpacing;
@property(readonly) long long minimumLatencyFrameCount;
@property(readonly) CDStruct_1b6d18a9 frameAnalysisSpacing;
- (id)initWithFrameAnalysisSpacing:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001aaea0
- (id)description;	// IMP=0x00000000001aadd2
- (id)newDefaultRequestInstance;	// IMP=0x00000000001aad3e

@end

