//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDateInterval;
@protocol BMStream;

@interface BMStreamQuery : NSObject
{
    id <BMStream> _stream;	// 8 = 0x8
    NSDateInterval *_interval;	// 16 = 0x10
    long long _origin;	// 24 = 0x18
}

+ (id)publisherForStream:(id)arg1 interval:(id)arg2;	// IMP=0x00000000000ba395
+ (id)publisherForStream:(id)arg1 interval:(id)arg2 origin:(long long)arg3;	// IMP=0x00000000000ba31a
- (void).cxx_destruct;	// IMP=0x00000000000ba422
@property(readonly, nonatomic) long long origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) NSDateInterval *interval; // @synthesize interval=_interval;
@property(readonly, nonatomic) id <BMStream> stream; // @synthesize stream=_stream;
- (id)initWithStream:(id)arg1 interval:(id)arg2 origin:(long long)arg3;	// IMP=0x00000000000ba275
- (id)init;	// IMP=0x00000000000ba26f

@end

