//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLVolumeInfo : NSObject
{
    NSString *_mountPoint;	// 8 = 0x8
    unsigned long long _blockSize;	// 16 = 0x10
    unsigned long long _desiredDiskThreshold;	// 24 = 0x18
    unsigned long long _nearLowDiskThreshold;	// 32 = 0x20
    unsigned long long _lowDiskThreshold;	// 40 = 0x28
    unsigned long long _veryLowDiskThreshold;	// 48 = 0x30
    unsigned long long _volumeSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000009e31a
@property(readonly, nonatomic) unsigned long long volumeSize; // @synthesize volumeSize=_volumeSize;
@property(readonly, nonatomic) unsigned long long veryLowDiskThreshold;
@property(readonly, nonatomic) unsigned long long lowDiskThreshold;
@property(readonly, nonatomic) unsigned long long nearLowDiskThreshold;
@property(readonly, nonatomic) unsigned long long desiredDiskThreshold;
@property(readonly, nonatomic) long long availableSpace;
- (id)initWithMountPoint:(id)arg1;	// IMP=0x000000000009e137
- (id)initWithPath:(id)arg1;	// IMP=0x000000000009e0dd

@end

