//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMTimeZone : NSObject
{
    NSString *_source;	// 8 = 0x8
    NSString *_olsonName;	// 16 = 0x10
}

+ (id)timeZoneWithOlsonName:(id)arg1 fromSource:(id)arg2;	// IMP=0x0000000000005d08
@property(copy) NSString *olsonName; // @synthesize olsonName=_olsonName;
@property(copy) NSString *source; // @synthesize source=_source;
- (id)description;	// IMP=0x0000000000005d8b
- (_Bool)hasSameOlsonNameAs:(id)arg1;	// IMP=0x0000000000005d43
- (id)initWithOlsonName:(id)arg1 fromSource:(id)arg2;	// IMP=0x0000000000005caf
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000005c2c
- (void)dealloc;	// IMP=0x0000000000005be2

@end

