//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SplashBoard/NSSecureCoding-Protocol.h>

@class NSString;

@interface XBLaunchCaptureInformation : NSObject <NSSecureCoding>
{
    unsigned long long _estimatedMemoryImpact;	// 8 = 0x8
    NSString *_caarFilePath;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001a0a
- (void).cxx_destruct;	// IMP=0x0000000000001b51
@property(copy, nonatomic) NSString *caarFilePath; // @synthesize caarFilePath=_caarFilePath;
@property(nonatomic) unsigned long long estimatedMemoryImpact; // @synthesize estimatedMemoryImpact=_estimatedMemoryImpact;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001a84
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001a12
- (id)init;	// IMP=0x00000000000019b4

@end

