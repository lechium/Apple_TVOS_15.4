//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSSRecapPath : NSObject
{
    _Bool _finished;	// 8 = 0x8
    struct CGPath *_path;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    unsigned long long _endTimestamp;	// 32 = 0x20
}

@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) unsigned long long endTimestamp; // @synthesize endTimestamp=_endTimestamp;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;

@end
