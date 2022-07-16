//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AMSDataMigratorOptions : NSObject
{
    NSString *_currentBuildVersion;	// 8 = 0x8
    NSString *_previousBuildVersion;	// 16 = 0x10
    unsigned long long _scenario;	// 24 = 0x18
}

+ (id)_stringFromOptionsArray:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000ec172
- (void).cxx_destruct;	// IMP=0x00000000000ec27c
@property(nonatomic) unsigned long long scenario; // @synthesize scenario=_scenario;
@property(copy, nonatomic) NSString *previousBuildVersion; // @synthesize previousBuildVersion=_previousBuildVersion;
@property(copy, nonatomic) NSString *currentBuildVersion; // @synthesize currentBuildVersion=_currentBuildVersion;
@property(readonly, nonatomic) NSArray *optionsArray;
- (id)initWithOptionsArray:(id)arg1;	// IMP=0x00000000000ebf37
- (id)init;	// IMP=0x00000000000ebf23

@end
