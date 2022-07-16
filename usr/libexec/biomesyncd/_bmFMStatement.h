//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _bmFMStatement : NSObject
{
    void *_statement;	// 8 = 0x8
    NSString *_query;	// 16 = 0x10
    long long _useCount;	// 24 = 0x18
    _Bool _inUse;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000029273
@property _Bool inUse; // @synthesize inUse=_inUse;
@property void *statement; // @synthesize statement=_statement;
@property(retain) NSString *query; // @synthesize query=_query;
@property long long useCount; // @synthesize useCount=_useCount;
- (id)description;	// IMP=0x001000000002918a
- (void)reset;	// IMP=0x0010000000029168
- (void)close;	// IMP=0x001000000002913e
- (void)dealloc;	// IMP=0x0010000000029100

@end

