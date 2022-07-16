//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol PQLBindable;

@interface _CPLPrequeliteHasSomethingTodoNow : NSObject
{
    id <PQLBindable> _now;	// 8 = 0x8
    NSData *_sql;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000065327
@property(readonly, nonatomic) NSData *sql; // @synthesize sql=_sql;
- (id)bindValuesToKeepAlive;	// IMP=0x001000000006530f
- (int)bindWithStatement:(struct sqlite3_stmt *)arg1 startingAtIndex:(int)arg2;	// IMP=0x00100000000652bc
- (id)initWithSQL:(id)arg1 now:(id)arg2;	// IMP=0x0010000000065223

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
