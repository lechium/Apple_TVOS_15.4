//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, PHPhotoLibrary;

@interface VCPFaceProcessingVersionManager : NSObject
{
    PHPhotoLibrary *_photoLibrary;	// 8 = 0x8
    NSDictionary *_versionState;	// 16 = 0x10
}

+ (id)resetLevelDescription:(long long)arg1;	// IMP=0x000000000007fa72
+ (id)sharedManagerForPhotoLibrary:(id)arg1;	// IMP=0x000000000007ef0b
- (void).cxx_destruct;	// IMP=0x000000000007fa9d
- (int)migrateFaceProcessingToVersion:(int)arg1;	// IMP=0x000000000007f86f
- (int)resetAnalysisDataWithResetLevel:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000007f5f6
- (int)_updateCurrentProcessingVersion:(int)arg1;	// IMP=0x000000000007f36d
- (int)currentProcessingVersion;	// IMP=0x000000000007f2bf
- (int)defaultProcessingVersion;	// IMP=0x000000000007f2b0
- (_Bool)_updateVersionStateFileWithError:(id *)arg1;	// IMP=0x000000000007f17e
- (id)_versionStateURL;	// IMP=0x000000000007f0da
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x000000000007ede9

@end

