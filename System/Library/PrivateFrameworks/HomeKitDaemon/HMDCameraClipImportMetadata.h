//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate;

@interface HMDCameraClipImportMetadata : NSObject
{
    NSDate *_startDate;	// 8 = 0x8
    double _targetFragmentDuration;	// 16 = 0x10
    NSArray *_videoSegments;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000092918c
@property(readonly) NSArray *videoSegments; // @synthesize videoSegments=_videoSegments;
@property(readonly) double targetFragmentDuration; // @synthesize targetFragmentDuration=_targetFragmentDuration;
@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)initClipData:(id)arg1;	// IMP=0x0000000000928d11

@end

