//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASSqliteDatabase;

@interface _PASSqlReadTransaction : NSObject
{
    _PASSqliteDatabase *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003e22d
@property(readonly, nonatomic) _PASSqliteDatabase *db; // @synthesize db=_db;
- (id)init;	// IMP=0x000000000003e21d
- (id)initWithHandle:(id)arg1;	// IMP=0x000000000003e137

@end

