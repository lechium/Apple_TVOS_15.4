//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface MPCSceneCollection : NSObject
{
    NSString *_version;	// 8 = 0x8
    double _frameRate;	// 16 = 0x10
    NSArray *_scenes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000a9969
@property(copy, nonatomic) NSArray *scenes; // @synthesize scenes=_scenes;
@property(nonatomic) double frameRate; // @synthesize frameRate=_frameRate;
@property(copy, nonatomic) NSString *version; // @synthesize version=_version;

@end

