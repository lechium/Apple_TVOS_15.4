//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AXMCoreMotionNode
{
    unsigned long long _samplesPerSecond;	// 8 = 0x8
    double _lastSampleTime;	// 16 = 0x10
}

+ (id)title;	// IMP=0x000000000006abe9
+ (_Bool)isSupported;	// IMP=0x000000000006abe1
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006aa95
@property(nonatomic) double lastSampleTime; // @synthesize lastSampleTime=_lastSampleTime;
@property(nonatomic) unsigned long long samplesPerSecond; // @synthesize samplesPerSecond=_samplesPerSecond;
- (void)nodeInitialize;	// IMP=0x000000000006abf6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006ab3f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006aa9d
- (id)initWithIdentifier:(id)arg1;	// IMP=0x000000000006aa49

@end

