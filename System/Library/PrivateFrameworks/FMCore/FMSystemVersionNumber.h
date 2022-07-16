//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMSystemVersionNumber : NSObject
{
    long long _baseNumber;	// 8 = 0x8
    NSString *_baseLetter;	// 16 = 0x10
    long long _buildNumber;	// 24 = 0x18
    NSString *_suffix;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000bd40
@property(copy, nonatomic) NSString *suffix; // @synthesize suffix=_suffix;
@property(nonatomic) long long buildNumber; // @synthesize buildNumber=_buildNumber;
@property(copy, nonatomic) NSString *baseLetter; // @synthesize baseLetter=_baseLetter;
@property(nonatomic) long long baseNumber; // @synthesize baseNumber=_baseNumber;
- (long long)compare:(id)arg1;	// IMP=0x000000000000bb1f
- (id)description;	// IMP=0x000000000000ba0b
- (id)debugDescription;	// IMP=0x000000000000b9cb
- (id)initWithString:(id)arg1;	// IMP=0x000000000000b818
- (id)init;	// IMP=0x000000000000b7c9

@end

