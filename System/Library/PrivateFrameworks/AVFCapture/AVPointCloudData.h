//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AVPointCloudData : NSObject
{
    struct __CVBuffer *_dataBuffer;	// 8 = 0x8
    long long _projectorMode;	// 16 = 0x10
}

+ (void)initialize;	// IMP=0x000000000000f514
- (id)initWithDataBuffer:(struct __CVBuffer *)arg1;	// IMP=0x000000000000f6cf
@property(readonly) long long projectorMode;
@property(readonly) struct __CVBuffer *pointCloudDataBuffer;
@property(readonly) const char *bankIdentifiers;
@property(readonly) const char *spotIdentifiers;
@property(readonly) const MISSING_TYPE **pointsAndConfidenceScores;
@property(readonly) const float *confidenceScores;
@property(readonly) const MISSING_TYPE **points;
@property(readonly) long long pointCount;
@property(readonly) unsigned int pointCloudFormatType;
- (id)jasperPointCloud;	// IMP=0x000000000000f66c
- (void)dealloc;	// IMP=0x000000000000f62d
- (id)description;	// IMP=0x000000000000f5ca
- (id)debugDescription;	// IMP=0x000000000000f525

@end

