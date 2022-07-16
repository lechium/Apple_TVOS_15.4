//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class CPLResetTracker;

@interface CPLChangeSessionContext : NSObject <NSSecureCoding>
{
    unsigned long long _estimatedInitialSizeForLocalLibrary;	// 8 = 0x8
    unsigned long long _estimatedInitialAssetCountForLocalLibrary;	// 16 = 0x10
    CPLResetTracker *_resetTracker;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000138ef3
- (void).cxx_destruct;	// IMP=0x0000000000138ee3
@property(retain, nonatomic) CPLResetTracker *resetTracker; // @synthesize resetTracker=_resetTracker;
@property(nonatomic) unsigned long long estimatedInitialAssetCountForLocalLibrary; // @synthesize estimatedInitialAssetCountForLocalLibrary=_estimatedInitialAssetCountForLocalLibrary;
@property(nonatomic) unsigned long long estimatedInitialSizeForLocalLibrary; // @synthesize estimatedInitialSizeForLocalLibrary=_estimatedInitialSizeForLocalLibrary;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000138dd4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000138d49

@end

