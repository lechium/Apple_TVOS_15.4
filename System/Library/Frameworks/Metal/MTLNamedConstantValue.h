//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLNamedConstantValue : NSObject
{
    NSString *_name;	// 8 = 0x8
    unsigned long long _dataType;	// 16 = 0x10
    char *_data;	// 24 = 0x18
}

@property(readonly) void *data; // @synthesize data=_data;
@property(readonly) unsigned long long dataType; // @synthesize dataType=_dataType;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000024269
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000002410b
- (id)describe;	// IMP=0x000000000002409f
- (void)dealloc;	// IMP=0x0000000000024047
- (id)initWithValue:(const void *)arg1 type:(unsigned long long)arg2 name:(id)arg3;	// IMP=0x0000000000023fc0

@end

