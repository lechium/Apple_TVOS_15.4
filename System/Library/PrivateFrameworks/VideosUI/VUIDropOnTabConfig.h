//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIDropOnTabConfig : NSObject
{
    unsigned long long _dropOnTabIndex;	// 8 = 0x8
    NSNumber *_daysWithoutOpeningThreshold;	// 16 = 0x10
    NSNumber *_daysWithoutPlaybackThreshold;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000010fc0b
@property(retain, nonatomic) NSNumber *daysWithoutPlaybackThreshold; // @synthesize daysWithoutPlaybackThreshold=_daysWithoutPlaybackThreshold;
@property(retain, nonatomic) NSNumber *daysWithoutOpeningThreshold; // @synthesize daysWithoutOpeningThreshold=_daysWithoutOpeningThreshold;
@property(nonatomic) unsigned long long dropOnTabIndex; // @synthesize dropOnTabIndex=_dropOnTabIndex;
- (id)init;	// IMP=0x000000000010fad0

@end

