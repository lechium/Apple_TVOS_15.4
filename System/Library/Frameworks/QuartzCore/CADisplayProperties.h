//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CADisplayMode, NSString;

@interface CADisplayProperties : NSObject
{
    CADisplayMode *_currentMode;	// 8 = 0x8
    NSString *_overscanAdjustment;	// 16 = 0x10
    unsigned int _connectionSeed;	// 24 = 0x18
}

@property(nonatomic) unsigned int connectionSeed;
@property(copy, nonatomic) NSString *overscanAdjustment;
@property(retain, nonatomic) CADisplayMode *currentMode;
- (void)dealloc;	// IMP=0x00000000000158cc

@end

